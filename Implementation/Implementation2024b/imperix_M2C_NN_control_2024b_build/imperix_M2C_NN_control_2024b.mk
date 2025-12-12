# Copyright 2022 imperix ltd



MAKECMD         = gmake
HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = imperix_ACG_SDK.tlc
RM              = del /F
NEW_LINE        = cmd /C echo.

IX_ACG_ROOT_DIR = $(IX_SIMULINK_ACG_BB_3)
ACG_VERSION     = $(shell more $(IX_ACG_ROOT_DIR)\version.txt) 
PROJ_NAME       = imperix_M2C_NN_control_2024b
PATH_MAT        = C:\Users\matix\OneDrive\ESCRIT~1\TESISP~1\PROYEC~1\PROYEC~1\IMPLEM~1\IMPLEM~1
MATLAB_ROOT     = C:\PROGRA~1\MATLAB\R2025a
COMPUTER        = PCWIN64
TOOLS_PATH      = $(IX_ACG_ROOT_DIR)\toolchain
COMPILER        = $(TOOLS_PATH)\gcc-arm-none-eabi\bin\arm-none-eabi-g++.exe
C_COMPILER      = $(TOOLS_PATH)\gcc-arm-none-eabi\bin\arm-none-eabi-gcc.exe
LIBRARY_PATH    = $(TOOLS_PATH)\lib
INCLUDES_PATH   = $(TOOLS_PATH)\includes
SPECS_FILE      = $(TOOLS_PATH)\linker\Xilinx.spec
LINKER_FILE     = $(TOOLS_PATH)\linker\lscript.ld

OTHER_UNUSED        = -DMODEL=imperix_M2C_NN_control_2024b -DNUMST=3 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0

INCLUDES = \
-I"$(PATH_MAT)/$(PROJ_NAME)_build/" \
-I"$(INCLUDES_PATH)" \
-I"$(MATLAB_ROOT)/simulink/include" \
-I"$(MATLAB_ROOT)/extern/include" \

LIBS := -lbbos -Wl,--start-group,-lxil,-lgcc,-lc,-lstdc++,-lbbos,--end-group

LD_SRCS += \
$(LINKER_FILE)

OBJS = $(patsubst %.c,%.o,$(wildcard *.c)) \
	$(patsubst %.cpp,%.o,$(wildcard *.cpp)) \
	$(notdir $(patsubst %.cpp,%.o,$(wildcard ../*_wrapper.cpp)))

CFLAGS = -O2 -g3 $(INCLUDES) $(DEFINES) -c -fmessage-length=0 -MT"$@" -mcpu=cortex-a9 -mfpu=neon -mfloat-abi=hard -ffunction-sections -fdata-sections -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)"

%.o: %.cpp
	@echo Building file: $<
	$(COMPILER) $(CFLAGS) -o "$@" "$<"
	@echo Finished building: $<
	@-$(NEW_LINE)

%.o: %.c
	@echo Building file: $<
	$(COMPILER) $(CFLAGS) -o "$@" "$<"
	@echo Finished building: $<
	@-$(NEW_LINE)

%.o: ..\%.cpp
	@echo Building file: $<
	$(COMPILER) $(CFLAGS) -o "$@" "$<"
	@echo Finished building: $<
	@-$(NEW_LINE)

%.o : $(IX_ACG_ROOT_DIR)\simulink\src\%.c
	@echo Building file: $<
	$(C_COMPILER) $(CFLAGS) -o "$@" "$<"
	@echo Finished building: $<
	@-$(NEW_LINE)

%.o : $(MATLAB_ROOT)\rtw\c\src\%.c
	@echo Building file: $<
	$(C_COMPILER) $(CFLAGS) -o "$@" "$<"
	@echo Finished building: $<
	@-$(NEW_LINE)

%.o : $(MATLAB_ROOT)\simulink\src\%.c
	@echo Building file: $<
	$(C_COMPILER) $(CFLAGS) -o "$@" "$<"
	@echo Finished building: $<
	@-$(NEW_LINE)

%.o : $(MATLAB_ROOT)\toolbox\coder\rtiostream\src\utils\%.c
	@echo Building file: $<
	$(C_COMPILER) $(CFLAGS) -o "$@" "$<"
	@echo Finished building: $<
	@-$(NEW_LINE)

# All Target
all: info clean $(PROJ_NAME).elf download

# Tool invocations
$(PROJ_NAME).elf: $(OBJS) $(LD_SRCS)
	@echo Building target: $@
	@echo Invoking: ARM v7 g++ linker
	$(COMPILER) -L"$(LIBRARY_PATH)" -mcpu=cortex-a9 -mfpu=neon -mfloat-abi=hard -Wl,-build-id=none  -Wl,--gc-sections -specs=$(SPECS_FILE) -Wl,-T -Wl,$(LINKER_FILE) -L"$(LIBRARY_PATH)" -o "$(PROJ_NAME).elf" $(OBJS) $(LIBS) 
	@echo ### Created: $@
	@echo Finished building target: $@
	@-$(NEW_LINE)

info:
	@-$(NEW_LINE)
	@echo -- imperix Simulink ACG version $(ACG_VERSION) --
	@echo SDK installation directory: $(IX_ACG_ROOT_DIR)
	@echo Project directory: $(PATH_MAT)
	@echo Project name: $(PROJ_NAME)
	@-$(NEW_LINE)

download :
	@echo Invoking Cockpit to launch code...
	@cmd /C start $(IX_ACG_ROOT_DIR)\cockpit\IxCockpit.exe "$(PATH_MAT)\$(PROJ_NAME)_build\$(PROJ_NAME).elf"
	@echo Done
	@-$(NEW_LINE)

clean:
	@echo Cleaning files...
	@-$(RM) "$(PATH_MAT)\$(PROJ_NAME)_build\*.elf"
	@-$(RM) "$(PATH_MAT)\$(PROJ_NAME)_build\*.o"
	@-$(RM) "$(PATH_MAT)\$(PROJ_NAME)_build\*.d"
	@echo Finished cleaning
	@-$(NEW_LINE)
