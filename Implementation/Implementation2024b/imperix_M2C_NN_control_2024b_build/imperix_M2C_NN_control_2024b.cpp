//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_M2C_NN_control_2024b.cpp
//
// Code generated for Simulink model 'imperix_M2C_NN_control_2024b'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.10
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Tue Oct 21 15:31:07 2025
//
#include "imperix_M2C_NN_control_2024b.h"
#include "rtwtypes.h"
#include "imperix_M2C_NN_control_2024b_types.h"
#include "imperix_M2C_NN_control_2024b_private.h"
#include <cstring>
#include <cmath>
#include "cmath"
#include "rt_defines.h"

int16_T* ix_raw_adc_ptr_6_0;
int16_T* ix_raw_adc_ptr_7_0;
int16_T* ix_raw_adc_ptr_0_1;
int16_T* ix_raw_adc_ptr_1_1;
int16_T* ix_raw_adc_ptr_2_1;
int16_T* ix_raw_adc_ptr_3_1;
int16_T* ix_raw_adc_ptr_0_0;
int16_T* ix_raw_adc_ptr_1_0;
int16_T* ix_raw_adc_ptr_2_0;
int16_T* ix_raw_adc_ptr_3_0;
int16_T* ix_raw_adc_ptr_4_0;
int16_T* ix_raw_adc_ptr_5_0;
int16_T* ix_raw_adc_ptr_4_1;
real32_T flux_ref;                     // Tunable parameter
int32_T flux_control;                  // Tunable parameter
int32_T speed_control;                 // Tunable parameter
real32_T v0_ref;                       // Probe
real32_T icr_zref;                     // Probe
real32_T ias_zref;                     // Probe
real32_T ibs_zref;                     // Probe
real32_T ics_zref;                     // Probe
real32_T imd_r;                        // Probe
real32_T input_control;                // Tunable parameter
real32_T iP_ref;                       // Probe
real32_T imq_r;                        // Probe
real32_T imd;                          // Probe
real32_T imq;                          // Probe
real32_T flux;                         // Probe
real32_T iar;                          // Probe
real32_T vd_ref;                       // Probe
real32_T vq_ref;                       // Probe
real32_T vy_ref;                       // Probe
real32_T igd;                          // Probe
real32_T p_m;                          // Probe
real32_T izkpi;                        // Probe
real32_T isqr;                         // Probe
real32_T isdr;                         // Probe
real32_T enable_cc;                    // Tunable parameter
real32_T ie_lambda;                    // Tunable parameter
real32_T vr_ar;                        // Probe
real32_T vma;                          // Probe
real32_T vmb;                          // Probe
real32_T vmc;                          // Probe
real32_T vr_br;                        // Probe
real32_T vr_cr;                        // Probe
real32_T vr_as;                        // Probe
real32_T theta_m;                      // Probe
real32_T ws;                           // Probe
real32_T vr_bs;                        // Probe
real32_T isq;                          // Probe
real32_T isd;                          // Probe
real32_T ima;                          // Probe
real32_T imb;                          // Probe
real32_T imc;                          // Probe
real32_T ia0_ref;                      // Probe
real32_T ib0_ref;                      // Probe
real32_T vr_cs;                        // Probe
real32_T imd_ref;                      // Probe
real32_T Vc_ar;                        // Probe
real32_T idc;                          // Probe
real32_T vckpi;                        // Probe
real32_T Vc_br;                        // Probe
real32_T Vc_cr;                        // Probe
real32_T Vc_as;                        // Probe
real32_T ibr;                          // Probe
real32_T Vc_bs;                        // Probe
real32_T Vc_cs;                        // Probe
real32_T w;                            // Probe
real32_T icr;                          // Probe
real32_T ias;                          // Probe
real32_T ibs;                          // Probe
real32_T ics;                          // Probe
real32_T iar_zref;                     // Probe
real32_T ibr_zref;                     // Probe
unsigned char __attribute__ ((section ("devicescount"))) __attribute__((used))
  ____DEVICES_COUNT = (2U+1);
real32_T w_ref;                        // Tunable parameter
int16_T* ix_raw_adc_ptr_0_2;
real32_T vdc;                          // Probe
real32_T imq_ref;                      // Probe

// Block signals (default storage)
B_imperix_M2C_NN_control_2024_T imperix_M2C_NN_control_2024b_B;

// Block states (default storage)
DW_imperix_M2C_NN_control_202_T imperix_M2C_NN_control_2024b_DW;

// Real-time model
RT_MODEL_imperix_M2C_NN_contr_T imperix_M2C_NN_control_2024b_M_{ };

RT_MODEL_imperix_M2C_NN_contr_T *const imperix_M2C_NN_control_2024b_M{ &
  imperix_M2C_NN_control_2024b_M_ };

// Forward declaration for local functions
static void imperix_M2C_NN_SystemCore_setup(dsp_simulink_MovingRMS_imperi_T *obj);

// Forward declaration for local functions
static void imperix_M2C_NN_control__predict(const real32_T inputsT_0_f1[14],
  real32_T outputs_0_f1[3]);
static void imperix_M2C_NN_control_trisolve(const real_T A[4], real_T B[4]);
static real_T imperix_M2C_NN_control_202_norm(const real_T x[2]);
static real_T imperix_M2C_NN_control_20_xnrm2(int32_T n, const real_T x[4],
  int32_T ix0);
static void imperix_M2C_NN_control_20_xgemv(int32_T m, int32_T n, const real_T
  A[4], int32_T ia0, const real_T x[4], int32_T ix0, real_T y[2]);
static void imperix_M2C_NN_control_20_xgerc(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[2], real_T A[4], int32_T ia0);
static real_T imperix_M2C_NN_contr_KWIKfactor(const real_T Ac[8], const int32_T
  iC[4], int32_T nA, const real_T Linv[4], real_T RLinv[4], real_T D[4], real_T
  H[4], int32_T n);
static void imperix_M2C_NN_c_DropConstraint(int32_T kDrop, boolean_T iA[4],
  int32_T *nA, int32_T iC[4]);
static void imperix_M2C_NN_control_2_qpkwik(const real_T Linv[4], const real_T
  Hinv[4], const real_T f[2], const real_T Ac[8], const real_T b[4], boolean_T
  iA[4], int32_T maxiter, real_T FeasTol, real_T x[2], real_T lambda[4], int32_T
  *status);
int32_T div_s32_floor(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  if (denominator == 0) {
    quotient = numerator >= 0 ? MAX_int32_T : MIN_int32_T;

    // Divide by zero handler
  } else {
    uint32_T absDenominator;
    uint32_T absNumerator;
    uint32_T tempAbsQuotient;
    boolean_T quotientNeedsNegation;
    absNumerator = numerator < 0 ? ~static_cast<uint32_T>(numerator) + 1U :
      static_cast<uint32_T>(numerator);
    absDenominator = denominator < 0 ? ~static_cast<uint32_T>(denominator) + 1U :
      static_cast<uint32_T>(denominator);
    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }
    }

    quotient = quotientNeedsNegation ? -/*MW:OvOk*/ (static_cast<int32_T>
      (tempAbsQuotient)) : static_cast<int32_T>(tempAbsQuotient);
  }

  return quotient;
}

int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator)
{
  return (((numerator < 0) != (denominator < 0)) && (numerator % denominator !=
           0) ? -1 : 0) + numerator / denominator;
}

static void imperix_M2C_NN_SystemCore_setup(dsp_simulink_MovingRMS_imperi_T *obj)
{
  obj->isInitialized = 1;

  // Start for MATLABSystem: '<S1>/Moving RMS1'
  obj->NumChannels = 1;
  obj->FrameLength = 6;
  obj->pCumSum = 0.0;
  std::memset(&obj->pCumSumRev[0], 0, 39U * sizeof(real_T));
  obj->pCumRevIndex = 1.0;
  obj->pModValueRev = 0.0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

// System initialize for atomic system:
void imperix_M2C_MovingRMS1_Init(DW_MovingRMS1_imperix_M2C_NN__T *localDW)
{
  // InitializeConditions for MATLABSystem: '<S1>/Moving RMS1'
  localDW->obj.pCumSum = 0.0;
  std::memset(&localDW->obj.pCumSumRev[0], 0, 39U * sizeof(real_T));
  localDW->obj.pCumRevIndex = 1.0;
  localDW->obj.pModValueRev = 0.0;
}

// Start for atomic system:
void imperix_M2_MovingRMS1_Start(DW_MovingRMS1_imperix_M2C_NN__T *localDW)
{
  // Start for MATLABSystem: '<S1>/Moving RMS1'
  localDW->obj.isInitialized = 0;
  localDW->obj.NumChannels = -1;
  localDW->obj.FrameLength = -1;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  imperix_M2C_NN_SystemCore_setup(&localDW->obj);
}

// Output and update for atomic system:
void imperix_M2C_NN_c_MovingRMS1(const real_T rtu_0[6],
  B_MovingRMS1_imperix_M2C_NN_c_T *localB, DW_MovingRMS1_imperix_M2C_NN__T
  *localDW)
{
  real_T y[6];
  real_T csum;
  real_T cumRevIndex;
  real_T modValueRev;
  real_T y_0;
  real_T z;
  int32_T modIndex;

  // MATLABSystem: '<S1>/Moving RMS1'
  if (localDW->obj.TunablePropsChanged) {
    localDW->obj.TunablePropsChanged = false;
  }

  cumRevIndex = localDW->obj.pCumRevIndex;
  csum = localDW->obj.pCumSum;
  modValueRev = localDW->obj.pModValueRev;
  modIndex = 1;
  z = 0.0;
  for (int32_T b_k{0}; b_k < 6; b_k++) {
    y_0 = std::abs(rtu_0[b_k]);
    y[b_k] = y_0 * y_0;
    localB->MovingRMS1[b_k] = 0.0;
  }

  for (int32_T b_k{0}; b_k < 6; b_k++) {
    y_0 = y[b_k];
    csum += y_0;
    if (modValueRev == 0.0) {
      z = localDW->obj.pCumSumRev[static_cast<int32_T>(cumRevIndex) - 1] + csum;
    }

    localDW->obj.pCumSumRev[static_cast<int32_T>(cumRevIndex) - 1] = y_0;
    if (cumRevIndex != 39.0) {
      cumRevIndex++;
    } else {
      cumRevIndex = 1.0;
      csum = 0.0;
      for (int32_T k{37}; k >= 0; k--) {
        localDW->obj.pCumSumRev[k] += localDW->obj.pCumSumRev[k + 1];
      }
    }

    if (modValueRev == 0.0) {
      localB->MovingRMS1[modIndex - 1] = z / 40.0;
      if (modIndex <= 2147483646) {
        modIndex++;
      }
    }

    if (modValueRev > 0.0) {
      modValueRev--;
    } else {
      modValueRev = 0.0;
    }
  }

  localDW->obj.pCumSum = csum;
  localDW->obj.pCumRevIndex = cumRevIndex;
  localDW->obj.pModValueRev = modValueRev;
  for (int32_T b_k{0}; b_k < 6; b_k++) {
    localB->MovingRMS1[b_k] = std::sqrt(localB->MovingRMS1[b_k]);
  }

  // End of MATLABSystem: '<S1>/Moving RMS1'
}

// Termination for atomic system:
void imperix_M2C_MovingRMS1_Term(DW_MovingRMS1_imperix_M2C_NN__T *localDW)
{
  // Terminate for MATLABSystem: '<S1>/Moving RMS1'
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      localDW->obj.NumChannels = -1;
      localDW->obj.FrameLength = -1;
    }
  }

  // End of Terminate for MATLABSystem: '<S1>/Moving RMS1'
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (std::isnan(u0) || std::isnan(u1)) {
    y = (rtNaN);
  } else if (std::isinf(u0) && std::isinf(u1)) {
    int32_T tmp;
    int32_T tmp_0;
    if (u0 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u1 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = std::atan2(static_cast<real_T>(tmp), static_cast<real_T>(tmp_0));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = std::atan2(u0, u1);
  }

  return y;
}

void microKernel12234298825249083535(int32_T K, const real32_T *A, int32_T LDA,
  const real32_T *B, real32_T *C)
{
  int32_T idxA;
  int32_T idxB;
  real32_T c;
  idxA = 0;
  idxB = 0;
  c = C[0];
  for (int32_T k{0}; k < K; k++) {
    c += A[idxA] * B[idxB];
    idxA += LDA;
    idxB++;
  }

  C[0] = c;
}

void microKernel16256063908817381782(int32_T K, const real32_T *A, int32_T LDA,
  const real32_T *B, real32_T *C)
{
  int32_T idxA;
  int32_T idxB;
  real32_T c;
  real32_T c_0;
  real32_T c_1;
  real32_T c_2;
  real32_T c_3;
  real32_T c_4;
  real32_T c_5;
  idxA = 1;
  idxB = 0;
  c = C[0];
  c_0 = C[1];
  c_1 = C[2];
  c_2 = C[3];
  c_3 = C[4];
  c_4 = C[5];
  c_5 = C[6];
  for (int32_T k{0}; k < K; k++) {
    real32_T bTemp;
    bTemp = B[idxB];
    c += A[idxA - 1] * bTemp;
    c_0 += A[idxA] * bTemp;
    c_1 += A[idxA + 1] * bTemp;
    c_2 += A[idxA + 2] * bTemp;
    c_3 += A[idxA + 3] * bTemp;
    c_4 += A[idxA + 4] * bTemp;
    c_5 += A[idxA + 5] * bTemp;
    idxA += LDA;
    idxB++;
  }

  C[0] = c;
  C[1] = c_0;
  C[2] = c_1;
  C[3] = c_2;
  C[4] = c_3;
  C[5] = c_4;
  C[6] = c_5;
}

void macroKernel16943049303738605558(int32_T M, int32_T K, int32_T N, const
  real32_T *A, int32_T LDA, const real32_T *B, int32_T LDB, real32_T *C, int32_T
  LDC)
{
  int32_T i;
  int32_T idxA;
  int32_T idxB;
  int32_T idxC;
  int32_T j;
  j = 0;
  idxB = 0;
  while (j < N) {
    idxC = LDC * j;
    i = 0;
    idxA = 0;
    while (i <= M - 7) {
      microKernel16256063908817381782(K, &A[idxA], LDA, &B[idxB], &C[idxC]);
      idxA += 7;
      idxC += 7;
      i += 7;
    }

    while (i <= M - 1) {
      microKernel12234298825249083535(K, &A[idxA], LDA, &B[idxB], &C[idxC]);
      idxA++;
      idxC++;
      i++;
    }

    idxB += LDB;
    j++;
  }
}

void matrixMultiply16943049303738605558(int32_T M, int32_T K, int32_T N, int32_T
  blockSizeM, int32_T blockSizeK, int32_T blockSizeN, const real32_T *A, const
  real32_T *B, real32_T *C)
{
  int32_T K2;
  int32_T N2;
  int32_T i;
  int32_T i0;
  int32_T i0_ub;
  int32_T j1;
  int32_T k;
  int32_T k0;
  int32_T k0_ub;
  int32_T tmp;
  std::memset(C, 0, static_cast<uint32_T>((M * N) << 2));
  if (blockSizeM >= M) {
    blockSizeM = M;
  } else {
    blockSizeM = div_nde_s32_floor(blockSizeM, 7) * 7;
    if (blockSizeM <= 0) {
      blockSizeM = 1;
    }
  }

  if (blockSizeN >= N) {
    blockSizeN = N;
  } else if (blockSizeN <= 0) {
    blockSizeN = 1;
  }

  i0_ub = div_s32_floor(M - 1, blockSizeM);
  k0_ub = div_s32_floor(K - 1, blockSizeK);
  for (j1 = 0; j1 < N; j1 += blockSizeN) {
    if (j1 > N - blockSizeN) {
      N2 = N - j1;
    } else {
      N2 = blockSizeN;
    }

    for (k0 = 1; k0 <= k0_ub + 1; k0++) {
      k = (k0 - 1) * blockSizeK;
      if (k > K - blockSizeK) {
        K2 = K - k;
      } else {
        K2 = blockSizeK;
      }

      for (i0 = 1; i0 <= i0_ub + 1; i0++) {
        i = (i0 - 1) * blockSizeM;
        if (i > M - blockSizeM) {
          tmp = M - i;
        } else {
          tmp = blockSizeM;
        }

        macroKernel16943049303738605558(tmp, K2, N2, &A[i + M * k], M, &B[k + K *
          j1], K, &C[i + M * j1], M);
      }
    }
  }
}

// Function for MATLAB Function: '<S147>/MLFB'
static void imperix_M2C_NN_control__predict(const real32_T inputsT_0_f1[14],
  real32_T outputs_0_f1[3])
{
  int32_T channelIdx;
  real32_T X[70];
  static const real32_T tmp[980]{ 0.0278302394F, -0.0948274F, -1.29790604F,
    1.65783083F, 1.22570312F, -1.61473083F, -0.595653057F, -1.43593228F,
    -0.576022089F, -1.29083908F, -1.02837348F, 0.314324856F, -0.567900956F,
    0.200947165F, 1.09777868F, -0.824888587F, 1.1114347F, 1.15608013F,
    -0.588613749F, -1.63857293F, 0.474733502F, -1.24733126F, -1.17129254F,
    -0.532529593F, 0.279023111F, 1.42022407F, 0.42700842F, 1.00319088F,
    -0.153887883F, 0.74166882F, -0.277743757F, -0.0926212817F, -1.72242212F,
    0.00608363142F, -1.59257519F, -0.0323230587F, -1.3018353F, -0.360631734F,
    1.74296904F, -2.3921926F, -0.336575598F, 1.7954936F, 2.19068646F,
    1.20886707F, -1.29902017F, -0.632765174F, 1.89798105F, 0.278139949F,
    0.108762793F, 0.104614995F, 1.03239357F, -1.5743053F, -0.961196244F,
    -1.33862841F, -2.18513346F, -0.162139982F, -0.692765176F, -1.23754501F,
    -0.383713603F, -3.22891641F, 1.55191827F, -1.00562465F, 0.64238447F,
    2.50253296F, 1.00448477F, 0.420390844F, 2.16691589F, -0.186502174F,
    -1.42301166F, 0.236836061F, -0.131843761F, -0.206794009F, 0.256191015F,
    -0.187973604F, 0.0552563816F, -0.350938678F, -0.166641012F, -0.444365263F,
    0.223532617F, 0.140826434F, -0.213891953F, 0.165984362F, -0.0182496104F,
    0.0112211863F, 0.253333449F, 0.0193113331F, 0.786557317F, 0.299346477F,
    -0.200840846F, 0.0561664253F, -0.347902954F, 0.0225006212F, -0.105282575F,
    0.0781513825F, 0.29223F, -0.526879549F, 0.0448516198F, -0.00899600424F,
    -0.599559426F, -0.145520896F, 0.0845701173F, 0.0244203638F, 0.270657152F,
    0.164149716F, -0.217589468F, -0.092738077F, -0.849262536F, 0.528446496F,
    0.661316276F, 0.606790304F, 0.164150834F, -0.108552821F, -0.796886444F,
    -0.00661680428F, -0.428214818F, 0.262225658F, -0.110431604F, 0.328781217F,
    -0.392498463F, 0.0328238F, 0.184077F, 0.229628161F, -0.328561F, 0.362860858F,
    -0.117195681F, -0.319229215F, -0.818254709F, 0.495634794F, -0.254687637F,
    0.292783231F, 0.0289219804F, 0.204598159F, -0.251707762F, -0.399475694F,
    -0.0440310761F, -0.496512026F, 0.434371442F, 0.0135018453F, 0.0967725366F,
    0.165938541F, 0.24568966F, -0.0723945871F, 0.0354469419F, -0.261437863F,
    0.439961553F, -0.547053218F, -0.0452024452F, -0.384931117F, 0.0799811482F,
    -0.0149533572F, 0.0361078419F, -0.228829712F, 0.252883703F, 0.73387605F,
    -0.159362659F, -0.195920035F, -0.695304751F, 0.276945651F, -0.129071474F,
    0.0941316932F, 0.170731589F, -0.0174902305F, 0.0820651576F, 0.110332966F,
    -0.294632643F, -0.119928211F, 0.529518723F, -0.180772F, 0.708671629F,
    -0.973935544F, -0.330041528F, 0.127477929F, 0.255752951F, 0.241192162F,
    -0.346227139F, -0.0610575415F, 0.0575300306F, 0.0954419449F, -0.112150431F,
    -0.263504803F, -0.678780437F, -0.298064262F, 0.106809847F, -0.0781716704F,
    -0.109737031F, -0.339679211F, 0.705647528F, 0.404634118F, -0.0565979332F,
    -0.649354F, 0.0250430703F, -0.0178276077F, -0.322259218F, 0.161939725F,
    0.00882317871F, 0.0198018625F, 0.0783872F, -0.00970731769F, 0.206945822F,
    0.593420863F, -0.119325332F, 0.0638067499F, 0.226627514F, -0.0362151861F,
    -0.0471657328F, 0.529429078F, 0.462732077F, 1.12126505F, -0.0901156217F,
    -0.211807147F, 0.0348199345F, 0.385609925F, 0.23909077F, -0.209440917F,
    0.0842985883F, -0.27476421F, 0.0322815813F, -0.401019871F, -0.0847399309F,
    -0.0761513934F, -0.196385235F, 0.252875537F, -0.0762297511F, -0.680253088F,
    0.532632709F, -0.0558882616F, -0.187094718F, -0.92630738F, 0.053158883F,
    -0.42096743F, 0.280367881F, 0.0887042582F, -0.452159047F, 0.248166174F,
    -0.229589075F, -0.505714595F, 0.107098095F, -0.176750928F, 0.00310113514F,
    -0.0087162815F, -0.282908469F, -0.228328392F, 0.0866264924F, -0.353033841F,
    0.346611708F, 0.429790556F, -0.0379185937F, -0.0757251754F, -0.0816828907F,
    0.284568727F, 0.0629443526F, 0.516243756F, -0.0853671059F, -0.420679867F,
    -0.0333160721F, 0.0864521787F, -0.0249946658F, 0.482691467F, 0.174882486F,
    0.583429694F, -0.478348434F, -0.47407037F, 0.285701483F, 0.159179658F,
    0.924381F, -0.187719747F, 0.371534497F, -0.0964866355F, 0.0881810337F,
    0.180277094F, 0.230700895F, 0.118995912F, -0.192881122F, -0.315078288F,
    0.75275147F, 0.394321978F, 0.414709568F, -0.276692957F, 0.199436337F,
    -0.313671082F, 0.202066779F, 0.192108512F, 0.00858011842F, -0.10202121F,
    -0.180944785F, 0.323704064F, 0.195104688F, 0.20592691F, 0.143543184F,
    -0.335273236F, 0.124342151F, 0.017804902F, -0.0342762731F, -0.125588506F,
    0.181493312F, -0.264074773F, 0.356712669F, 0.273931026F, -0.221520275F,
    0.094208613F, 0.0204066169F, -0.0716934055F, -0.276546866F, -0.824365735F,
    -0.0899052918F, -0.108568661F, 0.0859608799F, 0.903147697F, -0.366768271F,
    0.0654572174F, -0.0241123307F, 0.215289116F, 0.000182783435F, -0.0905777365F,
    0.350865275F, -0.174452081F, 0.642536879F, -0.00772391306F, -0.552903414F,
    -0.338960528F, -0.0289386846F, -0.209914297F, 0.8300879F, 0.339830071F,
    0.127073348F, -0.25026378F, -0.0792212F, -0.45621255F, 0.111491188F,
    0.147939399F, -0.224769443F, 0.312238485F, -0.194399357F, 0.565656185F,
    -0.156655863F, -0.587454259F, -0.0991769F, -0.68629986F, -0.067788966F,
    -0.311320931F, 0.266624212F, 0.0784639716F, 0.0431495F, 0.501641452F,
    -0.210195199F, -0.406353056F, -0.328396201F, 0.025721211F, 0.0621644184F,
    0.932788432F, -0.542925417F, 0.0158233829F, 0.0431057066F, 0.556089699F,
    -0.166815028F, 0.0707897469F, -0.210779727F, 0.30396229F, 0.567912519F,
    -0.154126227F, -0.465310186F, 0.183072641F, 0.0755686909F, 0.753461182F,
    -0.433587283F, 0.114009604F, -0.101732515F, 0.277918547F, -0.420187235F,
    0.00327857863F, -0.472211F, -0.0897977054F, 0.249595508F, 0.105623811F,
    0.14605099F, -0.113651462F, -0.127369687F, -0.177315831F, 0.134402588F,
    0.117932752F, -0.151099682F, -0.0561059639F, -0.221145764F, -0.653681278F,
    -0.0953450799F, 0.490912646F, 0.0416405499F, -0.0854715481F, -0.0293891151F,
    -0.365225196F, 0.51430285F, -0.0486743189F, 0.111365877F, 0.113449067F,
    0.140074521F, 0.156348541F, -0.421760231F, -0.130595714F, 0.128797144F,
    -0.586560905F, -0.173870385F, -0.104023851F, 0.163542122F, -1.16477692F,
    -0.666633844F, 1.11520731F, 0.0488152F, -0.0285233893F, -0.0421063378F,
    -0.128457144F, 0.20032382F, 0.255565673F, -0.137777612F, 0.462936789F,
    -0.426900178F, 0.239826486F, -0.152159631F, -0.363902867F, -0.329354614F,
    -0.132951126F, 0.153301373F, -0.240097165F, -0.809197664F, -0.106599763F,
    0.362429082F, 0.33852604F, -0.361028701F, 0.196641117F, -0.811025F,
    0.313041955F, 0.0183750018F, -0.0742747635F, 0.528214F, -0.499821812F,
    -0.275802702F, 0.299760073F, -0.0556383245F, 0.0469249263F, 0.810244739F,
    -0.153905436F, 0.0157323368F, -0.477483094F, 0.140862823F, 0.240385532F,
    0.0061088861F, 0.544945538F, -0.104070768F, -0.353060871F, 0.0381555483F,
    0.193286389F, 0.327028811F, -0.55368942F, 0.0455964915F, 0.105881862F,
    0.089415133F, -0.151793122F, 0.0247952454F, 0.0551390052F, -0.0398465022F,
    -0.411537081F, 0.0175834559F, 0.125052869F, 0.0951718688F, -0.102147311F,
    -0.0608365163F, -0.0719377473F, -0.200984612F, -0.470359325F, -0.376514912F,
    0.522455394F, 0.0633437335F, 0.532456F, -0.180150077F, 0.0635710657F,
    -0.179200754F, 0.0683716461F, 0.136663288F, -0.0361673273F, -0.287308902F,
    -0.224909648F, -0.321412086F, -0.0524101555F, 0.100701518F, 0.372086853F,
    -0.271432787F, 0.28023082F, -0.329172492F, -0.301933616F, 0.0601622649F,
    -0.304050028F, 0.0196151417F, 0.703526139F, 0.611416042F, 0.0505252033F,
    0.263009548F, 0.038573F, 0.370533019F, 0.0270258784F, -0.74626112F,
    -0.582876146F, -0.0636292696F, 0.03893831F, 0.196009621F, -0.27944231F,
    0.0442035422F, -0.290492982F, 0.901560068F, 0.629368722F, 0.708116F,
    0.965041339F, -0.356937736F, 0.563135326F, -0.437208295F, 0.907636881F,
    -0.267666131F, -0.362292886F, 0.299483448F, -0.898920715F, -0.683614F,
    -0.224359199F, -0.394436598F, -0.536558628F, -0.2110558F, 0.173080906F,
    0.230422437F, 0.303029954F, 0.401367813F, 0.432304174F, -0.487998396F,
    0.0401286818F, 0.040890649F, -0.739807665F, 0.31301719F, -0.0440933257F,
    0.359237462F, -0.0416972227F, 0.0976117402F, 0.216200739F, 0.67382288F,
    0.178699061F, -0.676469F, -0.654971242F, 0.515384197F, -0.485311091F,
    -0.353644818F, 0.361361533F, -0.875963F, -0.366818666F, 0.265605032F,
    -0.0141387125F, 0.628966868F, -0.154744178F, -0.151405856F, 0.0371131524F,
    0.213847607F, -0.589238286F, -0.0294638667F, 0.404708624F, 0.12523146F,
    -0.528259158F, 0.568216741F, 0.243338943F, 0.80264F, 0.439412236F,
    -0.504251063F, 0.238533422F, -0.00215523806F, 0.00494008046F, -0.842306852F,
    -0.536719799F, -0.442963868F, 0.45868814F, -0.619324327F, -0.513364434F,
    0.644756496F, 0.0449174F, -0.304013103F, 0.680528104F, 0.859787524F,
    0.79661721F, -0.283687979F, 0.584372878F, -0.16521199F, 0.203265697F,
    -0.0935335904F, -0.617958963F, -0.203391418F, 0.0405101255F, 0.503765225F,
    -0.413401097F, -0.141257271F, -0.558860898F, -0.457288831F, -0.7183218F,
    -0.794426F, 0.424549609F, -0.169706717F, -0.146500647F, 0.0722201616F,
    -0.29689461F, 0.421079278F, -0.857016206F, 0.169424742F, -0.38332808F,
    0.371416301F, 0.169777021F, -0.368257374F, 0.134123355F, -0.112153418F,
    0.404645711F, -0.458064348F, -0.541157901F, 0.641525149F, 0.517013907F,
    -0.467674166F, -0.706532F, -0.199156553F, 0.0622720793F, 0.109638982F,
    0.191592947F, 0.761016488F, 0.543076396F, -0.412291557F, 0.157311216F,
    0.0197715797F, 0.0189839713F, -0.016685484F, 0.528157115F, 0.493280739F,
    -0.0585070141F, 0.892614305F, 0.311279595F, 0.576112568F, 0.337283552F,
    -1.14367986F, -0.206978649F, 0.900910199F, 0.29813543F, 0.0347743668F,
    -0.225508988F, -0.459460795F, 0.80028677F, -0.731295288F, 0.180456534F,
    -0.312012225F, 0.973457873F, 0.127798855F, 0.0149906101F, 0.0682860315F,
    -0.760907114F, -1.03649437F, -0.443561733F, 0.311893344F, 0.14583315F,
    -1.02391934F, 0.505457222F, 0.337068111F, -0.224819854F, -0.123291112F,
    0.0275886599F, -0.410959393F, 0.601756871F, -0.632548F, 0.934457541F,
    -0.528263628F, -0.6427F, 0.565462649F, 0.182217747F, 0.615178227F,
    -0.0594081879F, -0.492313087F, -0.352222711F, -0.569007754F, -0.811163127F,
    -0.715320766F, -0.126683637F, -0.322939694F, -0.160677209F, 0.152664676F,
    -0.104139522F, 0.419168562F, -0.327484906F, 1.0474118F, -0.00864927378F,
    0.317744613F, 0.153583974F, 0.192710847F, -0.549675167F, -0.763767719F,
    -0.0569971129F, -0.623158753F, -0.877028883F, 0.518750548F, 0.00594347436F,
    0.233434409F, 0.0461384952F, -0.0815220326F, 0.0907591358F, 0.462184668F,
    0.424097896F, 0.1882184F, 0.746864378F, 0.226424813F, -0.629909337F,
    -0.00389184523F, 0.494751602F, -0.726203918F, -0.306335151F, 0.11305812F,
    -0.874916553F, 0.991126716F, -0.939128101F, 0.484554231F, 0.430601507F,
    -0.212946162F, -0.486298949F, -0.0361596569F, 0.0824336708F, 0.0653594136F,
    -0.565443635F, -0.256309897F, -0.469679952F, -0.915085614F, 0.215968564F,
    0.269752413F, 0.158861309F, -0.875987768F, 0.296830893F, 0.21171917F,
    -0.0429307111F, 0.765750468F, 0.275291741F, 0.731174886F, -0.305526316F,
    0.73056674F, 0.0788848922F, -0.280878037F, -0.617220819F, -0.350131214F,
    0.0440693684F, 0.849027812F, -0.159262702F, 0.334966272F, 0.144954383F,
    0.543658078F, -0.9205966F, 0.631235659F, 0.313066304F, -0.882337868F,
    -0.38491261F, 0.605939448F, -0.33434239F, 0.0965263546F, 0.0723365471F,
    -0.410936356F, -0.0246175416F, -0.361825705F, 0.411755115F, 0.878202677F,
    0.100770026F, -0.663308203F, 0.58473593F, -0.941144466F, -0.00426816801F,
    0.684173465F, -0.213105693F, 0.0598842576F, -0.106868275F, -0.700088918F,
    -0.111081637F, 0.450422347F, -0.407018036F, 0.144791171F, -0.108132549F,
    0.619053245F, 0.600779057F, -0.10513258F, -0.0557883531F, 0.0477480814F,
    -0.296498954F, 0.317531526F, 0.374154806F, 0.289210469F, -0.31302613F,
    -0.190403655F, 0.145173058F, -0.0418531038F, 0.16693677F, -0.0510116518F,
    0.388741285F, -0.335114509F, 0.215278804F, -0.270345122F, -0.207248822F,
    -0.0675479844F, -0.253077954F, -0.0213963632F, 0.0150662716F, 0.0428781249F,
    0.133523643F, 0.160283923F, 0.379927486F, 0.0778587535F, -0.46455124F,
    0.012867976F, -0.225438446F, 0.189433858F, 0.345061F, -0.198344633F,
    0.306233585F, -0.236944512F, -0.0616040453F, -0.341843337F, 0.473263294F,
    -0.0206443537F, 0.248725742F, 0.180808753F, -0.498235047F, 0.352425307F,
    0.269026488F, 0.372818321F, -0.0649170652F, -0.483559787F, 0.137174532F,
    0.124871612F, -0.211203009F, -0.151595443F, 0.0769307166F, -0.23670204F,
    0.106704026F, 0.212888867F, -0.217759296F, -0.386669517F, -0.108858414F,
    -0.127811968F, -0.297051758F, -0.226857498F, -0.262947977F, 0.438500524F,
    0.250121564F, -0.2231673F, 0.096125342F, -0.303751F, -0.0407707617F,
    -0.172116026F, 0.0051334328F, -0.393520504F, 0.290114224F, 0.291017115F,
    -0.370859861F, 0.296581656F, 0.132101282F, 0.324915051F, 0.217862889F,
    0.197755843F, 0.543864071F, -0.0391699187F, -0.0364000127F, -0.255558789F,
    0.425194025F, 0.533471525F, 0.141382605F, 0.295270681F, 0.345161557F,
    -0.421040237F, 0.206745F, -0.249634415F, -0.290749669F, -0.117559418F,
    -0.263644934F, -0.332015544F, 0.0283633322F, 0.147862583F, 0.421815962F,
    0.598730087F, 0.409478664F, -0.0532009639F, -0.553051412F, 0.253244668F,
    0.0499796383F, 0.257225752F, -0.40519163F, 0.0583974347F, -0.104464583F,
    -0.0150038647F, 0.173989698F, -0.181668252F, -0.0922028124F, -0.379434258F,
    -0.204003513F, 0.129660949F, -0.322162449F, -0.327676356F, -0.0922065526F,
    0.124041833F, -0.106043965F, 0.305135697F, -0.0659564957F, 0.406425864F,
    0.0296382662F, 0.511959672F, -0.126311481F, -0.179632649F, -0.0555371456F,
    -0.123393863F, 0.152333528F, -0.122443728F, 0.494787842F, 0.0109005822F,
    -0.243265614F, 0.160954207F, 0.42038849F, -0.374058634F, 0.336480111F,
    0.544729888F, -1.18908441F, 0.529149234F, -1.03734493F, 0.138014331F,
    0.598974526F, -0.429863364F, -0.471764326F, -0.131558821F, -0.141643375F,
    0.246688887F, -0.56083107F, 0.172918797F, 0.385564268F, -0.198890671F,
    0.463549972F, -0.762048721F, -0.062070623F, -0.352728754F, 0.246745333F,
    0.548748672F, 0.438346654F, 0.0828578323F, -0.298715115F, -0.123672858F,
    0.683646083F, 0.424703896F, 0.547363937F, -0.204613894F, -0.251396924F,
    0.25421F, 0.327346087F, -0.235844597F, -0.41603747F, 0.250358015F,
    -0.988687932F, 0.0631558523F, -0.111928768F, 0.289362848F, -0.779495358F,
    0.00851987395F, -0.405381829F, 0.372314423F, 1.17466593F, -0.161609709F,
    0.0928014889F, -0.497631609F, -0.128860801F, 0.638247371F, 0.487091839F,
    -0.946698666F, -0.465408862F, 0.18266426F, -0.176238388F, -0.523429692F,
    -1.11700642F, -0.529942751F, 0.0763241127F, 0.476005852F, 1.34614551F,
    -0.254513592F, -0.129375726F, 1.25050056F, -0.418436F, 0.390734673F,
    -0.244740099F };

  static const real32_T b[70]{ 0.00671033468F, -0.0119145168F, 0.00496678147F,
    0.0205666665F, 0.00297508575F, -0.00867048837F, 0.000129892534F,
    -0.0228273422F, -0.00632327935F, -0.00125195109F, 0.0176964514F,
    -0.00291318935F, -0.0250724033F, 0.000389230321F, 0.0107184704F,
    -0.00924261194F, 0.0152297188F, 0.00280336826F, -0.0452667F, 0.0135070914F,
    0.00311226305F, -0.0512060374F, 0.0342363901F, -0.0173266362F,
    -0.00725069968F, -0.0134395054F, 0.0167186242F, 0.0603131503F,
    0.00290233246F, -0.0298703164F, -0.0303261578F, 0.00632184558F,
    -0.00587548269F, 0.000783378899F, 0.0127507364F, -0.0102691641F, -0.0105108F,
    0.0115343677F, -0.00957971811F, 0.00428048847F, -0.00947766192F,
    -0.000225442389F, 0.00534069F, 0.00247825333F, 0.00150240131F,
    0.00344453775F, -0.0158206951F, -0.00138019247F, -6.65390253E-5F,
    -0.00368804671F, -0.00370738562F, 0.0059970906F, 0.000642118F,
    0.000406909036F, -0.00519097364F, -0.000853268546F, -0.0127360504F,
    0.0191610754F, -0.00166102976F, -0.00414795F, 0.00353555894F, -0.012195169F,
    -0.00816762261F, 0.00370461796F, 0.026821265F, 0.0186068621F,
    -0.00246983394F, -0.00523716165F, 0.0215018857F, -0.00867304206F };

  static const real32_T combinedGamma[70]{ 0.39718616F, 0.452724218F,
    0.484408408F, 0.634852052F, 0.411357403F, 0.409614414F, 0.546014488F,
    0.480942249F, 0.394718558F, 0.479223669F, 0.577855527F, 0.639190912F,
    0.45053944F, 0.163800478F, 0.445917368F, 0.490318924F, 0.301870704F,
    0.288048804F, 0.449025154F, 0.449768454F, 0.416434467F, 0.244062364F,
    0.436632752F, 0.413241923F, 0.513273478F, 0.457138151F, 0.20630604F,
    0.427901089F, 0.383470267F, 0.366383642F, 0.590577722F, 0.349425197F,
    0.194633588F, 0.498327136F, 0.508679509F, 0.426358521F, 0.384879977F,
    0.547406435F, 0.430513501F, 0.334091902F, 0.466475785F, 0.505634069F,
    0.466552496F, 0.453367293F, 0.171452478F, 0.337215394F, 0.43207252F,
    0.3933281F, 0.494496524F, 0.225708798F, 0.405064076F, 0.485956758F,
    0.49005574F, 0.203002259F, 0.308313072F, 0.27346167F, 0.40016672F,
    0.537319839F, 0.617730796F, 0.450368673F, 0.503156126F, 0.233883843F,
    0.601397216F, 0.379044741F, 0.156294987F, 0.103025787F, 0.428372353F,
    0.335323781F, 0.574596465F, 0.116424315F };

  static const real32_T combinedBeta[70]{ -0.373905331F, -0.4939017F,
    -0.438457608F, -0.447771817F, -0.529686809F, -0.286380619F, -0.55493629F,
    -0.255005866F, -0.218736425F, -0.576416969F, -0.577810347F, -0.62078923F,
    -0.246484354F, 0.0390172228F, -0.421266854F, -0.511182308F, -0.171796337F,
    -0.103856146F, -0.186572641F, -0.54747808F, -0.599380136F, -0.0403278023F,
    -0.368070662F, -0.173637494F, -0.506992638F, -0.410658509F, -0.0356370062F,
    -0.321104199F, -0.223571464F, -0.183942929F, -0.466328025F, -0.324068516F,
    -0.00938157924F, -0.575981855F, -0.391669095F, -0.30003348F, -0.406301439F,
    -0.387867153F, -0.368340552F, -0.187349722F, -0.421176791F, -0.339865357F,
    -0.508526504F, -0.375818878F, -0.00341363065F, -0.367910892F, -0.282940775F,
    -0.519283652F, -0.452824205F, -0.0449265614F, -0.47384575F, -0.408255607F,
    -0.61395061F, -0.11323379F, -0.248556629F, -0.182330877F, -0.213225827F,
    -0.44349581F, -0.563892365F, -0.239722341F, -0.671115875F, -0.0373055488F,
    -0.589514852F, -0.202558711F, -0.0255166404F, 0.0561742671F, -0.167907849F,
    -0.162519261F, -0.474843562F, 0.0490834825F };

  static const real32_T tmp_0[210]{ -0.101648651F, 0.0259044394F, -0.0471456088F,
    -0.0226655919F, 0.080362469F, 0.0678892583F, -0.0381901227F, 0.0894444808F,
    0.0490395501F, -0.0620525181F, 0.0263832938F, 0.0440400504F, -0.0501437224F,
    0.0575665832F, -0.0575098507F, 0.0319373943F, -0.0090750223F, -0.0600334629F,
    -0.0417542681F, -0.0800677687F, -0.0646400228F, -0.0215333607F,
    -0.0093003856F, -0.0673889592F, 0.0166222211F, -0.0153202694F,
    -0.0652428269F, -0.0027268345F, 0.0941462591F, -0.0647912696F,
    -0.0976549387F, 0.0506252423F, -0.0787595585F, -0.0934529305F, 0.0930848047F,
    0.0640710369F, -0.0691456F, 0.156752914F, -0.0436093807F, 0.57180804F,
    -0.507557213F, -0.0185552053F, 0.0278989878F, -0.0532682389F, -0.0438665338F,
    0.0565488674F, 0.0782449767F, -0.0769519806F, -0.0682615F, -0.0777982324F,
    0.0618344657F, 0.015492822F, -0.0822069645F, 0.0831711143F, 0.00356005807F,
    0.00494686281F, -0.0691421404F, -0.0160443746F, 0.0432200432F, 0.0567444973F,
    0.0989712775F, -0.00101343414F, 0.0616451949F, 0.146147594F, -0.436846405F,
    0.00151055038F, -0.0656548738F, 0.129231781F, -0.0611635558F, 0.0495937392F,
    0.0852933824F, -0.051652696F, -0.110335864F, -0.00882347394F, 0.0600357205F,
    0.0341127254F, -0.10177812F, 0.0559529513F, 0.378682971F, -0.324991614F,
    -0.0260818359F, 0.0227277223F, -0.00447662733F, -0.052098114F,
    0.00269108964F, -0.0219280832F, 0.0516726077F, -0.0083407741F, 0.0144378273F,
    0.0706667155F, 0.024164442F, -0.0632114857F, 0.0507293642F, -0.0335661471F,
    -0.0101596918F, -0.0628702044F, -0.478898942F, -0.0596066639F, 0.0317353457F,
    0.0724143907F, -0.048787728F, 0.0457883701F, 0.0130832959F, 0.0627217591F,
    0.0457547046F, 0.0332470648F, -0.0315153487F, -0.0555336811F, -0.0599108525F,
    -0.050811585F, -0.0617802478F, -0.0198228117F, -0.026259467F, 0.049140688F,
    0.0301515F, 0.0664222687F, -0.0556118712F, 0.0215791352F, 0.000968649751F,
    0.0615693517F, 0.105349332F, -0.0429774038F, -0.0593730733F, -0.0197246447F,
    0.0217621289F, 0.0539522693F, 0.025559213F, 0.030893093F, 0.0496862791F,
    0.00367386593F, 0.0416896157F, -0.0435858816F, 0.428092331F, 0.209166631F,
    -0.00590226147F, -0.136046514F, 0.00281891786F, 0.0609770045F,
    -0.0997516885F, 0.0758569092F, -0.0542268194F, 0.00292865117F,
    -0.0161464624F, -0.062206883F, -0.0193323679F, -0.0590518266F,
    -0.0496701673F, -0.474616498F, 0.394689411F, -0.00590630854F, 0.0731570274F,
    -0.15938504F, 0.0937765092F, -0.0420234315F, 0.0930148959F, -0.0456918813F,
    -0.0432018228F, 0.0830025896F, 0.0529917F, -0.0238766205F, -0.0072128782F,
    -0.0750955567F, 0.0205332711F, 0.0115998741F, 0.0566091053F, 0.0315248966F,
    0.00307521969F, -0.0616045035F, -0.0131745115F, 0.0504884645F, 0.0525369234F,
    -0.0530841537F, -0.0549094677F, 0.0551928543F, -0.0121466983F, 0.0713074654F,
    0.0597859919F, -0.0033934582F, -0.0121133169F, 0.0596665964F, 0.0417194888F,
    -0.0718231425F, -0.0677790567F, 0.180261686F, -0.428098917F, -0.0110656461F,
    0.0909112692F, -0.030654002F, 0.0751274824F, 0.00908599328F, -0.00387607445F,
    0.0783809423F, -0.162434369F, 0.290946F, 0.0332745276F, 0.427176237F,
    0.399600178F, 0.0236531068F, 0.0083395429F, -0.0169755444F, -0.0850730762F,
    0.0212948825F, 0.000384214334F, 0.0569474883F, 0.0248425025F, -0.0187710021F,
    -0.053958822F, -0.276011795F, -0.398972213F, -0.0430829935F };

  matrixMultiply16943049303738605558(70, 14, 1, 64, 64, 64, &(&tmp[0])[0],
    &inputsT_0_f1[0], &X[0]);
  for (channelIdx = 0; channelIdx < 70; channelIdx++) {
    X[channelIdx] = std::fmax(0.0F, (X[channelIdx] + b[channelIdx]) *
      combinedGamma[channelIdx] + combinedBeta[channelIdx]);
  }

  matrixMultiply16943049303738605558(3, 70, 1, 64, 64, 64, &(&tmp_0[0])[0], &X[0],
    &outputs_0_f1[0]);
  outputs_0_f1[0] = std::tanh(outputs_0_f1[0] - 0.0464356802F);
  outputs_0_f1[1] = std::tanh(outputs_0_f1[1] + 0.0463817865F);
  outputs_0_f1[2] = std::tanh(outputs_0_f1[2] + 0.00277768355F);
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (std::isnan(u0) || std::isnan(u1)) {
    y = (rtNaN);
  } else {
    real_T tmp;
    real_T tmp_0;
    tmp = std::abs(u0);
    tmp_0 = std::abs(u1);
    if (std::isinf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = std::sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > std::floor(u1))) {
      y = (rtNaN);
    } else {
      y = std::pow(u0, u1);
    }
  }

  return y;
}

// Function for MATLAB Function: '<S1>/Circulating Current Control MPC'
static void imperix_M2C_NN_control_trisolve(const real_T A[4], real_T B[4])
{
  for (int32_T j{0}; j < 2; j++) {
    int32_T jBcol;
    jBcol = j << 1;
    for (int32_T b_k{0}; b_k < 2; b_k++) {
      real_T B_0;
      int32_T B_tmp;
      int32_T kAcol;
      kAcol = b_k << 1;
      B_tmp = b_k + jBcol;
      B_0 = B[B_tmp];
      if (B_0 != 0.0) {
        B[B_tmp] = B_0 / A[b_k + kAcol];
        for (int32_T i{b_k + 2}; i < 3; i++) {
          B[jBcol + 1] -= A[kAcol + 1] * B[B_tmp];
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S1>/Circulating Current Control MPC'
static real_T imperix_M2C_NN_control_202_norm(const real_T x[2])
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  scale = 3.3121686421112381E-170;
  absxk = std::abs(x[0]);
  if (absxk > 3.3121686421112381E-170) {
    y = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    y = t * t;
  }

  absxk = std::abs(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  return scale * std::sqrt(y);
}

// Function for MATLAB Function: '<S1>/Circulating Current Control MPC'
static real_T imperix_M2C_NN_control_20_xnrm2(int32_T n, const real_T x[4],
  int32_T ix0)
{
  real_T y;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = std::abs(x[ix0 - 1]);
    } else {
      real_T scale;
      int32_T kend;
      scale = 3.3121686421112381E-170;
      kend = ix0 + n;
      for (int32_T k{ix0}; k < kend; k++) {
        real_T absxk;
        absxk = std::abs(x[k - 1]);
        if (absxk > scale) {
          real_T t;
          t = scale / absxk;
          y = y * t * t + 1.0;
          scale = absxk;
        } else {
          real_T t;
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * std::sqrt(y);
    }
  }

  return y;
}

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T a;
  real_T b;
  real_T y;
  a = std::abs(u0);
  b = std::abs(u1);
  if (a < b) {
    a /= b;
    y = std::sqrt(a * a + 1.0) * b;
  } else if (a > b) {
    b /= a;
    y = std::sqrt(b * b + 1.0) * a;
  } else if (std::isnan(b)) {
    y = (rtNaN);
  } else {
    y = a * 1.4142135623730951;
  }

  return y;
}

// Function for MATLAB Function: '<S1>/Circulating Current Control MPC'
static void imperix_M2C_NN_control_20_xgemv(int32_T m, int32_T n, const real_T
  A[4], int32_T ia0, const real_T x[4], int32_T ix0, real_T y[2])
{
  if ((m != 0) && (n != 0)) {
    int32_T b;
    if (n - 1 >= 0) {
      std::memset(&y[0], 0, static_cast<uint32_T>(n) * sizeof(real_T));
    }

    b = ((n - 1) << 1) + ia0;
    for (int32_T b_iy{ia0}; b_iy <= b; b_iy += 2) {
      real_T c;
      int32_T d;
      int32_T ia;
      c = 0.0;
      d = b_iy + m;
      for (ia = b_iy; ia < d; ia++) {
        c += x[((ix0 + ia) - b_iy) - 1] * A[ia - 1];
      }

      ia = (b_iy - ia0) >> 1;
      y[ia] += c;
    }
  }
}

// Function for MATLAB Function: '<S1>/Circulating Current Control MPC'
static void imperix_M2C_NN_control_20_xgerc(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[2], real_T A[4], int32_T ia0)
{
  if (!(alpha1 == 0.0)) {
    int32_T jA;
    jA = ia0;
    for (int32_T j{0}; j < n; j++) {
      real_T temp;
      temp = y[j];
      if (temp != 0.0) {
        int32_T b;
        temp *= alpha1;
        b = m + jA;
        for (int32_T ijA{jA}; ijA < b; ijA++) {
          A[ijA - 1] += A[((ix0 + ijA) - jA) - 1] * temp;
        }
      }

      jA += 2;
    }
  }
}

// Function for MATLAB Function: '<S1>/Circulating Current Control MPC'
static real_T imperix_M2C_NN_contr_KWIKfactor(const real_T Ac[8], const int32_T
  iC[4], int32_T nA, const real_T Linv[4], real_T RLinv[4], real_T D[4], real_T
  H[4], int32_T n)
{
  real_T A[4];
  real_T Q[4];
  real_T R[4];
  real_T TL[4];
  real_T tau[2];
  real_T work[2];
  real_T RLinv_0;
  real_T RLinv_1;
  real_T Status;
  real_T xnorm;
  int32_T b_lastv;
  int32_T c_lastc;
  int32_T exitg1;
  int32_T ii;
  int32_T k_i;
  int32_T knt;
  int32_T qY;
  int32_T tmp;
  Status = 1.0;
  RLinv[0] = 0.0;
  RLinv[1] = 0.0;
  RLinv[2] = 0.0;
  RLinv[3] = 0.0;
  for (ii = 0; ii < nA; ii++) {
    k_i = iC[ii];
    xnorm = Ac[k_i - 1];
    RLinv_0 = Linv[0] * xnorm;
    RLinv_1 = Linv[1] * xnorm;
    xnorm = Ac[k_i + 3];
    k_i = ii << 1;
    RLinv[k_i] = Linv[2] * xnorm + RLinv_0;
    RLinv[k_i + 1] = Linv[3] * xnorm + RLinv_1;
  }

  A[0] = RLinv[0];
  A[1] = RLinv[1];
  A[2] = RLinv[2];
  A[3] = RLinv[3];
  tau[0] = 0.0;
  work[0] = 0.0;
  tau[1] = 0.0;
  work[1] = 0.0;
  for (k_i = 0; k_i < 2; k_i++) {
    ii = (k_i << 1) + k_i;
    if (k_i + 1 < 2) {
      RLinv_0 = A[ii];
      c_lastc = ii + 2;
      tau[0] = 0.0;
      xnorm = imperix_M2C_NN_control_20_xnrm2(1, A, ii + 2);
      if (xnorm != 0.0) {
        RLinv_1 = A[ii];
        xnorm = rt_hypotd_snf(RLinv_1, xnorm);
        if (RLinv_1 >= 0.0) {
          xnorm = -xnorm;
        }

        if (std::abs(xnorm) < 1.0020841800044864E-292) {
          knt = 0;
          do {
            knt++;
            for (b_lastv = c_lastc; b_lastv <= ii + 2; b_lastv++) {
              A[b_lastv - 1] *= 9.9792015476736E+291;
            }

            xnorm *= 9.9792015476736E+291;
            RLinv_0 *= 9.9792015476736E+291;
          } while ((std::abs(xnorm) < 1.0020841800044864E-292) && (knt < 20));

          xnorm = rt_hypotd_snf(RLinv_0, imperix_M2C_NN_control_20_xnrm2(1, A,
            ii + 2));
          if (RLinv_0 >= 0.0) {
            xnorm = -xnorm;
          }

          tau[0] = (xnorm - RLinv_0) / xnorm;
          RLinv_0 = 1.0 / (RLinv_0 - xnorm);
          for (b_lastv = c_lastc; b_lastv <= ii + 2; b_lastv++) {
            A[b_lastv - 1] *= RLinv_0;
          }

          for (b_lastv = 0; b_lastv < knt; b_lastv++) {
            xnorm *= 1.0020841800044864E-292;
          }

          RLinv_0 = xnorm;
        } else {
          tau[0] = (xnorm - RLinv_1) / xnorm;
          RLinv_0 = 1.0 / (RLinv_1 - xnorm);
          for (b_lastv = c_lastc; b_lastv <= ii + 2; b_lastv++) {
            A[b_lastv - 1] *= RLinv_0;
          }

          RLinv_0 = xnorm;
        }
      }

      A[ii] = 1.0;
      if (tau[0] != 0.0) {
        b_lastv = 2;
        c_lastc = ii + 1;
        while ((b_lastv > 0) && (A[c_lastc] == 0.0)) {
          b_lastv--;
          c_lastc--;
        }

        c_lastc = 1;
        knt = ii;
        do {
          exitg1 = 0;
          if (knt + 3 <= (ii + b_lastv) + 2) {
            if (A[knt + 2] != 0.0) {
              exitg1 = 1;
            } else {
              knt++;
            }
          } else {
            c_lastc = 0;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      } else {
        b_lastv = 0;
        c_lastc = 0;
      }

      if (b_lastv > 0) {
        imperix_M2C_NN_control_20_xgemv(b_lastv, c_lastc, A, ii + 3, A, ii + 1,
          work);
        imperix_M2C_NN_control_20_xgerc(b_lastv, c_lastc, -tau[0], ii + 1, work,
          A, ii + 3);
      }

      A[ii] = RLinv_0;
    } else {
      tau[1] = 0.0;
    }
  }

  for (k_i = 0; k_i < 2; k_i++) {
    for (ii = 0; ii <= k_i; ii++) {
      b_lastv = k_i << 1;
      R[ii + b_lastv] = A[b_lastv + ii];
    }

    if (k_i <= 0) {
      R[(k_i << 1) + 1] = 0.0;
    }

    work[k_i] = 0.0;
  }

  for (k_i = 1; k_i >= 0; k_i--) {
    ii = (k_i << 1) + k_i;
    if (k_i + 1 < 2) {
      A[ii] = 1.0;
      if (tau[k_i] != 0.0) {
        b_lastv = 2;
        c_lastc = ii + 1;
        while ((b_lastv > 0) && (A[c_lastc] == 0.0)) {
          b_lastv--;
          c_lastc--;
        }

        c_lastc = 1;
        knt = ii;
        do {
          exitg1 = 0;
          if (knt + 3 <= (ii + b_lastv) + 2) {
            if (A[knt + 2] != 0.0) {
              exitg1 = 1;
            } else {
              knt++;
            }
          } else {
            c_lastc = 0;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      } else {
        b_lastv = 0;
        c_lastc = 0;
      }

      if (b_lastv > 0) {
        imperix_M2C_NN_control_20_xgemv(b_lastv, c_lastc, A, ii + 3, A, ii + 1,
          work);
        imperix_M2C_NN_control_20_xgerc(b_lastv, c_lastc, -tau[k_i], ii + 1,
          work, A, ii + 3);
      }

      for (b_lastv = ii + 2; b_lastv <= ii + 2; b_lastv++) {
        A[b_lastv - 1] *= -tau[k_i];
      }
    }

    A[ii] = 1.0 - tau[k_i];
    if (k_i - 1 >= 0) {
      A[ii - 1] = 0.0;
    }
  }

  Q[0] = A[0];
  Q[1] = A[1];
  Q[2] = A[2];
  Q[3] = A[3];
  k_i = 0;
  do {
    exitg1 = 0;
    if (k_i <= nA - 1) {
      if (std::abs(R[(k_i << 1) + k_i]) < 1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        k_i++;
      }
    } else {
      for (k_i = 0; k_i < n; k_i++) {
        for (ii = 0; ii < n; ii++) {
          b_lastv = k_i << 1;
          c_lastc = ii << 1;
          TL[k_i + c_lastc] = Linv[b_lastv + 1] * Q[c_lastc + 1] + Linv[b_lastv]
            * Q[c_lastc];
        }
      }

      RLinv[0] = 0.0;
      RLinv[1] = 0.0;
      RLinv[2] = 0.0;
      RLinv[3] = 0.0;
      for (b_lastv = nA; b_lastv >= 1; b_lastv--) {
        k_i = (b_lastv - 1) << 1;
        ii = (b_lastv + k_i) - 1;
        RLinv[ii] = 1.0;
        for (c_lastc = b_lastv; c_lastc <= nA; c_lastc++) {
          tmp = (((c_lastc - 1) << 1) + b_lastv) - 1;
          RLinv[tmp] /= R[ii];
        }

        if (b_lastv > 1) {
          for (c_lastc = 0; c_lastc <= b_lastv - 2; c_lastc++) {
            for (knt = b_lastv; knt <= nA; knt++) {
              ii = (knt - 1) << 1;
              tmp = ii + c_lastc;
              RLinv[tmp] -= RLinv[(ii + b_lastv) - 1] * R[k_i + c_lastc];
            }
          }
        }
      }

      for (b_lastv = 0; b_lastv < n; b_lastv++) {
        if (b_lastv + 1 <= n) {
          if (nA > 2147483646) {
            qY = MAX_int32_T;
          } else {
            qY = nA + 1;
          }
        }

        for (c_lastc = b_lastv + 1; c_lastc <= n; c_lastc++) {
          k_i = ((c_lastc - 1) << 1) + b_lastv;
          H[k_i] = 0.0;
          for (knt = qY; knt <= n; knt++) {
            ii = (knt - 1) << 1;
            H[k_i] -= TL[(ii + c_lastc) - 1] * TL[ii + b_lastv];
          }

          H[(c_lastc + (b_lastv << 1)) - 1] = H[k_i];
        }
      }

      for (qY = 0; qY < nA; qY++) {
        for (b_lastv = 0; b_lastv < n; b_lastv++) {
          k_i = (qY << 1) + b_lastv;
          D[k_i] = 0.0;
          for (c_lastc = qY + 1; c_lastc <= nA; c_lastc++) {
            ii = (c_lastc - 1) << 1;
            D[k_i] += TL[ii + b_lastv] * RLinv[ii + qY];
          }
        }
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return Status;
}

// Function for MATLAB Function: '<S1>/Circulating Current Control MPC'
static void imperix_M2C_NN_c_DropConstraint(int32_T kDrop, boolean_T iA[4],
  int32_T *nA, int32_T iC[4])
{
  if (kDrop > 0) {
    iA[iC[kDrop - 1] - 1] = false;
    if (kDrop < *nA) {
      int32_T b;
      int32_T i;
      if (*nA < -2147483647) {
        i = MIN_int32_T;
      } else {
        i = *nA - 1;
      }

      b = i + 1;
      for (i = kDrop; i < b; i++) {
        iC[i - 1] = iC[i];
      }
    }

    iC[*nA - 1] = 0;
    if (*nA < -2147483647) {
      *nA = MIN_int32_T;
    } else {
      (*nA)--;
    }
  }
}

// Function for MATLAB Function: '<S1>/Circulating Current Control MPC'
static void imperix_M2C_NN_control_2_qpkwik(const real_T Linv[4], const real_T
  Hinv[4], const real_T f[2], const real_T Ac[8], const real_T b[4], boolean_T
  iA[4], int32_T maxiter, real_T FeasTol, real_T x[2], real_T lambda[4], int32_T
  *status)
{
  real_T D[4];
  real_T H[4];
  real_T Opt[4];
  real_T RLinv[4];
  real_T Rhs[4];
  real_T U[4];
  real_T cTol[4];
  real_T r[2];
  real_T Xnorm0;
  real_T cMin;
  real_T cVal;
  real_T rMin;
  real_T rVal;
  real_T t;
  real_T t1;
  int32_T iC[4];
  int32_T U_tmp;
  int32_T U_tmp_0;
  int32_T b_exponent;
  int32_T exitg1;
  int32_T exitg3;
  int32_T exponent;
  int32_T f_i;
  int32_T iSave;
  int32_T kDrop;
  int32_T kNext;
  int32_T nA;
  boolean_T ColdReset;
  boolean_T DualFeasible;
  boolean_T cTolComputed;
  boolean_T exitg2;
  boolean_T exitg4;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T guard3;
  x[0] = 0.0;
  x[1] = 0.0;
  lambda[0] = 0.0;
  lambda[1] = 0.0;
  lambda[2] = 0.0;
  lambda[3] = 0.0;
  *status = 1;
  r[0] = 0.0;
  r[1] = 0.0;
  rMin = 0.0;
  cTolComputed = false;
  cTol[0] = 1.0;
  iC[0] = 0;
  cTol[1] = 1.0;
  iC[1] = 0;
  cTol[2] = 1.0;
  iC[2] = 0;
  cTol[3] = 1.0;
  iC[3] = 0;
  nA = 0;
  if (iA[0]) {
    nA = 1;
    iC[0] = 1;
  }

  if (iA[1]) {
    nA++;
    iC[nA - 1] = 2;
  }

  if (iA[2]) {
    nA++;
    iC[nA - 1] = 3;
  }

  if (iA[3]) {
    nA++;
    iC[nA - 1] = 4;
  }

  guard1 = false;
  if (nA > 0) {
    Opt[0] = 0.0;
    Opt[1] = 0.0;
    Opt[2] = 0.0;
    Opt[3] = 0.0;
    Rhs[0] = f[0];
    Rhs[2] = 0.0;
    Rhs[1] = f[1];
    Rhs[3] = 0.0;
    DualFeasible = false;
    ColdReset = false;
    do {
      exitg3 = 0;
      if ((!DualFeasible) && (nA > 0) && (*status <= maxiter)) {
        Xnorm0 = imperix_M2C_NN_contr_KWIKfactor(Ac, iC, nA, Linv, RLinv, D, H,
          2);
        if (Xnorm0 < 0.0) {
          if (ColdReset) {
            *status = -2;
            exitg3 = 2;
          } else {
            nA = 0;
            iA[0] = false;
            iC[0] = 0;
            iA[1] = false;
            iC[1] = 0;
            iA[2] = false;
            iC[2] = 0;
            iA[3] = false;
            iC[3] = 0;
            ColdReset = true;
          }
        } else {
          for (kDrop = 0; kDrop < nA; kDrop++) {
            if (kDrop + 1 > 2147483645) {
              f_i = MAX_int32_T;
            } else {
              f_i = kDrop + 3;
            }

            Rhs[f_i - 1] = b[iC[kDrop] - 1];
            for (f_i = kDrop + 1; f_i <= nA; f_i++) {
              U_tmp_0 = ((kDrop << 1) + f_i) - 1;
              U[U_tmp_0] = 0.0;
              for (iSave = 0; iSave < nA; iSave++) {
                U_tmp = iSave << 1;
                U[U_tmp_0] += RLinv[(U_tmp + f_i) - 1] * RLinv[U_tmp + kDrop];
              }

              U[kDrop + ((f_i - 1) << 1)] = U[U_tmp_0];
            }
          }

          for (kDrop = 0; kDrop < 2; kDrop++) {
            Opt[kDrop] = H[kDrop + 2] * Rhs[1] + H[kDrop] * Rhs[0];
            for (iSave = 0; iSave < nA; iSave++) {
              if (iSave + 1 > 2147483645) {
                f_i = MAX_int32_T;
              } else {
                f_i = iSave + 3;
              }

              Opt[kDrop] += D[(iSave << 1) + kDrop] * Rhs[f_i - 1];
            }
          }

          for (kDrop = 0; kDrop < nA; kDrop++) {
            if (kDrop + 1 > 2147483645) {
              f_i = MAX_int32_T;
            } else {
              f_i = kDrop + 3;
            }

            iSave = kDrop << 1;
            Opt[f_i - 1] = D[iSave + 1] * Rhs[1] + D[iSave] * Rhs[0];
            if (kDrop + 1 > 2147483645) {
              f_i = MAX_int32_T;
              U_tmp_0 = MAX_int32_T;
            } else {
              f_i = kDrop + 3;
              U_tmp_0 = kDrop + 3;
            }

            for (iSave = 0; iSave < nA; iSave++) {
              if (iSave + 1 > 2147483645) {
                U_tmp = MAX_int32_T;
              } else {
                U_tmp = iSave + 3;
              }

              Opt[f_i - 1] = U[(iSave << 1) + kDrop] * Rhs[U_tmp - 1] +
                Opt[U_tmp_0 - 1];
            }
          }

          Xnorm0 = -1.0E-12;
          kDrop = -1;
          for (iSave = 0; iSave < nA; iSave++) {
            if (iSave + 1 > 2147483645) {
              f_i = MAX_int32_T;
            } else {
              f_i = iSave + 3;
            }

            lambda[iC[iSave] - 1] = Opt[f_i - 1];
            if (iSave + 1 > 2147483645) {
              // out-of-bounds matrix access would cause program termination and was eliminated 
            } else {
              kNext = iSave + 3;
            }

            if ((Opt[kNext - 1] < Xnorm0) && (iSave + 1 <= nA)) {
              kDrop = iSave;
              if (iSave + 1 > 2147483645) {
                f_i = MAX_int32_T;
              } else {
                f_i = iSave + 3;
              }

              Xnorm0 = Opt[f_i - 1];
            }
          }

          if (kDrop + 1 <= 0) {
            DualFeasible = true;
            x[0] = Opt[0];
            x[1] = Opt[1];
          } else {
            if (*status > 2147483646) {
              *status = MAX_int32_T;
            } else {
              (*status)++;
            }

            if (*status > 5) {
              nA = 0;
              iA[0] = false;
              iC[0] = 0;
              iA[1] = false;
              iC[1] = 0;
              iA[2] = false;
              iC[2] = 0;
              iA[3] = false;
              iC[3] = 0;
              ColdReset = true;
            } else {
              lambda[iC[kDrop] - 1] = 0.0;
              imperix_M2C_NN_c_DropConstraint(kDrop + 1, iA, &nA, iC);
            }
          }
        }
      } else {
        if (nA <= 0) {
          lambda[0] = 0.0;
          lambda[1] = 0.0;
          lambda[2] = 0.0;
          lambda[3] = 0.0;
          x[0] = -Hinv[0] * f[0] + -Hinv[2] * f[1];
          x[1] = -Hinv[1] * f[0] + -Hinv[3] * f[1];
        }

        exitg3 = 1;
      }
    } while (exitg3 == 0);

    if (exitg3 == 1) {
      guard1 = true;
    }
  } else {
    x[0] = -Hinv[0] * f[0] + -Hinv[2] * f[1];
    x[1] = -Hinv[1] * f[0] + -Hinv[3] * f[1];
    guard1 = true;
  }

  if (guard1) {
    Xnorm0 = imperix_M2C_NN_control_202_norm(x);
    exitg2 = false;
    while ((!exitg2) && (*status <= maxiter)) {
      cMin = -FeasTol;
      kNext = -1;
      for (f_i = 0; f_i < 4; f_i++) {
        if (!cTolComputed) {
          cVal = std::abs(Ac[f_i] * x[0]);
          t1 = std::abs(Ac[f_i + 4] * x[1]);
          if (cVal < t1) {
            cVal = t1;
          } else if (std::isnan(cVal)) {
            if (!std::isnan(t1)) {
              cVal = t1;
            } else {
              cVal = (rtNaN);
            }
          }

          cTol[f_i] = std::fmax(cTol[f_i], cVal);
        }

        if (!iA[f_i]) {
          cVal = ((Ac[f_i + 4] * x[1] + Ac[f_i] * x[0]) - b[f_i]) / cTol[f_i];
          if (cVal < cMin) {
            cMin = cVal;
            kNext = f_i;
          }
        }
      }

      cTolComputed = true;
      if (kNext + 1 <= 0) {
        exitg2 = true;
      } else if (*status == maxiter) {
        *status = 0;
        exitg2 = true;
      } else {
        do {
          exitg1 = 0;
          if ((kNext + 1 > 0) && (*status <= maxiter)) {
            guard2 = false;
            guard3 = false;
            if (nA == 0) {
              t1 = Ac[kNext];
              cMin = Hinv[0] * t1;
              cVal = Hinv[1] * t1;
              t1 = Ac[kNext + 4];
              cMin += Hinv[2] * t1;
              cVal += Hinv[3] * t1;
              guard3 = true;
            } else {
              cMin = imperix_M2C_NN_contr_KWIKfactor(Ac, iC, nA, Linv, RLinv, D,
                H, 2);
              if (cMin <= 0.0) {
                *status = -2;
                exitg1 = 1;
              } else {
                t1 = Ac[kNext];
                cMin = -H[0] * t1;
                cVal = -H[1] * t1;
                t1 = Ac[kNext + 4];
                cMin += -H[2] * t1;
                cVal += -H[3] * t1;
                for (f_i = 0; f_i < nA; f_i++) {
                  kDrop = f_i << 1;
                  r[f_i] = D[kDrop + 1] * t1 + D[kDrop] * Ac[kNext];
                }

                guard3 = true;
              }
            }

            if (guard3) {
              kDrop = 0;
              t1 = 0.0;
              DualFeasible = true;
              ColdReset = true;
              if (nA > 0) {
                f_i = 0;
                exitg4 = false;
                while ((!exitg4) && (f_i <= nA - 1)) {
                  if (r[f_i] >= 1.0E-12) {
                    ColdReset = false;
                    exitg4 = true;
                  } else {
                    f_i++;
                  }
                }
              }

              if ((nA != 0) && (!ColdReset)) {
                for (f_i = 0; f_i < nA; f_i++) {
                  rVal = r[f_i];
                  if (rVal > 1.0E-12) {
                    rVal = lambda[iC[f_i] - 1] / rVal;
                    if ((kDrop == 0) || (rVal < rMin)) {
                      rMin = rVal;
                      kDrop = f_i + 1;
                    }
                  }
                }

                if (kDrop > 0) {
                  t1 = rMin;
                  DualFeasible = false;
                }
              }

              rVal = Ac[kNext + 4];
              t = rVal * cVal + cMin * Ac[kNext];
              if (t <= 0.0) {
                rVal = 0.0;
                ColdReset = true;
              } else {
                rVal = (b[kNext] - (rVal * x[1] + Ac[kNext] * x[0])) / t;
                ColdReset = false;
              }

              if (DualFeasible && ColdReset) {
                *status = -1;
                exitg1 = 1;
              } else {
                if (ColdReset) {
                  t = t1;
                } else if (DualFeasible) {
                  t = rVal;
                } else if (t1 < rVal) {
                  t = t1;
                } else {
                  t = rVal;
                }

                for (f_i = 0; f_i < nA; f_i++) {
                  iSave = iC[f_i];
                  lambda[iSave - 1] -= t * r[f_i];
                  if ((iSave <= 4) && (lambda[iSave - 1] < 0.0)) {
                    lambda[iSave - 1] = 0.0;
                  }
                }

                lambda[kNext] += t;
                std::frexp(1.0, &exponent);
                if (std::abs(t - t1) < 2.2204460492503131E-16) {
                  imperix_M2C_NN_c_DropConstraint(kDrop, iA, &nA, iC);
                }

                if (!ColdReset) {
                  x[0] += t * cMin;
                  x[1] += t * cVal;
                  std::frexp(1.0, &b_exponent);
                  if (std::abs(t - rVal) < 2.2204460492503131E-16) {
                    if (nA == 2) {
                      *status = -1;
                      exitg1 = 1;
                    } else {
                      if (nA > 2147483646) {
                        nA = MAX_int32_T;
                      } else {
                        nA++;
                      }

                      iC[nA - 1] = kNext + 1;
                      kDrop = nA - 1;
                      exitg4 = false;
                      while ((!exitg4) && (kDrop + 1 > 1)) {
                        f_i = iC[kDrop - 1];
                        if (iC[kDrop] > f_i) {
                          exitg4 = true;
                        } else {
                          iSave = iC[kDrop];
                          iC[kDrop] = f_i;
                          iC[kDrop - 1] = iSave;
                          kDrop--;
                        }
                      }

                      iA[kNext] = true;
                      kNext = -1;
                      guard2 = true;
                    }
                  } else {
                    guard2 = true;
                  }
                } else {
                  guard2 = true;
                }
              }
            }

            if (guard2) {
              if (*status <= 2147483646) {
                (*status)++;
              }
            }
          } else {
            cMin = imperix_M2C_NN_control_202_norm(x);
            if (std::abs(cMin - Xnorm0) > 0.001) {
              Xnorm0 = cMin;
              cMin = std::abs(b[0]);
              RLinv[0] = cMin;
              cTol[0] = std::fmax(cMin, 1.0);
              cMin = std::abs(b[1]);
              RLinv[1] = cMin;
              cTol[1] = std::fmax(cMin, 1.0);
              cMin = std::abs(b[2]);
              RLinv[2] = cMin;
              cTol[2] = std::fmax(cMin, 1.0);
              cMin = std::abs(b[3]);
              RLinv[3] = cMin;
              cTol[3] = std::fmax(cMin, 1.0);
              cTolComputed = false;
            }

            exitg1 = 2;
          }
        } while (exitg1 == 0);

        if (exitg1 == 1) {
          exitg2 = true;
        }
      }
    }
  }
}

// Model step function for TID0
void imperix_M2C_NN_control_2024b_step0(void) // Sample time: [0.000166667s, 0.0s] 
{
  real_T rtb_VectorConcatenate[14];
  real_T tmp_4[8];
  real_T rtb_Square_n[6];
  real_T rtb_TmpSignalConversionAtSFun_h[6];
  real_T rtb_us[6];
  real_T tmp_2[6];
  real_T rtb_Gain1[5];
  real_T Linv[4];
  real_T Linv_0[4];
  real_T rtb_TmpSignalConversionAtSFun_d[4];
  real_T tmp_5[4];
  real_T rtb_Gain1_n[3];
  real_T rtb_Gain31_0[3];
  real_T rtb_TmpSignalConversionAtSFu_kl[3];
  real_T is_dq[2];
  real_T tmp_3[2];
  real_T Kpt;
  real_T Mean2_AccVal;
  real_T Tab;
  real_T Tab_0;
  real_T ang_u;
  real_T mag_u;
  real_T rtb_Fcn;
  real_T rtb_Fcn1;
  real_T rtb_Gain1_p;
  real_T rtb_Gain20_idx_0;
  real_T rtb_Gain20_idx_1;
  real_T rtb_Pm;
  real_T rtb_Product4;
  real_T rtb_TmpSignalConversionAtGain_0;
  real_T rtb_TmpSignalConversionAtGain_1;
  real_T rtb_TmpSignalConversionAtGain_2;
  real_T rtb_vd_ref;
  real_T rtb_vq_ref;
  real_T vab_idx_0;
  real_T vab_idx_1;
  int32_T b_k;
  int32_T i;
  int32_T idxAjj;
  int32_T rtb_Gain1_p_tmp;
  real32_T tmp_0[14];
  real32_T tmp_1[3];
  boolean_T iA1[4];
  boolean_T tmp;
  static const real_T a[9]{ 0.66666666666666663, 0.0, 0.33333333333333331,
    -0.33333333333333331, 0.57735026918962573, 0.33333333333333331,
    -0.33333333333333331, -0.57735026918962573, 0.33333333333333331 };

  static const real_T b[4]{ -0.033333277772440439, -0.0, -0.0,
    -0.033333277772440439 };

  boolean_T exitg1;

  // Update the flag to indicate when data transfers from
  //   Sample time: [0.00016666666666666666s, 0.0s] to Sample time: [0.001s, 0.0s]  
  (imperix_M2C_NN_control_2024b_M->Timing.RateInteraction.TID0_1)++;
  if ((imperix_M2C_NN_control_2024b_M->Timing.RateInteraction.TID0_1) > 5) {
    imperix_M2C_NN_control_2024b_M->Timing.RateInteraction.TID0_1 = 0;
  }

  // S-Function (ADC): '<S119>/ADC'
  imperix_M2C_NN_control_2024b_B.ADC = (float)(*ix_raw_adc_ptr_6_0) * 0.027466F
    + 0.0F;

  // S-Function (ADC): '<S135>/ADC'
  imperix_M2C_NN_control_2024b_B.ADC_k = (float)(*ix_raw_adc_ptr_7_0) *
    0.027466F + 0.0F;

  // S-Function (ADC): '<S113>/ADC'
  imperix_M2C_NN_control_2024b_B.ADC_e = (float)(*ix_raw_adc_ptr_0_1) *
    0.027466F + 0.0F;

  // S-Function (ADC): '<S121>/ADC'
  imperix_M2C_NN_control_2024b_B.ADC_b = (float)(*ix_raw_adc_ptr_1_1) *
    0.027466F + 0.0F;

  // S-Function (ADC): '<S115>/ADC'
  imperix_M2C_NN_control_2024b_B.ADC_k2 = (float)(*ix_raw_adc_ptr_2_1) *
    0.027466F + 0.0F;

  // S-Function (ADC): '<S117>/ADC'
  imperix_M2C_NN_control_2024b_B.ADC_f = (float)(*ix_raw_adc_ptr_3_1) *
    0.027466F + 0.0F;

  // SignalConversion generated from: '<S1>/Mean' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion29'
  //   DataTypeConversion: '<S1>/Data Type Conversion34'
  //   DataTypeConversion: '<S1>/Data Type Conversion39'
  //   DataTypeConversion: '<S1>/Data Type Conversion40'
  //   DataTypeConversion: '<S1>/Data Type Conversion44'
  //   DataTypeConversion: '<S1>/Data Type Conversion47'

  rtb_Square_n[0] = imperix_M2C_NN_control_2024b_B.ADC;
  rtb_Square_n[1] = imperix_M2C_NN_control_2024b_B.ADC_k;
  rtb_Square_n[2] = imperix_M2C_NN_control_2024b_B.ADC_e;
  rtb_Square_n[3] = imperix_M2C_NN_control_2024b_B.ADC_b;
  rtb_Square_n[4] = imperix_M2C_NN_control_2024b_B.ADC_k2;
  rtb_Square_n[5] = imperix_M2C_NN_control_2024b_B.ADC_f;

  // Gain: '<S1>/Gain6'
  rtb_Pm = 1.0 / imperix_M2C_NN_control_2024b_P.n;

  // Gain: '<S29>/Gain3'
  Mean2_AccVal = imperix_M2C_NN_control_2024b_P.C / 2.0;
  for (i = 0; i < 6; i++) {
    // Math: '<S1>/Square3' incorporates:
    //   Math: '<S1>/Square1'

    rtb_Fcn = rtb_Square_n[i];
    rtb_vq_ref = rtb_Fcn * rtb_Fcn;
    rtb_TmpSignalConversionAtSFun_h[i] = rtb_vq_ref;

    // Gain: '<S1>/Gain6' incorporates:
    //   Math: '<S1>/Square3'

    rtb_Fcn = rtb_Pm * rtb_vq_ref;

    // Gain: '<S29>/Gain3' incorporates:
    //   Math: '<S29>/Square'

    rtb_us[i] = rtb_Fcn * rtb_Fcn * Mean2_AccVal;
  }

  // S-Function (sdspstatfcns): '<S29>/Mean2'
  Mean2_AccVal = rtb_us[0];
  for (i = 4; i >= 0; i--) {
    Mean2_AccVal += rtb_us[5 - i];
  }

  Mean2_AccVal /= 6.0;

  // End of S-Function (sdspstatfcns): '<S29>/Mean2'

  // SignalConversion generated from: '<S29>/Vector Concatenate'
  rtb_VectorConcatenate[0] = Mean2_AccVal;

  // Sum: '<S29>/Sum'
  for (i = 0; i < 6; i++) {
    rtb_VectorConcatenate[i + 1] = rtb_us[i] - Mean2_AccVal;
  }

  // End of Sum: '<S29>/Sum'

  // S-Function (ADC): '<S131>/ADC'
  imperix_M2C_NN_control_2024b_B.ADC_n = (float)(*ix_raw_adc_ptr_0_0) *
    0.00045776F + 0.0F;

  // S-Function (ADC): '<S133>/ADC'
  imperix_M2C_NN_control_2024b_B.ADC_p = (float)(*ix_raw_adc_ptr_1_0) *
    0.00045776F + 0.0F;

  // S-Function (ADC): '<S123>/ADC'
  imperix_M2C_NN_control_2024b_B.ADC_fj = (float)(*ix_raw_adc_ptr_2_0) *
    0.00045776F + 0.0F;

  // S-Function (ADC): '<S111>/ADC'
  imperix_M2C_NN_control_2024b_B.ADC_o = (float)(*ix_raw_adc_ptr_3_0) *
    0.00045776F + 0.0F;

  // S-Function (ADC): '<S125>/ADC'
  imperix_M2C_NN_control_2024b_B.ADC_bn = (float)(*ix_raw_adc_ptr_4_0) *
    0.00045776F + 0.0F;

  // S-Function (ADC): '<S127>/ADC'
  imperix_M2C_NN_control_2024b_B.ADC_i = (float)(*ix_raw_adc_ptr_5_0) *
    0.00045776F + 0.0F;

  // SignalConversion generated from: '<S1>/Gain1' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion24'
  //   DataTypeConversion: '<S1>/Data Type Conversion25'
  //   DataTypeConversion: '<S1>/Data Type Conversion26'
  //   DataTypeConversion: '<S1>/Data Type Conversion27'
  //   DataTypeConversion: '<S1>/Data Type Conversion28'
  //   DataTypeConversion: '<S1>/Data Type Conversion7'

  rtb_us[0] = imperix_M2C_NN_control_2024b_B.ADC_n;
  rtb_us[1] = imperix_M2C_NN_control_2024b_B.ADC_p;
  rtb_us[2] = imperix_M2C_NN_control_2024b_B.ADC_fj;
  rtb_us[3] = imperix_M2C_NN_control_2024b_B.ADC_o;
  rtb_us[4] = imperix_M2C_NN_control_2024b_B.ADC_bn;
  rtb_us[5] = imperix_M2C_NN_control_2024b_B.ADC_i;

  // Gain: '<S1>/Gain1'
  for (i = 0; i < 5; i++) {
    rtb_Gain1[i] = 0.0;
  }

  for (i = 0; i < 6; i++) {
    rtb_Pm = rtb_us[i];
    for (rtb_Gain1_p_tmp = 0; rtb_Gain1_p_tmp < 5; rtb_Gain1_p_tmp++) {
      rtb_Gain1[rtb_Gain1_p_tmp] += imperix_M2C_NN_control_2024b_P.A[5 * i +
        rtb_Gain1_p_tmp] * rtb_Pm;
    }
  }

  // End of Gain: '<S1>/Gain1'

  // MATLAB Function: '<S1>/Tab0'
  Mean2_AccVal = 0.0;
  rtb_Fcn = 0.0;
  for (i = 0; i < 3; i++) {
    rtb_Pm = rtb_Gain1[i + 2];
    Mean2_AccVal += a[3 * i] * rtb_Pm;
    rtb_Fcn += a[3 * i + 1] * rtb_Pm;
  }

  // End of MATLAB Function: '<S1>/Tab0'

  // SignalConversion generated from: '<S145>/Gain3' incorporates:
  //   Constant: '<S29>/Constant'

  rtb_Gain1_n[0] = Mean2_AccVal;
  rtb_Gain1_n[1] = rtb_Fcn;
  rtb_Gain1_n[2] = imperix_M2C_NN_control_2024b_P.Constant_Value;

  // Gain: '<S353>/Gain3'
  rtb_TmpSignalConversionAtGain_0 = 0.0;
  rtb_TmpSignalConversionAtGain_1 = 0.0;

  // Gain: '<S145>/Gain3'
  rtb_Gain1_p = 0.0;
  rtb_Gain20_idx_0 = 0.0;
  for (i = 0; i < 3; i++) {
    rtb_Pm = rtb_Gain1_n[i];
    rtb_Gain1_p += imperix_M2C_NN_control_2024b_P.Gain3_Gain[3 * i] * rtb_Pm;

    // Gain: '<S353>/Gain3' incorporates:
    //   Gain: '<S145>/Gain3'

    rtb_Gain1_p_tmp = 3 * i + 1;
    rtb_Gain20_idx_0 +=
      imperix_M2C_NN_control_2024b_P.Gain3_Gain[rtb_Gain1_p_tmp] * rtb_Pm;

    // Gain: '<S353>/Gain3' incorporates:
    //   Gain: '<S145>/Gain3'

    rtb_Pm = rtb_Gain1[i + 2];
    rtb_TmpSignalConversionAtGain_0 +=
      imperix_M2C_NN_control_2024b_P.Gain3_Gain_n[3 * i] * rtb_Pm;
    rtb_TmpSignalConversionAtGain_1 +=
      imperix_M2C_NN_control_2024b_P.Gain3_Gain_n[rtb_Gain1_p_tmp] * rtb_Pm;
  }

  // SignalConversion generated from: '<S29>/Vector Concatenate' incorporates:
  //   Gain: '<S145>/Gain3'

  rtb_VectorConcatenate[7] = rtb_Gain1_p;
  rtb_VectorConcatenate[8] = rtb_Gain20_idx_0;

  // Gain: '<S353>/Gain1'
  rtb_TmpSignalConversionAtGain_0 *= imperix_M2C_NN_control_2024b_P.Gain1_Gain;
  rtb_TmpSignalConversionAtGain_1 *= imperix_M2C_NN_control_2024b_P.Gain1_Gain;

  // InitialCondition: '<S141>/Initial'
  if (imperix_M2C_NN_control_2024b_DW.Initial_FirstOutputTime) {
    imperix_M2C_NN_control_2024b_DW.Initial_FirstOutputTime = false;

    // InitialCondition: '<S141>/Initial'
    Mean2_AccVal =
      imperix_M2C_NN_control_2024b_P.IntegratorwithWrappedStateDis_g;
  } else {
    // InitialCondition: '<S141>/Initial' incorporates:
    //   Bias: '<S144>/Bias'
    //   Gain: '<S144>/Gain'
    //   Gain: '<S144>/Gain1'
    //   Rounding: '<S144>/Rounding Function'
    //   Sum: '<S144>/Sum1'

    Mean2_AccVal = imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE - std::
      floor(1.0 /
            (imperix_M2C_NN_control_2024b_P.IntegratorwithWrappedStateDis_p -
             imperix_M2C_NN_control_2024b_P.IntegratorwithWrappedStateDiscr) *
            (imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE -
             imperix_M2C_NN_control_2024b_P.IntegratorwithWrappedStateDiscr)) *
      (imperix_M2C_NN_control_2024b_P.IntegratorwithWrappedStateDis_p -
       imperix_M2C_NN_control_2024b_P.IntegratorwithWrappedStateDiscr);
  }

  // End of InitialCondition: '<S141>/Initial'

  // DiscreteIntegrator: '<S141>/Integrator' incorporates:
  //   Constant: '<S142>/Constant'
  //   Constant: '<S143>/Constant'
  //   Logic: '<S141>/Logical Operator'
  //   RelationalOperator: '<S142>/Compare'
  //   RelationalOperator: '<S143>/Compare'

  if ((imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE <
       imperix_M2C_NN_control_2024b_P.IntegratorwithWrappedStateDiscr) ||
      (imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE >=
       imperix_M2C_NN_control_2024b_P.IntegratorwithWrappedStateDis_p)) {
    imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE = Mean2_AccVal;
  }

  // Fcn: '<S352>/Fcn' incorporates:
  //   DiscreteIntegrator: '<S141>/Integrator'

  rtb_Fcn = rtb_TmpSignalConversionAtGain_0 * std::cos
    (imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE) +
    rtb_TmpSignalConversionAtGain_1 * std::sin
    (imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE);

  // Fcn: '<S352>/Fcn1' incorporates:
  //   DiscreteIntegrator: '<S141>/Integrator'

  rtb_Fcn1 = -rtb_TmpSignalConversionAtGain_0 * std::sin
    (imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE) +
    rtb_TmpSignalConversionAtGain_1 * std::cos
    (imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE);

  // S-Function (ADC): '<S129>/ADC'
  imperix_M2C_NN_control_2024b_B.ADC_j = (float)(*ix_raw_adc_ptr_4_1) *
    0.012207F + 0.0F;

  // MATLAB Function: '<S1>/Flux obs2' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'
  //   SignalConversion generated from: '<S24>/ SFunction '

  imperix_M2C_NN_control_2024b_DW.psir0 =
    (imperix_M2C_NN_control_2024b_P.prmt_EST[1] /
     imperix_M2C_NN_control_2024b_P.prmt_EST[0] *
     imperix_M2C_NN_control_2024b_DW.psir0 + rtb_Fcn *
     imperix_M2C_NN_control_2024b_P.prmt_EST[2]) /
    (imperix_M2C_NN_control_2024b_P.prmt_EST[1] /
     imperix_M2C_NN_control_2024b_P.prmt_EST[0] + 1.0);
  if (imperix_M2C_NN_control_2024b_DW.psir0 == 0.0) {
    Mean2_AccVal = 0.0;
  } else {
    Mean2_AccVal = rtb_Fcn1 * imperix_M2C_NN_control_2024b_P.prmt_EST[2] /
      (imperix_M2C_NN_control_2024b_P.prmt_EST[1] *
       imperix_M2C_NN_control_2024b_DW.psir0);
  }

  Mean2_AccVal += imperix_M2C_NN_control_2024b_B.ADC_j;

  // S-Function (TUNABLE_PARAM): '<S345>/S-Function'
  imperix_M2C_NN_control_2024b_B.SFunction = flux_ref;

  // S-Function (TUNABLE_PARAM): '<S347>/S-Function'
  imperix_M2C_NN_control_2024b_B.SFunction_f = flux_control;

  // MATLAB Function: '<S1>/Flux Control Proportional Control1' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion79'
  //   DataTypeConversion: '<S1>/Data Type Conversion82'
  //   Gain: '<S1>/Gain8'
  //   MATLAB Function: '<S1>/Flux obs2'

  Kpt = imperix_M2C_NN_control_2024b_P.prmt_FC[0] / 1.5;
  Kpt *= imperix_M2C_NN_control_2024b_P.Gain8_Gain *
    imperix_M2C_NN_control_2024b_B.SFunction /
    imperix_M2C_NN_control_2024b_P.prmt_FC[3] * (Kpt + 1.0) / Kpt -
    imperix_M2C_NN_control_2024b_P.Gain8_Gain *
    imperix_M2C_NN_control_2024b_DW.psir0 /
    imperix_M2C_NN_control_2024b_P.prmt_FC[3];
  if (Kpt >= imperix_M2C_NN_control_2024b_P.prmt_FC[1]) {
    Kpt = imperix_M2C_NN_control_2024b_P.prmt_FC[1];
  } else if (Kpt <= -imperix_M2C_NN_control_2024b_P.prmt_FC[1]) {
    Kpt = -imperix_M2C_NN_control_2024b_P.prmt_FC[1];
  }

  Kpt *= static_cast<real_T>(imperix_M2C_NN_control_2024b_B.SFunction_f);

  // End of MATLAB Function: '<S1>/Flux Control Proportional Control1'

  // RateTransition generated from: '<S1>/Product4' incorporates:
  //   RateTransition generated from: '<S1>/Speed Control Proportional Integral Control1'

  tmp = (imperix_M2C_NN_control_2024b_M->Timing.RateInteraction.TID0_1 == 1);
  if (tmp) {
    // RateTransition generated from: '<S1>/Product4'
    imperix_M2C_NN_control_2024b_B.iq_ref =
      imperix_M2C_NN_control_2024b_DW.iq_ref_Buffer0;
  }

  // End of RateTransition generated from: '<S1>/Product4'

  // S-Function (TUNABLE_PARAM): '<S351>/S-Function'
  imperix_M2C_NN_control_2024b_B.SFunction_c = speed_control;

  // Product: '<S1>/Product4' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion81'

  rtb_Product4 = imperix_M2C_NN_control_2024b_B.iq_ref * static_cast<real_T>
    (imperix_M2C_NN_control_2024b_B.SFunction_c);

  // MATLAB Function: '<S1>/Output Current Control Proportional Integral Control1' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion82'
  //   Gain: '<S1>/Gain31'
  //   SignalConversion generated from: '<S30>/ SFunction '

  imperix_M2C_NN_control_2024b_DW.ad = (imperix_M2C_NN_control_2024b_P.prmt_OCC
    [1] - 1.0) * imperix_M2C_NN_control_2024b_DW.ud /
    imperix_M2C_NN_control_2024b_P.prmt_OCC[0] +
    imperix_M2C_NN_control_2024b_DW.ad *
    imperix_M2C_NN_control_2024b_P.prmt_OCC[1];
  imperix_M2C_NN_control_2024b_DW.ud = ((Kpt -
    imperix_M2C_NN_control_2024b_P.Gain31_Gain * rtb_Fcn) -
    imperix_M2C_NN_control_2024b_DW.ad) *
    imperix_M2C_NN_control_2024b_P.prmt_OCC[0];
  imperix_M2C_NN_control_2024b_DW.aq = (imperix_M2C_NN_control_2024b_P.prmt_OCC
    [1] - 1.0) * imperix_M2C_NN_control_2024b_DW.uq /
    imperix_M2C_NN_control_2024b_P.prmt_OCC[0] +
    imperix_M2C_NN_control_2024b_DW.aq *
    imperix_M2C_NN_control_2024b_P.prmt_OCC[1];
  imperix_M2C_NN_control_2024b_DW.uq = ((rtb_Product4 -
    imperix_M2C_NN_control_2024b_P.Gain31_Gain * rtb_Fcn1) -
    imperix_M2C_NN_control_2024b_DW.aq) *
    imperix_M2C_NN_control_2024b_P.prmt_OCC[0];
  mag_u = std::sqrt(imperix_M2C_NN_control_2024b_DW.ud *
                    imperix_M2C_NN_control_2024b_DW.ud +
                    imperix_M2C_NN_control_2024b_DW.uq *
                    imperix_M2C_NN_control_2024b_DW.uq);
  ang_u = rt_atan2d_snf(imperix_M2C_NN_control_2024b_DW.uq,
                        imperix_M2C_NN_control_2024b_DW.ud);
  if (mag_u >= imperix_M2C_NN_control_2024b_P.prmt_OCC[2]) {
    mag_u = imperix_M2C_NN_control_2024b_P.prmt_OCC[2];
  } else if (mag_u <= -imperix_M2C_NN_control_2024b_P.prmt_OCC[2]) {
    mag_u = -imperix_M2C_NN_control_2024b_P.prmt_OCC[2];
  }

  rtb_vd_ref = (mag_u * std::cos(ang_u) - Mean2_AccVal *
                imperix_M2C_NN_control_2024b_P.prmt_OCC[4] * rtb_Product4) *
    static_cast<real_T>(imperix_M2C_NN_control_2024b_B.SFunction_f);
  rtb_vq_ref = (Mean2_AccVal * imperix_M2C_NN_control_2024b_P.prmt_OCC[4] * Kpt
                + mag_u * std::sin(ang_u)) * static_cast<real_T>
    (imperix_M2C_NN_control_2024b_B.SFunction_f);

  // End of MATLAB Function: '<S1>/Output Current Control Proportional Integral Control1' 

  // MATLAB Function: '<S1>/dq --> ab' incorporates:
  //   DiscreteIntegrator: '<S141>/Integrator'
  //   SignalConversion generated from: '<S107>/ SFunction '

  mag_u = std::cos(imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE) *
    rtb_vd_ref + -std::sin(imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE) *
    rtb_vq_ref;
  ang_u = std::sin(imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE) *
    rtb_vd_ref + std::cos(imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE) *
    rtb_vq_ref;

  // SignalConversion generated from: '<S146>/Gain3' incorporates:
  //   Constant: '<S29>/Constant1'
  //   Gain: '<S1>/Gain84'

  rtb_Gain1_n[0] = imperix_M2C_NN_control_2024b_P.Gain84_Gain * mag_u;
  rtb_Gain1_n[1] = imperix_M2C_NN_control_2024b_P.Gain84_Gain * ang_u;
  rtb_Gain1_n[2] = imperix_M2C_NN_control_2024b_P.Constant1_Value;

  // Gain: '<S146>/Gain3'
  rtb_TmpSignalConversionAtGain_0 = 0.0;
  rtb_TmpSignalConversionAtGain_1 = 0.0;
  rtb_TmpSignalConversionAtGain_2 = 0.0;
  for (i = 0; i < 3; i++) {
    rtb_Pm = rtb_Gain1_n[i];
    rtb_TmpSignalConversionAtGain_0 +=
      imperix_M2C_NN_control_2024b_P.Gain3_Gain_j[3 * i] * rtb_Pm;
    rtb_TmpSignalConversionAtGain_1 +=
      imperix_M2C_NN_control_2024b_P.Gain3_Gain_j[3 * i + 1] * rtb_Pm;
    rtb_TmpSignalConversionAtGain_2 +=
      imperix_M2C_NN_control_2024b_P.Gain3_Gain_j[3 * i + 2] * rtb_Pm;
  }

  // End of Gain: '<S146>/Gain3'

  // Sum: '<S29>/Sum2'
  rtb_TmpSignalConversionAtGain_0 -= rtb_TmpSignalConversionAtGain_2;

  // Sum: '<S29>/Sum3'
  rtb_TmpSignalConversionAtGain_2 = rtb_TmpSignalConversionAtGain_1 -
    rtb_TmpSignalConversionAtGain_2;

  // SignalConversion generated from: '<S29>/Vector Concatenate'
  rtb_VectorConcatenate[9] = rtb_TmpSignalConversionAtGain_0;
  rtb_VectorConcatenate[10] = rtb_TmpSignalConversionAtGain_2;

  // Product: '<S29>/Product' incorporates:
  //   Gain: '<S145>/Gain3'

  rtb_VectorConcatenate[11] = rtb_Gain1_p * rtb_TmpSignalConversionAtGain_0;
  rtb_VectorConcatenate[12] = rtb_Gain20_idx_0 * rtb_TmpSignalConversionAtGain_2;

  // SignalConversion generated from: '<S29>/Vector Concatenate'
  rtb_VectorConcatenate[13] = rtb_Gain1[0];

  // DataTypeConversion: '<S29>/Data Type Conversion2' incorporates:
  //   Concatenate: '<S29>/Vector Concatenate'
  //   Gain: '<S29>/Gain'

  for (i = 0; i < 14; i++) {
    tmp_0[i] = static_cast<real32_T>(1.0 / imperix_M2C_NN_control_2024b_P.Xmax[i]
      * rtb_VectorConcatenate[i]);
  }

  // End of DataTypeConversion: '<S29>/Data Type Conversion2'

  // MATLAB Function: '<S147>/MLFB'
  imperix_M2C_NN_control__predict(tmp_0, tmp_1);

  // Gain: '<S29>/Gain1' incorporates:
  //   DataTypeConversion: '<S29>/Data Type Conversion6'
  //   MATLAB Function: '<S147>/MLFB'

  rtb_Gain1_n[0] = imperix_M2C_NN_control_2024b_P.Ymax[0] * tmp_1[0];
  rtb_Gain1_n[1] = imperix_M2C_NN_control_2024b_P.Ymax[1] * tmp_1[1];
  rtb_Gain1_n[2] = imperix_M2C_NN_control_2024b_P.Ymax[2] * tmp_1[2];

  // DataTypeConversion: '<S152>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion = static_cast<real32_T>
    (rtb_Gain1_n[2]);

  // S-Function (PROBE): '<S152>/S-Function'
  v0_ref = imperix_M2C_NN_control_2024b_B.DataTypeConversion;

  // Gain: '<S29>/Gain2'
  for (i = 0; i < 6; i++) {
    imperix_M2C_NN_control_2024b_B.Gain2[i] = 0.0;
  }

  for (i = 0; i < 2; i++) {
    rtb_Pm = rtb_Gain1_n[i];
    for (rtb_Gain1_p_tmp = 0; rtb_Gain1_p_tmp < 6; rtb_Gain1_p_tmp++) {
      imperix_M2C_NN_control_2024b_B.Gain2[rtb_Gain1_p_tmp] +=
        imperix_M2C_NN_control_2024b_P.N[6 * i + rtb_Gain1_p_tmp] * rtb_Pm;
    }
  }

  // End of Gain: '<S29>/Gain2'

  // DataTypeConversion: '<S154>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_o = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_B.Gain2[2]);

  // S-Function (PROBE): '<S154>/S-Function'
  icr_zref = imperix_M2C_NN_control_2024b_B.DataTypeConversion_o;

  // DataTypeConversion: '<S156>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_d = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_B.Gain2[3]);

  // S-Function (PROBE): '<S156>/S-Function'
  ias_zref = imperix_M2C_NN_control_2024b_B.DataTypeConversion_d;

  // DataTypeConversion: '<S158>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_a = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_B.Gain2[4]);

  // S-Function (PROBE): '<S158>/S-Function'
  ibs_zref = imperix_M2C_NN_control_2024b_B.DataTypeConversion_a;

  // DataTypeConversion: '<S160>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_i = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_B.Gain2[5]);

  // S-Function (PROBE): '<S160>/S-Function'
  ics_zref = imperix_M2C_NN_control_2024b_B.DataTypeConversion_i;

  // DataTypeConversion: '<S162>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain17'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_il = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.Gain17_Gain * Kpt);

  // S-Function (PROBE): '<S162>/S-Function'
  imd_r = imperix_M2C_NN_control_2024b_B.DataTypeConversion_il;

  // Sum: '<S1>/Sum2' incorporates:
  //   Math: '<S1>/Square1'

  rtb_TmpSignalConversionAtGain_2 = -0.0;
  for (i = 0; i < 6; i++) {
    rtb_TmpSignalConversionAtGain_2 += rtb_TmpSignalConversionAtSFun_h[i];
  }

  // SignalConversion generated from: '<S18>/Gain3' incorporates:
  //   Constant: '<S1>/Constant1'

  rtb_Gain31_0[0] = mag_u;
  rtb_Gain31_0[1] = ang_u;
  rtb_Gain31_0[2] = imperix_M2C_NN_control_2024b_P.Constant1_Value_l;

  // Gain: '<S18>/Gain3'
  rtb_TmpSignalConversionAtGain_0 = 0.0;
  rtb_TmpSignalConversionAtGain_1 = 0.0;
  rtb_Gain20_idx_0 = 0.0;
  for (i = 0; i < 3; i++) {
    rtb_Pm = rtb_Gain31_0[i];
    rtb_TmpSignalConversionAtGain_0 +=
      imperix_M2C_NN_control_2024b_P.Gain3_Gain_nb[3 * i] * rtb_Pm;
    rtb_TmpSignalConversionAtGain_1 +=
      imperix_M2C_NN_control_2024b_P.Gain3_Gain_nb[3 * i + 1] * rtb_Pm;
    rtb_Gain20_idx_0 += imperix_M2C_NN_control_2024b_P.Gain3_Gain_nb[3 * i + 2] *
      rtb_Pm;
  }

  // End of Gain: '<S18>/Gain3'

  // Gain: '<S1>/Gain'
  rtb_Gain1_p = imperix_M2C_NN_control_2024b_P.Gain_Gain *
    rtb_TmpSignalConversionAtGain_0;
  rtb_TmpSignalConversionAtGain_0 = rtb_Gain1_p;

  // SignalConversion generated from: '<S31>/ SFunction ' incorporates:
  //   MATLAB Function: '<S1>/P'

  rtb_TmpSignalConversionAtSFun_h[3] = rtb_Gain1_p;

  // Gain: '<S1>/Gain'
  rtb_Gain1_p = imperix_M2C_NN_control_2024b_P.Gain_Gain *
    rtb_TmpSignalConversionAtGain_1;
  rtb_TmpSignalConversionAtGain_1 = rtb_Gain1_p;

  // SignalConversion generated from: '<S31>/ SFunction ' incorporates:
  //   MATLAB Function: '<S1>/P'

  rtb_TmpSignalConversionAtSFun_h[4] = rtb_Gain1_p;

  // Gain: '<S1>/Gain'
  rtb_Gain1_p = imperix_M2C_NN_control_2024b_P.Gain_Gain * rtb_Gain20_idx_0;

  // MATLAB Function: '<S1>/P' incorporates:
  //   SignalConversion generated from: '<S31>/ SFunction '

  rtb_Gain31_0[0] = rtb_Gain1[2];
  rtb_Gain31_0[1] = rtb_Gain1[3];
  rtb_Gain31_0[2] = rtb_Gain1[4];
  rtb_Gain20_idx_0 = 0.0;
  rtb_Gain20_idx_1 = 0.0;
  rtb_TmpSignalConversionAtSFu_kl[0] = rtb_TmpSignalConversionAtSFun_h[3];
  rtb_TmpSignalConversionAtSFu_kl[1] = rtb_TmpSignalConversionAtSFun_h[4];
  rtb_TmpSignalConversionAtSFu_kl[2] = rtb_Gain1_p;
  vab_idx_0 = 0.0;
  vab_idx_1 = 0.0;
  for (i = 0; i < 3; i++) {
    rtb_Pm = rtb_Gain31_0[i];
    rtb_Gain1_p_tmp = i << 1;
    Tab = imperix_M2C_NN_control_2024b_P.Tab[rtb_Gain1_p_tmp];
    rtb_Gain20_idx_0 += Tab * rtb_Pm;
    Tab_0 = imperix_M2C_NN_control_2024b_P.Tab[rtb_Gain1_p_tmp + 1];
    rtb_Gain20_idx_1 += Tab_0 * rtb_Pm;
    rtb_Pm = rtb_TmpSignalConversionAtSFu_kl[i];
    vab_idx_0 += Tab * rtb_Pm;
    vab_idx_1 += Tab_0 * rtb_Pm;
  }

  rtb_Pm = (rtb_Gain20_idx_0 * vab_idx_0 + rtb_Gain20_idx_1 * vab_idx_1) * 1.5;

  // S-Function (TUNABLE_PARAM): '<S339>/S-Function'
  imperix_M2C_NN_control_2024b_B.SFunction_i = input_control;

  // MATLAB Function: '<S1>/TEB Control Proportional Integral Control1' incorporates:
  //   Constant: '<S1>/Constant13'
  //   Constant: '<S1>/Constant2'
  //   DataTypeConversion: '<S1>/Data Type Conversion8'
  //   Gain: '<S1>/Gain19'
  //   Gain: '<S1>/Gain39'
  //   Gain: '<S1>/Gain40'
  //   Math: '<S1>/Square2'
  //   Sum: '<S1>/Sum2'

  rtb_Gain20_idx_1 = rt_powd_snf(imperix_M2C_NN_control_2024b_P.prmt_TEB[9],
    -imperix_M2C_NN_control_2024b_P.prmt_TEB[8] *
    imperix_M2C_NN_control_2024b_P.prmt_TEB[7] *
    imperix_M2C_NN_control_2024b_P.prmt_TEB[6]) * -2.0 * std::cos(std::sqrt(1.0
    - imperix_M2C_NN_control_2024b_P.prmt_TEB[8] *
    imperix_M2C_NN_control_2024b_P.prmt_TEB[8]) *
    (imperix_M2C_NN_control_2024b_P.prmt_TEB[6] *
     imperix_M2C_NN_control_2024b_P.prmt_TEB[7]));
  rtb_Gain20_idx_0 = ((rtb_Gain20_idx_1 + 1.0) + 1.0) /
    (imperix_M2C_NN_control_2024b_P.Constant13_Value *
     imperix_M2C_NN_control_2024b_P.prmt_TEB[6]);
  rtb_Gain20_idx_1 = (1.0 - rt_powd_snf(imperix_M2C_NN_control_2024b_P.prmt_TEB
    [9], -2.0 * imperix_M2C_NN_control_2024b_P.prmt_TEB[8] *
    imperix_M2C_NN_control_2024b_P.prmt_TEB[7] *
    imperix_M2C_NN_control_2024b_P.prmt_TEB[6])) / ((rtb_Gain20_idx_1 + 1.0) +
    1.0);
  imperix_M2C_NN_control_2024b_DW.a = (rtb_Gain20_idx_1 - 1.0) *
    imperix_M2C_NN_control_2024b_DW.u / rtb_Gain20_idx_0 +
    imperix_M2C_NN_control_2024b_DW.a * rtb_Gain20_idx_1;
  imperix_M2C_NN_control_2024b_DW.u = ((6.0 * imperix_M2C_NN_control_2024b_P.C /
    (2.0 * imperix_M2C_NN_control_2024b_P.n) *
    (imperix_M2C_NN_control_2024b_P.Constant2_Value *
     imperix_M2C_NN_control_2024b_P.Constant2_Value) -
    imperix_M2C_NN_control_2024b_P.C / (2.0 * imperix_M2C_NN_control_2024b_P.n) *
    rtb_TmpSignalConversionAtGain_2) - imperix_M2C_NN_control_2024b_DW.a) *
    rtb_Gain20_idx_0;
  if (imperix_M2C_NN_control_2024b_DW.u >=
      imperix_M2C_NN_control_2024b_P.prmt_TEB[2]) {
    imperix_M2C_NN_control_2024b_DW.u = imperix_M2C_NN_control_2024b_P.prmt_TEB
      [2];
  } else if (imperix_M2C_NN_control_2024b_DW.u <=
             -imperix_M2C_NN_control_2024b_P.prmt_TEB[2]) {
    imperix_M2C_NN_control_2024b_DW.u =
      -imperix_M2C_NN_control_2024b_P.prmt_TEB[2];
  }

  rtb_TmpSignalConversionAtGain_2 = (imperix_M2C_NN_control_2024b_DW.u -
    imperix_M2C_NN_control_2024b_P.Gain19_Gain * rtb_Pm * 0.0 /
    imperix_M2C_NN_control_2024b_P.Constant13_Value) *
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // End of MATLAB Function: '<S1>/TEB Control Proportional Integral Control1'

  // DataTypeConversion: '<S164>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_m = static_cast<real32_T>
    (rtb_TmpSignalConversionAtGain_2);

  // S-Function (PROBE): '<S164>/S-Function'
  iP_ref = imperix_M2C_NN_control_2024b_B.DataTypeConversion_m;

  // DataTypeConversion: '<S166>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain17'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_dx = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.Gain17_Gain * rtb_Product4);

  // S-Function (PROBE): '<S166>/S-Function'
  imq_r = imperix_M2C_NN_control_2024b_B.DataTypeConversion_dx;

  // DataTypeConversion: '<S168>/Data Type Conversion' incorporates:
  //   DiscreteIntegrator: '<S141>/Integrator'
  //   Fcn: '<S3>/abc->d'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_k = static_cast<real32_T>
    (((std::cos(imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE -
                2.0943951023931953) * rtb_Gain1[3] + rtb_Gain1[2] * std::cos
       (imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE)) + std::cos
      (imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE + 2.0943951023931953) *
      rtb_Gain1[4]) * 0.66666666666666663);

  // S-Function (PROBE): '<S168>/S-Function'
  imd = imperix_M2C_NN_control_2024b_B.DataTypeConversion_k;

  // DataTypeConversion: '<S170>/Data Type Conversion' incorporates:
  //   DiscreteIntegrator: '<S141>/Integrator'
  //   Fcn: '<S3>/abc->q'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_c = static_cast<real32_T>(((
    -rtb_Gain1[2] * std::sin(imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE)
    - std::sin(imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE -
               2.0943951023931953) * rtb_Gain1[3]) - std::sin
    (imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE + 2.0943951023931953) *
    rtb_Gain1[4]) * 0.66666666666666663);

  // S-Function (PROBE): '<S170>/S-Function'
  imq = imperix_M2C_NN_control_2024b_B.DataTypeConversion_c;

  // DataTypeConversion: '<S172>/Data Type Conversion' incorporates:
  //   MATLAB Function: '<S1>/Flux obs2'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_j = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_DW.psir0);

  // S-Function (PROBE): '<S172>/S-Function'
  flux = imperix_M2C_NN_control_2024b_B.DataTypeConversion_j;

  // DataTypeConversion: '<S174>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion7'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_p =
    imperix_M2C_NN_control_2024b_B.ADC_n;

  // S-Function (PROBE): '<S174>/S-Function'
  iar = imperix_M2C_NN_control_2024b_B.DataTypeConversion_p;

  // DataTypeConversion: '<S178>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_h = static_cast<real32_T>
    (rtb_vd_ref);

  // S-Function (PROBE): '<S178>/S-Function'
  vd_ref = imperix_M2C_NN_control_2024b_B.DataTypeConversion_h;

  // DataTypeConversion: '<S180>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_dy = static_cast<real32_T>
    (rtb_vq_ref);

  // S-Function (PROBE): '<S180>/S-Function'
  vq_ref = imperix_M2C_NN_control_2024b_B.DataTypeConversion_dy;

  // MATLAB Function: '<S1>/Input Current Control Proportional Integral Control' incorporates:
  //   Constant: '<S1>/Constant14'
  //   DataTypeConversion: '<S1>/Data Type Conversion8'
  //   SignalConversion generated from: '<S26>/ SFunction '

  imperix_M2C_NN_control_2024b_DW.a_d =
    (imperix_M2C_NN_control_2024b_P.prmt_ICC[1] - 1.0) *
    imperix_M2C_NN_control_2024b_DW.u_n /
    imperix_M2C_NN_control_2024b_P.prmt_ICC[0] +
    imperix_M2C_NN_control_2024b_DW.a_d *
    imperix_M2C_NN_control_2024b_P.prmt_ICC[1];
  imperix_M2C_NN_control_2024b_DW.u_n = ((rtb_TmpSignalConversionAtGain_2 -
    rtb_Gain1[0]) - imperix_M2C_NN_control_2024b_DW.a_d) *
    imperix_M2C_NN_control_2024b_P.prmt_ICC[0];
  if (imperix_M2C_NN_control_2024b_DW.u_n >=
      imperix_M2C_NN_control_2024b_P.prmt_ICC[2]) {
    imperix_M2C_NN_control_2024b_DW.u_n =
      imperix_M2C_NN_control_2024b_P.prmt_ICC[2];
  } else if (imperix_M2C_NN_control_2024b_DW.u_n <=
             -imperix_M2C_NN_control_2024b_P.prmt_ICC[2]) {
    imperix_M2C_NN_control_2024b_DW.u_n =
      -imperix_M2C_NN_control_2024b_P.prmt_ICC[2];
  }

  rtb_vd_ref = (1.5 * imperix_M2C_NN_control_2024b_P.Constant14_Value +
                imperix_M2C_NN_control_2024b_DW.u_n) *
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // End of MATLAB Function: '<S1>/Input Current Control Proportional Integral Control' 

  // DataTypeConversion: '<S182>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_g = static_cast<real32_T>
    (rtb_vd_ref);

  // S-Function (PROBE): '<S182>/S-Function'
  vy_ref = imperix_M2C_NN_control_2024b_B.DataTypeConversion_g;

  // DataTypeConversion: '<S184>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_dg = static_cast<real32_T>
    (rtb_Gain1[0]);

  // S-Function (PROBE): '<S184>/S-Function'
  igd = imperix_M2C_NN_control_2024b_B.DataTypeConversion_dg;

  // DataTypeConversion: '<S186>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_hg = static_cast<real32_T>
    (rtb_Pm);

  // S-Function (PROBE): '<S186>/S-Function'
  p_m = imperix_M2C_NN_control_2024b_B.DataTypeConversion_hg;
  imperix_M2C_NN_c_MovingRMS1(imperix_M2C_NN_control_2024b_B.Gain2,
    &imperix_M2C_NN_control_2024b_B.MovingRMS1,
    &imperix_M2C_NN_control_2024b_DW.MovingRMS1);

  // S-Function (sdspstatfcns): '<S1>/Mean2' incorporates:
  //   MATLABSystem: '<S1>/Moving RMS1'

  rtb_Pm = imperix_M2C_NN_control_2024b_B.MovingRMS1.MovingRMS1[0];
  for (i = 4; i >= 0; i--) {
    rtb_Pm += imperix_M2C_NN_control_2024b_B.MovingRMS1.MovingRMS1[5 - i];
  }

  // MATLAB Function: '<S1>/Ib'
  rtb_vq_ref = rtb_Gain1[0] / 3.0;
  rtb_TmpSignalConversionAtGain_2 = 0.1 * rtb_Gain1[4];
  rtb_Gain20_idx_0 = 0.1 * rtb_Gain1[3];
  rtb_Gain20_idx_1 = 0.4 * rtb_Gain1[2];
  imperix_M2C_NN_control_2024b_B.ib[0] = ((rtb_vq_ref - rtb_Gain20_idx_1) +
    rtb_Gain20_idx_0) + rtb_TmpSignalConversionAtGain_2;
  vab_idx_0 = 0.1 * rtb_Gain1[2];
  rtb_vq_ref += vab_idx_0;
  vab_idx_1 = 0.4 * rtb_Gain1[3];
  imperix_M2C_NN_control_2024b_B.ib[1] = (rtb_vq_ref - vab_idx_1) +
    rtb_TmpSignalConversionAtGain_2;
  Tab = 0.4 * rtb_Gain1[4];
  imperix_M2C_NN_control_2024b_B.ib[2] = (rtb_vq_ref + rtb_Gain20_idx_0) - Tab;
  rtb_vq_ref = -rtb_Gain1[0] / 3.0;
  imperix_M2C_NN_control_2024b_B.ib[3] = ((rtb_vq_ref - rtb_Gain20_idx_1) +
    rtb_Gain20_idx_0) + rtb_TmpSignalConversionAtGain_2;
  rtb_vq_ref += vab_idx_0;
  imperix_M2C_NN_control_2024b_B.ib[4] = (rtb_vq_ref - vab_idx_1) +
    rtb_TmpSignalConversionAtGain_2;
  imperix_M2C_NN_control_2024b_B.ib[5] = (rtb_vq_ref + rtb_Gain20_idx_0) - Tab;
  imperix_M2C_NN_c_MovingRMS1(imperix_M2C_NN_control_2024b_B.ib,
    &imperix_M2C_NN_control_2024b_B.MovingRMS2,
    &imperix_M2C_NN_control_2024b_DW.MovingRMS2);

  // S-Function (sdspstatfcns): '<S1>/Mean3' incorporates:
  //   MATLABSystem: '<S1>/Moving RMS2'

  rtb_vq_ref = imperix_M2C_NN_control_2024b_B.MovingRMS2.MovingRMS1[0];
  for (i = 4; i >= 0; i--) {
    rtb_vq_ref += imperix_M2C_NN_control_2024b_B.MovingRMS2.MovingRMS1[5 - i];
  }

  rtb_vq_ref /= 6.0;

  // End of S-Function (sdspstatfcns): '<S1>/Mean3'

  // MATLAB Function: '<S1>/Divide' incorporates:
  //   S-Function (sdspstatfcns): '<S1>/Mean2'

  if ((rtb_vq_ref == 0.0) || std::isnan(rtb_vq_ref)) {
    rtb_Pm = rtb_Pm / 6.0 / (rtb_vq_ref + 0.001);
  } else {
    rtb_Pm = rtb_Pm / 6.0 / rtb_vq_ref;
  }

  // End of MATLAB Function: '<S1>/Divide'

  // DataTypeConversion: '<S188>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_b = static_cast<real32_T>
    (rtb_Pm);

  // S-Function (PROBE): '<S188>/S-Function'
  izkpi = imperix_M2C_NN_control_2024b_B.DataTypeConversion_b;

  // DataTypeConversion: '<S190>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_l = static_cast<real32_T>
    (rtb_Product4);

  // S-Function (PROBE): '<S190>/S-Function'
  isqr = imperix_M2C_NN_control_2024b_B.DataTypeConversion_l;

  // DataTypeConversion: '<S192>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_m5 = static_cast<real32_T>
    (Kpt);

  // S-Function (PROBE): '<S192>/S-Function'
  isdr = imperix_M2C_NN_control_2024b_B.DataTypeConversion_m5;

  // Gain: '<S1>/Gain41'
  for (i = 0; i < 6; i++) {
    rtb_TmpSignalConversionAtSFun_h[i] = 0.0;
  }

  for (i = 0; i < 6; i++) {
    rtb_Pm = imperix_M2C_NN_control_2024b_B.Gain2[i];
    for (rtb_Gain1_p_tmp = 0; rtb_Gain1_p_tmp < 6; rtb_Gain1_p_tmp++) {
      rtb_TmpSignalConversionAtSFun_h[rtb_Gain1_p_tmp] +=
        imperix_M2C_NN_control_2024b_P.T[6 * i + rtb_Gain1_p_tmp] * rtb_Pm;
    }
  }

  // End of Gain: '<S1>/Gain41'

  // S-Function (TUNABLE_PARAM): '<S343>/S-Function'
  imperix_M2C_NN_control_2024b_B.SFunction_p = enable_cc;

  // S-Function (TUNABLE_PARAM): '<S341>/S-Function'
  imperix_M2C_NN_control_2024b_B.SFunction_n = ie_lambda;

  // MATLAB Function: '<S1>/Circulating Current Control MPC' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion75'

  rtb_TmpSignalConversionAtSFun_d[0] =
    (imperix_M2C_NN_control_2024b_B.SFunction_n + 0.0011111074070546719) * 2.0;
  rtb_TmpSignalConversionAtSFun_d[1] =
    imperix_M2C_NN_control_2024b_B.SFunction_n * 0.0 * 2.0;
  rtb_TmpSignalConversionAtSFun_d[2] =
    imperix_M2C_NN_control_2024b_B.SFunction_n * 0.0 * 2.0;
  rtb_TmpSignalConversionAtSFun_d[3] =
    (imperix_M2C_NN_control_2024b_B.SFunction_n + 0.0011111074070546719) * 2.0;
  i = 0;
  rtb_Gain1_p_tmp = 0;
  exitg1 = false;
  while ((!exitg1) && (rtb_Gain1_p_tmp < 2)) {
    idxAjj = (rtb_Gain1_p_tmp << 1) + rtb_Gain1_p_tmp;
    rtb_Pm = 0.0;
    if (rtb_Gain1_p_tmp >= 1) {
      for (b_k = 0; b_k < 1; b_k++) {
        rtb_Pm += rtb_TmpSignalConversionAtSFun_d[1] *
          rtb_TmpSignalConversionAtSFun_d[1];
      }
    }

    rtb_Pm = rtb_TmpSignalConversionAtSFun_d[idxAjj] - rtb_Pm;
    if (rtb_Pm > 0.0) {
      rtb_Pm = std::sqrt(rtb_Pm);
      rtb_TmpSignalConversionAtSFun_d[idxAjj] = rtb_Pm;
      if (rtb_Gain1_p_tmp + 1 < 2) {
        rtb_Pm = 1.0 / rtb_Pm;
        for (b_k = idxAjj + 2; b_k <= idxAjj + 2; b_k++) {
          rtb_TmpSignalConversionAtSFun_d[b_k - 1] *= rtb_Pm;
        }
      }

      rtb_Gain1_p_tmp++;
    } else {
      rtb_TmpSignalConversionAtSFun_d[idxAjj] = rtb_Pm;
      i = rtb_Gain1_p_tmp + 1;
      exitg1 = true;
    }
  }

  if (i == 0) {
    rtb_TmpSignalConversionAtSFun_d[2] = 0.0;
  }

  Linv[0] = 1.0;
  Linv[1] = 0.0;
  Linv[2] = 0.0;
  Linv[3] = 1.0;
  imperix_M2C_NN_control_trisolve(rtb_TmpSignalConversionAtSFun_d, Linv);
  iA1[0] = false;
  iA1[1] = false;
  iA1[2] = false;
  iA1[3] = false;

  // Gain: '<S1>/Gain61'
  for (i = 0; i < 6; i++) {
    tmp_2[i] = 0.0;
  }

  for (i = 0; i < 6; i++) {
    rtb_Pm = rtb_us[i];
    for (rtb_Gain1_p_tmp = 0; rtb_Gain1_p_tmp < 6; rtb_Gain1_p_tmp++) {
      tmp_2[rtb_Gain1_p_tmp] += imperix_M2C_NN_control_2024b_P.T[6 * i +
        rtb_Gain1_p_tmp] * rtb_Pm;
    }
  }

  // End of Gain: '<S1>/Gain61'

  // MATLAB Function: '<S1>/Circulating Current Control MPC' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion75'

  rtb_Pm = (0.99999666667222276 * tmp_2[4] + 0.0 * tmp_2[5]) -
    rtb_TmpSignalConversionAtSFun_h[4];
  rtb_TmpSignalConversionAtGain_2 = (0.0 * tmp_2[4] + 0.99999666667222276 *
    tmp_2[5]) - rtb_TmpSignalConversionAtSFun_h[5];
  for (i = 0; i < 2; i++) {
    rtb_Gain1_p_tmp = i << 1;
    rtb_vq_ref = Linv[rtb_Gain1_p_tmp + 1];
    rtb_Gain20_idx_0 = Linv[rtb_Gain1_p_tmp];
    Linv_0[rtb_Gain1_p_tmp] = rtb_vq_ref * Linv[1] + rtb_Gain20_idx_0 * Linv[0];
    Linv_0[rtb_Gain1_p_tmp + 1] = rtb_vq_ref * Linv[3] + rtb_Gain20_idx_0 *
      Linv[2];
    rtb_vq_ref = rtb_TmpSignalConversionAtSFun_h[i + 4];
    tmp_3[i] = ((b[i + 2] * rtb_TmpSignalConversionAtGain_2 + b[i] * rtb_Pm) -
                ((rtb_vq_ref - imperix_M2C_NN_control_2024b_DW.ialbet_delr[i]) /
                 0.00016666666666666666 * -0.005 - 0.0001 * rtb_vq_ref) *
                imperix_M2C_NN_control_2024b_B.SFunction_n) * 2.0;
  }

  for (i = 0; i < 8; i++) {
    tmp_4[i] = -imperix_M2C_NN_control_2024b_P.A_cc[i];
  }

  tmp_5[0] = -imperix_M2C_NN_control_2024b_P.b_cc[0];
  tmp_5[1] = -imperix_M2C_NN_control_2024b_P.b_cc[1];
  tmp_5[2] = -imperix_M2C_NN_control_2024b_P.b_cc[2];
  tmp_5[3] = -imperix_M2C_NN_control_2024b_P.b_cc[3];
  imperix_M2C_NN_control_2_qpkwik(Linv, Linv_0, tmp_3, tmp_4, tmp_5, iA1, 200,
    1.0E-6, is_dq, rtb_TmpSignalConversionAtSFun_d, &i);

  // SignalConversion generated from: '<S28>/ SFunction ' incorporates:
  //   Gain: '<S1>/Gain54'
  //   MATLAB Function: '<S1>/MATLAB Function4'

  tmp_2[0] = imperix_M2C_NN_control_2024b_P.Gain54_Gain * rtb_Gain1_n[2];
  tmp_2[1] = rtb_vd_ref;

  // MATLAB Function: '<S1>/Circulating Current Control MPC'
  imperix_M2C_NN_control_2024b_DW.ialbet_delr[0] =
    rtb_TmpSignalConversionAtSFun_h[4];

  // SignalConversion generated from: '<S28>/ SFunction ' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion77'
  //   MATLAB Function: '<S1>/Circulating Current Control MPC'
  //   MATLAB Function: '<S1>/MATLAB Function4'

  tmp_2[2] = mag_u;
  tmp_2[4] = imperix_M2C_NN_control_2024b_B.SFunction_p * is_dq[0];

  // MATLAB Function: '<S1>/Circulating Current Control MPC'
  imperix_M2C_NN_control_2024b_DW.ialbet_delr[1] =
    rtb_TmpSignalConversionAtSFun_h[5];

  // SignalConversion generated from: '<S28>/ SFunction ' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion77'
  //   MATLAB Function: '<S1>/Circulating Current Control MPC'
  //   MATLAB Function: '<S1>/MATLAB Function4'

  tmp_2[3] = ang_u;
  tmp_2[5] = imperix_M2C_NN_control_2024b_B.SFunction_p * is_dq[1];

  // MATLAB Function: '<S1>/MATLAB Function4' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion29'
  //   DataTypeConversion: '<S1>/Data Type Conversion34'
  //   DataTypeConversion: '<S1>/Data Type Conversion39'
  //   DataTypeConversion: '<S1>/Data Type Conversion40'
  //   DataTypeConversion: '<S1>/Data Type Conversion44'
  //   DataTypeConversion: '<S1>/Data Type Conversion47'

  for (i = 0; i < 6; i++) {
    rtb_TmpSignalConversionAtSFun_h[i] = 0.0;
  }

  for (i = 0; i < 6; i++) {
    rtb_Pm = tmp_2[i];
    for (rtb_Gain1_p_tmp = 0; rtb_Gain1_p_tmp < 6; rtb_Gain1_p_tmp++) {
      rtb_TmpSignalConversionAtSFun_h[rtb_Gain1_p_tmp] +=
        imperix_M2C_NN_control_2024b_DW.Tinv[6 * i + rtb_Gain1_p_tmp] * rtb_Pm;
    }
  }

  rtb_us[0] = 4.0 * rtb_TmpSignalConversionAtSFun_h[0] /
    (imperix_M2C_NN_control_2024b_B.ADC + 0.001);
  rtb_us[1] = 4.0 * rtb_TmpSignalConversionAtSFun_h[1] /
    (imperix_M2C_NN_control_2024b_B.ADC_k + 0.001);
  rtb_us[2] = 4.0 * rtb_TmpSignalConversionAtSFun_h[2] /
    (imperix_M2C_NN_control_2024b_B.ADC_e + 0.001);
  rtb_us[3] = 4.0 * rtb_TmpSignalConversionAtSFun_h[3] /
    (imperix_M2C_NN_control_2024b_B.ADC_b + 0.001);
  rtb_us[4] = 4.0 * rtb_TmpSignalConversionAtSFun_h[4] /
    (imperix_M2C_NN_control_2024b_B.ADC_k2 + 0.001);
  rtb_us[5] = 4.0 * rtb_TmpSignalConversionAtSFun_h[5] /
    (imperix_M2C_NN_control_2024b_B.ADC_f + 0.001);
  rtb_us[0] = std::fmax(std::fmin(rtb_us[0], 4.0), 0.0);
  rtb_us[3] = std::fmin(std::fmax(rtb_us[3], -4.0), 0.0);
  rtb_us[1] = std::fmax(std::fmin(rtb_us[1], 4.0), 0.0);
  rtb_us[4] = std::fmin(std::fmax(rtb_us[4], -4.0), 0.0);
  rtb_us[2] = std::fmax(std::fmin(rtb_us[2], 4.0), 0.0);
  rtb_us[5] = std::fmin(std::fmax(rtb_us[5], -4.0), 0.0);

  // DataTypeConversion: '<S194>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_og = static_cast<real32_T>
    (rtb_TmpSignalConversionAtSFun_h[0]);

  // S-Function (PROBE): '<S194>/S-Function'
  vr_ar = imperix_M2C_NN_control_2024b_B.DataTypeConversion_og;

  // DataTypeConversion: '<S196>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_it = static_cast<real32_T>
    (rtb_TmpSignalConversionAtGain_0);

  // S-Function (PROBE): '<S196>/S-Function'
  vma = imperix_M2C_NN_control_2024b_B.DataTypeConversion_it;

  // DataTypeConversion: '<S198>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_l4 = static_cast<real32_T>
    (rtb_TmpSignalConversionAtGain_1);

  // S-Function (PROBE): '<S198>/S-Function'
  vmb = imperix_M2C_NN_control_2024b_B.DataTypeConversion_l4;

  // DataTypeConversion: '<S200>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_kh = static_cast<real32_T>
    (rtb_Gain1_p);

  // S-Function (PROBE): '<S200>/S-Function'
  vmc = imperix_M2C_NN_control_2024b_B.DataTypeConversion_kh;

  // DataTypeConversion: '<S204>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_jl = static_cast<real32_T>
    (rtb_TmpSignalConversionAtSFun_h[1]);

  // S-Function (PROBE): '<S204>/S-Function'
  vr_br = imperix_M2C_NN_control_2024b_B.DataTypeConversion_jl;

  // DataTypeConversion: '<S206>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_f = static_cast<real32_T>
    (rtb_TmpSignalConversionAtSFun_h[2]);

  // S-Function (PROBE): '<S206>/S-Function'
  vr_cr = imperix_M2C_NN_control_2024b_B.DataTypeConversion_f;

  // DataTypeConversion: '<S208>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_dm = static_cast<real32_T>
    (rtb_TmpSignalConversionAtSFun_h[3]);

  // S-Function (PROBE): '<S208>/S-Function'
  vr_as = imperix_M2C_NN_control_2024b_B.DataTypeConversion_dm;

  // DataTypeConversion: '<S210>/Data Type Conversion' incorporates:
  //   DiscreteIntegrator: '<S141>/Integrator'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_is = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE);

  // S-Function (PROBE): '<S210>/S-Function'
  theta_m = imperix_M2C_NN_control_2024b_B.DataTypeConversion_is;

  // DataTypeConversion: '<S212>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_do = static_cast<real32_T>
    (Mean2_AccVal);

  // S-Function (PROBE): '<S212>/S-Function'
  ws = imperix_M2C_NN_control_2024b_B.DataTypeConversion_do;

  // DataTypeConversion: '<S214>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_cq = static_cast<real32_T>
    (rtb_TmpSignalConversionAtSFun_h[4]);

  // S-Function (PROBE): '<S214>/S-Function'
  vr_bs = imperix_M2C_NN_control_2024b_B.DataTypeConversion_cq;

  // DataTypeConversion: '<S216>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain21'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_n = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.Gain21_Gain * rtb_Fcn1);

  // S-Function (PROBE): '<S216>/S-Function'
  isq = imperix_M2C_NN_control_2024b_B.DataTypeConversion_n;

  // DataTypeConversion: '<S218>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain21'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_n0 = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.Gain21_Gain * rtb_Fcn);

  // S-Function (PROBE): '<S218>/S-Function'
  isd = imperix_M2C_NN_control_2024b_B.DataTypeConversion_n0;

  // DataTypeConversion: '<S220>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_aq = static_cast<real32_T>
    (rtb_Gain1[2]);

  // S-Function (PROBE): '<S220>/S-Function'
  ima = imperix_M2C_NN_control_2024b_B.DataTypeConversion_aq;

  // DataTypeConversion: '<S222>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_e = static_cast<real32_T>
    (rtb_Gain1[3]);

  // S-Function (PROBE): '<S222>/S-Function'
  imb = imperix_M2C_NN_control_2024b_B.DataTypeConversion_e;

  // DataTypeConversion: '<S224>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_ln = static_cast<real32_T>
    (rtb_Gain1[4]);

  // S-Function (PROBE): '<S224>/S-Function'
  imc = imperix_M2C_NN_control_2024b_B.DataTypeConversion_ln;

  // DataTypeConversion: '<S226>/Data Type Conversion' incorporates:
  //   DiscreteIntegrator: '<S141>/Integrator'
  //   Gain: '<S1>/Gain3'
  //   MATLAB Function: '<S1>/DQ - AlphaBeta'
  //   SignalConversion generated from: '<S21>/ SFunction '

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_bp = static_cast<real32_T>
    ((Kpt * std::cos(imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE) -
      rtb_Product4 * std::sin(imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE))
     * imperix_M2C_NN_control_2024b_P.Gain3_Gain_a);

  // S-Function (PROBE): '<S226>/S-Function'
  ia0_ref = imperix_M2C_NN_control_2024b_B.DataTypeConversion_bp;

  // DataTypeConversion: '<S228>/Data Type Conversion' incorporates:
  //   DiscreteIntegrator: '<S141>/Integrator'
  //   Gain: '<S1>/Gain3'
  //   MATLAB Function: '<S1>/DQ - AlphaBeta'
  //   SignalConversion generated from: '<S21>/ SFunction '

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_f5 = static_cast<real32_T>
    ((Kpt * std::sin(imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE) +
      rtb_Product4 * std::cos(imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE))
     * imperix_M2C_NN_control_2024b_P.Gain3_Gain_a);

  // S-Function (PROBE): '<S228>/S-Function'
  ib0_ref = imperix_M2C_NN_control_2024b_B.DataTypeConversion_f5;

  // DataTypeConversion: '<S230>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_kk = static_cast<real32_T>
    (rtb_TmpSignalConversionAtSFun_h[5]);

  // S-Function (PROBE): '<S230>/S-Function'
  vr_cs = imperix_M2C_NN_control_2024b_B.DataTypeConversion_kk;

  // DataTypeConversion: '<S232>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S192>/Data Type Conversion'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_on = static_cast<real32_T>
    (Kpt);

  // S-Function (PROBE): '<S232>/S-Function'
  imd_ref = imperix_M2C_NN_control_2024b_B.DataTypeConversion_on;

  // DataTypeConversion: '<S234>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion40'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_ci =
    imperix_M2C_NN_control_2024b_B.ADC;

  // S-Function (PROBE): '<S234>/S-Function'
  Vc_ar = imperix_M2C_NN_control_2024b_B.DataTypeConversion_ci;

  // DataTypeConversion: '<S236>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S184>/Data Type Conversion'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_n4 = static_cast<real32_T>
    (rtb_Gain1[0]);

  // S-Function (PROBE): '<S236>/S-Function'
  idc = imperix_M2C_NN_control_2024b_B.DataTypeConversion_n4;

  // S-Function (sdspstatfcns): '<S1>/Mean' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion40'

  rtb_Fcn = imperix_M2C_NN_control_2024b_B.ADC;
  for (i = 4; i >= 0; i--) {
    rtb_Fcn += rtb_Square_n[5 - i];
  }

  rtb_TmpSignalConversionAtGain_2 = rtb_Fcn / 6.0;

  // End of S-Function (sdspstatfcns): '<S1>/Mean'
  for (i = 0; i < 6; i++) {
    // Sum: '<S1>/Add1'
    rtb_Fcn = rtb_Square_n[i] - rtb_TmpSignalConversionAtGain_2;

    // Math: '<S1>/Square'
    rtb_Square_n[i] = rtb_Fcn * rtb_Fcn;
  }

  // S-Function (sdspstatfcns): '<S1>/Mean1'
  rtb_Fcn = rtb_Square_n[0];
  for (i = 4; i >= 0; i--) {
    rtb_Fcn += rtb_Square_n[5 - i];
  }

  // DataTypeConversion: '<S238>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain25'
  //   S-Function (sdspstatfcns): '<S1>/Mean1'
  //   Sqrt: '<S1>/Square Root'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_o0 = static_cast<real32_T>
    (std::sqrt(rtb_Fcn / 6.0) * imperix_M2C_NN_control_2024b_P.Gain25_Gain);

  // S-Function (PROBE): '<S238>/S-Function'
  vckpi = imperix_M2C_NN_control_2024b_B.DataTypeConversion_o0;

  // DataTypeConversion: '<S240>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion34'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_gg =
    imperix_M2C_NN_control_2024b_B.ADC_k;

  // S-Function (PROBE): '<S240>/S-Function'
  Vc_br = imperix_M2C_NN_control_2024b_B.DataTypeConversion_gg;

  // DataTypeConversion: '<S242>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion44'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_khy =
    imperix_M2C_NN_control_2024b_B.ADC_e;

  // S-Function (PROBE): '<S242>/S-Function'
  Vc_cr = imperix_M2C_NN_control_2024b_B.DataTypeConversion_khy;

  // DataTypeConversion: '<S244>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion39'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_hb =
    imperix_M2C_NN_control_2024b_B.ADC_b;

  // S-Function (PROBE): '<S244>/S-Function'
  Vc_as = imperix_M2C_NN_control_2024b_B.DataTypeConversion_hb;

  // DataTypeConversion: '<S246>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion24'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_by =
    imperix_M2C_NN_control_2024b_B.ADC_p;

  // S-Function (PROBE): '<S246>/S-Function'
  ibr = imperix_M2C_NN_control_2024b_B.DataTypeConversion_by;

  // DataTypeConversion: '<S248>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion47'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_if =
    imperix_M2C_NN_control_2024b_B.ADC_k2;

  // S-Function (PROBE): '<S248>/S-Function'
  Vc_bs = imperix_M2C_NN_control_2024b_B.DataTypeConversion_if;

  // DataTypeConversion: '<S250>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion29'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_gw =
    imperix_M2C_NN_control_2024b_B.ADC_f;

  // S-Function (PROBE): '<S250>/S-Function'
  Vc_cs = imperix_M2C_NN_control_2024b_B.DataTypeConversion_gw;

  // DataTypeConversion: '<S252>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_ne =
    imperix_M2C_NN_control_2024b_B.ADC_j;

  // S-Function (PROBE): '<S252>/S-Function'
  w = imperix_M2C_NN_control_2024b_B.DataTypeConversion_ne;

  // DataTypeConversion: '<S254>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion25'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_nf =
    imperix_M2C_NN_control_2024b_B.ADC_fj;

  // S-Function (PROBE): '<S254>/S-Function'
  icr = imperix_M2C_NN_control_2024b_B.DataTypeConversion_nf;

  // DataTypeConversion: '<S256>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion26'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_lj =
    imperix_M2C_NN_control_2024b_B.ADC_o;

  // S-Function (PROBE): '<S256>/S-Function'
  ias = imperix_M2C_NN_control_2024b_B.DataTypeConversion_lj;

  // DataTypeConversion: '<S258>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion27'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_nfm =
    imperix_M2C_NN_control_2024b_B.ADC_bn;

  // S-Function (PROBE): '<S258>/S-Function'
  ibs = imperix_M2C_NN_control_2024b_B.DataTypeConversion_nfm;

  // DataTypeConversion: '<S260>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion28'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_ka =
    imperix_M2C_NN_control_2024b_B.ADC_i;

  // S-Function (PROBE): '<S260>/S-Function'
  ics = imperix_M2C_NN_control_2024b_B.DataTypeConversion_ka;

  // DataTypeConversion: '<S262>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_pc = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_B.Gain2[0]);

  // S-Function (PROBE): '<S262>/S-Function'
  iar_zref = imperix_M2C_NN_control_2024b_B.DataTypeConversion_pc;

  // DataTypeConversion: '<S264>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_ki = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_B.Gain2[1]);

  // S-Function (PROBE): '<S264>/S-Function'
  ibr_zref = imperix_M2C_NN_control_2024b_B.DataTypeConversion_ki;

  // S-Function (TUNABLE_PARAM): '<S349>/S-Function'
  imperix_M2C_NN_control_2024b_B.SFunction_d = w_ref;

  // Gain: '<S1>/Gain9'
  for (i = 0; i < 6; i++) {
    rtb_us[i] *= imperix_M2C_NN_control_2024b_P.Gain9_Gain;
  }

  // End of Gain: '<S1>/Gain9'

  // DataTypeConversion: '<S32>/Data Type Conversion1' incorporates:
  //   Constant: '<S1>/Constant3'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion1 = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.Constant3_Value);

  // DataTypeConversion: '<S32>/Data Type Conversion2' incorporates:
  //   Constant: '<S32>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2 = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value);

  // DataTypeConversion: '<S32>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3 =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S149>/generation'
  // S-Function (CB_PWM): '<S150>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3 > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1, 1);

  // End of Outputs for SubSystem: '<S149>/generation'

  // DataTypeConversion: '<S265>/Data Type Conversion1'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_b = static_cast<real32_T>
    (rtb_us[1]);

  // DataTypeConversion: '<S265>/Data Type Conversion2' incorporates:
  //   Constant: '<S265>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_e = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_n);

  // DataTypeConversion: '<S265>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_e =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S269>/generation'
  // S-Function (CB_PWM): '<S270>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_e > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_b, 1);

  // End of Outputs for SubSystem: '<S269>/generation'

  // DataTypeConversion: '<S266>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S265>/Data Type Conversion1'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_l = static_cast<real32_T>
    (rtb_us[1]);

  // DataTypeConversion: '<S266>/Data Type Conversion2' incorporates:
  //   Constant: '<S266>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_i = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_b);

  // DataTypeConversion: '<S266>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_b =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S271>/generation'
  // S-Function (CB_PWM): '<S272>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_b > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_l, 1);

  // End of Outputs for SubSystem: '<S271>/generation'

  // DataTypeConversion: '<S267>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S265>/Data Type Conversion1'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_e = static_cast<real32_T>
    (rtb_us[1]);

  // DataTypeConversion: '<S267>/Data Type Conversion2' incorporates:
  //   Constant: '<S267>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_g = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_nr);

  // DataTypeConversion: '<S267>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_o =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S273>/generation'
  // S-Function (CB_PWM): '<S274>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_o > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_e, 1);

  // End of Outputs for SubSystem: '<S273>/generation'

  // DataTypeConversion: '<S268>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S265>/Data Type Conversion1'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_k = static_cast<real32_T>
    (rtb_us[1]);

  // DataTypeConversion: '<S268>/Data Type Conversion2' incorporates:
  //   Constant: '<S268>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_gn = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_i);

  // DataTypeConversion: '<S268>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_j =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S275>/generation'
  // S-Function (CB_PWM): '<S276>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_j > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_k, 1);

  // End of Outputs for SubSystem: '<S275>/generation'

  // DataTypeConversion: '<S277>/Data Type Conversion1'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_j = static_cast<real32_T>
    (rtb_us[2]);

  // DataTypeConversion: '<S277>/Data Type Conversion2' incorporates:
  //   Constant: '<S277>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_f = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_c);

  // DataTypeConversion: '<S277>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_g =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S281>/generation'
  // S-Function (CB_PWM): '<S282>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_g > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_j, 0);

  // End of Outputs for SubSystem: '<S281>/generation'

  // DataTypeConversion: '<S278>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S277>/Data Type Conversion1'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_n = static_cast<real32_T>
    (rtb_us[2]);

  // DataTypeConversion: '<S278>/Data Type Conversion2' incorporates:
  //   Constant: '<S278>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_j = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_o);

  // DataTypeConversion: '<S278>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_h =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S283>/generation'
  // S-Function (CB_PWM): '<S284>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_h > 0.0) {
    CbPwm_Activate((tPwmOutput) 9, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 9, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 9,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_n, 0);

  // End of Outputs for SubSystem: '<S283>/generation'

  // DataTypeConversion: '<S279>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S277>/Data Type Conversion1'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_lt = static_cast<real32_T>
    (rtb_us[2]);

  // DataTypeConversion: '<S279>/Data Type Conversion2' incorporates:
  //   Constant: '<S279>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_ev = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_by);

  // DataTypeConversion: '<S279>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_l =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S285>/generation'
  // S-Function (CB_PWM): '<S286>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_l > 0.0) {
    CbPwm_Activate((tPwmOutput) 10, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 10, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 10,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_lt, 0);

  // End of Outputs for SubSystem: '<S285>/generation'

  // DataTypeConversion: '<S280>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S277>/Data Type Conversion1'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_g = static_cast<real32_T>
    (rtb_us[2]);

  // DataTypeConversion: '<S280>/Data Type Conversion2' incorporates:
  //   Constant: '<S280>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_k = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_bys);

  // DataTypeConversion: '<S280>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_m =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S287>/generation'
  // S-Function (CB_PWM): '<S288>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_m > 0.0) {
    CbPwm_Activate((tPwmOutput) 11, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 11, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 11,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_g, 0);

  // End of Outputs for SubSystem: '<S287>/generation'

  // Gain: '<S93>/Gain1'
  rtb_TmpSignalConversionAtGain_2 = imperix_M2C_NN_control_2024b_P.Gain1_Gain_l *
    rtb_us[3];

  // DataTypeConversion: '<S289>/Data Type Conversion1'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_c = static_cast<real32_T>
    (rtb_TmpSignalConversionAtGain_2);

  // DataTypeConversion: '<S289>/Data Type Conversion2' incorporates:
  //   Constant: '<S289>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_h = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_p);

  // DataTypeConversion: '<S289>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_k =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S293>/generation'
  // S-Function (CB_PWM): '<S294>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_k > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_c, 0);

  // End of Outputs for SubSystem: '<S293>/generation'

  // DataTypeConversion: '<S290>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S289>/Data Type Conversion1'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_m = static_cast<real32_T>
    (rtb_TmpSignalConversionAtGain_2);

  // DataTypeConversion: '<S290>/Data Type Conversion2' incorporates:
  //   Constant: '<S290>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_fi = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_oc);

  // DataTypeConversion: '<S290>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_d =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S295>/generation'
  // S-Function (CB_PWM): '<S296>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_d > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_m, 0);

  // End of Outputs for SubSystem: '<S295>/generation'

  // DataTypeConversion: '<S291>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S289>/Data Type Conversion1'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_h = static_cast<real32_T>
    (rtb_TmpSignalConversionAtGain_2);

  // DataTypeConversion: '<S291>/Data Type Conversion2' incorporates:
  //   Constant: '<S291>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_d = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_i0);

  // DataTypeConversion: '<S291>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_bn =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S297>/generation'
  // S-Function (CB_PWM): '<S298>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_bn > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_h, 0);

  // End of Outputs for SubSystem: '<S297>/generation'

  // DataTypeConversion: '<S292>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S289>/Data Type Conversion1'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_bn = static_cast<real32_T>
    (rtb_TmpSignalConversionAtGain_2);

  // DataTypeConversion: '<S292>/Data Type Conversion2' incorporates:
  //   Constant: '<S292>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_b = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_l);

  // DataTypeConversion: '<S292>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_k2 =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S299>/generation'
  // S-Function (CB_PWM): '<S300>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_k2 > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_bn, 0);

  // End of Outputs for SubSystem: '<S299>/generation'

  // Gain: '<S94>/Gain3'
  rtb_TmpSignalConversionAtGain_2 = imperix_M2C_NN_control_2024b_P.Gain3_Gain_c *
    rtb_us[4];

  // DataTypeConversion: '<S301>/Data Type Conversion1'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_d = static_cast<real32_T>
    (rtb_TmpSignalConversionAtGain_2);

  // DataTypeConversion: '<S301>/Data Type Conversion2' incorporates:
  //   Constant: '<S301>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_l = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_bj);

  // DataTypeConversion: '<S301>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_p =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S305>/generation'
  // S-Function (CB_PWM): '<S306>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_p > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_d, 1);

  // End of Outputs for SubSystem: '<S305>/generation'

  // DataTypeConversion: '<S302>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S301>/Data Type Conversion1'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_c0 = static_cast<real32_T>
    (rtb_TmpSignalConversionAtGain_2);

  // DataTypeConversion: '<S302>/Data Type Conversion2' incorporates:
  //   Constant: '<S302>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_eb = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_d);

  // DataTypeConversion: '<S302>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_or =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S307>/generation'
  // S-Function (CB_PWM): '<S308>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_or > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_c0, 1);

  // End of Outputs for SubSystem: '<S307>/generation'

  // DataTypeConversion: '<S303>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S301>/Data Type Conversion1'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_ls = static_cast<real32_T>
    (rtb_TmpSignalConversionAtGain_2);

  // DataTypeConversion: '<S303>/Data Type Conversion2' incorporates:
  //   Constant: '<S303>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_kr = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_bm);

  // DataTypeConversion: '<S303>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_ln =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S309>/generation'
  // S-Function (CB_PWM): '<S310>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_ln > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_ls, 1);

  // End of Outputs for SubSystem: '<S309>/generation'

  // DataTypeConversion: '<S304>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S301>/Data Type Conversion1'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_bo = static_cast<real32_T>
    (rtb_TmpSignalConversionAtGain_2);

  // DataTypeConversion: '<S304>/Data Type Conversion2' incorporates:
  //   Constant: '<S304>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_a = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_h);

  // DataTypeConversion: '<S304>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_df =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S311>/generation'
  // S-Function (CB_PWM): '<S312>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_df > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_bo, 1);

  // End of Outputs for SubSystem: '<S311>/generation'

  // Gain: '<S95>/Gain3'
  rtb_TmpSignalConversionAtGain_2 = imperix_M2C_NN_control_2024b_P.Gain3_Gain_f *
    rtb_us[5];

  // DataTypeConversion: '<S313>/Data Type Conversion1'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_p = static_cast<real32_T>
    (rtb_TmpSignalConversionAtGain_2);

  // DataTypeConversion: '<S313>/Data Type Conversion2' incorporates:
  //   Constant: '<S313>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_hz = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_lt);

  // DataTypeConversion: '<S313>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_je =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S317>/generation'
  // S-Function (CB_PWM): '<S318>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_je > 0.0) {
    CbPwm_Activate((tPwmOutput) 12, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 12, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 12,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_p, 0);

  // End of Outputs for SubSystem: '<S317>/generation'

  // DataTypeConversion: '<S314>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S313>/Data Type Conversion1'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_i = static_cast<real32_T>
    (rtb_TmpSignalConversionAtGain_2);

  // DataTypeConversion: '<S314>/Data Type Conversion2' incorporates:
  //   Constant: '<S314>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_k0 = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_k);

  // DataTypeConversion: '<S314>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_og =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S319>/generation'
  // S-Function (CB_PWM): '<S320>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_og > 0.0) {
    CbPwm_Activate((tPwmOutput) 13, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 13, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 13,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_i, 0);

  // End of Outputs for SubSystem: '<S319>/generation'

  // DataTypeConversion: '<S315>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S313>/Data Type Conversion1'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_jv = static_cast<real32_T>
    (rtb_TmpSignalConversionAtGain_2);

  // DataTypeConversion: '<S315>/Data Type Conversion2' incorporates:
  //   Constant: '<S315>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_fr = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_n1);

  // DataTypeConversion: '<S315>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_he =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S321>/generation'
  // S-Function (CB_PWM): '<S322>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_he > 0.0) {
    CbPwm_Activate((tPwmOutput) 14, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 14, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 14,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_jv, 0);

  // End of Outputs for SubSystem: '<S321>/generation'

  // DataTypeConversion: '<S316>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S313>/Data Type Conversion1'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_ko = static_cast<real32_T>
    (rtb_TmpSignalConversionAtGain_2);

  // DataTypeConversion: '<S316>/Data Type Conversion2' incorporates:
  //   Constant: '<S316>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_m = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_cv);

  // DataTypeConversion: '<S316>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_n =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S323>/generation'
  // S-Function (CB_PWM): '<S324>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_n > 0.0) {
    CbPwm_Activate((tPwmOutput) 15, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 15, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 15,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_ko, 0);

  // End of Outputs for SubSystem: '<S323>/generation'

  // MATLAB Function: '<S96>/MATLAB Function1'
  rtb_Fcn = imperix_M2C_NN_control_2024b_DW.p4;
  imperix_M2C_NN_control_2024b_DW.p4 = imperix_M2C_NN_control_2024b_DW.p3;
  imperix_M2C_NN_control_2024b_DW.p3 = imperix_M2C_NN_control_2024b_DW.p2;
  imperix_M2C_NN_control_2024b_DW.p2 = imperix_M2C_NN_control_2024b_DW.p1;
  imperix_M2C_NN_control_2024b_DW.p1 = rtb_Fcn;

  // DataTypeConversion: '<S326>/Data Type Conversion1'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_f = static_cast<real32_T>
    (rtb_us[0]);

  // DataTypeConversion: '<S326>/Data Type Conversion2' incorporates:
  //   Constant: '<S326>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_n = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_f);

  // DataTypeConversion: '<S326>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_a =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S330>/generation'
  // S-Function (CB_PWM): '<S331>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_a > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_f, 0);

  // End of Outputs for SubSystem: '<S330>/generation'

  // DataTypeConversion: '<S327>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S326>/Data Type Conversion1'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_km = static_cast<real32_T>
    (rtb_us[0]);

  // DataTypeConversion: '<S327>/Data Type Conversion2' incorporates:
  //   Constant: '<S327>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_av = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_n13);

  // DataTypeConversion: '<S327>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_gg =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S332>/generation'
  // S-Function (CB_PWM): '<S333>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_gg > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_km, 0);

  // End of Outputs for SubSystem: '<S332>/generation'

  // DataTypeConversion: '<S328>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S326>/Data Type Conversion1'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_gd = static_cast<real32_T>
    (rtb_us[0]);

  // DataTypeConversion: '<S328>/Data Type Conversion2' incorporates:
  //   Constant: '<S328>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_gw = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_e);

  // DataTypeConversion: '<S328>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_i =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S334>/generation'
  // S-Function (CB_PWM): '<S335>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_i > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_gd, 0);

  // End of Outputs for SubSystem: '<S334>/generation'

  // DataTypeConversion: '<S329>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S326>/Data Type Conversion1'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion1_dr = static_cast<real32_T>
    (rtb_us[0]);

  // DataTypeConversion: '<S329>/Data Type Conversion2' incorporates:
  //   Constant: '<S329>/phase'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion2_gu = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.phase_Value_g);

  // DataTypeConversion: '<S329>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion8'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion3_mp =
    imperix_M2C_NN_control_2024b_B.SFunction_i;

  // Outputs for Atomic SubSystem: '<S336>/generation'
  // S-Function (CB_PWM): '<S337>/PWM' incorporates:
  //   Constant: '<S140>/clk_id'

  if (imperix_M2C_NN_control_2024b_B.DataTypeConversion3_mp > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3,
                     imperix_M2C_NN_control_2024b_B.DataTypeConversion1_dr, 0);

  // End of Outputs for SubSystem: '<S336>/generation'

  // RateTransition generated from: '<S1>/Speed Control Proportional Integral Control1' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'
  //   DataTypeConversion: '<S1>/Data Type Conversion83'
  //   Gain: '<S1>/Gain20'

  if (tmp) {
    imperix_M2C_NN_control_2024b_DW.TmpRTBAtSpeedControlProportiona[0] =
      imperix_M2C_NN_control_2024b_P.Gain20_Gain *
      imperix_M2C_NN_control_2024b_B.ADC_j;
    imperix_M2C_NN_control_2024b_DW.TmpRTBAtSpeedControlProportiona[1] =
      imperix_M2C_NN_control_2024b_P.Gain20_Gain *
      imperix_M2C_NN_control_2024b_B.SFunction_d;

    // RateTransition generated from: '<S1>/Speed Control Proportional Integral Control1' incorporates:
    //   DataTypeConversion: '<S1>/Data Type Conversion36'
    //   DataTypeConversion: '<S1>/Data Type Conversion82'
    //   DataTypeConversion: '<S1>/Data Type Conversion83'
    //   Gain: '<S1>/Gain20'

    imperix_M2C_NN_control_2024b_DW.TmpRTBAtSpeedControlProportio_l =
      imperix_M2C_NN_control_2024b_B.SFunction_f;
  }

  // S-Function (ADC): '<S109>/ADC'
  imperix_M2C_NN_control_2024b_B.ADC_jl = (float)(*ix_raw_adc_ptr_0_2) *
    0.012207F + 0.0F;

  // DataTypeConversion: '<S202>/Data Type Conversion' incorporates:
  //   Constant: '<S1>/Constant4'
  //   Gain: '<S1>/Gain5'

  imperix_M2C_NN_control_2024b_B.DataTypeConversion_er = static_cast<real32_T>
    (imperix_M2C_NN_control_2024b_P.Gain5_Gain *
     imperix_M2C_NN_control_2024b_P.Constant4_Value);

  // S-Function (PROBE): '<S202>/S-Function'
  vdc = imperix_M2C_NN_control_2024b_B.DataTypeConversion_er;

  // Update for DiscreteIntegrator: '<S141>/Integrator'
  imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE +=
    imperix_M2C_NN_control_2024b_P.Integrator_gainval * Mean2_AccVal;
}

// Model step function for TID1
void imperix_M2C_NN_control_2024b_step1(void) // Sample time: [0.001s, 0.0s]
{
  real_T rtb_iq_ref;

  // MATLAB Function: '<S1>/Speed Control Proportional Integral Control1' incorporates:
  //   RateTransition generated from: '<S1>/Speed Control Proportional Integral Control1'
  //
  imperix_M2C_NN_control_2024b_DW.a_n = (imperix_M2C_NN_control_2024b_P.prmt_SC
    [1] - 1.0) * imperix_M2C_NN_control_2024b_DW.u_i /
    imperix_M2C_NN_control_2024b_P.prmt_SC[0] +
    imperix_M2C_NN_control_2024b_DW.a_n *
    imperix_M2C_NN_control_2024b_P.prmt_SC[1];
  imperix_M2C_NN_control_2024b_DW.u_i =
    ((imperix_M2C_NN_control_2024b_DW.TmpRTBAtSpeedControlProportiona[1] -
      imperix_M2C_NN_control_2024b_DW.TmpRTBAtSpeedControlProportiona[0]) -
     imperix_M2C_NN_control_2024b_DW.a_n) *
    imperix_M2C_NN_control_2024b_P.prmt_SC[0];
  if (imperix_M2C_NN_control_2024b_DW.u_i >=
      imperix_M2C_NN_control_2024b_P.prmt_SC[2]) {
    imperix_M2C_NN_control_2024b_DW.u_i =
      imperix_M2C_NN_control_2024b_P.prmt_SC[2];
  } else if (imperix_M2C_NN_control_2024b_DW.u_i <=
             -imperix_M2C_NN_control_2024b_P.prmt_SC[2]) {
    imperix_M2C_NN_control_2024b_DW.u_i =
      -imperix_M2C_NN_control_2024b_P.prmt_SC[2];
  }

  rtb_iq_ref = imperix_M2C_NN_control_2024b_DW.TmpRTBAtSpeedControlProportio_l *
    imperix_M2C_NN_control_2024b_DW.u_i;

  // End of MATLAB Function: '<S1>/Speed Control Proportional Integral Control1' 

  // DataTypeConversion: '<S176>/Data Type Conversion'
  imperix_M2C_NN_control_2024b_B.DataTypeConversion_k0 = static_cast<real32_T>
    (rtb_iq_ref);

  // S-Function (PROBE): '<S176>/S-Function'
  imq_ref = imperix_M2C_NN_control_2024b_B.DataTypeConversion_k0;

  // RateTransition generated from: '<S1>/Product4'
  imperix_M2C_NN_control_2024b_DW.iq_ref_Buffer0 = rtb_iq_ref;
}

// Model initialize function
void imperix_M2C_NN_control_2024b_initialize(void)
{
  // Registration code

  // Set task counter limit used by the static main program
  (imperix_M2C_NN_control_2024b_M)->Timing.TaskCounters.cLimit[0] = 1;
  (imperix_M2C_NN_control_2024b_M)->Timing.TaskCounters.cLimit[1] = 6;

  {
    static const real_T tmp[36]{ 0.3333, 0.3333, 0.3333, 0.3333, 0.3333, 0.3333,
      0.3333, 0.3333, 0.3333, -0.3333, -0.3333, -0.3333, -0.5, 0.25, 0.25, -0.5,
      0.25, 0.25, 0.0, -0.433, 0.433, -0.0, -0.433, 0.433, 1.0, -1.0, 0.0, -1.0,
      1.0, -0.0, 1.0, 0.0, -1.0, -1.0, -0.0, 1.0 };

    // Start for S-Function (ADC): '<S119>/ADC'
    Adc_ConfigureInput(6, 0.027466F, 0.0F, 0);
    Adc_GetPointer(6, 0, &ix_raw_adc_ptr_6_0);

    // Start for S-Function (ADC): '<S135>/ADC'
    Adc_ConfigureInput(7, 0.027466F, 0.0F, 0);
    Adc_GetPointer(7, 0, &ix_raw_adc_ptr_7_0);

    // Start for S-Function (ADC): '<S113>/ADC'
    Adc_ConfigureInput(0, 0.027466F, 0.0F, 1);
    Adc_GetPointer(0, 1, &ix_raw_adc_ptr_0_1);

    // Start for S-Function (ADC): '<S121>/ADC'
    Adc_ConfigureInput(1, 0.027466F, 0.0F, 1);
    Adc_GetPointer(1, 1, &ix_raw_adc_ptr_1_1);

    // Start for S-Function (ADC): '<S115>/ADC'
    Adc_ConfigureInput(2, 0.027466F, 0.0F, 1);
    Adc_GetPointer(2, 1, &ix_raw_adc_ptr_2_1);

    // Start for S-Function (ADC): '<S117>/ADC'
    Adc_ConfigureInput(3, 0.027466F, 0.0F, 1);
    Adc_GetPointer(3, 1, &ix_raw_adc_ptr_3_1);

    // Start for S-Function (ADC): '<S131>/ADC'
    Adc_ConfigureInput(0, 0.00045776F, 0.0F, 0);
    Adc_GetPointer(0, 0, &ix_raw_adc_ptr_0_0);

    // Start for S-Function (ADC): '<S133>/ADC'
    Adc_ConfigureInput(1, 0.00045776F, 0.0F, 0);
    Adc_GetPointer(1, 0, &ix_raw_adc_ptr_1_0);

    // Start for S-Function (ADC): '<S123>/ADC'
    Adc_ConfigureInput(2, 0.00045776F, 0.0F, 0);
    Adc_GetPointer(2, 0, &ix_raw_adc_ptr_2_0);

    // Start for S-Function (ADC): '<S111>/ADC'
    Adc_ConfigureInput(3, 0.00045776F, 0.0F, 0);
    Adc_GetPointer(3, 0, &ix_raw_adc_ptr_3_0);

    // Start for S-Function (ADC): '<S125>/ADC'
    Adc_ConfigureInput(4, 0.00045776F, 0.0F, 0);
    Adc_GetPointer(4, 0, &ix_raw_adc_ptr_4_0);

    // Start for S-Function (ADC): '<S127>/ADC'
    Adc_ConfigureInput(5, 0.00045776F, 0.0F, 0);
    Adc_GetPointer(5, 0, &ix_raw_adc_ptr_5_0);

    // Start for InitialCondition: '<S141>/Initial'
    imperix_M2C_NN_control_2024b_DW.Initial_FirstOutputTime = true;

    // Start for S-Function (ADC): '<S129>/ADC'
    Adc_ConfigureInput(4, 0.012207F, 0.0F, 1);
    Adc_GetPointer(4, 1, &ix_raw_adc_ptr_4_1);

    // Start for S-Function (TUNABLE_PARAM): '<S345>/S-Function'
    flux_ref = 0.987F;                 // Tunable parameter initialization
    ConfigureTunable(&flux_ref, 0, 0);

    // Start for S-Function (TUNABLE_PARAM): '<S347>/S-Function'
    flux_control = 0.0F;               // Tunable parameter initialization
    ConfigureTunable(&flux_control, 0, 0);

    // Start for RateTransition generated from: '<S1>/Product4'
    imperix_M2C_NN_control_2024b_B.iq_ref =
      imperix_M2C_NN_control_2024b_P.iq_ref_InitialCondition;

    // Start for S-Function (TUNABLE_PARAM): '<S351>/S-Function'
    speed_control = 0.0F;              // Tunable parameter initialization
    ConfigureTunable(&speed_control, 0, 0);

    // Start for S-Function (PROBE): '<S152>/S-Function'
    ConfigureProbe(&v0_ref, 0);

    // Start for S-Function (PROBE): '<S154>/S-Function'
    ConfigureProbe(&icr_zref, 0);

    // Start for S-Function (PROBE): '<S156>/S-Function'
    ConfigureProbe(&ias_zref, 0);

    // Start for S-Function (PROBE): '<S158>/S-Function'
    ConfigureProbe(&ibs_zref, 0);

    // Start for S-Function (PROBE): '<S160>/S-Function'
    ConfigureProbe(&ics_zref, 0);

    // Start for S-Function (PROBE): '<S162>/S-Function'
    ConfigureProbe(&imd_r, 0);

    // Start for S-Function (TUNABLE_PARAM): '<S339>/S-Function'
    input_control = 0.0F;              // Tunable parameter initialization
    ConfigureTunable(&input_control, 0, 0);

    // Start for S-Function (PROBE): '<S164>/S-Function'
    ConfigureProbe(&iP_ref, 0);

    // Start for S-Function (PROBE): '<S166>/S-Function'
    ConfigureProbe(&imq_r, 0);

    // Start for S-Function (PROBE): '<S168>/S-Function'
    ConfigureProbe(&imd, 0);

    // Start for S-Function (PROBE): '<S170>/S-Function'
    ConfigureProbe(&imq, 0);

    // Start for S-Function (PROBE): '<S172>/S-Function'
    ConfigureProbe(&flux, 0);

    // Start for S-Function (PROBE): '<S174>/S-Function'
    ConfigureProbe(&iar, 0);

    // Start for S-Function (PROBE): '<S178>/S-Function'
    ConfigureProbe(&vd_ref, 0);

    // Start for S-Function (PROBE): '<S180>/S-Function'
    ConfigureProbe(&vq_ref, 0);

    // Start for S-Function (PROBE): '<S182>/S-Function'
    ConfigureProbe(&vy_ref, 0);

    // Start for S-Function (PROBE): '<S184>/S-Function'
    ConfigureProbe(&igd, 0);

    // Start for S-Function (PROBE): '<S186>/S-Function'
    ConfigureProbe(&p_m, 0);
    imperix_M2_MovingRMS1_Start(&imperix_M2C_NN_control_2024b_DW.MovingRMS1);
    imperix_M2_MovingRMS1_Start(&imperix_M2C_NN_control_2024b_DW.MovingRMS2);

    // Start for S-Function (PROBE): '<S188>/S-Function'
    ConfigureProbe(&izkpi, 0);

    // Start for S-Function (PROBE): '<S190>/S-Function'
    ConfigureProbe(&isqr, 0);

    // Start for S-Function (PROBE): '<S192>/S-Function'
    ConfigureProbe(&isdr, 0);

    // Start for S-Function (TUNABLE_PARAM): '<S343>/S-Function'
    enable_cc = 0.0F;                  // Tunable parameter initialization
    ConfigureTunable(&enable_cc, 0, 0);

    // Start for S-Function (TUNABLE_PARAM): '<S341>/S-Function'
    ie_lambda = 0.002081F;             // Tunable parameter initialization
    ConfigureTunable(&ie_lambda, 0, 0);

    // Start for S-Function (PROBE): '<S194>/S-Function'
    ConfigureProbe(&vr_ar, 0);

    // Start for S-Function (PROBE): '<S196>/S-Function'
    ConfigureProbe(&vma, 0);

    // Start for S-Function (PROBE): '<S198>/S-Function'
    ConfigureProbe(&vmb, 0);

    // Start for S-Function (PROBE): '<S200>/S-Function'
    ConfigureProbe(&vmc, 0);

    // Start for S-Function (PROBE): '<S204>/S-Function'
    ConfigureProbe(&vr_br, 0);

    // Start for S-Function (PROBE): '<S206>/S-Function'
    ConfigureProbe(&vr_cr, 0);

    // Start for S-Function (PROBE): '<S208>/S-Function'
    ConfigureProbe(&vr_as, 0);

    // Start for S-Function (PROBE): '<S210>/S-Function'
    ConfigureProbe(&theta_m, 0);

    // Start for S-Function (PROBE): '<S212>/S-Function'
    ConfigureProbe(&ws, 0);

    // Start for S-Function (PROBE): '<S214>/S-Function'
    ConfigureProbe(&vr_bs, 0);

    // Start for S-Function (PROBE): '<S216>/S-Function'
    ConfigureProbe(&isq, 0);

    // Start for S-Function (PROBE): '<S218>/S-Function'
    ConfigureProbe(&isd, 0);

    // Start for S-Function (PROBE): '<S220>/S-Function'
    ConfigureProbe(&ima, 0);

    // Start for S-Function (PROBE): '<S222>/S-Function'
    ConfigureProbe(&imb, 0);

    // Start for S-Function (PROBE): '<S224>/S-Function'
    ConfigureProbe(&imc, 0);

    // Start for S-Function (PROBE): '<S226>/S-Function'
    ConfigureProbe(&ia0_ref, 0);

    // Start for S-Function (PROBE): '<S228>/S-Function'
    ConfigureProbe(&ib0_ref, 0);

    // Start for S-Function (PROBE): '<S230>/S-Function'
    ConfigureProbe(&vr_cs, 0);

    // Start for S-Function (PROBE): '<S232>/S-Function'
    ConfigureProbe(&imd_ref, 0);

    // Start for S-Function (PROBE): '<S234>/S-Function'
    ConfigureProbe(&Vc_ar, 0);

    // Start for S-Function (PROBE): '<S236>/S-Function'
    ConfigureProbe(&idc, 0);

    // Start for S-Function (PROBE): '<S238>/S-Function'
    ConfigureProbe(&vckpi, 0);

    // Start for S-Function (PROBE): '<S240>/S-Function'
    ConfigureProbe(&Vc_br, 0);

    // Start for S-Function (PROBE): '<S242>/S-Function'
    ConfigureProbe(&Vc_cr, 0);

    // Start for S-Function (PROBE): '<S244>/S-Function'
    ConfigureProbe(&Vc_as, 0);

    // Start for S-Function (PROBE): '<S246>/S-Function'
    ConfigureProbe(&ibr, 0);

    // Start for S-Function (PROBE): '<S248>/S-Function'
    ConfigureProbe(&Vc_bs, 0);

    // Start for S-Function (PROBE): '<S250>/S-Function'
    ConfigureProbe(&Vc_cs, 0);

    // Start for S-Function (PROBE): '<S252>/S-Function'
    ConfigureProbe(&w, 0);

    // Start for S-Function (PROBE): '<S254>/S-Function'
    ConfigureProbe(&icr, 0);

    // Start for S-Function (PROBE): '<S256>/S-Function'
    ConfigureProbe(&ias, 0);

    // Start for S-Function (PROBE): '<S258>/S-Function'
    ConfigureProbe(&ibs, 0);

    // Start for S-Function (PROBE): '<S260>/S-Function'
    ConfigureProbe(&ics, 0);

    // Start for S-Function (PROBE): '<S262>/S-Function'
    ConfigureProbe(&iar_zref, 0);

    // Start for S-Function (PROBE): '<S264>/S-Function'
    ConfigureProbe(&ibr_zref, 0);

    // Start for S-Function (IRQ): '<S138>/S-Function' incorporates:
    //   Constant: '<S140>/clk_id'

    ConfigureMainInterrupt(SimulinkInterrupt, (tClock)
      imperix_M2C_NN_control_2024b_P.clk_id_Value, 0.5F, 0U);
    ConfigureReadTriggerDelayInNs(2000U);
    Adc_SetUserOversampling(0.0F);

    // Start for S-Function (CLK): '<S140>/CLK1'
    Clock_SetFrequency((tClock) 0, 6000.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S349>/S-Function'
    w_ref = 31.415926F;                // Tunable parameter initialization
    ConfigureTunable(&w_ref, 0, 0);

    // Start for Atomic SubSystem: '<S149>/generation'

    // Start for S-Function (CB_PWM): '<S150>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 8, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 8, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 8, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 8, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 8, 0.0F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 8, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 8, 1.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 8, 1);
    CbPwm_Activate((tPwmOutput) 8, 1);

    // End of Start for SubSystem: '<S149>/generation'

    // Start for Atomic SubSystem: '<S269>/generation'

    // Start for S-Function (CB_PWM): '<S270>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 0, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 1);
    CbPwm_Activate((tPwmOutput) 0, 1);

    // End of Start for SubSystem: '<S269>/generation'

    // Start for Atomic SubSystem: '<S271>/generation'

    // Start for S-Function (CB_PWM): '<S272>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 1, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 1, 0.5F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 1);
    CbPwm_Activate((tPwmOutput) 1, 1);

    // End of Start for SubSystem: '<S271>/generation'

    // Start for Atomic SubSystem: '<S273>/generation'

    // Start for S-Function (CB_PWM): '<S274>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 2, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 2, 0.25F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 1);
    CbPwm_Activate((tPwmOutput) 2, 1);

    // End of Start for SubSystem: '<S273>/generation'

    // Start for Atomic SubSystem: '<S275>/generation'

    // Start for S-Function (CB_PWM): '<S276>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 3, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 3, 0.0F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 1);
    CbPwm_Activate((tPwmOutput) 3, 1);

    // End of Start for SubSystem: '<S275>/generation'

    // Start for Atomic SubSystem: '<S281>/generation'

    // Start for S-Function (CB_PWM): '<S282>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 8, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 8, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 8, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 8, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 8, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 8, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 8, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 8, 0);
    CbPwm_Activate((tPwmOutput) 8, 0);

    // End of Start for SubSystem: '<S281>/generation'

    // Start for Atomic SubSystem: '<S283>/generation'

    // Start for S-Function (CB_PWM): '<S284>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 9, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 9, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 9, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 9, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 9, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 9, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 9, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 9, 0);
    CbPwm_Activate((tPwmOutput) 9, 0);

    // End of Start for SubSystem: '<S283>/generation'

    // Start for Atomic SubSystem: '<S285>/generation'

    // Start for S-Function (CB_PWM): '<S286>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 10, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 10, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 10, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 10, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 10, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 10, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 10, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 10, 0);
    CbPwm_Activate((tPwmOutput) 10, 0);

    // End of Start for SubSystem: '<S285>/generation'

    // Start for Atomic SubSystem: '<S287>/generation'

    // Start for S-Function (CB_PWM): '<S288>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 11, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 11, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 11, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 11, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 11, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 11, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 11, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 11, 0);
    CbPwm_Activate((tPwmOutput) 11, 0);

    // End of Start for SubSystem: '<S287>/generation'

    // Start for Atomic SubSystem: '<S293>/generation'

    // Start for S-Function (CB_PWM): '<S294>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 4, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 4, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 0);
    CbPwm_Activate((tPwmOutput) 4, 0);

    // End of Start for SubSystem: '<S293>/generation'

    // Start for Atomic SubSystem: '<S295>/generation'

    // Start for S-Function (CB_PWM): '<S296>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 5, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 5, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 0);
    CbPwm_Activate((tPwmOutput) 5, 0);

    // End of Start for SubSystem: '<S295>/generation'

    // Start for Atomic SubSystem: '<S297>/generation'

    // Start for S-Function (CB_PWM): '<S298>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 6, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 6, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 0);
    CbPwm_Activate((tPwmOutput) 6, 0);

    // End of Start for SubSystem: '<S297>/generation'

    // Start for Atomic SubSystem: '<S299>/generation'

    // Start for S-Function (CB_PWM): '<S300>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 7, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 0);
    CbPwm_Activate((tPwmOutput) 7, 0);

    // End of Start for SubSystem: '<S299>/generation'

    // Start for Atomic SubSystem: '<S305>/generation'

    // Start for S-Function (CB_PWM): '<S306>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 4, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 4, 0.75F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 1);
    CbPwm_Activate((tPwmOutput) 4, 1);

    // End of Start for SubSystem: '<S305>/generation'

    // Start for Atomic SubSystem: '<S307>/generation'

    // Start for S-Function (CB_PWM): '<S308>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 5, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 5, 0.5F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 1);
    CbPwm_Activate((tPwmOutput) 5, 1);

    // End of Start for SubSystem: '<S307>/generation'

    // Start for Atomic SubSystem: '<S309>/generation'

    // Start for S-Function (CB_PWM): '<S310>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 6, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 6, 0.25F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 1);
    CbPwm_Activate((tPwmOutput) 6, 1);

    // End of Start for SubSystem: '<S309>/generation'

    // Start for Atomic SubSystem: '<S311>/generation'

    // Start for S-Function (CB_PWM): '<S312>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 7, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 1);
    CbPwm_Activate((tPwmOutput) 7, 1);

    // End of Start for SubSystem: '<S311>/generation'

    // Start for Atomic SubSystem: '<S317>/generation'

    // Start for S-Function (CB_PWM): '<S318>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 12, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 12, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 12, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 12, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 12, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 12, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 12, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 12, 0);
    CbPwm_Activate((tPwmOutput) 12, 0);

    // End of Start for SubSystem: '<S317>/generation'

    // Start for Atomic SubSystem: '<S319>/generation'

    // Start for S-Function (CB_PWM): '<S320>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 13, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 13, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 13, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 13, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 13, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 13, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 13, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 13, 0);
    CbPwm_Activate((tPwmOutput) 13, 0);

    // End of Start for SubSystem: '<S319>/generation'

    // Start for Atomic SubSystem: '<S321>/generation'

    // Start for S-Function (CB_PWM): '<S322>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 14, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 14, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 14, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 14, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 14, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 14, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 14, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 14, 0);
    CbPwm_Activate((tPwmOutput) 14, 0);

    // End of Start for SubSystem: '<S321>/generation'

    // Start for Atomic SubSystem: '<S323>/generation'

    // Start for S-Function (CB_PWM): '<S324>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 15, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 15, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 15, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 15, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 15, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 15, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 15, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 15, 0);
    CbPwm_Activate((tPwmOutput) 15, 0);

    // End of Start for SubSystem: '<S323>/generation'

    // Start for Atomic SubSystem: '<S330>/generation'

    // Start for S-Function (CB_PWM): '<S331>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 0, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 0);
    CbPwm_Activate((tPwmOutput) 0, 0);

    // End of Start for SubSystem: '<S330>/generation'

    // Start for Atomic SubSystem: '<S332>/generation'

    // Start for S-Function (CB_PWM): '<S333>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 1, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 1, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 0);
    CbPwm_Activate((tPwmOutput) 1, 0);

    // End of Start for SubSystem: '<S332>/generation'

    // Start for Atomic SubSystem: '<S334>/generation'

    // Start for S-Function (CB_PWM): '<S335>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 2, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 2, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 0);
    CbPwm_Activate((tPwmOutput) 2, 0);

    // End of Start for SubSystem: '<S334>/generation'

    // Start for Atomic SubSystem: '<S336>/generation'

    // Start for S-Function (CB_PWM): '<S337>/PWM' incorporates:
    //   Constant: '<S140>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 3, (tClock)
                         imperix_M2C_NN_control_2024b_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 3, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 0);
    CbPwm_Activate((tPwmOutput) 3, 0);

    // End of Start for SubSystem: '<S336>/generation'

    // Start for S-Function (ADC): '<S109>/ADC'
    Adc_ConfigureInput(0, 0.012207F, 0.0F, 2);
    Adc_GetPointer(0, 2, &ix_raw_adc_ptr_0_2);

    // Start for S-Function (PROBE): '<S202>/S-Function'
    ConfigureProbe(&vdc, 0);

    // Start for S-Function (PROBE): '<S176>/S-Function'
    ConfigureProbe(&imq_ref, 0);

    // InitializeConditions for DiscreteIntegrator: '<S141>/Integrator'
    imperix_M2C_NN_control_2024b_DW.Integrator_DSTATE =
      imperix_M2C_NN_control_2024b_P.IntegratorwithWrappedStateDis_g;

    // InitializeConditions for RateTransition generated from: '<S1>/Product4'
    imperix_M2C_NN_control_2024b_DW.iq_ref_Buffer0 =
      imperix_M2C_NN_control_2024b_P.iq_ref_InitialCondition;

    // SystemInitialize for MATLAB Function: '<S1>/MATLAB Function4'
    std::memcpy(&imperix_M2C_NN_control_2024b_DW.Tinv[0], &tmp[0], 36U * sizeof
                (real_T));

    // SystemInitialize for MATLAB Function: '<S96>/MATLAB Function1'
    imperix_M2C_NN_control_2024b_DW.p1 = 1.0;
    imperix_M2C_NN_control_2024b_DW.p2 = 2.0;
    imperix_M2C_NN_control_2024b_DW.p3 = 3.0;
    imperix_M2C_NN_control_2024b_DW.p4 = 4.0;
    imperix_M2C_MovingRMS1_Init(&imperix_M2C_NN_control_2024b_DW.MovingRMS1);
    imperix_M2C_MovingRMS1_Init(&imperix_M2C_NN_control_2024b_DW.MovingRMS2);
  }
}

// Model terminate function
void imperix_M2C_NN_control_2024b_terminate(void)
{
  imperix_M2C_MovingRMS1_Term(&imperix_M2C_NN_control_2024b_DW.MovingRMS1);
  imperix_M2C_MovingRMS1_Term(&imperix_M2C_NN_control_2024b_DW.MovingRMS2);
}

boolean_T RT_MODEL_imperix_M2C_NN_contr_T::StepTask(int32_T idx) const
{
  return (Timing.TaskCounters.TID[(idx)] == 0);
}

uint8_T &RT_MODEL_imperix_M2C_NN_contr_T::CounterLimit(int32_T idx)
{
  return (Timing.TaskCounters.cLimit[(idx)]);
}

const char_T* RT_MODEL_imperix_M2C_NN_contr_T::getErrorStatus() const
{
  return (errorStatus);
}

void RT_MODEL_imperix_M2C_NN_contr_T::setErrorStatus(const char_T* const
  volatile aErrorStatus)
{
  (errorStatus = aErrorStatus);
}

uint8_T &RT_MODEL_imperix_M2C_NN_contr_T::TaskCounter(int32_T idx)
{
  return (Timing.TaskCounters.TID[(idx)]);
}

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
