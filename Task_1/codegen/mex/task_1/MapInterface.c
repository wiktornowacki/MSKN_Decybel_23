/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * MapInterface.c
 *
 * Code generation for function 'MapInterface'
 *
 */

/* Include files */
#include "MapInterface.h"
#include "rt_nonfinite.h"
#include "task_1_data.h"
#include "task_1_emxutil.h"
#include "task_1_types.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <math.h>

/* Variable Definitions */
static emlrtRSInfo kg_emlrtRSI = {
    507,                           /* lineNo */
    "MapInterface/grid2worldImpl", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\shared\\autonomous\\maplib\\internal\\+"
    "matlabshared\\+autonomous\\+internal\\MapInte"
    "rface.m" /* pathName */
};

static emlrtRSInfo lg_emlrtRSI = {
    508,                           /* lineNo */
    "MapInterface/grid2worldImpl", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\shared\\autonomous\\maplib\\internal\\+"
    "matlabshared\\+autonomous\\+internal\\MapInte"
    "rface.m" /* pathName */
};

static emlrtRSInfo mg_emlrtRSI = {
    518,                           /* lineNo */
    "MapInterface/grid2localImpl", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\shared\\autonomous\\maplib\\internal\\+"
    "matlabshared\\+autonomous\\+internal\\MapInte"
    "rface.m" /* pathName */
};

static emlrtRSInfo ng_emlrtRSI = {
    39,    /* lineNo */
    "cat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                          */
};

static emlrtRSInfo og_emlrtRSI = {
    113,        /* lineNo */
    "cat_impl", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                          */
};

static emlrtRTEInfo s_emlrtRTEI = {
    288,                   /* lineNo */
    27,                    /* colNo */
    "check_non_axis_size", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pName
                                                                          */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    564,            /* lineNo */
    23,             /* colNo */
    "MapInterface", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\shared\\autonomous\\maplib\\internal\\+"
    "matlabshared\\+autonomous\\+internal\\MapInte"
    "rface.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    508,            /* lineNo */
    13,             /* colNo */
    "MapInterface", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\shared\\autonomous\\maplib\\internal\\+"
    "matlabshared\\+autonomous\\+internal\\MapInte"
    "rface.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = {
    518,            /* lineNo */
    24,             /* colNo */
    "MapInterface", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\shared\\autonomous\\maplib\\internal\\+"
    "matlabshared\\+autonomous\\+internal\\MapInte"
    "rface.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = {
    519,            /* lineNo */
    17,             /* colNo */
    "MapInterface", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\shared\\autonomous\\maplib\\internal\\+"
    "matlabshared\\+autonomous\\+internal\\MapInte"
    "rface.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = {
    518,            /* lineNo */
    13,             /* colNo */
    "MapInterface", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\shared\\autonomous\\maplib\\internal\\+"
    "matlabshared\\+autonomous\\+internal\\MapInte"
    "rface.m" /* pName */
};

/* Function Declarations */
static void MapInterface_grid2localImpl(const emlrtStack *sp,
                                        const binaryOccupancyMap *obj,
                                        const emxArray_real_T *gridInd,
                                        emxArray_real_T *localXY);

/* Function Definitions */
static void MapInterface_grid2localImpl(const emlrtStack *sp,
                                        const binaryOccupancyMap *obj,
                                        const emxArray_real_T *gridInd,
                                        emxArray_real_T *localXY)
{
  __m128d r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *varargin_1;
  emxArray_real_T *varargin_2;
  const real_T *gridInd_data;
  real_T xlimit;
  real_T ylimit;
  real_T *localXY_data;
  real_T *varargin_1_data;
  real_T *varargin_2_data;
  int32_T i;
  int32_T loop_ub;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  gridInd_data = gridInd->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &varargin_1, 1, &ob_emlrtRTEI);
  emxInit_real_T(sp, &varargin_2, 1, &pb_emlrtRTEI);
  st.site = &mg_emlrtRSI;
  xlimit = obj->SharedProperties.GridOriginInLocal[0];
  i = varargin_1->size[0];
  varargin_1->size[0] = gridInd->size[0];
  emxEnsureCapacity_real_T(&st, varargin_1, i, &ob_emlrtRTEI);
  varargin_1_data = varargin_1->data;
  loop_ub = gridInd->size[0];
  ylimit = obj->SharedProperties.GridOriginInLocal[1];
  i = varargin_2->size[0];
  varargin_2->size[0] = gridInd->size[0];
  emxEnsureCapacity_real_T(&st, varargin_2, i, &pb_emlrtRTEI);
  varargin_2_data = varargin_2->data;
  scalarLB = (loop_ub / 2) << 1;
  vectorUB = scalarLB - 2;
  for (i = 0; i <= vectorUB; i += 2) {
    r = _mm_loadu_pd(&gridInd_data[i + gridInd->size[0]]);
    _mm_storeu_pd(
        &varargin_1_data[i],
        _mm_add_pd(_mm_set1_pd(xlimit), _mm_sub_pd(r, _mm_set1_pd(1.0))));
    r = _mm_loadu_pd(&gridInd_data[i]);
    _mm_storeu_pd(
        &varargin_2_data[i],
        _mm_add_pd(_mm_set1_pd(ylimit), _mm_sub_pd(_mm_set1_pd(561.0), r)));
  }
  for (i = scalarLB; i < loop_ub; i++) {
    varargin_1_data[i] = xlimit + (gridInd_data[i + gridInd->size[0]] - 1.0);
    varargin_2_data[i] = ylimit + (561.0 - gridInd_data[i]);
  }
  b_st.site = &ng_emlrtRSI;
  c_st.site = &og_emlrtRSI;
  if (varargin_2->size[0] != varargin_1->size[0]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &s_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  i = localXY->size[0] * localXY->size[1];
  localXY->size[0] = varargin_1->size[0];
  localXY->size[1] = 2;
  emxEnsureCapacity_real_T(sp, localXY, i, &qb_emlrtRTEI);
  localXY_data = localXY->data;
  loop_ub = varargin_1->size[0];
  scalarLB = (loop_ub / 2) << 1;
  vectorUB = scalarLB - 2;
  for (i = 0; i <= vectorUB; i += 2) {
    __m128d r1;
    r = _mm_loadu_pd(&varargin_1_data[i]);
    r1 = _mm_set1_pd(0.5);
    _mm_storeu_pd(&localXY_data[i], _mm_add_pd(r, r1));
    r = _mm_loadu_pd(&varargin_2_data[i]);
    _mm_storeu_pd(&localXY_data[i + localXY->size[0]], _mm_add_pd(r, r1));
  }
  for (i = scalarLB; i < loop_ub; i++) {
    localXY_data[i] = varargin_1_data[i] + 0.5;
    localXY_data[i + localXY->size[0]] = varargin_2_data[i] + 0.5;
  }
  emxFree_real_T(sp, &varargin_2);
  emxFree_real_T(sp, &varargin_1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void MapInterface_grid2worldImpl(const emlrtStack *sp,
                                 const binaryOccupancyMap *obj,
                                 const emxArray_real_T *gridInd,
                                 emxArray_real_T *worldXY)
{
  emlrtStack st;
  emxArray_real_T *b_worldXY;
  real_T *b_worldXY_data;
  real_T *worldXY_data;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_worldXY, 2, &mb_emlrtRTEI);
  st.site = &kg_emlrtRSI;
  MapInterface_grid2localImpl(&st, obj, gridInd, worldXY);
  worldXY_data = worldXY->data;
  st.site = &lg_emlrtRSI;
  i = b_worldXY->size[0] * b_worldXY->size[1];
  b_worldXY->size[0] = worldXY->size[0];
  b_worldXY->size[1] = 2;
  emxEnsureCapacity_real_T(&st, b_worldXY, i, &mb_emlrtRTEI);
  b_worldXY_data = b_worldXY->data;
  loop_ub = worldXY->size[0];
  scalarLB = (loop_ub / 2) << 1;
  vectorUB = scalarLB - 2;
  for (i = 0; i < 2; i++) {
    for (i1 = 0; i1 <= vectorUB; i1 += 2) {
      __m128d r;
      r = _mm_loadu_pd(&worldXY_data[i1 + worldXY->size[0] * i]);
      _mm_storeu_pd(
          &b_worldXY_data[i1 + b_worldXY->size[0] * i],
          _mm_add_pd(r,
                     _mm_set1_pd(obj->SharedProperties.LocalOriginInWorld[i])));
    }
    for (i1 = scalarLB; i1 < loop_ub; i1++) {
      b_worldXY_data[i1 + b_worldXY->size[0] * i] =
          worldXY_data[i1 + worldXY->size[0] * i] +
          obj->SharedProperties.LocalOriginInWorld[i];
    }
  }
  i = worldXY->size[0] * worldXY->size[1];
  worldXY->size[0] = b_worldXY->size[0];
  worldXY->size[1] = 2;
  emxEnsureCapacity_real_T(&st, worldXY, i, &nb_emlrtRTEI);
  worldXY_data = worldXY->data;
  loop_ub = b_worldXY->size[0] << 1;
  for (i = 0; i < loop_ub; i++) {
    worldXY_data[i] = b_worldXY_data[i];
  }
  emxFree_real_T(sp, &b_worldXY);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void MapInterface_world2grid(const binaryOccupancyMap *obj, const real_T pos[2],
                             real_T idx[2])
{
  __m128d r;
  __m128d r1;
  real_T a[4];
  real_T localXY[2];
  real_T gridXY_idx_0;
  real_T gridXY_idx_1;
  real_T xlimit_idx_0;
  real_T ylimit_idx_0;
  int32_T b_idx;
  int32_T exponent;
  int32_T k;
  boolean_T exitg1;
  boolean_T y;
  r = _mm_loadu_pd(&pos[0]);
  r1 = _mm_loadu_pd(&obj->SharedProperties.LocalOriginInWorld[0]);
  _mm_storeu_pd(&localXY[0], _mm_sub_pd(r, r1));
  xlimit_idx_0 = obj->SharedProperties.GridOriginInLocal[0];
  ylimit_idx_0 = obj->SharedProperties.GridOriginInLocal[1];
  gridXY_idx_0 = -ylimit_idx_0 + localXY[1];
  gridXY_idx_1 = -xlimit_idx_0 + localXY[0];
  idx[0] = muDoubleScalarCeil(gridXY_idx_0);
  idx[1] = muDoubleScalarCeil(gridXY_idx_1);
  a[0] = muDoubleScalarAbs(xlimit_idx_0);
  a[1] = muDoubleScalarAbs(obj->SharedProperties.GridOriginInLocal[0] + 410.0);
  a[2] = muDoubleScalarAbs(ylimit_idx_0);
  a[3] = muDoubleScalarAbs(obj->SharedProperties.GridOriginInLocal[1] + 561.0);
  if (!muDoubleScalarIsNaN(a[0])) {
    b_idx = 1;
  } else {
    b_idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (!muDoubleScalarIsNaN(a[k - 1])) {
        b_idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (b_idx == 0) {
    ylimit_idx_0 = a[0];
  } else {
    ylimit_idx_0 = a[b_idx - 1];
    b_idx++;
    for (k = b_idx; k < 5; k++) {
      xlimit_idx_0 = a[k - 1];
      if (ylimit_idx_0 < xlimit_idx_0) {
        ylimit_idx_0 = xlimit_idx_0;
      }
    }
  }
  localXY[0] = muDoubleScalarAbs(gridXY_idx_0);
  localXY[1] = muDoubleScalarAbs(gridXY_idx_1);
  if (muDoubleScalarIsInf(ylimit_idx_0) || muDoubleScalarIsNaN(ylimit_idx_0)) {
    xlimit_idx_0 = rtNaN;
  } else if (ylimit_idx_0 < 4.4501477170144028E-308) {
    xlimit_idx_0 = 4.94065645841247E-324;
  } else {
    frexp(ylimit_idx_0, &exponent);
    xlimit_idx_0 = ldexp(1.0, exponent - 53);
  }
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    boolean_T b;
    b = !(localXY[k] < xlimit_idx_0 * 2.0);
    if (!b) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (localXY[0] < xlimit_idx_0 * 2.0) {
      idx[0] = 1.0;
    }
    if (localXY[1] < xlimit_idx_0 * 2.0) {
      idx[1] = 1.0;
    }
  }
  idx[0] = 562.0 - idx[0];
}

/* End of code generation (MapInterface.c) */
