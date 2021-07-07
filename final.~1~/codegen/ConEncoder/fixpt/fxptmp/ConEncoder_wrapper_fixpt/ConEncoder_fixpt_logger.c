/*
 * ConEncoder_fixpt_logger.c
 *
 * Code generation for function 'ConEncoder_fixpt_logger'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ConEncoder_fixpt_logger.h"
#include "ConEncoder_wrapper_fixpt.h"
#include "ConEncoder_wrapper_fixpt_hdl_mex_emxutil.h"

/* Variable Definitions */
static real_T iterCount;
static boolean_T iterCount_not_empty;
static emxArray_uint8_T *p;
static boolean_T p_not_empty;
static emxArray_uint8_T *b_p;
static boolean_T b_p_not_empty;
static emxArray_uint8_T *c_p;
static boolean_T c_p_not_empty;
static emlrtRSInfo h_emlrtRSI = { 13,  /* lineNo */
  "ConEncoder_fixpt_logger",           /* fcnName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\codegen\\ConEncoder\\fixpt\\fxptmp\\ConEncoder_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 14,  /* lineNo */
  "ConEncoder_fixpt_logger",           /* fcnName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\codegen\\ConEncoder\\fixpt\\fxptmp\\ConEncoder_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 15,  /* lineNo */
  "ConEncoder_fixpt_logger",           /* fcnName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\codegen\\ConEncoder\\fixpt\\fxptmp\\ConEncoder_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 26,  /* lineNo */
  "ConEncoder_fixpt_logger",           /* fcnName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\codegen\\ConEncoder\\fixpt\\fxptmp\\ConEncoder_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 27,  /* lineNo */
  "ConEncoder_fixpt_logger",           /* fcnName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\codegen\\ConEncoder\\fixpt\\fxptmp\\ConEncoder_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 28,  /* lineNo */
  "ConEncoder_fixpt_logger",           /* fcnName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\codegen\\ConEncoder\\fixpt\\fxptmp\\ConEncoder_fixpt_logger.m"/* pathName */
};

static emlrtMCInfo b_emlrtMCI = { 19,  /* lineNo */
  20,                                  /* colNo */
  "ConEncoder_fixpt_logger",           /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\codegen\\ConEncoder\\fixpt\\fxptmp\\ConEncoder_fixpt_logger.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 19,  /* lineNo */
  13,                                  /* colNo */
  "ConEncoder_fixpt_logger",           /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\codegen\\ConEncoder\\fixpt\\fxptmp\\ConEncoder_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 34,  /* lineNo */
  16,                                  /* colNo */
  "ConEncoder_fixpt_logger",           /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\codegen\\ConEncoder\\fixpt\\fxptmp\\ConEncoder_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 53,/* lineNo */
  16,                                  /* colNo */
  "ConEncoder_fixpt_logger",           /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\codegen\\ConEncoder\\fixpt\\fxptmp\\ConEncoder_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 72,/* lineNo */
  16,                                  /* colNo */
  "ConEncoder_fixpt_logger",           /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\codegen\\ConEncoder\\fixpt\\fxptmp\\ConEncoder_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 32,/* lineNo */
  16,                                  /* colNo */
  "ConEncoder_fixpt_logger",           /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\codegen\\ConEncoder\\fixpt\\fxptmp\\ConEncoder_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 51,/* lineNo */
  16,                                  /* colNo */
  "ConEncoder_fixpt_logger",           /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\codegen\\ConEncoder\\fixpt\\fxptmp\\ConEncoder_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 70,/* lineNo */
  16,                                  /* colNo */
  "ConEncoder_fixpt_logger",           /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\codegen\\ConEncoder\\fixpt\\fxptmp\\ConEncoder_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 25,/* lineNo */
  9,                                   /* colNo */
  "ConEncoder_fixpt_logger",           /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\codegen\\ConEncoder\\fixpt\\fxptmp\\ConEncoder_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 46,/* lineNo */
  9,                                   /* colNo */
  "ConEncoder_fixpt_logger",           /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\codegen\\ConEncoder\\fixpt\\fxptmp\\ConEncoder_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 65,/* lineNo */
  9,                                   /* colNo */
  "ConEncoder_fixpt_logger",           /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\codegen\\ConEncoder\\fixpt\\fxptmp\\ConEncoder_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 84,/* lineNo */
  9,                                   /* colNo */
  "ConEncoder_fixpt_logger",           /* fName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\codegen\\ConEncoder\\fixpt\\fxptmp\\ConEncoder_fixpt_logger.m"/* pName */
};

static emlrtRSInfo n_emlrtRSI = { 19,  /* lineNo */
  "ConEncoder_fixpt_logger",           /* fcnName */
  "Z:\\Documents\\Viterbi Algorithm\\final\\codegen\\ConEncoder\\fixpt\\fxptmp\\ConEncoder_fixpt_logger.m"/* pathName */
};

/* Function Declarations */
static const mxArray *MException(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void b_in_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out);
static void b_out_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out);
static void b_size_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out);
static void in_TB_logger(const emlrtStack *sp, const uint8_T v[10]);
static void out_TB_logger(const emlrtStack *sp, const uint8_T v[20]);
static void size_TB_logger(const emlrtStack *sp, uint8_T v);
static void throw(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *MException(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m5;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m5, 2, pArrays, "MException", true,
    location);
}

static void b_in_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out)
{
  int32_T i4;
  int32_T loop_ub;
  if (!p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &i_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i4 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = p->size[1];
  emxEnsureCapacity_uint8_T(sp, out, i4, &d_emlrtRTEI);
  loop_ub = p->size[0] * p->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    out->data[i4] = p->data[i4];
  }

  i4 = p->size[0] * p->size[1];
  p->size[0] = 1;
  p->size[1] = 0;
  emxEnsureCapacity_uint8_T(sp, p, i4, &d_emlrtRTEI);
  p_not_empty = false;
}

static void b_out_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out)
{
  int32_T i6;
  int32_T loop_ub;
  if (!c_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i6 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = c_p->size[1];
  emxEnsureCapacity_uint8_T(sp, out, i6, &f_emlrtRTEI);
  loop_ub = c_p->size[0] * c_p->size[1];
  for (i6 = 0; i6 < loop_ub; i6++) {
    out->data[i6] = c_p->data[i6];
  }

  i6 = c_p->size[0] * c_p->size[1];
  c_p->size[0] = 1;
  c_p->size[1] = 0;
  emxEnsureCapacity_uint8_T(sp, c_p, i6, &f_emlrtRTEI);
  c_p_not_empty = false;
}

static void b_size_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out)
{
  int32_T i5;
  int32_T loop_ub;
  if (!b_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &j_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i5 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = b_p->size[1];
  emxEnsureCapacity_uint8_T(sp, out, i5, &e_emlrtRTEI);
  loop_ub = b_p->size[0] * b_p->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    out->data[i5] = b_p->data[i5];
  }

  i5 = b_p->size[0] * b_p->size[1];
  b_p->size[0] = 1;
  b_p->size[1] = 0;
  emxEnsureCapacity_uint8_T(sp, b_p, i5, &e_emlrtRTEI);
  b_p_not_empty = false;
}

static void in_TB_logger(const emlrtStack *sp, const uint8_T v[10])
{
  int32_T i1;
  int32_T xs;
  if (!p_not_empty) {
    i1 = p->size[0] * p->size[1];
    p->size[0] = 1;
    p->size[1] = 0;
    emxEnsureCapacity_uint8_T(sp, p, i1, &d_emlrtRTEI);
    p_not_empty = false;
  }

  xs = p->size[1];
  i1 = p->size[0] * p->size[1];
  p->size[1] = xs + 10;
  emxEnsureCapacity_uint8_T(sp, p, i1, &d_emlrtRTEI);
  for (i1 = 0; i1 < 10; i1++) {
    p->data[xs + i1] = v[i1];
  }

  p_not_empty = true;
}

static void out_TB_logger(const emlrtStack *sp, const uint8_T v[20])
{
  int32_T i3;
  int32_T xs;
  if (!c_p_not_empty) {
    i3 = c_p->size[0] * c_p->size[1];
    c_p->size[0] = 1;
    c_p->size[1] = 0;
    emxEnsureCapacity_uint8_T(sp, c_p, i3, &f_emlrtRTEI);
    c_p_not_empty = false;
  }

  xs = c_p->size[1];
  i3 = c_p->size[0] * c_p->size[1];
  c_p->size[1] = xs + 20;
  emxEnsureCapacity_uint8_T(sp, c_p, i3, &f_emlrtRTEI);
  for (i3 = 0; i3 < 20; i3++) {
    c_p->data[xs + i3] = v[i3];
  }

  c_p_not_empty = true;
}

static void size_TB_logger(const emlrtStack *sp, uint8_T v)
{
  int32_T i2;
  int32_T xs;
  if (!b_p_not_empty) {
    i2 = b_p->size[0] * b_p->size[1];
    b_p->size[0] = 1;
    b_p->size[1] = 0;
    emxEnsureCapacity_uint8_T(sp, b_p, i2, &e_emlrtRTEI);
    b_p_not_empty = false;
  }

  xs = b_p->size[1];
  i2 = b_p->size[0] * b_p->size[1];
  b_p->size[1] = xs + 1;
  emxEnsureCapacity_uint8_T(sp, b_p, i2, &e_emlrtRTEI);
  b_p->data[xs] = v;
  b_p_not_empty = true;
}

static void throw(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "throw", true, location);
}

void ConEncoder_fixpt_logger(const emlrtStack *sp, struct0_T *loggedData)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!iterCount_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &h_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  st.site = &k_emlrtRSI;
  b_in_TB_logger(&st, loggedData->inputs.in);
  st.site = &l_emlrtRSI;
  b_size_TB_logger(&st, loggedData->inputs.size);
  st.site = &m_emlrtRSI;
  b_out_TB_logger(&st, loggedData->outputs.out);
  loggedData->iterCount = iterCount;
}

void ConEncoder_fixpt_logger_init(void)
{
  iterCount = 0.0;
  iterCount_not_empty = true;
}

void b_ConEncoder_fixpt_logger(const emlrtStack *sp, const uint8_T varargin_1[10],
  uint8_T varargin_2, const uint8_T varargin_3[20])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 30 };

  static const char_T u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'X', 'P', 'C',
    'O', 'N', 'V', ':', 'M', 'A', 'T', 'L', 'A', 'B', 'S', 'i', 'm', 'B', 'a',
    'i', 'l', 'O', 'u', 't' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 34 };

  static const char_T b_u[34] = { 'R', 'e', 't', 'u', 'r', 'n', ' ', 'e', 'a',
    'r', 'l', 'y', ' ', 'f', 'o', 'r', ' ', 'i', 'n', 'p', 'u', 't', ' ', 'c',
    'o', 'm', 'p', 'u', 't', 'a', 't', 'i', 'o', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &h_emlrtRSI;
  in_TB_logger(&st, varargin_1);
  st.site = &i_emlrtRSI;
  size_TB_logger(&st, varargin_2);
  st.site = &j_emlrtRSI;
  out_TB_logger(&st, varargin_3);
  iterCount++;
  if (iterCount >= rtInf) {
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(sp, 30, m0, &u[0]);
    emlrtAssign(&y, m0);
    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 34, m0, &b_u[0]);
    emlrtAssign(&b_y, m0);
    st.site = &n_emlrtRSI;
    throw(&st, MException(&st, y, b_y, &b_emlrtMCI), &c_emlrtMCI);
  }
}

void in_TB_logger_free(const emlrtStack *sp)
{
  emxFree_uint8_T(sp, &p);
}

void in_TB_logger_init(const emlrtStack *sp)
{
  emxInit_uint8_T(sp, &p, 2, &emlrtRTEI, false);
  p_not_empty = false;
}

void iterCount_not_empty_init(void)
{
  iterCount_not_empty = false;
}

void out_TB_logger_free(const emlrtStack *sp)
{
  emxFree_uint8_T(sp, &c_p);
}

void out_TB_logger_init(const emlrtStack *sp)
{
  emxInit_uint8_T(sp, &c_p, 2, &c_emlrtRTEI, false);
  c_p_not_empty = false;
}

void size_TB_logger_free(const emlrtStack *sp)
{
  emxFree_uint8_T(sp, &b_p);
}

void size_TB_logger_init(const emlrtStack *sp)
{
  emxInit_uint8_T(sp, &b_p, 2, &b_emlrtRTEI, false);
  b_p_not_empty = false;
}

/* End of code generation (ConEncoder_fixpt_logger.c) */
