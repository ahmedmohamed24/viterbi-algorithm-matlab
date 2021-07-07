/*
 * _coder_ConEncoder_mex.c
 *
 * Code generation for function '_coder_ConEncoder_mex'
 *
 */

/* Include files */
#include "ConEncoder.h"
#include "_coder_ConEncoder_mex.h"
#include "ConEncoder_terminate.h"
#include "_coder_ConEncoder_api.h"
#include "ConEncoder_initialize.h"
#include "ConEncoder_data.h"

/* Function Declarations */
static void ConEncoder_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[2]);

/* Function Definitions */
static void ConEncoder_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[2])
{
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4,
                        10, "ConEncoder");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 10,
                        "ConEncoder");
  }

  /* Call the function. */
  ConEncoder_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  ConEncoder_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(ConEncoder_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  ConEncoder_initialize();

  /* Dispatch the entry-point. */
  ConEncoder_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_ConEncoder_mex.c) */
