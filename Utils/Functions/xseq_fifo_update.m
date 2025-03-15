function xseq = xseq_fifo_update(xseq, x)
xseq = cat(3, xseq(:, :, 2:end), x);
end