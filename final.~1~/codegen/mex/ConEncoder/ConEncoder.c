/*
 * ConEncoder.c
 *
 * Code generation for function 'ConEncoder'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "ConEncoder.h"
#include "all_in_integer_range.h"
#include "ConEncoder_emxutil.h"
#include "ConEncoder_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 8,     /* lineNo */
  "ConEncoder",                        /* fcnName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\ConEncoder.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 9,   /* lineNo */
  "ConEncoder",                        /* fcnName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\ConEncoder.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 10,  /* lineNo */
  "bitxor",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\bitxor.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 3,   /* lineNo */
  5,                                   /* colNo */
  "ConEncoder",                        /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\ConEncoder.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  10,                                  /* iLast */
  8,                                   /* lineNo */
  46,                                  /* colNo */
  "in",                                /* aName */
  "ConEncoder",                        /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\ConEncoder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = { 64,/* lineNo */
  9,                                   /* colNo */
  "bitbinop",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\private\\bitbinop.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 3,     /* lineNo */
  20,                                  /* colNo */
  "ConEncoder",                        /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\ConEncoder.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 3,   /* lineNo */
  20,                                  /* colNo */
  "ConEncoder",                        /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\ConEncoder.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 3,   /* lineNo */
  5,                                   /* colNo */
  "ConEncoder",                        /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\ConEncoder.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 3,   /* lineNo */
  5,                                   /* colNo */
  "ConEncoder",                        /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\ConEncoder.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  8,                                   /* lineNo */
  9,                                   /* colNo */
  "out",                               /* aName */
  "ConEncoder",                        /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\ConEncoder.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  9,                                   /* colNo */
  "out",                               /* aName */
  "ConEncoder",                        /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\ConEncoder.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void ConEncoder(const emlrtStack *sp, const real_T in[10], real_T size,
                emxArray_real_T *out)
{
  int32_T i0;
  real_T d0;
  int32_T b_index;
  real_T currentState[6];
  uint64_T u0;
  uint64_T u1;
  real_T varargin_2;
  int32_T i1;
  real_T b_in[6];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  i0 = out->size[0] * out->size[1];
  out->size[0] = 1;
  d0 = size * 2.0;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &b_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &emlrtDCI, sp);
  }

  out->size[1] = (int32_T)d0;
  emxEnsureCapacity_real_T(sp, out, i0, &emlrtRTEI);
  d0 = size * 2.0;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &d_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &c_emlrtDCI, sp);
  }

  b_index = (int32_T)d0;
  for (i0 = 0; i0 < b_index; i0++) {
    out->data[i0] = 0.0;
  }

  for (i0 = 0; i0 < 6; i0++) {
    currentState[i0] = 0.0;
  }

  b_index = 0;
  while (b_index + 1 <= size) {
    st.site = &emlrtRSI;
    b_st.site = &c_emlrtRSI;
    if (all_in_integer_range(currentState[2]) && all_in_integer_range
        (currentState[5])) {
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
        "MATLAB:bitAndXorOr:outOfRange", "MATLAB:bitAndXorOr:outOfRange", 0);
    }

    d0 = muDoubleScalarRound(currentState[2]);
    if (d0 < 1.8446744073709552E+19) {
      if (d0 >= 0.0) {
        u0 = (uint64_T)d0;
      } else {
        u0 = 0ULL;
      }
    } else if (d0 >= 1.8446744073709552E+19) {
      u0 = MAX_uint64_T;
    } else {
      u0 = 0ULL;
    }

    d0 = muDoubleScalarRound(currentState[5]);
    if (d0 < 1.8446744073709552E+19) {
      if (d0 >= 0.0) {
        u1 = (uint64_T)d0;
      } else {
        u1 = 0ULL;
      }
    } else if (d0 >= 1.8446744073709552E+19) {
      u1 = MAX_uint64_T;
    } else {
      u1 = 0ULL;
    }

    varargin_2 = (real_T)(u0 ^ u1);
    st.site = &emlrtRSI;
    b_st.site = &c_emlrtRSI;
    if (all_in_integer_range(currentState[1]) && all_in_integer_range(varargin_2))
    {
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
        "MATLAB:bitAndXorOr:outOfRange", "MATLAB:bitAndXorOr:outOfRange", 0);
    }

    d0 = muDoubleScalarRound(currentState[1]);
    if (d0 < 1.8446744073709552E+19) {
      if (d0 >= 0.0) {
        u0 = (uint64_T)d0;
      } else {
        u0 = 0ULL;
      }
    } else if (d0 >= 1.8446744073709552E+19) {
      u0 = MAX_uint64_T;
    } else {
      u0 = 0ULL;
    }

    d0 = muDoubleScalarRound(varargin_2);
    if (d0 < 1.8446744073709552E+19) {
      if (d0 >= 0.0) {
        u1 = (uint64_T)d0;
      } else {
        u1 = 0ULL;
      }
    } else if (d0 >= 1.8446744073709552E+19) {
      u1 = MAX_uint64_T;
    } else {
      u1 = 0ULL;
    }

    varargin_2 = (real_T)(u0 ^ u1);
    i0 = b_index + 1;
    if (!((i0 >= 1) && (i0 <= 10))) {
      emlrtDynamicBoundsCheckR2012b(i0, 1, 10, &emlrtBCI, sp);
    }

    st.site = &emlrtRSI;
    b_st.site = &c_emlrtRSI;
    if (all_in_integer_range(currentState[0]) && all_in_integer_range(varargin_2))
    {
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
        "MATLAB:bitAndXorOr:outOfRange", "MATLAB:bitAndXorOr:outOfRange", 0);
    }

    d0 = muDoubleScalarRound(currentState[0]);
    if (d0 < 1.8446744073709552E+19) {
      if (d0 >= 0.0) {
        u0 = (uint64_T)d0;
      } else {
        u0 = 0ULL;
      }
    } else if (d0 >= 1.8446744073709552E+19) {
      u0 = MAX_uint64_T;
    } else {
      u0 = 0ULL;
    }

    d0 = muDoubleScalarRound(varargin_2);
    if (d0 < 1.8446744073709552E+19) {
      if (d0 >= 0.0) {
        u1 = (uint64_T)d0;
      } else {
        u1 = 0ULL;
      }
    } else if (d0 >= 1.8446744073709552E+19) {
      u1 = MAX_uint64_T;
    } else {
      u1 = 0ULL;
    }

    varargin_2 = (real_T)(u0 ^ u1);
    st.site = &emlrtRSI;
    b_st.site = &c_emlrtRSI;
    if (all_in_integer_range(in[b_index]) && all_in_integer_range(varargin_2)) {
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
        "MATLAB:bitAndXorOr:outOfRange", "MATLAB:bitAndXorOr:outOfRange", 0);
    }

    i0 = out->size[1];
    i1 = ((b_index + 1) << 1) - 1;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &b_emlrtBCI, sp);
    }

    d0 = muDoubleScalarRound(in[b_index]);
    if (d0 < 1.8446744073709552E+19) {
      if (d0 >= 0.0) {
        u0 = (uint64_T)d0;
      } else {
        u0 = 0ULL;
      }
    } else if (d0 >= 1.8446744073709552E+19) {
      u0 = MAX_uint64_T;
    } else {
      u0 = 0ULL;
    }

    d0 = muDoubleScalarRound(varargin_2);
    if (d0 < 1.8446744073709552E+19) {
      if (d0 >= 0.0) {
        u1 = (uint64_T)d0;
      } else {
        u1 = 0ULL;
      }
    } else if (d0 >= 1.8446744073709552E+19) {
      u1 = MAX_uint64_T;
    } else {
      u1 = 0ULL;
    }

    out->data[out->size[0] * (i1 - 1)] = (real_T)(u0 ^ u1);
    st.site = &b_emlrtRSI;
    b_st.site = &c_emlrtRSI;
    if (all_in_integer_range(currentState[4]) && all_in_integer_range
        (currentState[5])) {
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
        "MATLAB:bitAndXorOr:outOfRange", "MATLAB:bitAndXorOr:outOfRange", 0);
    }

    d0 = muDoubleScalarRound(currentState[4]);
    if (d0 < 1.8446744073709552E+19) {
      if (d0 >= 0.0) {
        u0 = (uint64_T)d0;
      } else {
        u0 = 0ULL;
      }
    } else if (d0 >= 1.8446744073709552E+19) {
      u0 = MAX_uint64_T;
    } else {
      u0 = 0ULL;
    }

    d0 = muDoubleScalarRound(currentState[5]);
    if (d0 < 1.8446744073709552E+19) {
      if (d0 >= 0.0) {
        u1 = (uint64_T)d0;
      } else {
        u1 = 0ULL;
      }
    } else if (d0 >= 1.8446744073709552E+19) {
      u1 = MAX_uint64_T;
    } else {
      u1 = 0ULL;
    }

    varargin_2 = (real_T)(u0 ^ u1);
    st.site = &b_emlrtRSI;
    b_st.site = &c_emlrtRSI;
    if (all_in_integer_range(currentState[2]) && all_in_integer_range(varargin_2))
    {
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
        "MATLAB:bitAndXorOr:outOfRange", "MATLAB:bitAndXorOr:outOfRange", 0);
    }

    d0 = muDoubleScalarRound(currentState[2]);
    if (d0 < 1.8446744073709552E+19) {
      if (d0 >= 0.0) {
        u0 = (uint64_T)d0;
      } else {
        u0 = 0ULL;
      }
    } else if (d0 >= 1.8446744073709552E+19) {
      u0 = MAX_uint64_T;
    } else {
      u0 = 0ULL;
    }

    d0 = muDoubleScalarRound(varargin_2);
    if (d0 < 1.8446744073709552E+19) {
      if (d0 >= 0.0) {
        u1 = (uint64_T)d0;
      } else {
        u1 = 0ULL;
      }
    } else if (d0 >= 1.8446744073709552E+19) {
      u1 = MAX_uint64_T;
    } else {
      u1 = 0ULL;
    }

    varargin_2 = (real_T)(u0 ^ u1);
    st.site = &b_emlrtRSI;
    b_st.site = &c_emlrtRSI;
    if (all_in_integer_range(currentState[1]) && all_in_integer_range(varargin_2))
    {
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
        "MATLAB:bitAndXorOr:outOfRange", "MATLAB:bitAndXorOr:outOfRange", 0);
    }

    d0 = muDoubleScalarRound(currentState[1]);
    if (d0 < 1.8446744073709552E+19) {
      if (d0 >= 0.0) {
        u0 = (uint64_T)d0;
      } else {
        u0 = 0ULL;
      }
    } else if (d0 >= 1.8446744073709552E+19) {
      u0 = MAX_uint64_T;
    } else {
      u0 = 0ULL;
    }

    d0 = muDoubleScalarRound(varargin_2);
    if (d0 < 1.8446744073709552E+19) {
      if (d0 >= 0.0) {
        u1 = (uint64_T)d0;
      } else {
        u1 = 0ULL;
      }
    } else if (d0 >= 1.8446744073709552E+19) {
      u1 = MAX_uint64_T;
    } else {
      u1 = 0ULL;
    }

    varargin_2 = (real_T)(u0 ^ u1);
    st.site = &b_emlrtRSI;
    b_st.site = &c_emlrtRSI;
    if (all_in_integer_range(in[b_index]) && all_in_integer_range(varargin_2)) {
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
        "MATLAB:bitAndXorOr:outOfRange", "MATLAB:bitAndXorOr:outOfRange", 0);
    }

    i0 = out->size[1];
    i1 = (b_index + 1) << 1;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &c_emlrtBCI, sp);
    }

    d0 = muDoubleScalarRound(in[b_index]);
    if (d0 < 1.8446744073709552E+19) {
      if (d0 >= 0.0) {
        u0 = (uint64_T)d0;
      } else {
        u0 = 0ULL;
      }
    } else if (d0 >= 1.8446744073709552E+19) {
      u0 = MAX_uint64_T;
    } else {
      u0 = 0ULL;
    }

    d0 = muDoubleScalarRound(varargin_2);
    if (d0 < 1.8446744073709552E+19) {
      if (d0 >= 0.0) {
        u1 = (uint64_T)d0;
      } else {
        u1 = 0ULL;
      }
    } else if (d0 >= 1.8446744073709552E+19) {
      u1 = MAX_uint64_T;
    } else {
      u1 = 0ULL;
    }

    out->data[out->size[0] * (i1 - 1)] = (real_T)(u0 ^ u1);
    b_in[0] = in[b_index];
    for (i0 = 0; i0 < 5; i0++) {
      b_in[i0 + 1] = currentState[i0];
    }

    for (i0 = 0; i0 < 6; i0++) {
      currentState[i0] = b_in[i0];
    }

    b_index++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

/* End of code generation (ConEncoder.c) */
