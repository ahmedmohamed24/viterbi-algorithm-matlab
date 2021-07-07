/*
 * all_in_integer_range.c
 *
 * Code generation for function 'all_in_integer_range'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ConEncoder.h"
#include "all_in_integer_range.h"

/* Function Definitions */
boolean_T all_in_integer_range(real_T x)
{
  boolean_T p;
  boolean_T b_p;
  p = true;
  b_p = false;
  if ((0.0 <= x) && (x < 1.8446744073709552E+19)) {
    b_p = ((x >= 4.503599627370496E+15) || (0.0 <= x));
  } else {
    if (x >= 0.0) {
      b_p = true;
    }
  }

  if (b_p) {
    b_p = false;
    if ((0.0 <= x) && (x < 1.8446744073709552E+19)) {
      b_p = true;
    } else {
      if (x < 0.0) {
        b_p = true;
      }
    }

    if (b_p && (x == muDoubleScalarFloor(x))) {
    } else {
      p = false;
    }
  } else {
    p = false;
  }

  return p;
}

/* End of code generation (all_in_integer_range.c) */
