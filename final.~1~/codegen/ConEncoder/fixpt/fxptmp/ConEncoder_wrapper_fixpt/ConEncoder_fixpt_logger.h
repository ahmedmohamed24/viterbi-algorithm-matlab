/*
 * ConEncoder_fixpt_logger.h
 *
 * Code generation for function 'ConEncoder_fixpt_logger'
 *
 */

#ifndef CONENCODER_FIXPT_LOGGER_H
#define CONENCODER_FIXPT_LOGGER_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "ConEncoder_wrapper_fixpt_hdl_mex_types.h"

/* Function Declarations */
extern void ConEncoder_fixpt_logger(const emlrtStack *sp, struct0_T *loggedData);
extern void ConEncoder_fixpt_logger_init(void);
extern void b_ConEncoder_fixpt_logger(const emlrtStack *sp, const uint8_T
  varargin_1[10], uint8_T varargin_2, const uint8_T varargin_3[20]);
extern void in_TB_logger_free(const emlrtStack *sp);
extern void in_TB_logger_init(const emlrtStack *sp);
extern void iterCount_not_empty_init(void);
extern void out_TB_logger_free(const emlrtStack *sp);
extern void out_TB_logger_init(const emlrtStack *sp);
extern void size_TB_logger_free(const emlrtStack *sp);
extern void size_TB_logger_init(const emlrtStack *sp);

#endif

/* End of code generation (ConEncoder_fixpt_logger.h) */
