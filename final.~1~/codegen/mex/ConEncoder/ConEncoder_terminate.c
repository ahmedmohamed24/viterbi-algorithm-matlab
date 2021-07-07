/*
 * ConEncoder_terminate.c
 *
 * Code generation for function 'ConEncoder_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ConEncoder.h"
#include "ConEncoder_terminate.h"
#include "_coder_ConEncoder_mex.h"
#include "ConEncoder_data.h"

/* Function Definitions */
void ConEncoder_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void ConEncoder_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (ConEncoder_terminate.c) */
