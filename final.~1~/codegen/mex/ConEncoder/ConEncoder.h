/*
 * ConEncoder.h
 *
 * Code generation for function 'ConEncoder'
 *
 */

#ifndef CONENCODER_H
#define CONENCODER_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "ConEncoder_types.h"

/* Function Declarations */
extern void ConEncoder(const emlrtStack *sp, const real_T in[10], real_T size,
  emxArray_real_T *out);

#endif

/* End of code generation (ConEncoder.h) */
