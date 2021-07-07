/*
 * _coder_ConEncoder_wrapper_fixpt_hdl_mex_mex.c
 *
 * Code generation for function '_coder_ConEncoder_wrapper_fixpt_hdl_mex_mex'
 *
 */

/* Include files */
#include "ConEncoder_fixpt_logger.h"
#include "ConEncoder_wrapper_fixpt.h"
#include "_coder_ConEncoder_wrapper_fixpt_hdl_mex_mex.h"
#include "ConEncoder_wrapper_fixpt_hdl_mex_terminate.h"
#include "_coder_ConEncoder_wrapper_fixpt_hdl_mex_api.h"
#include "ConEncoder_wrapper_fixpt_hdl_mex_initialize.h"
#include "ConEncoder_wrapper_fixpt_hdl_mex_data.h"

/* Variable Definitions */
static const char * emlrtEntryPoints[2] = { "ConEncoder_wrapper_fixpt",
  "ConEncoder_fixpt_logger" };

/* Function Declarations */
static void c_ConEncoder_fixpt_logger_mexFu(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs);
static void c_ConEncoder_wrapper_fixpt_mexF(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[2]);

/* Function Definitions */
static void c_ConEncoder_fixpt_logger_mexFu(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs)
{
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 0, 4,
                        23, "ConEncoder_fixpt_logger");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 23,
                        "ConEncoder_fixpt_logger");
  }

  /* Call the function. */
  ConEncoder_fixpt_logger_api(nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  ConEncoder_wrapper_fixpt_hdl_mex_terminate();
}

static void c_ConEncoder_wrapper_fixpt_mexF(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[2])
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
                        24, "ConEncoder_wrapper_fixpt");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 24,
                        "ConEncoder_wrapper_fixpt");
  }

  /* Call the function. */
  ConEncoder_wrapper_fixpt_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  ConEncoder_wrapper_fixpt_hdl_mex_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexAtExit(ConEncoder_wrapper_fixpt_hdl_mex_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  ConEncoder_wrapper_fixpt_hdl_mex_initialize();
  st.tls = emlrtRootTLSGlobal;

  /* Dispatch the entry-point. */
  switch (emlrtGetEntryPointIndexR2016a(&st, nrhs, prhs, emlrtEntryPoints, 2)) {
   case 0:
    c_ConEncoder_wrapper_fixpt_mexF(nlhs, plhs, nrhs - 1, *(const mxArray *(*)[2])
      &prhs[1]);
    break;

   case 1:
    c_ConEncoder_fixpt_logger_mexFu(nlhs, plhs, nrhs - 1);
    break;
  }
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_ConEncoder_wrapper_fixpt_hdl_mex_mex.c) */
