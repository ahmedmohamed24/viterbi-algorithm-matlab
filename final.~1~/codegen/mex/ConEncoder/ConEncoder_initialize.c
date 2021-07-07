/*
 * ConEncoder_initialize.c
 *
 * Code generation for function 'ConEncoder_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ConEncoder.h"
#include "ConEncoder_initialize.h"
#include "_coder_ConEncoder_mex.h"
#include "ConEncoder_data.h"

/* Function Definitions */
void ConEncoder_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (ConEncoder_initialize.c) */
