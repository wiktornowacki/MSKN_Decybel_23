/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * binaryOccupancyMap.c
 *
 * Code generation for function 'binaryOccupancyMap'
 *
 */

/* Include files */
#include "binaryOccupancyMap.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "task_1_data.h"
#include "task_1_types.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo ad_emlrtRSI = {
    451,                                  /* lineNo */
    "binaryOccupancyMap/occupancyMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\shared\\nav_rst\\nav_rst_"
    "lib\\binaryOccupancyMap.m" /* pathName */
};

static emlrtRSInfo bd_emlrtRSI = {
    1431,                       /* lineNo */
    "MapLayer/getValueAllImpl", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\shared\\autonomous\\maplib\\internal\\+"
    "matlabshared\\+autonomous\\+internal\\MapLaye"
    "r.m" /* pathName */
};

static emlrtRSInfo cd_emlrtRSI = {
    51,          /* lineNo */
    "circshift", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m" /* pathName
                                                                            */
};

static emlrtRSInfo dd_emlrtRSI = {
    96,                        /* lineNo */
    "circshift_multiple_dims", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m" /* pathName
                                                                            */
};

static emlrtRSInfo ed_emlrtRSI = {
    137,              /* lineNo */
    "circshift_core", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m" /* pathName
                                                                            */
};

static emlrtRSInfo fd_emlrtRSI = {
    133,              /* lineNo */
    "circshift_core", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m" /* pathName
                                                                            */
};

static emlrtRSInfo gd_emlrtRSI = {
    129,              /* lineNo */
    "circshift_core", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m" /* pathName
                                                                            */
};

static emlrtRSInfo hd_emlrtRSI = {
    124,              /* lineNo */
    "circshift_core", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m" /* pathName
                                                                            */
};

static emlrtRSInfo id_emlrtRSI = {
    116,              /* lineNo */
    "circshift_core", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m" /* pathName
                                                                            */
};

static emlrtRSInfo jd_emlrtRSI = {
    112,              /* lineNo */
    "circshift_core", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m" /* pathName
                                                                            */
};

static emlrtRSInfo kd_emlrtRSI = {
    110,              /* lineNo */
    "circshift_core", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m" /* pathName
                                                                            */
};

static emlrtRSInfo ld_emlrtRSI = {
    20,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_"
    "overflow_check.m" /* pathName */
};

static emlrtRTEInfo k_emlrtRTEI = {
    38,          /* lineNo */
    48,          /* colNo */
    "circshift", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m" /* pName
                                                                            */
};

/* Function Definitions */
void c_binaryOccupancyMap_occupancyM(const emlrtStack *sp,
                                     binaryOccupancyMap *obj,
                                     boolean_T mat[230010])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T p[2];
  int32_T b_i;
  int32_T dim;
  int32_T j;
  int32_T k;
  boolean_T x[2];
  boolean_T exitg1;
  boolean_T overflow;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ad_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  x[0] = (obj->Index.Head[0] == 1.0);
  x[1] = (obj->Index.Head[1] == 1.0);
  overflow = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!x[k]) {
      overflow = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (overflow) {
    memcpy(&mat[0], &obj->Buffer.Buffer[0], 230010U * sizeof(boolean_T));
  } else {
    __m128d r;
    real_T d;
    int32_T absp[2];
    int32_T stride;
    int32_T u0;
    boolean_T buffer[280];
    b_st.site = &bd_emlrtRSI;
    memcpy(&mat[0], &obj->Buffer.Buffer[0], 230010U * sizeof(boolean_T));
    r = _mm_loadu_pd(&obj->Index.Head[0]);
    _mm_storeu_pd(
        &p[0], _mm_mul_pd(_mm_sub_pd(r, _mm_set1_pd(1.0)), _mm_set1_pd(-1.0)));
    overflow = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 2)) {
      u0 = (int32_T)p[k];
      if ((u0 != p[k]) || (u0 == MIN_int32_T)) {
        overflow = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
    if (!overflow) {
      emlrtErrorWithMessageIdR2018a(&b_st, &k_emlrtRTEI,
                                    "Coder:toolbox:circshift_InvalidShiftType",
                                    "Coder:toolbox:circshift_InvalidShiftType",
                                    6, 4, 5, "int32", 4, 5, "int32");
    }
    c_st.site = &cd_emlrtRSI;
    d = p[0];
    if (d < 0.0) {
      u0 = -(int32_T)d;
      overflow = false;
    } else {
      u0 = (int32_T)d;
      overflow = true;
    }
    if (u0 > 561) {
      u0 -= 561 * (u0 / 561);
    }
    if (u0 > 280) {
      u0 = 561 - u0;
      overflow = !overflow;
    }
    absp[0] = u0;
    x[0] = overflow;
    d = p[1];
    if (d < 0.0) {
      u0 = -(int32_T)d;
      overflow = false;
    } else {
      u0 = (int32_T)d;
      overflow = true;
    }
    if (u0 > 410) {
      u0 -= 410 * (u0 / 410);
    }
    if (u0 > 205) {
      u0 = 410 - u0;
      overflow = !overflow;
    }
    absp[1] = u0;
    x[1] = overflow;
    stride = 1;
    for (dim = 0; dim < 2; dim++) {
      int32_T i;
      int32_T npages;
      int32_T ns;
      int32_T nv_tmp;
      int32_T pagesize;
      u0 = -151 * dim + 560;
      nv_tmp = -151 * dim + 561;
      i = absp[dim];
      ns = i - 1;
      pagesize = stride * nv_tmp;
      d_st.site = &dd_emlrtRSI;
      npages = -409 * dim + 409;
      if (i > 0) {
        e_st.site = &kd_emlrtRSI;
        overflow = (stride > 2147483646);
        for (b_i = 0; b_i <= npages; b_i++) {
          int32_T pageroot;
          pageroot = b_i * pagesize;
          e_st.site = &jd_emlrtRSI;
          if (overflow) {
            f_st.site = &ld_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }
          for (j = 0; j < stride; j++) {
            int32_T i1;
            i1 = pageroot + j;
            if (x[dim]) {
              int32_T b_i1;
              e_st.site = &id_emlrtRSI;
              for (k = 0; k <= ns; k++) {
                buffer[k] = mat[i1 + (((k + u0) - i) + 1) * stride];
              }
              b_i1 = i + 1;
              for (k = nv_tmp; k >= b_i1; k--) {
                mat[i1 + (k - 1) * stride] = mat[i1 + ((k - i) - 1) * stride];
              }
              e_st.site = &hd_emlrtRSI;
              for (k = 0; k <= ns; k++) {
                mat[i1 + k * stride] = buffer[k];
              }
            } else {
              int32_T b_i1;
              e_st.site = &gd_emlrtRSI;
              for (k = 0; k <= ns; k++) {
                buffer[k] = mat[i1 + k * stride];
              }
              b_i1 = (u0 - i) + 1;
              e_st.site = &fd_emlrtRSI;
              for (k = 0; k < b_i1; k++) {
                mat[i1 + k * stride] = mat[i1 + (k + i) * stride];
              }
              e_st.site = &ed_emlrtRSI;
              for (k = 0; k <= ns; k++) {
                mat[i1 + (((k + u0) - i) + 1) * stride] = buffer[k];
              }
            }
          }
        }
      }
      stride = pagesize;
    }
    if (!obj->HasParent) {
      memcpy(&obj->Buffer.Buffer[0], &mat[0], 230010U * sizeof(boolean_T));
      obj->Index.Head[0] = 1.0;
      obj->Index.Head[1] = 1.0;
    }
  }
}

/* End of code generation (binaryOccupancyMap.c) */
