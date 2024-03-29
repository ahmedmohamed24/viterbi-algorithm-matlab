/*
 * ConEncoder_wrapper_fixpt_hdl_mex_emxutil.h
 *
 * Code generation for function 'ConEncoder_wrapper_fixpt_hdl_mex_emxutil'
 *
 */

#ifndef CONENCODER_WRAPPER_FIXPT_HDL_MEX_EMXUTIL_H
#define CONENCODER_WRAPPER_FIXPT_HDL_MEX_EMXUTIL_H

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
extern void emxEnsureCapacity_uint8_T(const emlrtStack *sp, emxArray_uint8_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxFreeStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct);
extern void emxFree_uint8_T(const emlrtStack *sp, emxArray_uint8_T **pEmxArray);
extern void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_uint8_T(const emlrtStack *sp, emxArray_uint8_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);

#endif

/* End of code generation (ConEncoder_wrapper_fixpt_hdl_mex_emxutil.h) */
