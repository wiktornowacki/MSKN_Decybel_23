/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * plannerAStarGrid.c
 *
 * Code generation for function 'plannerAStarGrid'
 *
 */

/* Include files */
#include "plannerAStarGrid.h"
#include "MapInterface.h"
#include "binaryOccupancyMap.h"
#include "handle.h"
#include "ind2sub.h"
#include "indexShapeCheck.h"
#include "plannerAStarGrid1.h"
#include "rt_nonfinite.h"
#include "task_1_data.h"
#include "task_1_emxutil.h"
#include "task_1_internal_types.h"
#include "task_1_types.h"
#include "validateAStarBuiltinCostFunction.h"
#include "warning.h"
#include "mwmathutil.h"
#include "priorityqueue_api.hpp"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo w_emlrtRSI = {
    239,                                 /* lineNo */
    "plannerAStarGrid/plannerAStarGrid", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo x_emlrtRSI = {
    253,                                 /* lineNo */
    "plannerAStarGrid/plannerAStarGrid", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo y_emlrtRSI = {
    272,                                 /* lineNo */
    "plannerAStarGrid/plannerAStarGrid", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo ab_emlrtRSI = {
    275,                                 /* lineNo */
    "plannerAStarGrid/plannerAStarGrid", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo bb_emlrtRSI = {
    277,                                 /* lineNo */
    "plannerAStarGrid/plannerAStarGrid", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo cb_emlrtRSI = {
    285,                                 /* lineNo */
    "plannerAStarGrid/plannerAStarGrid", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo db_emlrtRSI = {
    288,                                 /* lineNo */
    "plannerAStarGrid/plannerAStarGrid", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo eb_emlrtRSI = {
    296,                                 /* lineNo */
    "plannerAStarGrid/plannerAStarGrid", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo fb_emlrtRSI = {
    305,                                 /* lineNo */
    "plannerAStarGrid/plannerAStarGrid", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo gb_emlrtRSI = {
    310,                                 /* lineNo */
    "plannerAStarGrid/plannerAStarGrid", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo lb_emlrtRSI = {
    377,                             /* lineNo */
    "plannerAStarGrid/set.GCostFcn", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo nb_emlrtRSI = {
    398,                          /* lineNo */
    "plannerAStarGrid/set.GCost", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo pb_emlrtRSI = {
    400,                          /* lineNo */
    "plannerAStarGrid/set.GCost", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo qb_emlrtRSI = {
    366,                             /* lineNo */
    "plannerAStarGrid/set.HCostFcn", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo sb_emlrtRSI = {
    387,                          /* lineNo */
    "plannerAStarGrid/set.HCost", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo ub_emlrtRSI = {
    389,                          /* lineNo */
    "plannerAStarGrid/set.HCost", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo vb_emlrtRSI = {
    485,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo wb_emlrtRSI = {
    487,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo xb_emlrtRSI = {
    498,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo yb_emlrtRSI = {
    499,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo ac_emlrtRSI = {
    500,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo bc_emlrtRSI = {
    506,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo cc_emlrtRSI = {
    511,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo dc_emlrtRSI = {
    519,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo ec_emlrtRSI = {
    522,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo fc_emlrtRSI = {
    526,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo gc_emlrtRSI = {
    529,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo hc_emlrtRSI = {
    516,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo ic_emlrtRSI = {
    93,                   /* lineNo */
    "validateattributes", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes"
    ".m" /* pathName */
};

static emlrtRSInfo mc_emlrtRSI = {
    729,                                  /* lineNo */
    "plannerAStarGrid/validateStartGoal", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo nc_emlrtRSI = {
    732,                                  /* lineNo */
    "plannerAStarGrid/validateStartGoal", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo oc_emlrtRSI = {
    733,                                  /* lineNo */
    "plannerAStarGrid/validateStartGoal", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo pc_emlrtRSI = {
    734,                                  /* lineNo */
    "plannerAStarGrid/validateStartGoal", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo qc_emlrtRSI = {
    749,                                  /* lineNo */
    "plannerAStarGrid/validateStartGoal", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo rc_emlrtRSI = {
    750,                                  /* lineNo */
    "plannerAStarGrid/validateStartGoal", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo sc_emlrtRSI = {
    760,                                  /* lineNo */
    "plannerAStarGrid/validateStartGoal", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo tc_emlrtRSI = {
    769,                                  /* lineNo */
    "plannerAStarGrid/validateStartGoal", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo uc_emlrtRSI = {
    879,                                /* lineNo */
    "MapInterface/validateGridIndices", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\shared\\autonomous\\maplib\\internal\\+"
    "matlabshared\\+autonomous\\+internal\\MapInte"
    "rface.m" /* pathName */
};

static emlrtRSInfo vc_emlrtRSI = {
    418,                             /* lineNo */
    "MapInterface/get.XWorldLimits", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\shared\\autonomous\\maplib\\internal\\+"
    "matlabshared\\+autonomous\\+internal\\MapInte"
    "rface.m" /* pathName */
};

static emlrtRSInfo wc_emlrtRSI = {
    423,                             /* lineNo */
    "MapInterface/get.YWorldLimits", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\shared\\autonomous\\maplib\\internal\\+"
    "matlabshared\\+autonomous\\+internal\\MapInte"
    "rface.m" /* pathName */
};

static emlrtRSInfo
    xc_emlrtRSI =
        {
            15,        /* lineNo */
            "num2str", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\num2str.m" /* pathName */
};

static emlrtRSInfo yc_emlrtRSI = {
    912,                                     /* lineNo */
    "plannerAStarGrid/getNodeCostOMDefault", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo md_emlrtRSI = {
    925,                                          /* lineNo */
    "plannerAStarGrid/initializeInternalPlanner", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo nd_emlrtRSI = {
    930,                                          /* lineNo */
    "plannerAStarGrid/initializeInternalPlanner", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo od_emlrtRSI = {
    942,                                          /* lineNo */
    "plannerAStarGrid/initializeInternalPlanner", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo pd_emlrtRSI = {
    946,                                          /* lineNo */
    "plannerAStarGrid/initializeInternalPlanner", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo qd_emlrtRSI = {
    945,                                          /* lineNo */
    "plannerAStarGrid/initializeInternalPlanner", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo rd_emlrtRSI = {
    950,                                          /* lineNo */
    "plannerAStarGrid/initializeInternalPlanner", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo sd_emlrtRSI = {
    953,                                          /* lineNo */
    "plannerAStarGrid/initializeInternalPlanner", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo td_emlrtRSI = {
    956,                                          /* lineNo */
    "plannerAStarGrid/initializeInternalPlanner", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo ud_emlrtRSI = {
    957,                                          /* lineNo */
    "plannerAStarGrid/initializeInternalPlanner", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo ee_emlrtRSI = {
    344,                                     /* lineNo */
    "plannerAStarGrid/get.TieBreakConstant", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo fe_emlrtRSI = {
    961,                        /* lineNo */
    "plannerAStarGrid/runPlan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo ge_emlrtRSI = {
    171,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo he_emlrtRSI = {
    175,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo ie_emlrtRSI = {
    180,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo je_emlrtRSI = {
    190,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo ke_emlrtRSI = {
    195,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo le_emlrtRSI = {
    201,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo me_emlrtRSI = {
    217,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo ne_emlrtRSI = {
    222,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo oe_emlrtRSI = {
    234,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo pe_emlrtRSI = {
    244,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo qe_emlrtRSI = {
    252,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo re_emlrtRSI = {
    271,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo se_emlrtRSI = {
    297,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo te_emlrtRSI = {
    304,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo ue_emlrtRSI = {
    305,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo ve_emlrtRSI = {
    306,                     /* lineNo */
    "plannerAStarGrid/plan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo we_emlrtRSI = {
    45,                            /* lineNo */
    "PriorityQueue/PriorityQueue", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\PriorityQueue.m" /* pathName */
};

static emlrtRSInfo ef_emlrtRSI = {
    71,                      /* lineNo */
    "PriorityQueue/isEmpty", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\PriorityQueue.m" /* pathName */
};

static emlrtRSInfo of_emlrtRSI = {
    39,     /* lineNo */
    "find", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                       */
};

static emlrtRSInfo pf_emlrtRSI = {
    144,        /* lineNo */
    "eml_find", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                       */
};

static emlrtRSInfo sf_emlrtRSI = {
    991,                                   /* lineNo */
    "plannerAStarGrid/getEssentialOutput", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo tf_emlrtRSI = {
    990,                                   /* lineNo */
    "plannerAStarGrid/getEssentialOutput", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo uf_emlrtRSI = {
    977,                                   /* lineNo */
    "plannerAStarGrid/getEssentialOutput", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo vf_emlrtRSI = {
    974,                                   /* lineNo */
    "plannerAStarGrid/getEssentialOutput", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo wf_emlrtRSI = {
    968,                                   /* lineNo */
    "plannerAStarGrid/getEssentialOutput", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo xf_emlrtRSI = {
    967,                                   /* lineNo */
    "plannerAStarGrid/getEssentialOutput", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo yf_emlrtRSI = {
    965,                                   /* lineNo */
    "plannerAStarGrid/getEssentialOutput", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo ag_emlrtRSI = {
    415,                               /* lineNo */
    "plannerAStarGrid/getPathIndices", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo bg_emlrtRSI = {
    426,                                        /* lineNo */
    "plannerAStarGrid/getNodesExploredIndices", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pathName */
};

static emlrtRSInfo cg_emlrtRSI = {
    1009,                             /* lineNo */
    "plannerAStarGrid/getPathOutput", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo dg_emlrtRSI = {
    1018,                             /* lineNo */
    "plannerAStarGrid/getPathOutput", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo eg_emlrtRSI = {
    1021,                             /* lineNo */
    "plannerAStarGrid/getPathOutput", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo fg_emlrtRSI = {
    1028,                             /* lineNo */
    "plannerAStarGrid/getPathOutput", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo gg_emlrtRSI = {
    1029,                             /* lineNo */
    "plannerAStarGrid/getPathOutput", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo hg_emlrtRSI = {
    1031,                             /* lineNo */
    "plannerAStarGrid/getPathOutput", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pathName
                                                                         */
};

static emlrtRSInfo ig_emlrtRSI = {
    299,                       /* lineNo */
    "MapInterface/grid2world", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\shared\\autonomous\\maplib\\internal\\+"
    "matlabshared\\+autonomous\\+internal\\MapInte"
    "rface.m" /* pathName */
};

static emlrtRSInfo jg_emlrtRSI = {
    303,                       /* lineNo */
    "MapInterface/grid2world", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\shared\\autonomous\\maplib\\internal\\+"
    "matlabshared\\+autonomous\\+internal\\MapInte"
    "rface.m" /* pathName */
};

static emlrtMCInfo
    emlrtMCI =
        {
            53,        /* lineNo */
            19,        /* colNo */
            "flt2str", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\flt2str.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    712,                                           /* lineNo */
    79,                                            /* colNo */
    "plannerAStarGrid/verifyCodegenCompatibility", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pName
                                                                         */
};

static emlrtRTEInfo c_emlrtRTEI = {
    493,                     /* lineNo */
    68,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pName
                                                                         */
};

static emlrtRTEInfo d_emlrtRTEI = {
    494,                     /* lineNo */
    66,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pName
                                                                         */
};

static emlrtRTEInfo e_emlrtRTEI = {
    14,               /* lineNo */
    37,               /* colNo */
    "validatenonnan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatenonnan.m" /* pName */
};

static emlrtRTEInfo f_emlrtRTEI = {
    14,               /* lineNo */
    37,               /* colNo */
    "validatefinite", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatefinite.m" /* pName */
};

static emlrtRTEInfo g_emlrtRTEI = {
    748,                                  /* lineNo */
    21,                                   /* colNo */
    "plannerAStarGrid/validateStartGoal", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pName
                                                                         */
};

static emlrtRTEInfo h_emlrtRTEI = {
    765,                                  /* lineNo */
    21,                                   /* colNo */
    "plannerAStarGrid/validateStartGoal", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pName
                                                                         */
};

static emlrtRTEInfo i_emlrtRTEI = {
    774,                                  /* lineNo */
    21,                                   /* colNo */
    "plannerAStarGrid/validateStartGoal", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pName
                                                                         */
};

static emlrtRTEInfo j_emlrtRTEI = {
    13,                /* lineNo */
    37,                /* colNo */
    "validateinteger", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validateinteger.m" /* pName */
};

static emlrtBCInfo b_emlrtBCI = {
    1,                                    /* iFirst */
    561,                                  /* iLast */
    756,                                  /* lineNo */
    35,                                   /* colNo */
    "",                                   /* aName */
    "plannerAStarGrid/validateStartGoal", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    756,                                  /* lineNo */
    35,                                   /* colNo */
    "plannerAStarGrid/validateStartGoal", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    1,                                    /* iFirst */
    410,                                  /* iLast */
    756,                                  /* lineNo */
    49,                                   /* colNo */
    "",                                   /* aName */
    "plannerAStarGrid/validateStartGoal", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    756,                                  /* lineNo */
    49,                                   /* colNo */
    "plannerAStarGrid/validateStartGoal", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    1,                                    /* iFirst */
    561,                                  /* iLast */
    757,                                  /* lineNo */
    36,                                   /* colNo */
    "",                                   /* aName */
    "plannerAStarGrid/validateStartGoal", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    757,                                  /* lineNo */
    36,                                   /* colNo */
    "plannerAStarGrid/validateStartGoal", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    1,                                    /* iFirst */
    410,                                  /* iLast */
    757,                                  /* lineNo */
    51,                                   /* colNo */
    "",                                   /* aName */
    "plannerAStarGrid/validateStartGoal", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    757,                                  /* lineNo */
    51,                                   /* colNo */
    "plannerAStarGrid/validateStartGoal", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    913,                                     /* lineNo */
    27,                                      /* colNo */
    "plannerAStarGrid/getNodeCostOMDefault", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    1,                                       /* iFirst */
    230010,                                  /* iLast */
    913,                                     /* lineNo */
    27,                                      /* colNo */
    "",                                      /* aName */
    "plannerAStarGrid/getNodeCostOMDefault", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    1,                       /* iFirst */
    410,                     /* iLast */
    262,                     /* lineNo */
    93,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    1,                       /* iFirst */
    410,                     /* iLast */
    285,                     /* lineNo */
    93,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    1,                       /* iFirst */
    230010,                  /* iLast */
    304,                     /* lineNo */
    80,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    304,                     /* lineNo */
    80,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    1,                       /* iFirst */
    410,                     /* iLast */
    239,                     /* lineNo */
    47,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    1,                       /* iFirst */
    561,                     /* iLast */
    239,                     /* lineNo */
    34,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    232,                     /* lineNo */
    33,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    231,                     /* lineNo */
    33,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    211,                     /* lineNo */
    60,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    1,                       /* iFirst */
    410,                     /* iLast */
    211,                     /* lineNo */
    60,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    211,                     /* lineNo */
    50,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    1,                       /* iFirst */
    561,                     /* iLast */
    211,                     /* lineNo */
    50,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    209,                     /* lineNo */
    43,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    204,                     /* lineNo */
    46,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    204,                     /* lineNo */
    35,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    208,                     /* lineNo */
    43,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    1,                       /* iFirst */
    230010,                  /* iLast */
    208,                     /* lineNo */
    43,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    203,                     /* lineNo */
    46,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = {
    203,                     /* lineNo */
    35,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = {
    291,                     /* lineNo */
    46,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    1,                       /* iFirst */
    410,                     /* iLast */
    291,                     /* lineNo */
    46,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = {
    291,                     /* lineNo */
    35,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    1,                       /* iFirst */
    561,                     /* iLast */
    291,                     /* lineNo */
    35,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = {
    92,                  /* lineNo */
    48,                  /* colNo */
    "PriorityQueue/top", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\PriorityQueue.m", /* pName */
    4                           /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = {
    92,                  /* lineNo */
    48,                  /* colNo */
    "PriorityQueue/top", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\PriorityQueue.m", /* pName */
    1                           /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = {
    182,                     /* lineNo */
    31,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = {
    182,                     /* lineNo */
    20,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = {
    181,                     /* lineNo */
    38,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = {
    181,                     /* lineNo */
    27,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = {
    176,                     /* lineNo */
    33,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = {
    180,                     /* lineNo */
    107,                     /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = {
    180,                     /* lineNo */
    64,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = {
    180,                     /* lineNo */
    28,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = {
    179,                     /* lineNo */
    31,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    1,                       /* iFirst */
    410,                     /* iLast */
    179,                     /* lineNo */
    31,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    3                              /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = {
    179,                     /* lineNo */
    20,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    1,                       /* iFirst */
    561,                     /* iLast */
    179,                     /* lineNo */
    20,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    3                              /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = {
    179,                     /* lineNo */
    57,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = {
    179,                     /* lineNo */
    46,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    1,                           /* iFirst */
    230010,                      /* iLast */
    350,                         /* lineNo */
    38,                          /* colNo */
    "",                          /* aName */
    "plannerAStarGrid/get.Path", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = {
    350,                         /* lineNo */
    38,                          /* colNo */
    "plannerAStarGrid/get.Path", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    1,                                           /* iFirst */
    230010,                                      /* iLast */
    360,                                         /* lineNo */
    54,                                          /* colNo */
    "",                                          /* aName */
    "plannerAStarGrid/get.NodesExploredIndices", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = {
    360,                                         /* lineNo */
    54,                                          /* colNo */
    "plannerAStarGrid/get.NodesExploredIndices", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtRTEInfo l_emlrtRTEI = {
    90,                  /* lineNo */
    13,                  /* colNo */
    "PriorityQueue/top", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\PriorityQueue.m" /* pName */
};

static emlrtECInfo emlrtECI = {
    -1,                      /* nDims */
    304,                     /* lineNo */
    13,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pName */
};

static emlrtBCInfo w_emlrtBCI = {
    1,                       /* iFirst */
    230010,                  /* iLast */
    304,                     /* lineNo */
    41,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = {
    304,                     /* lineNo */
    41,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    -1,                      /* nDims */
    303,                     /* lineNo */
    13,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pName */
};

static emlrtBCInfo x_emlrtBCI = {
    1,                       /* iFirst */
    230010,                  /* iLast */
    303,                     /* lineNo */
    48,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = {
    303,                     /* lineNo */
    48,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtRTEInfo m_emlrtRTEI = {
    301,                     /* lineNo */
    35,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pName */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    271,                     /* lineNo */
    50,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    266,                     /* lineNo */
    36,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    1,                       /* iFirst */
    410,                     /* iLast */
    223,                     /* lineNo */
    38,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    3                              /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = {
    223,                     /* lineNo */
    38,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = {
    1,                       /* iFirst */
    561,                     /* iLast */
    223,                     /* lineNo */
    27,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    3                              /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = {
    223,                     /* lineNo */
    27,                      /* colNo */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,                      /* iFirst */
    -1,                      /* iLast */
    197,                     /* lineNo */
    33,                      /* colNo */
    "",                      /* aName */
    "plannerAStarGrid/plan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = {
    474,                             /* lineNo */
    13,                              /* colNo */
    "plannerAStarGrid/getNeighbors", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtECInfo e_emlrtECI = {
    -1,                                    /* nDims */
    996,                                   /* lineNo */
    17,                                    /* colNo */
    "plannerAStarGrid/getEssentialOutput", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pName
                                                                         */
};

static emlrtBCInfo mb_emlrtBCI = {
    1,                                     /* iFirst */
    230010,                                /* iLast */
    996,                                   /* lineNo */
    32,                                    /* colNo */
    "",                                    /* aName */
    "plannerAStarGrid/getEssentialOutput", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = {
    996,                                   /* lineNo */
    32,                                    /* colNo */
    "plannerAStarGrid/getEssentialOutput", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtRTEInfo q_emlrtRTEI = {
    993,                                   /* lineNo */
    132,                                   /* colNo */
    "plannerAStarGrid/getEssentialOutput", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pName
                                                                         */
};

static emlrtECInfo f_emlrtECI = {
    -1,                                    /* nDims */
    986,                                   /* lineNo */
    17,                                    /* colNo */
    "plannerAStarGrid/getEssentialOutput", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pName
                                                                         */
};

static emlrtBCInfo nb_emlrtBCI = {
    1,                                     /* iFirst */
    230010,                                /* iLast */
    986,                                   /* lineNo */
    28,                                    /* colNo */
    "",                                    /* aName */
    "plannerAStarGrid/getEssentialOutput", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = {
    353,                                /* lineNo */
    45,                                 /* colNo */
    "plannerAStarGrid/get.PathIndices", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = {
    1,                                  /* iFirst */
    230010,                             /* iLast */
    353,                                /* lineNo */
    45,                                 /* colNo */
    "",                                 /* aName */
    "plannerAStarGrid/get.PathIndices", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = {
    1021,                             /* lineNo */
    30,                               /* colNo */
    "plannerAStarGrid/getPathOutput", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = {
    1,                                /* iFirst */
    230010,                           /* iLast */
    1021,                             /* lineNo */
    30,                               /* colNo */
    "",                               /* aName */
    "plannerAStarGrid/getPathOutput", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtECInfo g_emlrtECI = {
    -1,                               /* nDims */
    1021,                             /* lineNo */
    17,                               /* colNo */
    "plannerAStarGrid/getPathOutput", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pName
                                                                         */
};

static emlrtDCInfo ub_emlrtDCI = {
    1026,                             /* lineNo */
    32,                               /* colNo */
    "plannerAStarGrid/getPathOutput", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = {
    1,                                /* iFirst */
    230010,                           /* iLast */
    1026,                             /* lineNo */
    32,                               /* colNo */
    "",                               /* aName */
    "plannerAStarGrid/getPathOutput", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtECInfo h_emlrtECI = {
    -1,                               /* nDims */
    1026,                             /* lineNo */
    17,                               /* colNo */
    "plannerAStarGrid/getPathOutput", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pName
                                                                         */
};

static emlrtDCInfo vb_emlrtDCI = {
    409,                         /* lineNo */
    30,                          /* colNo */
    "plannerAStarGrid/get.Path", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = {
    1,                           /* iFirst */
    230010,                      /* iLast */
    409,                         /* lineNo */
    30,                          /* colNo */
    "",                          /* aName */
    "plannerAStarGrid/get.Path", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = {
    423,                           /* lineNo */
    32,                            /* colNo */
    "plannerAStarGrid/get.PathXY", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = {
    1,                             /* iFirst */
    230010,                        /* iLast */
    423,                           /* lineNo */
    32,                            /* colNo */
    "",                            /* aName */
    "plannerAStarGrid/get.PathXY", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = {
    415,                               /* lineNo */
    36,                                /* colNo */
    "plannerAStarGrid/get.PathInGrid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = {
    1,                                 /* iFirst */
    230010,                            /* iLast */
    415,                               /* lineNo */
    36,                                /* colNo */
    "",                                /* aName */
    "plannerAStarGrid/get.PathInGrid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtRTEInfo r_emlrtRTEI = {
    13,                 /* lineNo */
    37,                 /* colNo */
    "validatenonempty", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatenonempty.m" /* pName */
};

static emlrtBCInfo ub_emlrtBCI = {
    1,                                /* iFirst */
    230010,                           /* iLast */
    1018,                             /* lineNo */
    35,                               /* colNo */
    "",                               /* aName */
    "plannerAStarGrid/getPathOutput", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = {
    1018,                             /* lineNo */
    35,                               /* colNo */
    "plannerAStarGrid/getPathOutput", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtRTEInfo u_emlrtRTEI = {
    39,     /* lineNo */
    5,      /* colNo */
    "find", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

static emlrtRTEInfo v_emlrtRTEI = {
    369,    /* lineNo */
    24,     /* colNo */
    "find", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

static emlrtRTEInfo w_emlrtRTEI = {
    297,                /* lineNo */
    13,                 /* colNo */
    "plannerAStarGrid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI = {
    360,                /* lineNo */
    13,                 /* colNo */
    "plannerAStarGrid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+"
    "codegen\\plannerAStarGrid.m" /* pName */
};

static emlrtRTEInfo y_emlrtRTEI = {
    31,     /* lineNo */
    6,      /* colNo */
    "find", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    409,                /* lineNo */
    13,                 /* colNo */
    "plannerAStarGrid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pName
                                                                         */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    1018,               /* lineNo */
    17,                 /* colNo */
    "plannerAStarGrid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pName
                                                                         */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    1021,               /* lineNo */
    72,                 /* colNo */
    "plannerAStarGrid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pName
                                                                         */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    423,                /* lineNo */
    13,                 /* colNo */
    "plannerAStarGrid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pName
                                                                         */
};

static emlrtRTEInfo ib_emlrtRTEI = {
    415,                /* lineNo */
    13,                 /* colNo */
    "plannerAStarGrid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pName
                                                                         */
};

static emlrtRTEInfo jb_emlrtRTEI = {
    427,                /* lineNo */
    17,                 /* colNo */
    "plannerAStarGrid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pName
                                                                         */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    419,                /* lineNo */
    17,                 /* colNo */
    "plannerAStarGrid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pName
                                                                         */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    1018,               /* lineNo */
    35,                 /* colNo */
    "plannerAStarGrid", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m" /* pName
                                                                         */
};

static emlrtRSInfo
    rg_emlrtRSI =
        {
            53,        /* lineNo */
            "flt2str", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\flt2str.m" /* pathName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               char_T y[23]);

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1,
                                const mxArray *m2, emlrtMCInfo *location);

static void c_plannerAStarGrid_getEssential(
    const emlrtStack *sp, plannerAStarGrid *obj,
    const c_nav_algs_internal_plannerASta *astarInternal);

static real_T c_plannerAStarGrid_getNodeCostO(task_1StackData *SD,
                                              const emlrtStack *sp,
                                              plannerAStarGrid *obj,
                                              real_T currentNode);

static c_nav_algs_internal_plannerASta *
c_plannerAStarGrid_initializeIn(task_1StackData *SD, const emlrtStack *sp,
                                plannerAStarGrid *obj,
                                c_nav_algs_internal_plannerASta *iobj_0);

static void c_plannerAStarGrid_validateStar(task_1StackData *SD,
                                            const emlrtStack *sp,
                                            plannerAStarGrid *obj,
                                            const binaryOccupancyMap *map,
                                            const real_T StartInGrid[2],
                                            const real_T GoalInGrid[2]);

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *a__output_of_sprintf_,
                             const char_T *identifier, char_T y[23]);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[23]);

static void plannerAStarGrid_getGCostMatrix(
    const c_nav_algs_internal_plannerASta *astarInternal,
    real_T GCostMatrix[230010]);

static void plannerAStarGrid_getPathOutput(task_1StackData *SD,
                                           const emlrtStack *sp,
                                           plannerAStarGrid *obj,
                                           emxArray_real_T *pathOut);

static void
plannerAStarGrid_runPlan(task_1StackData *SD, const emlrtStack *sp,
                         c_nav_algs_internal_plannerASta *astarInternal,
                         const real_T start[2], const real_T goal[2]);

static void plannerAStarGrid_setInputState(task_1StackData *SD,
                                           plannerAStarGrid *obj);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[23])
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1,
                                const mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 2, &pArrays[0],
                               "sprintf", true, location);
}

static void c_plannerAStarGrid_getEssential(
    const emlrtStack *sp, plannerAStarGrid *obj,
    const c_nav_algs_internal_plannerASta *astarInternal)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T d;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &ag_emlrtRSI;
  d = astarInternal->NumPathPoints;
  if (d < 1.0) {
    i = 0;
  } else {
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &sb_emlrtDCI, &b_st);
    }
    if (((int32_T)d < 1) || ((int32_T)d > 230010)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 230010, &ob_emlrtBCI, &b_st);
    }
    i = (int32_T)d;
  }
  obj->NumPathPoints = i;
  st.site = &xf_emlrtRSI;
  b_st.site = &bg_emlrtRSI;
  d = astarInternal->NumNodesExplored;
  if (!(d < 1.0)) {
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &gb_emlrtDCI, &b_st);
    }
    if (((int32_T)d < 1) || ((int32_T)d > 230010)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 230010, &v_emlrtBCI, &b_st);
    }
  }
  st.site = &wf_emlrtRSI;
  if (obj->NumPathPoints == 0.0) {
    obj->PathCost = rtInf;
    st.site = &vf_emlrtRSI;
    warning(&st);
  } else {
    st.site = &uf_emlrtRSI;
    obj->PathCost = astarInternal->PathCost;
  }
  obj->NumPathPoints = i;
  memset(&obj->Path[0], 0, 230010U * sizeof(real_T));
  if (i < 1) {
    i = 0;
    loop_ub = 0;
  } else {
    if (i > 230010) {
      emlrtDynamicBoundsCheckR2012b(i, 1, 230010, &nb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = i;
  }
  emlrtSubAssignSizeCheckR2012b(&loop_ub, 1, &i, 1, &f_emlrtECI, (emlrtCTX)sp);
  if (loop_ub - 1 >= 0) {
    memcpy(&obj->Path[0], &astarInternal->PathIndicesInternal[0],
           (uint32_T)loop_ub * sizeof(real_T));
  }
  st.site = &tf_emlrtRSI;
  b_st.site = &bg_emlrtRSI;
  if (d < 1.0) {
    i = 0;
  } else {
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &gb_emlrtDCI, &b_st);
    }
    if (((int32_T)d < 1) || ((int32_T)d > 230010)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 230010, &v_emlrtBCI, &b_st);
    }
    i = (int32_T)d;
  }
  st.site = &sf_emlrtRSI;
  obj->NumNodesExplored = astarInternal->NumNodesExplored;
  if (!(obj->NumNodesExplored <= 230010.0)) {
    emlrtErrorWithMessageIdR2018a(
        sp, &q_emlrtRTEI,
        "nav:navalgs:plannerastargrid:AssertionFailedLessThan",
        "nav:navalgs:plannerastargrid:AssertionFailedLessThan", 5, 4, 16,
        "NumNodesExplored", 6, 230010.0);
  }
  if (d < 1.0) {
    loop_ub = 0;
  } else {
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &rb_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)d < 1) || ((int32_T)d > 230010)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 230010, &mb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = (int32_T)d;
  }
  emlrtSubAssignSizeCheckR2012b(&loop_ub, 1, &i, 1, &e_emlrtECI, (emlrtCTX)sp);
}

static real_T c_plannerAStarGrid_getNodeCostO(task_1StackData *SD,
                                              const emlrtStack *sp,
                                              plannerAStarGrid *obj,
                                              real_T currentNode)
{
  binaryOccupancyMap *val;
  emlrtStack st;
  real_T cost;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  val = obj->Map;
  st.site = &yc_emlrtRSI;
  c_binaryOccupancyMap_occupancyM(&st, val, SD->u1.f4.bv);
  for (i = 0; i < 230010; i++) {
    SD->u1.f4.occMat[i] = (int8_T)SD->u1.f4.bv[i];
  }
  if (currentNode != (int32_T)muDoubleScalarFloor(currentNode)) {
    emlrtIntegerCheckR2012b(currentNode, &e_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (((int32_T)currentNode < 1) || ((int32_T)currentNode > 230010)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)currentNode, 1, 230010, &f_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  cost = (real_T)SD->u1.f4.occMat[(int32_T)currentNode - 1] * 10000.0 / 10000.0;
  if (cost > obj->OccupiedThreshold) {
    cost = rtInf;
  }
  if (cost <= obj->OccupiedThreshold) {
    cost = 0.0;
  }
  return cost;
}

static c_nav_algs_internal_plannerASta *
c_plannerAStarGrid_initializeIn(task_1StackData *SD, const emlrtStack *sp,
                                plannerAStarGrid *obj,
                                c_nav_algs_internal_plannerASta *iobj_0)
{
  binaryOccupancyMap *val;
  c_nav_algs_internal_plannerASta *astarInternal;
  emlrtStack b_st;
  emlrtStack st;
  real_T th;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &md_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  obj->OccupiedThreshold = 0.65;
  st.site = &nd_emlrtRSI;
  val = obj->Map;
  st.site = &nd_emlrtRSI;
  c_binaryOccupancyMap_occupancyM(&st, val, SD->u2.f7.bv);
  for (i = 0; i < 230010; i++) {
    SD->u2.f7.b_occMat[i] = (int8_T)SD->u2.f7.bv[i];
  }
  th = obj->OccupiedThreshold;
  st.site = &od_emlrtRSI;
  st.site = &pd_emlrtRSI;
  for (i = 0; i < 230010; i++) {
    SD->u2.f7.c_val_workspace_speed_limit_cos[i] =
        obj->GCostFcn.workspace.speed_limit_cost_map[i];
  }
  for (i = 0; i < 230010; i++) {
    SD->u2.f7.c_val_workspace_trafic_intensit[i] =
        obj->GCostFcn.workspace.trafic_intensity_map[i];
  }
  for (i = 0; i < 230010; i++) {
    SD->u2.f7.val_workspace_obstacles_map[i] =
        obj->GCostFcn.workspace.obstacles_map[i];
  }
  st.site = &pd_emlrtRSI;
  for (i = 0; i < 230010; i++) {
    SD->u2.f7.occMat[i] = (real_T)SD->u2.f7.b_occMat[i] * 10000.0 / 10000.0;
  }
  st.site = &qd_emlrtRSI;
  astarInternal =
      d_plannerAStarGrid_plannerAStar(SD, iobj_0, SD->u2.f7.occMat, th,
                                      SD->u2.f7.c_val_workspace_speed_limit_cos,
                                      SD->u2.f7.c_val_workspace_trafic_intensit,
                                      SD->u2.f7.val_workspace_obstacles_map);
  if (obj->UseCustomH == 0.0) {
    st.site = &rd_emlrtRSI;
    th = obj->HCost;
    st.site = &rd_emlrtRSI;
    astarInternal->HCostMethod = th;
    astarInternal->UseCustomH = 0.0;
  }
  if (obj->UseCustomG == 0.0) {
    st.site = &sd_emlrtRSI;
    th = obj->GCost;
    st.site = &sd_emlrtRSI;
    astarInternal->GCostMethod = th;
    astarInternal->UseCustomG = 0.0;
  }
  st.site = &td_emlrtRSI;
  b_st.site = &ee_emlrtRSI;
  th = obj->TieBreaker;
  if (muDoubleScalarIsNaN(th)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI, "MATLAB:nologicalnan",
                                  "MATLAB:nologicalnan", 0);
  }
  if (obj->TieBreaker != 0.0) {
    th = 1.07;
  } else {
    th = 1.0;
  }
  st.site = &td_emlrtRSI;
  astarInternal->TieBreaker = th;
  st.site = &ud_emlrtRSI;
  th = obj->DiagonalSearch;
  astarInternal->DiagonalSearchFlag = th;
  return astarInternal;
}

static void c_plannerAStarGrid_validateStar(task_1StackData *SD,
                                            const emlrtStack *sp,
                                            plannerAStarGrid *obj,
                                            const binaryOccupancyMap *map,
                                            const real_T StartInGrid[2],
                                            const real_T GoalInGrid[2])
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 7};
  static const int32_T iv3[2] = {1, 7};
  static const char_T cv1[11] = {'X', ' ', 'd', 'i', 'r', 'e',
                                 'c', 't', 'i', 'o', 'n'};
  static const char_T cv2[11] = {'Y', ' ', 'd', 'i', 'r', 'e',
                                 'c', 't', 'i', 'o', 'n'};
  static const char_T cv[7] = {'c', 'o', 'l', 'u', 'm', 'n', 's'};
  static const char_T rfmt[7] = {'%', '2', '3', '.', '1', '5', 'e'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *m;
  const mxArray *y;
  real_T a__7[4];
  real_T mapSizeX_idx_0;
  real_T mapSizeY_idx_0;
  int32_T i;
  int32_T k;
  boolean_T bv[2];
  boolean_T bv1[2];
  boolean_T exitg1;
  boolean_T isStartOccupied;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &mc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  a__7[0] = StartInGrid[0];
  a__7[1] = GoalInGrid[0];
  a__7[2] = StartInGrid[1];
  a__7[3] = GoalInGrid[1];
  b_st.site = &uc_emlrtRSI;
  c_st.site = &ic_emlrtRSI;
  isStartOccupied = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if ((!muDoubleScalarIsInf(a__7[k])) && (!muDoubleScalarIsNaN(a__7[k])) &&
        (muDoubleScalarFloor(a__7[k]) == a__7[k])) {
      k++;
    } else {
      isStartOccupied = false;
      exitg1 = true;
    }
  }
  if (!isStartOccupied) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &j_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedInteger",
        "MATLAB:plan:expectedInteger", 3, 4, 9, "startGoal");
  }
  bv[0] = ((StartInGrid[0] <= 561.0) && (StartInGrid[1] <= 410.0) &&
           (StartInGrid[0] >= 1.0));
  bv1[0] = (StartInGrid[1] >= 1.0);
  bv[1] = ((GoalInGrid[0] <= 561.0) && (GoalInGrid[1] <= 410.0) &&
           (GoalInGrid[0] >= 1.0));
  bv1[1] = (GoalInGrid[1] >= 1.0);
  isStartOccupied = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if ((!bv[k]) || (!bv1[k])) {
      isStartOccupied = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (isStartOccupied) {
    real_T mapSizeX_idx_1;
    real_T mapSizeY_idx_1;
    int32_T strY_size_idx_1;
    char_T b_str[23];
    char_T c_str[23];
    char_T d_str[23];
    char_T str[23];
    char_T strX_data[11];
    char_T strY_data[11];
    st.site = &nc_emlrtRSI;
    mapSizeX_idx_0 = obj->IsGrid;
    if (muDoubleScalarIsNaN(mapSizeX_idx_0)) {
      emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI, "MATLAB:nologicalnan",
                                    "MATLAB:nologicalnan", 0);
    }
    if (!(obj->IsGrid != 0.0)) {
      st.site = &oc_emlrtRSI;
      b_st.site = &vc_emlrtRSI;
      mapSizeX_idx_0 = map->SharedProperties.LocalOriginInWorld[0] +
                       map->SharedProperties.GridOriginInLocal[0];
      mapSizeX_idx_1 = mapSizeX_idx_0 + 410.0;
      st.site = &pc_emlrtRSI;
      b_st.site = &wc_emlrtRSI;
      mapSizeY_idx_0 = map->SharedProperties.LocalOriginInWorld[1] +
                       map->SharedProperties.GridOriginInLocal[1];
      mapSizeY_idx_1 = mapSizeY_idx_0 + 561.0;
      k = 11;
      strY_size_idx_1 = 11;
      for (i = 0; i < 11; i++) {
        strX_data[i] = cv1[i];
        strY_data[i] = cv2[i];
      }
    } else {
      mapSizeX_idx_0 = 1.0;
      mapSizeY_idx_0 = 1.0;
      mapSizeX_idx_1 = 561.0;
      mapSizeY_idx_1 = 410.0;
      k = 4;
      strX_data[0] = 'r';
      strX_data[1] = 'o';
      strX_data[2] = 'w';
      strX_data[3] = 's';
      strY_size_idx_1 = 7;
      for (i = 0; i < 7; i++) {
        strY_data[i] = cv[i];
      }
    }
    st.site = &qc_emlrtRSI;
    b_st.site = &xc_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 7, m, &rfmt[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m = emlrtCreateDoubleScalar(mapSizeX_idx_0);
    emlrtAssign(&b_y, m);
    c_st.site = &rg_emlrtRSI;
    emlrt_marshallIn(&c_st, b_sprintf(&c_st, y, b_y, &emlrtMCI),
                     "<output of sprintf>", str);
    st.site = &qc_emlrtRSI;
    b_st.site = &xc_emlrtRSI;
    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 7, m, &rfmt[0]);
    emlrtAssign(&c_y, m);
    d_y = NULL;
    m = emlrtCreateDoubleScalar(mapSizeX_idx_1);
    emlrtAssign(&d_y, m);
    c_st.site = &rg_emlrtRSI;
    emlrt_marshallIn(&c_st, b_sprintf(&c_st, c_y, d_y, &emlrtMCI),
                     "<output of sprintf>", b_str);
    st.site = &rc_emlrtRSI;
    b_st.site = &xc_emlrtRSI;
    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&b_st, 7, m, &rfmt[0]);
    emlrtAssign(&e_y, m);
    f_y = NULL;
    m = emlrtCreateDoubleScalar(mapSizeY_idx_0);
    emlrtAssign(&f_y, m);
    c_st.site = &rg_emlrtRSI;
    emlrt_marshallIn(&c_st, b_sprintf(&c_st, e_y, f_y, &emlrtMCI),
                     "<output of sprintf>", c_str);
    st.site = &rc_emlrtRSI;
    b_st.site = &xc_emlrtRSI;
    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&b_st, 7, m, &rfmt[0]);
    emlrtAssign(&g_y, m);
    h_y = NULL;
    m = emlrtCreateDoubleScalar(mapSizeY_idx_1);
    emlrtAssign(&h_y, m);
    c_st.site = &rg_emlrtRSI;
    emlrt_marshallIn(&c_st, b_sprintf(&c_st, g_y, h_y, &emlrtMCI),
                     "<output of sprintf>", d_str);
    emlrtErrorWithMessageIdR2018a(
        sp, &g_emlrtRTEI, "nav:navalgs:plannerastargrid:CoordinateOutside",
        "nav:navalgs:plannerastargrid:CoordinateOutside", 18, 4, 23, &str[0], 4,
        23, &b_str[0], 4, k, &strX_data[0], 4, 23, &c_str[0], 4, 23, &d_str[0],
        4, strY_size_idx_1, &strY_data[0]);
  }
  if (GoalInGrid[0] != (int32_T)muDoubleScalarFloor(GoalInGrid[0])) {
    emlrtIntegerCheckR2012b(GoalInGrid[0], &emlrtDCI, (emlrtConstCTX)sp);
  }
  if (((int32_T)GoalInGrid[0] < 1) || ((int32_T)GoalInGrid[0] > 561)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)GoalInGrid[0], 1, 561, &b_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (GoalInGrid[1] != (int32_T)muDoubleScalarFloor(GoalInGrid[1])) {
    emlrtIntegerCheckR2012b(GoalInGrid[1], &b_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (((int32_T)GoalInGrid[1] < 1) || ((int32_T)GoalInGrid[1] > 410)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)GoalInGrid[1], 1, 410, &c_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  mapSizeX_idx_0 = obj->PoseId[((int32_T)GoalInGrid[0] +
                                561 * ((int32_T)GoalInGrid[1] - 1)) -
                               1];
  if (StartInGrid[0] != (int32_T)muDoubleScalarFloor(StartInGrid[0])) {
    emlrtIntegerCheckR2012b(StartInGrid[0], &c_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (((int32_T)StartInGrid[0] < 1) || ((int32_T)StartInGrid[0] > 561)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)StartInGrid[0], 1, 561, &d_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (StartInGrid[1] != (int32_T)muDoubleScalarFloor(StartInGrid[1])) {
    emlrtIntegerCheckR2012b(StartInGrid[1], &d_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (((int32_T)StartInGrid[1] < 1) || ((int32_T)StartInGrid[1] > 410)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)StartInGrid[1], 1, 410, &e_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  mapSizeY_idx_0 = obj->PoseId[((int32_T)StartInGrid[0] +
                                561 * ((int32_T)StartInGrid[1] - 1)) -
                               1];
  st.site = &sc_emlrtRSI;
  isStartOccupied =
      (c_plannerAStarGrid_getNodeCostO(SD, &st, obj, mapSizeY_idx_0) == rtInf);
  if (isStartOccupied) {
    emlrtErrorWithMessageIdR2018a(
        sp, &h_emlrtRTEI, "nav:navalgs:plannerastargrid:OccupiedLocation",
        "nav:navalgs:plannerastargrid:OccupiedLocation", 3, 4, 5, "start");
  }
  st.site = &tc_emlrtRSI;
  isStartOccupied =
      (c_plannerAStarGrid_getNodeCostO(SD, &st, obj, mapSizeX_idx_0) == rtInf);
  if (isStartOccupied) {
    emlrtErrorWithMessageIdR2018a(
        sp, &i_emlrtRTEI, "nav:navalgs:plannerastargrid:OccupiedLocation",
        "nav:navalgs:plannerastargrid:OccupiedLocation", 3, 4, 4, "goal");
  }
}

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *a__output_of_sprintf_,
                             const char_T *identifier, char_T y[23])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[23])
{
  static const int32_T dims[2] = {1, 23};
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U,
                          (const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 23);
  emlrtDestroyArray(&src);
}

static void plannerAStarGrid_getGCostMatrix(
    const c_nav_algs_internal_plannerASta *astarInternal,
    real_T GCostMatrix[230010])
{
  int32_T i;
  memcpy(&GCostMatrix[0], &astarInternal->GCostMatrix[0],
         230010U * sizeof(real_T));
  for (i = 0; i < 230010; i++) {
    if (astarInternal->GCostMatrix[i] == -1.0) {
      GCostMatrix[i] = rtInf;
    }
  }
}

static void plannerAStarGrid_getPathOutput(task_1StackData *SD,
                                           const emlrtStack *sp,
                                           plannerAStarGrid *obj,
                                           emxArray_real_T *pathOut)
{
  binaryOccupancyMap *b_val;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *b_pose;
  emxArray_real_T *pose;
  emxArray_real_T *val;
  real_T x_tmp;
  real_T *pathOut_data;
  real_T *pose_data;
  int32_T b_pathOut[2];
  int32_T iv[2];
  int32_T i;
  int32_T i1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &cg_emlrtRSI;
  x_tmp = obj->NumPathPoints;
  if (x_tmp < 1.0) {
    i = 0;
  } else {
    if (x_tmp != (int32_T)muDoubleScalarFloor(x_tmp)) {
      emlrtIntegerCheckR2012b(x_tmp, &vb_emlrtDCI, &st);
    }
    if (((int32_T)x_tmp < 1) || ((int32_T)x_tmp > 230010)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)x_tmp, 1, 230010, &rb_emlrtBCI,
                                    &st);
    }
    i = (int32_T)x_tmp;
  }
  for (i1 = 0; i1 < 460020; i1++) {
    obj->PathXY[i1] = rtNaN;
  }
  for (i1 = 0; i1 < 460020; i1++) {
    obj->PathInGrid[i1] = rtNaN;
  }
  if (i == 0) {
    obj->PathCost = rtInf;
    pathOut->size[0] = 0;
    pathOut->size[1] = 0;
  } else {
    int32_T k;
    int32_T loop_ub;
    boolean_T exitg1;
    boolean_T p;
    emxInit_real_T(sp, &val, 1, &lb_emlrtRTEI);
    st.site = &dg_emlrtRSI;
    x_tmp = obj->NumPathPoints;
    if (x_tmp < 1.0) {
      loop_ub = 0;
    } else {
      if (x_tmp != (int32_T)muDoubleScalarFloor(x_tmp)) {
        emlrtIntegerCheckR2012b(x_tmp, &vb_emlrtDCI, &st);
      }
      if (((int32_T)x_tmp < 1) || ((int32_T)x_tmp > 230010)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)x_tmp, 1, 230010, &rb_emlrtBCI,
                                      &st);
      }
      loop_ub = (int32_T)x_tmp;
    }
    i = val->size[0];
    val->size[0] = loop_ub;
    emxEnsureCapacity_real_T(&st, val, i, &eb_emlrtRTEI);
    pathOut_data = val->data;
    for (i = 0; i < loop_ub; i++) {
      pathOut_data[i] = obj->Path[i];
    }
    emxInit_real_T(sp, &pose, 2, &fb_emlrtRTEI);
    i = pose->size[0] * pose->size[1];
    pose->size[0] = val->size[0];
    pose->size[1] = 3;
    emxEnsureCapacity_real_T(sp, pose, i, &fb_emlrtRTEI);
    pose_data = pose->data;
    loop_ub = val->size[0];
    for (i = 0; i < 3; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        if (pathOut_data[i1] !=
            (int32_T)muDoubleScalarFloor(pathOut_data[i1])) {
          emlrtIntegerCheckR2012b(pathOut_data[i1], &yb_emlrtDCI,
                                  (emlrtConstCTX)sp);
        }
        k = (int32_T)pathOut_data[i1];
        if ((k < 1) || (k > 230010)) {
          emlrtDynamicBoundsCheckR2012b(k, 1, 230010, &ub_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        pose_data[i1 + pose->size[0] * i] = obj->IdPose[(k + 230010 * i) - 1];
      }
    }
    emxFree_real_T(sp, &val);
    for (i = 0; i < 460020; i++) {
      SD->u1.f0.pathXYTemp[i] = rtNaN;
    }
    x_tmp = obj->NumPathPoints;
    if (x_tmp < 1.0) {
      loop_ub = 0;
    } else {
      if (x_tmp != (int32_T)muDoubleScalarFloor(x_tmp)) {
        emlrtIntegerCheckR2012b(x_tmp, &tb_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (((int32_T)x_tmp < 1) || ((int32_T)x_tmp > 230010)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)x_tmp, 1, 230010, &pb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      loop_ub = (int32_T)x_tmp;
    }
    st.site = &eg_emlrtRSI;
    b_val = obj->Map;
    st.site = &eg_emlrtRSI;
    b_st.site = &ig_emlrtRSI;
    c_st.site = &ic_emlrtRSI;
    p = true;
    i = pose->size[0] << 1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= i - 1)) {
      x_tmp = pose_data[k % pose->size[0] +
                        pose->size[0] *
                            (int32_T)((uint32_T)k / (uint32_T)pose->size[0])];
      if ((!muDoubleScalarIsInf(x_tmp)) && (!muDoubleScalarIsNaN(x_tmp)) &&
          (muDoubleScalarFloor(x_tmp) == x_tmp)) {
        k++;
      } else {
        p = false;
        exitg1 = true;
      }
    }
    if (!p) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &j_emlrtRTEI,
          "Coder:toolbox:ValidateattributesexpectedInteger",
          "MATLAB:grid2world:expectedInteger", 3, 4, 20,
          "input number 2, idx,");
    }
    c_st.site = &ic_emlrtRSI;
    if (pose->size[0] == 0) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &r_emlrtRTEI,
          "Coder:toolbox:ValidateattributesexpectedNonempty",
          "MATLAB:grid2world:expectedNonempty", 3, 4, 20,
          "input number 2, idx,");
    }
    emxInit_real_T(&st, &b_pose, 2, &gb_emlrtRTEI);
    i = b_pose->size[0] * b_pose->size[1];
    b_pose->size[0] = pose->size[0];
    b_pose->size[1] = 2;
    emxEnsureCapacity_real_T(&st, b_pose, i, &gb_emlrtRTEI);
    pathOut_data = b_pose->data;
    k = pose->size[0];
    for (i = 0; i < 2; i++) {
      for (i1 = 0; i1 < k; i1++) {
        pathOut_data[i1 + b_pose->size[0] * i] =
            pose_data[i1 + pose->size[0] * i];
      }
    }
    b_st.site = &jg_emlrtRSI;
    MapInterface_grid2worldImpl(&b_st, b_val, b_pose, pathOut);
    pathOut_data = pathOut->data;
    emxFree_real_T(&st, &b_pose);
    iv[0] = loop_ub;
    iv[1] = 2;
    b_pathOut[0] = pathOut->size[0];
    b_pathOut[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &b_pathOut[0], 2, &g_emlrtECI,
                                  (emlrtCTX)sp);
    for (i = 0; i < 2; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        SD->u1.f0.pathXYTemp[i1 + 230010 * i] = pathOut_data[i1 + loop_ub * i];
      }
    }
    for (i = 0; i < 460020; i++) {
      obj->PathXY[i] = SD->u1.f0.pathXYTemp[i];
    }
    for (i = 0; i < 460020; i++) {
      SD->u1.f0.pathXYTemp[i] = rtNaN;
    }
    x_tmp = obj->NumPathPoints;
    if (x_tmp < 1.0) {
      loop_ub = 0;
    } else {
      if (x_tmp != (int32_T)muDoubleScalarFloor(x_tmp)) {
        emlrtIntegerCheckR2012b(x_tmp, &ub_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (((int32_T)x_tmp < 1) || ((int32_T)x_tmp > 230010)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)x_tmp, 1, 230010, &qb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      loop_ub = (int32_T)x_tmp;
    }
    iv[0] = loop_ub;
    iv[1] = 2;
    b_pathOut[0] = pose->size[0];
    b_pathOut[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &b_pathOut[0], 2, &h_emlrtECI,
                                  (emlrtCTX)sp);
    for (i = 0; i < 2; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        SD->u1.f0.pathXYTemp[i1 + 230010 * i] =
            pose_data[i1 + pose->size[0] * i];
      }
    }
    emxFree_real_T(sp, &pose);
    for (i = 0; i < 460020; i++) {
      obj->PathInGrid[i] = SD->u1.f0.pathXYTemp[i];
    }
    st.site = &fg_emlrtRSI;
    x_tmp = obj->IsGrid;
    if (muDoubleScalarIsNaN(x_tmp)) {
      emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI, "MATLAB:nologicalnan",
                                    "MATLAB:nologicalnan", 0);
    }
    if (obj->IsGrid != 0.0) {
      st.site = &gg_emlrtRSI;
      x_tmp = obj->NumPathPoints;
      if (x_tmp < 1.0) {
        loop_ub = 0;
      } else {
        if (x_tmp != (int32_T)muDoubleScalarFloor(x_tmp)) {
          emlrtIntegerCheckR2012b(x_tmp, &xb_emlrtDCI, &st);
        }
        if (((int32_T)x_tmp < 1) || ((int32_T)x_tmp > 230010)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)x_tmp, 1, 230010, &tb_emlrtBCI,
                                        &st);
        }
        loop_ub = (int32_T)x_tmp;
      }
      i = pathOut->size[0] * pathOut->size[1];
      pathOut->size[0] = loop_ub;
      pathOut->size[1] = 2;
      emxEnsureCapacity_real_T(&st, pathOut, i, &ib_emlrtRTEI);
      pathOut_data = pathOut->data;
      for (i = 0; i < 2; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          pathOut_data[i1 + pathOut->size[0] * i] =
              obj->PathInGrid[i1 + 230010 * i];
        }
      }
      if (pathOut->size[0] == 0) {
        i = pathOut->size[0] * pathOut->size[1];
        pathOut->size[0] = 1;
        pathOut->size[1] = 2;
        emxEnsureCapacity_real_T(&st, pathOut, i, &kb_emlrtRTEI);
        pathOut_data = pathOut->data;
        pathOut_data[0] = obj->PathInGrid[0];
        pathOut_data[pathOut->size[0]] = obj->PathInGrid[230010];
      }
    } else {
      st.site = &hg_emlrtRSI;
      x_tmp = obj->NumPathPoints;
      if (x_tmp < 1.0) {
        loop_ub = 0;
      } else {
        if (x_tmp != (int32_T)muDoubleScalarFloor(x_tmp)) {
          emlrtIntegerCheckR2012b(x_tmp, &wb_emlrtDCI, &st);
        }
        if (((int32_T)x_tmp < 1) || ((int32_T)x_tmp > 230010)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)x_tmp, 1, 230010, &sb_emlrtBCI,
                                        &st);
        }
        loop_ub = (int32_T)x_tmp;
      }
      i = pathOut->size[0] * pathOut->size[1];
      pathOut->size[0] = loop_ub;
      pathOut->size[1] = 2;
      emxEnsureCapacity_real_T(&st, pathOut, i, &hb_emlrtRTEI);
      pathOut_data = pathOut->data;
      for (i = 0; i < 2; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          pathOut_data[i1 + pathOut->size[0] * i] =
              obj->PathXY[i1 + 230010 * i];
        }
      }
      if (pathOut->size[0] == 0) {
        i = pathOut->size[0] * pathOut->size[1];
        pathOut->size[0] = 1;
        pathOut->size[1] = 2;
        emxEnsureCapacity_real_T(&st, pathOut, i, &jb_emlrtRTEI);
        pathOut_data = pathOut->data;
        pathOut_data[0] = obj->PathXY[0];
        pathOut_data[pathOut->size[0]] = obj->PathXY[230010];
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void
plannerAStarGrid_runPlan(task_1StackData *SD, const emlrtStack *sp,
                         c_nav_algs_internal_plannerASta *astarInternal,
                         const real_T start[2], const real_T goal[2])
{
  static const int8_T b_Neighbors[16] = {-1, 0,  1,  -1, 1, -1, 0, 1,
                                         -1, -1, -1, 0,  0, 1,  1, 1};
  static const int8_T Neighbors[8] = {0, -1, 1, 0, -1, 0, 0, 1};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *ii;
  emxArray_real_T *expNodes;
  nav_algs_internal_PriorityQueue OpenList;
  real_T openToPush_data[40];
  real_T MinScoreNode_data[5];
  real_T CurrentCol;
  real_T CurrentRow;
  real_T dataDim;
  real_T *expNodes_data;
  int32_T b_expNodes[2];
  int32_T iv[2];
  int32_T FScore_tmp;
  int32_T Neighbors_size_idx_0;
  int32_T NumNeighbors;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T idx;
  int32_T openToPushK;
  int32_T p;
  int32_T *ii_data;
  int8_T Neighbors_data[16];
  boolean_T exitg2;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &expNodes, 1, &w_emlrtRTEI);
  emxInit_int32_T(sp, &ii, &y_emlrtRTEI);
  st.site = &fe_emlrtRSI;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emlrtPushHeapReferenceStackR2021a(&st, true, &OpenList,
                                    (void *)&handle_matlabCodegenDestructor,
                                    NULL, NULL, NULL);
  for (i = 0; i < 230010; i++) {
    SD->f8.GScore[i] = rtInf;
    SD->f8.FScore[i] = rtInf;
    SD->f8.ExploredNodes[i] = 0;
    SD->f8.ParentCol1[i] = 0;
    SD->f8.ParentRow2[i] = 0;
    SD->f8.ClosedMAT[i] = 0;
    if (astarInternal->Map[i] == 1.0) {
      SD->f8.ClosedMAT[i] = 1;
    }
  }
  b_st.site = &ge_emlrtRSI;
  c_st.site = &we_emlrtRSI;
  c_st.site = &we_emlrtRSI;
  OpenList.PQInternal = priorityqueuecodegen_constructPQ(5.0, 2.0);
  OpenList.matlabCodegenIsDeleted = false;
  b_st.site = &he_emlrtRSI;
  c_plannerAStarGrid_getHeuristic(SD, &b_st, astarInternal, goal, SD->f8.map);
  b_i = (int32_T)muDoubleScalarFloor(start[1]);
  if (start[1] != b_i) {
    emlrtIntegerCheckR2012b(start[1], &bb_emlrtDCI, &st);
  }
  if ((start[1] < 1.0) || (start[1] > 410.0)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)start[1], 1, 410, &s_emlrtBCI, &st);
  }
  i1 = (int32_T)muDoubleScalarFloor(start[0]);
  if (start[0] != i1) {
    emlrtIntegerCheckR2012b(start[0], &cb_emlrtDCI, &st);
  }
  if ((start[0] < 1.0) || (start[0] > 561.0)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)start[0], 1, 561, &t_emlrtBCI, &st);
  }
  i2 = (int32_T)start[1];
  if (i2 != b_i) {
    emlrtIntegerCheckR2012b(start[1], &db_emlrtDCI, &st);
  }
  i3 = (int32_T)start[0];
  if (i3 != i1) {
    emlrtIntegerCheckR2012b(start[0], &eb_emlrtDCI, &st);
  }
  FScore_tmp = (i3 + 561 * (i2 - 1)) - 1;
  dataDim = SD->f8.map[FScore_tmp];
  SD->f8.FScore[FScore_tmp] = dataDim;
  b_st.site = &ie_emlrtRSI;
  if (i2 != b_i) {
    emlrtIntegerCheckR2012b(start[1], &ab_emlrtDCI, &b_st);
  }
  if (i3 != i1) {
    emlrtIntegerCheckR2012b(start[0], &ab_emlrtDCI, &b_st);
  }
  MinScoreNode_data[0] = astarInternal->MapIndex[FScore_tmp];
  if (i2 != b_i) {
    emlrtIntegerCheckR2012b(start[1], &y_emlrtDCI, &b_st);
  }
  if (i3 != i1) {
    emlrtIntegerCheckR2012b(start[0], &y_emlrtDCI, &b_st);
  }
  MinScoreNode_data[1] = astarInternal->MapIndex[FScore_tmp];
  if (i2 != b_i) {
    emlrtIntegerCheckR2012b(start[1], &x_emlrtDCI, &b_st);
  }
  if (i3 != i1) {
    emlrtIntegerCheckR2012b(start[0], &x_emlrtDCI, &b_st);
  }
  MinScoreNode_data[2] = SD->f8.FScore[FScore_tmp];
  MinScoreNode_data[3] = 0.0;
  if (i2 != b_i) {
    emlrtIntegerCheckR2012b(start[1], &w_emlrtDCI, &b_st);
  }
  if (i3 != i1) {
    emlrtIntegerCheckR2012b(start[0], &w_emlrtDCI, &b_st);
  }
  MinScoreNode_data[4] = dataDim;
  priorityqueuecodegen_push(OpenList.PQInternal, &MinScoreNode_data[0]);
  if (i2 != b_i) {
    emlrtIntegerCheckR2012b(start[1], &u_emlrtDCI, &st);
  }
  if (i3 != i1) {
    emlrtIntegerCheckR2012b(start[0], &v_emlrtDCI, &st);
  }
  SD->f8.ExploredNodes[FScore_tmp] = 1;
  if (i2 != b_i) {
    emlrtIntegerCheckR2012b(start[1], &s_emlrtDCI, &st);
  }
  if (i3 != i1) {
    emlrtIntegerCheckR2012b(start[0], &t_emlrtDCI, &st);
  }
  SD->f8.GScore[FScore_tmp] = 0.0;
  CurrentRow = 0.0;
  CurrentCol = 0.0;
  b_st.site = &je_emlrtRSI;
  if (astarInternal->DiagonalSearchFlag !=
      (int32_T)muDoubleScalarFloor(astarInternal->DiagonalSearchFlag)) {
    emlrtIntegerCheckR2012b(astarInternal->DiagonalSearchFlag, &lb_emlrtDCI,
                            &b_st);
  }
  if ((int32_T)astarInternal->DiagonalSearchFlag == 0) {
    Neighbors_size_idx_0 = 4;
    for (i4 = 0; i4 < 8; i4++) {
      Neighbors_data[i4] = Neighbors[i4];
    }
    NumNeighbors = 4;
  } else {
    Neighbors_size_idx_0 = 8;
    for (i4 = 0; i4 < 16; i4++) {
      Neighbors_data[i4] = b_Neighbors[i4];
    }
    NumNeighbors = 8;
  }
  int32_T exitg1;
  do {
    real_T nodeId;
    exitg1 = 0;
    b_st.site = &ke_emlrtRSI;
    dataDim = priorityqueuecodegen_getDataDim(OpenList.PQInternal);
    if (!(dataDim <= 5.0)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &l_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (!(dataDim >= 0.0)) {
      emlrtNonNegativeCheckR2012b(dataDim, &q_emlrtDCI, &b_st);
    }
    if (dataDim != muDoubleScalarFloor(dataDim)) {
      emlrtIntegerCheckR2012b(dataDim, &r_emlrtDCI, &b_st);
    }
    priorityqueuecodegen_top(OpenList.PQInternal, &MinScoreNode_data[0],
                             &nodeId);
    if ((int32_T)dataDim < 3) {
      emlrtDynamicBoundsCheckR2012b(3, 1, (int32_T)dataDim, &db_emlrtBCI, &st);
    }
    if (MinScoreNode_data[2] == rtInf) {
      exitg1 = 1;
    } else {
      b_st.site = &le_emlrtRSI;
      dataDim = priorityqueuecodegen_isEmpty(OpenList.PQInternal);
      c_st.site = &ef_emlrtRSI;
      if (muDoubleScalarIsNaN(dataDim)) {
        emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI, "MATLAB:nologicalnan",
                                      "MATLAB:nologicalnan", 0);
      }
      if (dataDim != 0.0) {
        if (i2 != b_i) {
          emlrtIntegerCheckR2012b(start[1], &m_emlrtDCI, &st);
        }
        if (i3 != i1) {
          emlrtIntegerCheckR2012b(start[0], &n_emlrtDCI, &st);
        }
        astarInternal->ParentCol[FScore_tmp] = start[1];
        if (i2 != b_i) {
          emlrtIntegerCheckR2012b(start[1], &j_emlrtDCI, &st);
        }
        if (i3 != i1) {
          emlrtIntegerCheckR2012b(start[0], &k_emlrtDCI, &st);
        }
        astarInternal->ParentRow[FScore_tmp] = start[0];
        exitg1 = 1;
      } else {
        i4 = (int32_T)muDoubleScalarFloor(MinScoreNode_data[0]);
        if (MinScoreNode_data[0] != i4) {
          emlrtIntegerCheckR2012b(MinScoreNode_data[0], &l_emlrtDCI, &st);
        }
        idx = (int32_T)MinScoreNode_data[0];
        if ((idx < 1) || (idx > 230010)) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, 230010, &p_emlrtBCI, &st);
        }
        CurrentRow = astarInternal->AllNodes[idx - 1];
        if (idx != i4) {
          emlrtIntegerCheckR2012b(MinScoreNode_data[0], &i_emlrtDCI, &st);
        }
        CurrentCol = astarInternal->AllNodes[idx + 230009];
        if (goal[1] != (int32_T)muDoubleScalarFloor(goal[1])) {
          emlrtIntegerCheckR2012b(goal[1], &g_emlrtDCI, &st);
        }
        if (((int32_T)goal[1] < 1) || ((int32_T)goal[1] > 410)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)goal[1], 1, 410, &n_emlrtBCI,
                                        &st);
        }
        if (goal[0] != (int32_T)muDoubleScalarFloor(goal[0])) {
          emlrtIntegerCheckR2012b(goal[0], &h_emlrtDCI, &st);
        }
        if (((int32_T)goal[0] < 1) || ((int32_T)goal[0] > 561)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)goal[0], 1, 561, &o_emlrtBCI,
                                        &st);
        }
        if (MinScoreNode_data[0] ==
            astarInternal
                ->MapIndex[((int32_T)goal[0] + 561 * ((int32_T)goal[1] - 1)) -
                           1]) {
          for (b_i = 0; b_i < 230010; b_i++) {
            astarInternal->ParentCol[b_i] = SD->f8.ParentCol1[b_i];
            astarInternal->ParentRow[b_i] = SD->f8.ParentRow2[b_i];
          }
          b_st.site = &me_emlrtRSI;
          c_plannerAStarGrid_reconstructP(SD, &b_st, astarInternal, CurrentRow,
                                          CurrentCol, start);
          exitg1 = 1;
        } else {
          int32_T ClosedMAT_tmp;
          b_st.site = &ne_emlrtRSI;
          priorityqueuecodegen_pop(OpenList.PQInternal);
          if (CurrentCol != (int32_T)muDoubleScalarFloor(CurrentCol)) {
            emlrtIntegerCheckR2012b(CurrentCol, &jb_emlrtDCI, &st);
          }
          if (((int32_T)CurrentCol < 1) || ((int32_T)CurrentCol > 410)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)CurrentCol, 1, 410,
                                          &bb_emlrtBCI, &st);
          }
          if (CurrentRow != (int32_T)muDoubleScalarFloor(CurrentRow)) {
            emlrtIntegerCheckR2012b(CurrentRow, &kb_emlrtDCI, &st);
          }
          if (((int32_T)CurrentRow < 1) || ((int32_T)CurrentRow > 561)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)CurrentRow, 1, 561,
                                          &cb_emlrtBCI, &st);
          }
          ClosedMAT_tmp =
              ((int32_T)CurrentRow + 561 * ((int32_T)CurrentCol - 1)) - 1;
          SD->f8.ClosedMAT[ClosedMAT_tmp] = 1;
          openToPushK = NumNeighbors * 5;
          memset(&openToPush_data[0], 0,
                 (uint32_T)openToPushK * sizeof(real_T));
          openToPushK = 1;
          for (p = 0; p < NumNeighbors; p++) {
            int32_T j;
            if (p + 1 > Neighbors_size_idx_0) {
              emlrtDynamicBoundsCheckR2012b(p + 1, 1, Neighbors_size_idx_0,
                                            &m_emlrtBCI, &st);
            }
            i = Neighbors_data[p];
            if (p + 1 > Neighbors_size_idx_0) {
              emlrtDynamicBoundsCheckR2012b(p + 1, 1, Neighbors_size_idx_0,
                                            &l_emlrtBCI, &st);
            }
            j = Neighbors_data[p + Neighbors_size_idx_0];
            b_st.site = &oe_emlrtRSI;
            i4 = (int32_T)CurrentRow + i;
            if ((i4 < 1) || (i4 > 561)) {
              idx = 1;
            } else {
              idx = (int32_T)CurrentCol + j;
              if ((idx < 1) || (idx > 410) ||
                  (astarInternal->Map[(i4 + 561 * (idx - 1)) - 1] >=
                   astarInternal->ObstacleThreshold)) {
                idx = 1;
              } else {
                idx = 0;
              }
            }
            b_st.site = &oe_emlrtRSI;
            if (idx == 0) {
              int32_T i5;
              idx = (int32_T)CurrentCol + j;
              if ((idx < 1) || (idx > 410)) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, 410, &j_emlrtBCI, &st);
              }
              if ((i4 < 1) || (i4 > 561)) {
                emlrtDynamicBoundsCheckR2012b(i4, 1, 561, &k_emlrtBCI, &st);
              }
              i5 = (i4 + 561 * (idx - 1)) - 1;
              if (SD->f8.ClosedMAT[i5] == 0) {
                b_st.site = &pe_emlrtRSI;
                b_st.site = &pe_emlrtRSI;
                b_st.site = &qe_emlrtRSI;
                dataDim = plannerAStarGrid_gcostValue(
                    &b_st, astarInternal, CurrentRow, CurrentCol, i, j);
                dataDim += SD->f8.GScore[ClosedMAT_tmp];
                if (SD->f8.FScore[i5] == rtInf) {
                  SD->f8.ExploredNodes[i5] = 1;
                  SD->f8.ParentCol1[i5] = (int16_T)CurrentCol;
                  SD->f8.ParentRow2[i5] = (int16_T)CurrentRow;
                  SD->f8.GScore[i5] = dataDim;
                  if ((idx < 1) || (idx > 410)) {
                    emlrtDynamicBoundsCheckR2012b(idx, 1, 410, &g_emlrtBCI,
                                                  &st);
                  }
                  SD->f8.FScore[i5] =
                      dataDim + SD->f8.map[(i4 + 561 * (idx - 1)) - 1];
                  if (openToPushK > NumNeighbors) {
                    emlrtDynamicBoundsCheckR2012b(openToPushK, 1, NumNeighbors,
                                                  &ab_emlrtBCI, &st);
                  }
                  openToPush_data[openToPushK - 1] =
                      astarInternal->MapIndex[i5];
                  openToPush_data[(openToPushK + NumNeighbors) - 1] =
                      astarInternal->MapIndex[ClosedMAT_tmp];
                  openToPush_data[(openToPushK + NumNeighbors * 2) - 1] =
                      SD->f8.FScore[i5];
                  openToPush_data[(openToPushK + NumNeighbors * 3) - 1] =
                      SD->f8.GScore[i5];
                  openToPush_data[(openToPushK + NumNeighbors * 4) - 1] =
                      SD->f8.map[i5];
                  b_st.site = &re_emlrtRSI;
                  if (openToPushK > NumNeighbors) {
                    emlrtDynamicBoundsCheckR2012b(openToPushK, 1, NumNeighbors,
                                                  &y_emlrtBCI, &b_st);
                  }
                  for (i4 = 0; i4 < 5; i4++) {
                    MinScoreNode_data[i4] =
                        openToPush_data[(openToPushK + NumNeighbors * i4) - 1];
                  }
                  priorityqueuecodegen_push(OpenList.PQInternal,
                                            &MinScoreNode_data[0]);
                  openToPushK++;
                } else if (!(dataDim >= SD->f8.GScore[i5])) {
                  SD->f8.ParentCol1[i5] = (int16_T)CurrentCol;
                  SD->f8.ParentRow2[i5] = (int16_T)CurrentRow;
                  SD->f8.GScore[i5] = dataDim;
                  if ((idx < 1) || (idx > 410)) {
                    emlrtDynamicBoundsCheckR2012b(idx, 1, 410, &h_emlrtBCI,
                                                  &st);
                  }
                  SD->f8.FScore[i5] =
                      dataDim + SD->f8.map[(i4 + 561 * (idx - 1)) - 1];
                }
              }
            }
          }
        }
      }
    }
  } while (exitg1 == 0);
  if (CurrentCol != (int32_T)muDoubleScalarFloor(CurrentCol)) {
    emlrtIntegerCheckR2012b(CurrentCol, &o_emlrtDCI, &st);
  }
  if (((int32_T)CurrentCol < 1) || ((int32_T)CurrentCol > 410)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)CurrentCol, 1, 410, &q_emlrtBCI,
                                  &st);
  }
  if (CurrentRow != (int32_T)muDoubleScalarFloor(CurrentRow)) {
    emlrtIntegerCheckR2012b(CurrentRow, &p_emlrtDCI, &st);
  }
  if (((int32_T)CurrentRow < 1) || ((int32_T)CurrentRow > 561)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)CurrentRow, 1, 561, &r_emlrtBCI,
                                  &st);
  }
  astarInternal->PathCost =
      SD->f8
          .GScore[((int32_T)CurrentRow + 561 * ((int32_T)CurrentCol - 1)) - 1];
  memcpy(&astarInternal->GCostMatrix[0], &SD->f8.GScore[0],
         230010U * sizeof(real_T));
  b_st.site = &se_emlrtRSI;
  for (b_i = 0; b_i < 230010; b_i++) {
    SD->f8.x[b_i] = (SD->f8.ExploredNodes[b_i] == 1);
  }
  c_st.site = &of_emlrtRSI;
  d_st.site = &pf_emlrtRSI;
  idx = 0;
  b_i = ii->size[0];
  ii->size[0] = 230010;
  emxEnsureCapacity_int32_T(&d_st, ii, b_i, &v_emlrtRTEI);
  ii_data = ii->data;
  openToPushK = 0;
  exitg2 = false;
  while ((!exitg2) && (openToPushK < 230010)) {
    if (SD->f8.x[openToPushK]) {
      idx++;
      ii_data[idx - 1] = openToPushK + 1;
      if (idx >= 230010) {
        exitg2 = true;
      } else {
        openToPushK++;
      }
    } else {
      openToPushK++;
    }
  }
  if (idx < 1) {
    openToPushK = 0;
  } else {
    openToPushK = idx;
  }
  indexShapeCheck();
  b_i = ii->size[0];
  ii->size[0] = openToPushK;
  emxEnsureCapacity_int32_T(&d_st, ii, b_i, &u_emlrtRTEI);
  ii_data = ii->data;
  b_i = expNodes->size[0];
  expNodes->size[0] = openToPushK;
  emxEnsureCapacity_real_T(&b_st, expNodes, b_i, &w_emlrtRTEI);
  expNodes_data = expNodes->data;
  for (b_i = 0; b_i < openToPushK; b_i++) {
    expNodes_data[b_i] = ii_data[b_i];
  }
  astarInternal->NumNodesExplored = expNodes->size[0];
  if (!(astarInternal->NumNodesExplored <= 230010.0)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &m_emlrtRTEI,
        "nav:navalgs:plannerastargrid:AssertionFailedLessThan",
        "nav:navalgs:plannerastargrid:AssertionFailedLessThan", 5, 4, 16,
        "NumNodesExplored", 6, 230010.0);
  }
  dataDim = astarInternal->NumNodesExplored;
  if (dataDim < 1.0) {
    openToPushK = 0;
  } else {
    if (dataDim != (int32_T)muDoubleScalarFloor(dataDim)) {
      emlrtIntegerCheckR2012b(dataDim, &ib_emlrtDCI, &st);
    }
    if (((int32_T)dataDim < 1) || ((int32_T)dataDim > 230010)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)dataDim, 1, 230010, &x_emlrtBCI,
                                    &st);
    }
    openToPushK = (int32_T)dataDim;
  }
  emlrtSubAssignSizeCheckR2012b(&openToPushK, 1, &expNodes->size[0], 1,
                                &b_emlrtECI, &st);
  for (b_i = 0; b_i < openToPushK; b_i++) {
    astarInternal->NodesExploredIndicesInternal[b_i] = expNodes_data[b_i];
  }
  dataDim = astarInternal->NumNodesExplored;
  if (dataDim < 1.0) {
    b_i = 0;
  } else {
    if (dataDim != (int32_T)muDoubleScalarFloor(dataDim)) {
      emlrtIntegerCheckR2012b(dataDim, &hb_emlrtDCI, &st);
    }
    if (((int32_T)dataDim < 1) || ((int32_T)dataDim > 230010)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)dataDim, 1, 230010, &w_emlrtBCI,
                                    &st);
    }
    b_i = (int32_T)dataDim;
  }
  b_st.site = &te_emlrtRSI;
  dataDim = astarInternal->NumNodesExplored;
  if (dataDim < 1.0) {
    openToPushK = 0;
  } else {
    if (dataDim != (int32_T)muDoubleScalarFloor(dataDim)) {
      emlrtIntegerCheckR2012b(dataDim, &gb_emlrtDCI, &b_st);
    }
    if (((int32_T)dataDim < 1) || ((int32_T)dataDim > 230010)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)dataDim, 1, 230010, &v_emlrtBCI,
                                    &b_st);
    }
    openToPushK = (int32_T)dataDim;
  }
  i1 = expNodes->size[0];
  expNodes->size[0] = openToPushK;
  emxEnsureCapacity_real_T(&b_st, expNodes, i1, &x_emlrtRTEI);
  expNodes_data = expNodes->data;
  for (i1 = 0; i1 < openToPushK; i1++) {
    expNodes_data[i1] = astarInternal->NodesExploredIndicesInternal[i1];
  }
  openToPushK = expNodes->size[0];
  for (i1 = 0; i1 < openToPushK; i1++) {
    if (expNodes_data[i1] != (int32_T)muDoubleScalarFloor(expNodes_data[i1])) {
      emlrtIntegerCheckR2012b(expNodes_data[i1], &f_emlrtDCI, &st);
    }
    i2 = (int32_T)expNodes_data[i1];
    if ((i2 < 1) || (i2 > 230010)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, 230010, &i_emlrtBCI, &st);
    }
  }
  iv[0] = b_i;
  iv[1] = 2;
  b_expNodes[0] = expNodes->size[0];
  b_expNodes[1] = 2;
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &b_expNodes[0], 2, &emlrtECI, &st);
  b_st.site = &ue_emlrtRSI;
  dataDim = astarInternal->NumPathPoints;
  if (!(dataDim < 1.0)) {
    if (dataDim != (int32_T)muDoubleScalarFloor(dataDim)) {
      emlrtIntegerCheckR2012b(dataDim, &fb_emlrtDCI, &b_st);
    }
    if (((int32_T)dataDim < 1) || ((int32_T)dataDim > 230010)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)dataDim, 1, 230010, &u_emlrtBCI,
                                    &b_st);
    }
  }
  b_st.site = &ve_emlrtRSI;
  handle_matlabCodegenDestructor(&b_st, &OpenList);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
  emxFree_int32_T(sp, &ii);
  emxFree_real_T(sp, &expNodes);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void plannerAStarGrid_setInputState(task_1StackData *SD,
                                           plannerAStarGrid *obj)
{
  int32_T i;
  memset(&obj->IdPose[0], 0, 690030U * sizeof(real_T));
  for (i = 0; i < 230010; i++) {
    SD->u1.f5.dv[i] = (real_T)i + 1.0;
  }
  ind2sub(SD->u1.f5.dv, SD->u1.f5.varargout_4, SD->u1.f5.varargout_5,
          SD->u1.f5.varargout_6);
  for (i = 0; i < 230010; i++) {
    SD->u1.f5.dv[i] = SD->u1.f5.varargout_4[i];
    SD->u1.f5.iv[i] = SD->u1.f5.varargout_5[i];
    SD->u1.f5.iv1[i] = SD->u1.f5.varargout_6[i];
  }
  for (i = 0; i < 230010; i++) {
    int32_T i1;
    int32_T i2;
    int32_T i3;
    i1 = (int32_T)SD->u1.f5.dv[i];
    obj->IdPose[i] = i1;
    i2 = SD->u1.f5.iv[i];
    obj->IdPose[i + 230010] = i2;
    i3 = SD->u1.f5.iv1[i];
    obj->IdPose[i + 460020] = i3;
    obj->PoseId[i] = ((real_T)i1 + ((real_T)i2 - 1.0) * 561.0) +
                     ((real_T)i3 - 1.0) * 561.0 * 410.0;
  }
}

plannerAStarGrid *c_plannerAStarGrid_plannerAStar(
    task_1StackData *SD, const emlrtStack *sp, plannerAStarGrid *obj,
    binaryOccupancyMap *varargin_1,
    const real_T c_varargin_3_workspace_speed_li[230010],
    const real_T c_varargin_3_workspace_trafic_i[230010],
    const real_T c_varargin_3_workspace_obstacle[230010])
{
  emlrtStack b_st;
  emlrtStack st;
  plannerAStarGrid *b_obj;
  real_T d;
  int32_T a__2_size[2];
  int32_T i;
  char_T a__2_data[9];
  boolean_T b;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_obj = obj;
  b_obj->isFirstRun = 1.0;
  st.site = &w_emlrtRSI;
  st.site = &x_emlrtRSI;
  b_obj->Map = varargin_1;
  plannerAStarGrid_setInputState(SD, b_obj);
  st.site = &y_emlrtRSI;
  b_st.site = &lb_emlrtRSI;
  b = (b_obj->isFirstRun == 0.0);
  if (b) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &b_emlrtRTEI,
        "nav:navalgs:plannerastargrid:PropertySetInCodeGeneration",
        "nav:navalgs:plannerastargrid:PropertySetInCodeGeneration", 3, 4, 8,
        "GCostFcn");
  }
  b_obj->UseCustomG = 1.0;
  for (i = 0; i < 230010; i++) {
    b_obj->GCostFcn.workspace.speed_limit_cost_map[i] =
        c_varargin_3_workspace_speed_li[i];
  }
  for (i = 0; i < 230010; i++) {
    b_obj->GCostFcn.workspace.trafic_intensity_map[i] =
        c_varargin_3_workspace_trafic_i[i];
  }
  for (i = 0; i < 230010; i++) {
    b_obj->GCostFcn.workspace.obstacles_map[i] =
        c_varargin_3_workspace_obstacle[i];
  }
  st.site = &ab_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  b = (b_obj->isFirstRun == 0.0);
  if (b) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &b_emlrtRTEI,
        "nav:navalgs:plannerastargrid:PropertySetInCodeGeneration",
        "nav:navalgs:plannerastargrid:PropertySetInCodeGeneration", 3, 4, 5,
        "GCost");
  }
  b_obj->UseCustomG = 0.0;
  b_st.site = &pb_emlrtRSI;
  d = c_validateAStarBuiltinCostFunct(&b_st, a__2_data, a__2_size);
  b_obj->GCost = d;
  st.site = &bb_emlrtRSI;
  b_obj->UseCustomG = 1.0;
  st.site = &cb_emlrtRSI;
  b_st.site = &qb_emlrtRSI;
  b = (b_obj->isFirstRun == 0.0);
  if (b) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &b_emlrtRTEI,
        "nav:navalgs:plannerastargrid:PropertySetInCodeGeneration",
        "nav:navalgs:plannerastargrid:PropertySetInCodeGeneration", 3, 4, 8,
        "HCostFcn");
  }
  b_obj->UseCustomH = 1.0;
  st.site = &db_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  b = (b_obj->isFirstRun == 0.0);
  if (b) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &b_emlrtRTEI,
        "nav:navalgs:plannerastargrid:PropertySetInCodeGeneration",
        "nav:navalgs:plannerastargrid:PropertySetInCodeGeneration", 3, 4, 5,
        "HCost");
  }
  b_obj->UseCustomH = 0.0;
  b_st.site = &ub_emlrtRSI;
  d = c_validateAStarBuiltinCostFunct(&b_st, a__2_data, a__2_size);
  b_obj->HCost = d;
  b_obj->UseCustomH = 1.0;
  st.site = &eb_emlrtRSI;
  b_obj->OccupiedThreshold = 0.65;
  st.site = &fb_emlrtRSI;
  b_obj->TieBreaker = 0.0;
  st.site = &gb_emlrtRSI;
  b_obj->DiagonalSearch = 1.0;
  b_obj->isFirstRun = 0.0;
  return b_obj;
}

real_T plannerAStarGrid_plan(task_1StackData *SD, const emlrtStack *sp,
                             plannerAStarGrid *obj, const real_T start[2],
                             const real_T goal[2], emxArray_real_T *path,
                             real_T *debugInfo_NumNodesExplored,
                             real_T debugInfo_GCostMatrix[230010])
{
  binaryOccupancyMap *map;
  emlrtStack b_st;
  emlrtStack st;
  real_T goalgrid[2];
  real_T startgrid[2];
  real_T debugInfo_PathCost;
  real_T x;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &vb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &ic_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!muDoubleScalarIsNaN(start[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &e_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedNonNaN",
        "MATLAB:plannerAStarGrid:expectedNonNaN", 3, 4, 5, "Start");
  }
  b_st.site = &ic_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if ((!muDoubleScalarIsInf(start[k])) && (!muDoubleScalarIsNaN(start[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &f_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:plannerAStarGrid:expectedFinite", 3, 4, 5, "Start");
  }
  st.site = &wb_emlrtRSI;
  b_st.site = &ic_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!muDoubleScalarIsNaN(goal[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &e_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedNonNaN",
        "MATLAB:plannerAStarGrid:expectedNonNaN", 3, 4, 4, "Goal");
  }
  b_st.site = &ic_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if ((!muDoubleScalarIsInf(goal[k])) && (!muDoubleScalarIsNaN(goal[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &f_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:plannerAStarGrid:expectedFinite", 3, 4, 4, "Goal");
  }
  obj->IsGrid = 0.0;
  obj->IsGrid = 1.0;
  startgrid[0] = muDoubleScalarFloor(start[0]);
  startgrid[1] = muDoubleScalarFloor(start[1]);
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!(start[k] == startgrid[k])) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        sp, &c_emlrtRTEI, "nav:navalgs:plannerastargrid:ValidateGridInput",
        "nav:navalgs:plannerastargrid:ValidateGridInput", 3, 4, 5, "Start");
  }
  startgrid[0] = muDoubleScalarFloor(goal[0]);
  startgrid[1] = muDoubleScalarFloor(goal[1]);
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!(goal[k] == startgrid[k])) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        sp, &d_emlrtRTEI, "nav:navalgs:plannerastargrid:ValidateGridInput",
        "nav:navalgs:plannerastargrid:ValidateGridInput", 3, 4, 4, "Goal");
  }
  st.site = &xb_emlrtRSI;
  x = obj->IsGrid;
  if (muDoubleScalarIsNaN(x)) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI, "MATLAB:nologicalnan",
                                  "MATLAB:nologicalnan", 0);
  }
  if (!(obj->IsGrid != 0.0)) {
    st.site = &yb_emlrtRSI;
    map = obj->Map;
    st.site = &yb_emlrtRSI;
    MapInterface_world2grid(map, start, startgrid);
    st.site = &ac_emlrtRSI;
    map = obj->Map;
    st.site = &ac_emlrtRSI;
    MapInterface_world2grid(map, goal, goalgrid);
  } else {
    startgrid[0] = start[0];
    goalgrid[0] = goal[0];
    startgrid[1] = start[1];
    goalgrid[1] = goal[1];
  }
  st.site = &bc_emlrtRSI;
  map = obj->Map;
  st.site = &cc_emlrtRSI;
  c_plannerAStarGrid_validateStar(SD, &st, obj, map, startgrid, goalgrid);
  obj->StartInGrid[0] = startgrid[0];
  obj->StartInGrid[1] = startgrid[1];
  obj->GoalInGrid[0] = goalgrid[0];
  obj->GoalInGrid[1] = goalgrid[1];
  st.site = &hc_emlrtRSI;
  c_plannerAStarGrid_initializeIn(SD, &st, obj, &SD->f9.astarInternal);
  st.site = &dc_emlrtRSI;
  plannerAStarGrid_runPlan(SD, &st, &SD->f9.astarInternal, obj->StartInGrid,
                           obj->GoalInGrid);
  st.site = &ec_emlrtRSI;
  c_plannerAStarGrid_getEssential(&st, obj, &SD->f9.astarInternal);
  st.site = &fc_emlrtRSI;
  plannerAStarGrid_getPathOutput(SD, &st, obj, path);
  st.site = &gc_emlrtRSI;
  plannerAStarGrid_getGCostMatrix(&SD->f9.astarInternal, debugInfo_GCostMatrix);
  debugInfo_PathCost = obj->PathCost;
  *debugInfo_NumNodesExplored = obj->NumNodesExplored;
  return debugInfo_PathCost;
}

/* End of code generation (plannerAStarGrid.c) */
