/*
 * ConEncoder_wrapper_fixpt_hdl_mex_emxutil.c
 *
 * Code generation for function 'ConEncoder_wrapper_fixpt_hdl_mex_emxutil'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "ConEncoder_fixpt_logger.h"
#include "ConEncoder_wrapper_fixpt.h"
#include "ConEncoder_wrapper_fixpt_hdl_mex_emxutil.h"

/* Function Declarations */
static void emxFreeStruct_struct1_T(const emlrtStack *sp, struct1_T *pStruct);
static void emxFreeStruct_struct2_T(const emlrtStack *sp, struct2_T *pStruct);
static void emxInitStruct_struct1_T(const emlrtStack *sp, struct1_T *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush);
static void emxInitStruct_struct2_T(const emlrtStack *sp, struct2_T *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush);

/* Function Definitions */
static void emxFreeStruct_struct1_T(const emlrtStack *sp, struct1_T *pStruct)
{
  emxFree_uint8_T(sp, &pStruct->in);
  emxFree_uint8_T(sp, &pStruct->size);
}

static void emxFreeStruct_struct2_T(const emlrtStack *sp, struct2_T *pStruct)
{
  emxFree_uint8_T(sp, &pStruct->out);
}

static void emxInitStruct_struct1_T(const emlrtStack *sp, struct1_T *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxInit_uint8_T(sp, &pStruct->in, 2, srcLocation, doPush);
  emxInit_uint8_T(sp, &pStruct->size, 2, srcLocation, doPush);
}

static void emxInitStruct_struct2_T(const emlrtStack *sp, struct2_T *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxInit_uint8_T(sp, &pStruct->out, 2, srcLocation, doPush);
}

void emxEnsureCapacity_uint8_T(const emlrtStack *sp, emxArray_uint8_T *emxArray,
  int32_T oldNumel, const emlrtRTEInfo *srcLocation)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], srcLocation, sp);
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(uint8_T));
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, sp);
    }

    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, sizeof(uint8_T) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex2018a(sp, (void *)emxArray->data);
      }
    }

    emxArray->data = (uint8_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxFreeStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct)
{
  emxFreeStruct_struct1_T(sp, &pStruct->inputs);
  emxFreeStruct_struct2_T(sp, &pStruct->outputs);
}

void emxFree_uint8_T(const emlrtStack *sp, emxArray_uint8_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_uint8_T *)NULL) {
    if (((*pEmxArray)->data != (uint8_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex2018a(sp, (void *)(*pEmxArray)->data);
    }

    emlrtFreeMex2018a(sp, (void *)(*pEmxArray)->size);
    emlrtFreeMex2018a(sp, (void *)*pEmxArray);
    *pEmxArray = (emxArray_uint8_T *)NULL;
  }
}

void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxInitStruct_struct1_T(sp, &pStruct->inputs, srcLocation, doPush);
  emxInitStruct_struct2_T(sp, &pStruct->outputs, srcLocation, doPush);
}

void emxInit_uint8_T(const emlrtStack *sp, emxArray_uint8_T **pEmxArray, int32_T
                     numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                     doPush)
{
  emxArray_uint8_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_uint8_T *)emlrtMallocMex(sizeof(emxArray_uint8_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2018a(sp, (void *)pEmxArray, (void (*)(const
      void *, void *))emxFree_uint8_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (uint8_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/* End of code generation (ConEncoder_wrapper_fixpt_hdl_mex_emxutil.c) */
