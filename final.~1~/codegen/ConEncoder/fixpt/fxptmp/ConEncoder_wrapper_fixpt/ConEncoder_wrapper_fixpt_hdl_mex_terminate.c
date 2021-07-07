/*
 * ConEncoder_wrapper_fixpt_hdl_mex_terminate.c
 *
 * Code generation for function 'ConEncoder_wrapper_fixpt_hdl_mex_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ConEncoder_fixpt_logger.h"
#include "ConEncoder_wrapper_fixpt.h"
#include "ConEncoder_wrapper_fixpt_hdl_mex_terminate.h"
#include "_coder_ConEncoder_wrapper_fixpt_hdl_mex_mex.h"
#include "ConEncoder_wrapper_fixpt_hdl_mex_data.h"

/* Function Definitions */
void ConEncoder_wrapper_fixpt_hdl_mex_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  out_TB_logger_free(&st);
  size_TB_logger_free(&st);
  in_TB_logger_free(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtDestroyArray(&eml_mx);
  emlrtDestroyArray(&b_eml_mx);
  emlrtDestroyArray(&c_eml_mx);
}

void ConEncoder_wrapper_fixpt_hdl_mex_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (ConEncoder_wrapper_fixpt_hdl_mex_terminate.c) */
