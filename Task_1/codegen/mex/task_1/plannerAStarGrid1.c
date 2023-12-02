/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * plannerAStarGrid1.c
 *
 * Code generation for function 'plannerAStarGrid1'
 *
 */

/* Include files */
#include "plannerAStarGrid1.h"
#include "ind2sub.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "task_1_data.h"
#include "task_1_emxutil.h"
#include "task_1_types.h"
#include "mwmathutil.h"
#include <emmintrin.h>

/* Variable Definitions */
static emlrtRSInfo xe_emlrtRSI = {
    489,                                   /* lineNo */
    "plannerAStarGrid/getHeuristicMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo ye_emlrtRSI = {
    492,                                   /* lineNo */
    "plannerAStarGrid/getHeuristicMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo af_emlrtRSI = {
    493,                                   /* lineNo */
    "plannerAStarGrid/getHeuristicMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo bf_emlrtRSI = {
    466,                         /* lineNo */
    "plannerAStarGrid/distance", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo cf_emlrtRSI = {
    556,                          /* lineNo */
    "plannerAStarGrid/Euclidean", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo df_emlrtRSI = {
    28,                                                 /* lineNo */
    "@(pose1,pose2)Custom_Hcost_function(pose1,pose2)", /* fcnName */
    "C:\\Users\\rafal\\Documents\\MATLAB\\task1_max_points\\task_1.m" /* pathName
                                                                       */
};

static emlrtRSInfo ff_emlrtRSI = {
    345,                                /* lineNo */
    "plannerAStarGrid/reconstructPath", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo gf_emlrtRSI = {
    344,                                /* lineNo */
    "plannerAStarGrid/reconstructPath", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo if_emlrtRSI = {
    506,                           /* lineNo */
    "plannerAStarGrid/gcostValue", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo jf_emlrtRSI = {
    508,                           /* lineNo */
    "plannerAStarGrid/gcostValue", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo kf_emlrtRSI = {
    509,                           /* lineNo */
    "plannerAStarGrid/gcostValue", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo lf_emlrtRSI = {
    63,                               /* lineNo */
    "function_handle/parenReference", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\function_"
    "handle.m" /* pathName */
};

static emlrtRSInfo mf_emlrtRSI = {
    28, /* lineNo */
    "@(pose1,pose2)Custom_Gcost_function(pose1,pose2,speed_limit_cost_map,"
    "trafic_intensity_map,obstacles_map)", /* fcnName */
    "C:\\Users\\rafal\\Documents\\MATLAB\\task1_max_points\\task_1.m" /* pathName
                                                                       */
};

static emlrtRTEInfo n_emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" /* pName
                                                                       */
};

static emlrtRTEInfo o_emlrtRTEI = {
    518,                                         /* lineNo */
    17,                                          /* colNo */
    "plannerAStarGrid/validateCustomCostOutput", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pName */
};

static emlrtDCInfo mb_emlrtDCI = {
    458,                         /* lineNo */
    20,                          /* colNo */
    "plannerAStarGrid/distance", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtRTEInfo p_emlrtRTEI = {
    320,                                /* lineNo */
    39,                                 /* colNo */
    "plannerAStarGrid/reconstructPath", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pName */
};

static emlrtECInfo c_emlrtECI = {
    -1,                                 /* nDims */
    344,                                /* lineNo */
    13,                                 /* colNo */
    "plannerAStarGrid/reconstructPath", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pName */
};

static emlrtECInfo d_emlrtECI = {
    -1,                                 /* nDims */
    345,                                /* lineNo */
    13,                                 /* colNo */
    "plannerAStarGrid/reconstructPath", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pName */
};

static emlrtBCInfo eb_emlrtBCI = {
    1,                                  /* iFirst */
    561,                                /* iLast */
    315,                                /* lineNo */
    42,                                 /* colNo */
    "",                                 /* aName */
    "plannerAStarGrid/reconstructPath", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = {
    315,                                /* lineNo */
    42,                                 /* colNo */
    "plannerAStarGrid/reconstructPath", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = {
    1,                                  /* iFirst */
    410,                                /* iLast */
    315,                                /* lineNo */
    53,                                 /* colNo */
    "",                                 /* aName */
    "plannerAStarGrid/reconstructPath", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = {
    315,                                /* lineNo */
    53,                                 /* colNo */
    "plannerAStarGrid/reconstructPath", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = {
    1,                                  /* iFirst */
    561,                                /* iLast */
    332,                                /* lineNo */
    46,                                 /* colNo */
    "",                                 /* aName */
    "plannerAStarGrid/reconstructPath", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = {
    332,                                /* lineNo */
    46,                                 /* colNo */
    "plannerAStarGrid/reconstructPath", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = {
    1,                                  /* iFirst */
    410,                                /* iLast */
    332,                                /* lineNo */
    57,                                 /* colNo */
    "",                                 /* aName */
    "plannerAStarGrid/reconstructPath", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = {
    332,                                /* lineNo */
    57,                                 /* colNo */
    "plannerAStarGrid/reconstructPath", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = {
    1,                       /* iFirst */
    561,                     /* iLast */
    18,                      /* lineNo */
    27,                      /* colNo */
    "speed_map",             /* aName */
    "Custom_Gcost_function", /* fName */
    "C:\\Users\\rafal\\Documents\\MATLAB\\task1_max_points\\Custom_Gcost_"
    "function.m", /* pName */
    0             /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = {
    1,                       /* iFirst */
    410,                     /* iLast */
    18,                      /* lineNo */
    34,                      /* colNo */
    "speed_map",             /* aName */
    "Custom_Gcost_function", /* fName */
    "C:\\Users\\rafal\\Documents\\MATLAB\\task1_max_points\\Custom_Gcost_"
    "function.m", /* pName */
    0             /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = {
    1,                       /* iFirst */
    561,                     /* iLast */
    16,                      /* lineNo */
    37,                      /* colNo */
    "speed_map",             /* aName */
    "Custom_Gcost_function", /* fName */
    "C:\\Users\\rafal\\Documents\\MATLAB\\task1_max_points\\Custom_Gcost_"
    "function.m", /* pName */
    0             /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = {
    1,                       /* iFirst */
    410,                     /* iLast */
    16,                      /* lineNo */
    44,                      /* colNo */
    "speed_map",             /* aName */
    "Custom_Gcost_function", /* fName */
    "C:\\Users\\rafal\\Documents\\MATLAB\\task1_max_points\\Custom_Gcost_"
    "function.m", /* pName */
    0             /* checkKind */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    344,                /* lineNo */
    44,                 /* colNo */
    "plannerAStarGrid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    345,                /* lineNo */
    51,                 /* colNo */
    "plannerAStarGrid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    344,                /* lineNo */
    13,                 /* colNo */
    "plannerAStarGrid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    345,                /* lineNo */
    13,                 /* colNo */
    "plannerAStarGrid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pName */
};

/* Function Declarations */
static void plannerAStarGrid_Chebyshev(task_1StackData *SD,
                                       const real_T pose1[460020],
                                       const real_T pose2[460020],
                                       real_T dist[230010]);

/* Function Definitions */
static void plannerAStarGrid_Chebyshev(task_1StackData *SD,
                                       const real_T pose1[460020],
                                       const real_T pose2[460020],
                                       real_T dist[230010])
{
  __m128d r;
  __m128d r1;
  real_T dv[2];
  int32_T b_k;
  int32_T k;
  for (k = 0; k < 2; k++) {
    for (b_k = 0; b_k <= 230008; b_k += 2) {
      int32_T i;
      i = b_k + 230010 * k;
      r = _mm_loadu_pd(&pose1[i]);
      r1 = _mm_loadu_pd(&pose2[i]);
      _mm_storeu_pd(&SD->u1.f2.c[i], _mm_sub_pd(r, r1));
    }
  }
  for (k = 0; k < 460020; k++) {
    SD->u1.f2.difference[k] = muDoubleScalarAbs(SD->u1.f2.c[k]);
  }
  for (k = 0; k <= 230008; k += 2) {
    __m128d r2;
    dv[0] = muDoubleScalarMin(SD->u1.f2.difference[k],
                              SD->u1.f2.difference[k + 230010]);
    dv[1] = muDoubleScalarMin(SD->u1.f2.difference[k + 1],
                              SD->u1.f2.difference[k + 230011]);
    r = _mm_loadu_pd(&SD->u1.f2.difference[k]);
    r1 = _mm_loadu_pd(&SD->u1.f2.difference[k + 230010]);
    r2 = _mm_loadu_pd(&dv[0]);
    _mm_storeu_pd(&dist[k], _mm_sub_pd(_mm_add_pd(r, r1), r2));
  }
}

void c_plannerAStarGrid_getHeuristic(task_1StackData *SD, const emlrtStack *sp,
                                     const c_nav_algs_internal_plannerASta *obj,
                                     const real_T goalIn[2], real_T Hn[230010])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T ibmat;
  int32_T itilerow;
  int32_T jcol;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (obj->UseCustomH == 0.0) {
    __m128d r;
    real_T hcost;
    hcost = obj->TieBreaker;
    for (jcol = 0; jcol < 2; jcol++) {
      ibmat = jcol * 230010;
      for (itilerow = 0; itilerow < 230010; itilerow++) {
        SD->u2.f6.b[ibmat + itilerow] = goalIn[jcol];
      }
    }
    st.site = &xe_emlrtRSI;
    if (obj->HCostMethod != (int32_T)muDoubleScalarFloor(obj->HCostMethod)) {
      emlrtIntegerCheckR2012b(obj->HCostMethod, &mb_emlrtDCI, &st);
    }
    switch ((int32_T)obj->HCostMethod) {
    case 2: {
      __m128d r1;
      for (ibmat = 0; ibmat < 2; ibmat++) {
        for (jcol = 0; jcol <= 230008; jcol += 2) {
          itilerow = jcol + 230010 * ibmat;
          r = _mm_loadu_pd(&obj->AllNodes[itilerow]);
          r1 = _mm_loadu_pd(&SD->u2.f6.b[itilerow]);
          _mm_storeu_pd(&SD->u2.f6.c[itilerow], _mm_sub_pd(r, r1));
        }
      }
      for (ibmat = 0; ibmat < 460020; ibmat++) {
        SD->u2.f6.y[ibmat] = muDoubleScalarAbs(SD->u2.f6.c[ibmat]);
      }
      for (ibmat = 0; ibmat <= 230008; ibmat += 2) {
        r = _mm_loadu_pd(&SD->u2.f6.y[ibmat]);
        r1 = _mm_loadu_pd(&SD->u2.f6.y[ibmat + 230010]);
        _mm_storeu_pd(&Hn[ibmat], _mm_add_pd(r, r1));
      }
    } break;
    case 3:
      plannerAStarGrid_Chebyshev(SD, obj->AllNodes, SD->u2.f6.b, Hn);
      break;
    case 4: {
      __m128d r1;
      for (ibmat = 0; ibmat <= 460018; ibmat += 2) {
        r = _mm_loadu_pd(&obj->AllNodes[ibmat]);
        r1 = _mm_loadu_pd(&SD->u2.f6.b[ibmat]);
        r = _mm_sub_pd(r, r1);
        _mm_storeu_pd(&SD->u2.f6.b[ibmat], r);
        r = _mm_mul_pd(r, r);
        _mm_storeu_pd(&SD->u2.f6.y[ibmat], r);
      }
      for (ibmat = 0; ibmat <= 230008; ibmat += 2) {
        r = _mm_loadu_pd(&SD->u2.f6.y[ibmat]);
        r1 = _mm_loadu_pd(&SD->u2.f6.y[ibmat + 230010]);
        _mm_storeu_pd(&Hn[ibmat], _mm_add_pd(r, r1));
      }
    } break;
    default: {
      __m128d r1;
      boolean_T p;
      b_st.site = &bf_emlrtRSI;
      for (ibmat = 0; ibmat <= 460018; ibmat += 2) {
        r = _mm_loadu_pd(&obj->AllNodes[ibmat]);
        r1 = _mm_loadu_pd(&SD->u2.f6.b[ibmat]);
        r = _mm_sub_pd(r, r1);
        _mm_storeu_pd(&SD->u2.f6.b[ibmat], r);
        r = _mm_mul_pd(r, r);
        _mm_storeu_pd(&SD->u2.f6.y[ibmat], r);
      }
      for (ibmat = 0; ibmat <= 230008; ibmat += 2) {
        r = _mm_loadu_pd(&SD->u2.f6.y[ibmat]);
        r1 = _mm_loadu_pd(&SD->u2.f6.y[ibmat + 230010]);
        _mm_storeu_pd(&Hn[ibmat], _mm_add_pd(r, r1));
      }
      c_st.site = &cf_emlrtRSI;
      p = false;
      for (ibmat = 0; ibmat < 230010; ibmat++) {
        if (p || (Hn[ibmat] < 0.0)) {
          p = true;
        }
      }
      if (p) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      for (ibmat = 0; ibmat <= 230008; ibmat += 2) {
        r = _mm_loadu_pd(&Hn[ibmat]);
        _mm_storeu_pd(&Hn[ibmat], _mm_sqrt_pd(r));
      }
    } break;
    }
    for (itilerow = 0; itilerow <= 230008; itilerow += 2) {
      r = _mm_loadu_pd(&Hn[itilerow]);
      _mm_storeu_pd(&Hn[itilerow],
                    _mm_div_pd(r, _mm_set1_pd(obj->MapResolution)));
    }
    for (itilerow = 0; itilerow <= 230008; itilerow += 2) {
      r = _mm_loadu_pd(&Hn[itilerow]);
      _mm_storeu_pd(&Hn[itilerow], _mm_mul_pd(_mm_set1_pd(hcost), r));
    }
  } else {
    real_T hcost;
    hcost = obj->TieBreaker * 0.0 / obj->MapResolution;
    for (ibmat = 0; ibmat < 230010; ibmat++) {
      st.site = &ye_emlrtRSI;
      covrtLogFcn(&emlrtCoverageInstance, 0U, 2U);
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 2U);
      b_st.site = &df_emlrtRSI;
      covrtLogFcn(&emlrtCoverageInstance, 1U, 0U);
      covrtLogBasicBlock(&emlrtCoverageInstance, 1U, 0U);
      /* CUSTOM_HCOST_FUNCTION Summary of this function goes here */
      /*    Detailed explanation goes here */
      st.site = &af_emlrtRSI;
      if (muDoubleScalarIsNaN(hcost)) {
        emlrtErrorWithMessageIdR2018a(
            &st, &o_emlrtRTEI,
            "nav:navalgs:plannerastargrid:UserDistanceFunctionReturnsNaNOrInf",
            "nav:navalgs:plannerastargrid:UserDistanceFunctionReturnsNaNOrInf",
            0);
      }
      Hn[ibmat] = hcost;
    }
  }
}

void c_plannerAStarGrid_reconstructP(task_1StackData *SD, const emlrtStack *sp,
                                     c_nav_algs_internal_plannerASta *obj,
                                     real_T CurrentRow, real_T CurrentCol,
                                     const real_T startIn[2])
{
  emlrtStack st;
  emxArray_real_T *r;
  emxArray_real_T *r2;
  real_T tmp;
  real_T *r1;
  int32_T b_k[2];
  int32_T c_k;
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T nd2;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  k = 1;
  SD->u1.f1.OptimalPath[0] = CurrentRow;
  SD->u1.f1.OptimalPath[230010] = CurrentCol;
  if (CurrentRow != (int32_T)muDoubleScalarFloor(CurrentRow)) {
    emlrtIntegerCheckR2012b(CurrentRow, &nb_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (((int32_T)CurrentRow < 1) || ((int32_T)CurrentRow > 561)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)CurrentRow, 1, 561, &eb_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (CurrentCol != (int32_T)muDoubleScalarFloor(CurrentCol)) {
    emlrtIntegerCheckR2012b(CurrentCol, &ob_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (((int32_T)CurrentCol < 1) || ((int32_T)CurrentCol > 410)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)CurrentCol, 1, 410, &fb_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  SD->u1.f1.pathIndices[0] =
      obj->MapIndex[((int32_T)CurrentRow + 561 * ((int32_T)CurrentCol - 1)) -
                    1];
  int32_T exitg1;
  do {
    exitg1 = 0;
    k++;
    if (k > 230010) {
      emlrtErrorWithMessageIdR2018a(
          sp, &p_emlrtRTEI,
          "nav:navalgs:plannerastargrid:AssertionFailedLessThan",
          "nav:navalgs:plannerastargrid:AssertionFailedLessThan", 5, 4, 16,
          "PathPointCounter", 6, 230010.0);
    }
    nd2 = ((int32_T)CurrentRow + 561 * ((int32_T)CurrentCol - 1)) - 1;
    CurrentCol = obj->ParentCol[nd2];
    CurrentRow = obj->ParentRow[nd2];
    if ((CurrentRow == 0.0) || (CurrentCol == 0.0)) {
      k--;
      exitg1 = 1;
    } else {
      SD->u1.f1.OptimalPath[k - 1] = CurrentRow;
      SD->u1.f1.OptimalPath[k + 230009] = CurrentCol;
      if (CurrentRow != (int32_T)muDoubleScalarFloor(CurrentRow)) {
        emlrtIntegerCheckR2012b(CurrentRow, &pb_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (((int32_T)CurrentRow < 1) || ((int32_T)CurrentRow > 561)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)CurrentRow, 1, 561, &gb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (CurrentCol != (int32_T)muDoubleScalarFloor(CurrentCol)) {
        emlrtIntegerCheckR2012b(CurrentCol, &qb_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (((int32_T)CurrentCol < 1) || ((int32_T)CurrentCol > 410)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)CurrentCol, 1, 410, &hb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      SD->u1.f1.pathIndices[k - 1] =
          obj->MapIndex[((int32_T)CurrentRow +
                         561 * ((int32_T)CurrentCol - 1)) -
                        1];
      if ((CurrentCol == startIn[1]) && (CurrentRow == startIn[0])) {
        exitg1 = 1;
      }
    }
  } while (exitg1 == 0);
  obj->NumPathPoints = k;
  st.site = &gf_emlrtRSI;
  emxInit_real_T(&st, &r, 2, &cb_emlrtRTEI);
  i = r->size[0] * r->size[1];
  r->size[0] = k;
  r->size[1] = 2;
  emxEnsureCapacity_real_T(&st, r, i, &ab_emlrtRTEI);
  r1 = r->data;
  for (i = 0; i < 2; i++) {
    for (nd2 = 0; nd2 < k; nd2++) {
      r1[nd2 + r->size[0] * i] = SD->u1.f1.OptimalPath[nd2 + 230010 * i];
    }
  }
  if (k > 1) {
    nd2 = k >> 1;
    for (j = 0; j < 2; j++) {
      int32_T offset;
      offset = j * r->size[0];
      for (c_k = 0; c_k < nd2; c_k++) {
        int32_T tmp_tmp;
        tmp_tmp = offset + c_k;
        tmp = r1[tmp_tmp];
        i = ((offset + k) - c_k) - 1;
        r1[tmp_tmp] = r1[i];
        r1[i] = tmp;
      }
    }
  }
  b_k[0] = k;
  b_k[1] = 2;
  emlrtSubAssignSizeCheckR2012b(&b_k[0], 2, &r->size[0], 2, &c_emlrtECI,
                                (emlrtCTX)sp);
  for (i = 0; i < 2; i++) {
    for (nd2 = 0; nd2 < k; nd2++) {
      obj->PathInternal[nd2 + 230010 * i] = r1[nd2 + r->size[0] * i];
    }
  }
  emxFree_real_T(sp, &r);
  st.site = &ff_emlrtRSI;
  emxInit_real_T(&st, &r2, 1, &db_emlrtRTEI);
  i = r2->size[0];
  r2->size[0] = k;
  emxEnsureCapacity_real_T(&st, r2, i, &bb_emlrtRTEI);
  r1 = r2->data;
  for (i = 0; i < k; i++) {
    r1[i] = SD->u1.f1.pathIndices[i];
  }
  if (k > 1) {
    nd2 = k >> 1;
    for (c_k = 0; c_k < nd2; c_k++) {
      tmp = r1[c_k];
      i = (k - c_k) - 1;
      r1[c_k] = r1[i];
      r1[i] = tmp;
    }
  }
  emlrtSubAssignSizeCheckR2012b(&k, 1, &r2->size[0], 1, &d_emlrtECI,
                                (emlrtCTX)sp);
  for (i = 0; i < k; i++) {
    obj->PathIndicesInternal[i] = r1[i];
  }
  emxFree_real_T(sp, &r2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

c_nav_algs_internal_plannerASta *d_plannerAStarGrid_plannerAStar(
    task_1StackData *SD, c_nav_algs_internal_plannerASta *obj,
    const real_T map[230010], real_T obstacleThreshold,
    const real_T c_varargin_2_workspace_speed_li[230010],
    const real_T c_varargin_2_workspace_trafic_i[230010],
    const real_T c_varargin_2_workspace_obstacle[230010])
{
  c_nav_algs_internal_plannerASta *b_obj;
  int32_T i;
  b_obj = obj;
  b_obj->NumPathPoints = 0.0;
  b_obj->GCostMethod = 1.0;
  b_obj->HCostMethod = 1.0;
  for (i = 0; i < 230010; i++) {
    b_obj->Map[i] = map[i];
  }
  for (i = 0; i < 460020; i++) {
    b_obj->PathInternal[i] = 0.0;
  }
  b_obj->ObstacleThreshold = obstacleThreshold;
  b_obj->MapResolution = 1.0;
  for (i = 0; i < 230010; i++) {
    b_obj->PathIndicesInternal[i] = 0.0;
    b_obj->NodesExploredIndicesInternal[i] = 0.0;
    b_obj->ParentCol[i] = 0.0;
    b_obj->ParentRow[i] = 0.0;
    b_obj->MapIndex[i] = (real_T)i + 1.0;
  }
  for (i = 0; i < 230010; i++) {
    SD->u1.f3.dv[i] = (real_T)i + 1.0;
  }
  b_ind2sub(SD->u1.f3.dv, SD->u1.f3.varargout_3, SD->u1.f3.varargout_4);
  for (i = 0; i < 230010; i++) {
    b_obj->AllNodes[i] = SD->u1.f3.varargout_3[i];
    b_obj->AllNodes[i + 230010] = SD->u1.f3.varargout_4[i];
  }
  for (i = 0; i < 230010; i++) {
    b_obj->GCostFcn.workspace.speed_limit_cost_map[i] =
        c_varargin_2_workspace_speed_li[i];
    b_obj->GCostFcn.workspace.trafic_intensity_map[i] =
        c_varargin_2_workspace_trafic_i[i];
    b_obj->GCostFcn.workspace.obstacles_map[i] =
        c_varargin_2_workspace_obstacle[i];
  }
  b_obj->UseCustomG = 1.0;
  b_obj->UseCustomH = 1.0;
  return b_obj;
}

real_T plannerAStarGrid_gcostValue(const emlrtStack *sp,
                                   const c_nav_algs_internal_plannerASta *obj,
                                   real_T CurrentRow, real_T CurrentCol,
                                   real_T i, real_T j)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T difference[2];
  real_T dv[2];
  real_T dv1[2];
  real_T dv2[2];
  real_T dv3[2];
  real_T varargin_2[2];
  real_T gcostNeighbor;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (obj->UseCustomG == 0.0) {
    st.site = &if_emlrtRSI;
    varargin_2[0] = i;
    varargin_2[1] = j;
    if (obj->GCostMethod != (int32_T)muDoubleScalarFloor(obj->GCostMethod)) {
      emlrtIntegerCheckR2012b(obj->GCostMethod, &mb_emlrtDCI, &st);
    }
    switch ((int32_T)obj->GCostMethod) {
    case 2: {
      __m128d r;
      r = _mm_loadu_pd(&varargin_2[0]);
      _mm_storeu_pd(&dv[0], _mm_sub_pd(_mm_set1_pd(0.0), r));
      dv2[0] = muDoubleScalarAbs(dv[0]);
      dv2[1] = muDoubleScalarAbs(dv[1]);
      r = _mm_loadu_pd(&dv2[0]);
      _mm_storeu_pd(&difference[0], r);
      gcostNeighbor = sumColumnB(difference);
    } break;
    case 3: {
      __m128d r;
      r = _mm_loadu_pd(&varargin_2[0]);
      _mm_storeu_pd(&dv1[0], _mm_sub_pd(_mm_set1_pd(0.0), r));
      dv3[0] = muDoubleScalarAbs(dv1[0]);
      dv3[1] = muDoubleScalarAbs(dv1[1]);
      r = _mm_loadu_pd(&dv3[0]);
      _mm_storeu_pd(&difference[0], r);
      gcostNeighbor = sumColumnB(difference) -
                      muDoubleScalarMin(difference[0], difference[1]);
    } break;
    case 4: {
      __m128d r;
      r = _mm_loadu_pd(&varargin_2[0]);
      r = _mm_mul_pd(r, _mm_set1_pd(-1.0));
      _mm_storeu_pd(&varargin_2[0], r);
      _mm_storeu_pd(&difference[0], _mm_mul_pd(r, r));
      gcostNeighbor = sumColumnB(difference);
    } break;
    default: {
      __m128d r;
      b_st.site = &bf_emlrtRSI;
      r = _mm_loadu_pd(&varargin_2[0]);
      r = _mm_mul_pd(r, _mm_set1_pd(-1.0));
      _mm_storeu_pd(&varargin_2[0], r);
      _mm_storeu_pd(&difference[0], _mm_mul_pd(r, r));
      gcostNeighbor = sumColumnB(difference);
      c_st.site = &cf_emlrtRSI;
      if (gcostNeighbor < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      gcostNeighbor = muDoubleScalarSqrt(gcostNeighbor);
    } break;
    }
    gcostNeighbor /= obj->MapResolution;
  } else {
    real_T varargout_1;
    st.site = &jf_emlrtRSI;
    difference[0] = CurrentRow;
    difference[1] = CurrentCol;
    varargin_2[0] = CurrentRow + i;
    varargin_2[1] = CurrentCol + j;
    b_st.site = &lf_emlrtRSI;
    covrtLogFcn(&emlrtCoverageInstance, 0U, 1U);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1U);
    c_st.site = &mf_emlrtRSI;
    covrtLogFcn(&emlrtCoverageInstance, 2U, 0U);
    covrtLogBasicBlock(&emlrtCoverageInstance, 2U, 0U);
    /* CUSTOM_GCOST_FUNCTION Summary of this function goes here */
    /*  Funkcja na podstawie punktow pomiedzy ruchem generuje nowy */
    /*  niestandardowyy koszt zdefiniowany w poleceniu */
    /*    Detailed explanation goes here */
    /*  x2-x1  */
    /*  cost = SpeedLimitCost * Traffic + obstacle */
    /*  */
    if (covrtLogCond(&emlrtCoverageInstance, 2U, 0U, 0,
                     muDoubleScalarAbs(difference[0] - varargin_2[0]) == 1.0) &&
        covrtLogCond(&emlrtCoverageInstance, 2U, 0U, 1,
                     muDoubleScalarAbs(difference[1] - varargin_2[1]) == 1.0)) {
      int32_T b_i;
      int32_T i1;
      int32_T varargout_1_tmp;
      covrtLogMcdc(&emlrtCoverageInstance, 2U, 0U, 0, true);
      covrtLogIf(&emlrtCoverageInstance, 2U, 0U, 0, true);
      covrtLogBasicBlock(&emlrtCoverageInstance, 2U, 1U);
      b_i = (int32_T)varargin_2[0];
      if ((b_i < 1) || (b_i > 561)) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, 561, &kb_emlrtBCI, &c_st);
      }
      i1 = (int32_T)varargin_2[1];
      if ((i1 < 1) || (i1 > 410)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, 410, &lb_emlrtBCI, &c_st);
      }
      varargout_1_tmp =
          ((int32_T)varargin_2[0] + 561 * ((int32_T)varargin_2[1] - 1)) - 1;
      varargout_1 =
          1.4142135623730951 *
              obj->GCostFcn.workspace
                  .speed_limit_cost_map[(b_i + 561 * (i1 - 1)) - 1] *
              obj->GCostFcn.workspace.trafic_intensity_map[varargout_1_tmp] +
          obj->GCostFcn.workspace.obstacles_map[varargout_1_tmp];
    } else {
      int32_T b_i;
      int32_T i1;
      int32_T varargout_1_tmp;
      covrtLogMcdc(&emlrtCoverageInstance, 2U, 0U, 0, false);
      covrtLogIf(&emlrtCoverageInstance, 2U, 0U, 0, false);
      covrtLogBasicBlock(&emlrtCoverageInstance, 2U, 2U);
      b_i = (int32_T)varargin_2[0];
      if ((b_i < 1) || (b_i > 561)) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, 561, &ib_emlrtBCI, &c_st);
      }
      i1 = (int32_T)varargin_2[1];
      if ((i1 < 1) || (i1 > 410)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, 410, &jb_emlrtBCI, &c_st);
      }
      varargout_1_tmp =
          ((int32_T)varargin_2[0] + 561 * ((int32_T)varargin_2[1] - 1)) - 1;
      varargout_1 =
          obj->GCostFcn.workspace
                  .speed_limit_cost_map[(b_i + 561 * (i1 - 1)) - 1] *
              obj->GCostFcn.workspace.trafic_intensity_map[varargout_1_tmp] +
          obj->GCostFcn.workspace.obstacles_map[varargout_1_tmp];
    }
    covrtLogBasicBlock(&emlrtCoverageInstance, 2U, 3U);
    gcostNeighbor = varargout_1 / obj->MapResolution;
    st.site = &kf_emlrtRSI;
    if (muDoubleScalarIsNaN(gcostNeighbor) ||
        muDoubleScalarIsInf(gcostNeighbor)) {
      emlrtErrorWithMessageIdR2018a(
          &st, &o_emlrtRTEI,
          "nav:navalgs:plannerastargrid:UserDistanceFunctionReturnsNaNOrInf",
          "nav:navalgs:plannerastargrid:UserDistanceFunctionReturnsNaNOrInf",
          0);
    }
  }
  return gcostNeighbor;
}

/* End of code generation (plannerAStarGrid1.c) */
