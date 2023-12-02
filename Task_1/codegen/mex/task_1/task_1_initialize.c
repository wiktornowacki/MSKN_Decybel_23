/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * task_1_initialize.c
 *
 * Code generation for function 'task_1_initialize'
 *
 */

/* Include files */
#include "task_1_initialize.h"
#include "_coder_task_1_mex.h"
#include "rt_nonfinite.h"
#include "task_1_data.h"

/* Function Declarations */
static void task_1_once(void);

/* Function Definitions */
static void task_1_once(void)
{
  int32_T postfix_exprs_2_0[3] = {0, 1, -3};
  int32_T cond_ends_2_0[2] = {495, 514};
  int32_T cond_starts_2_0[2] = {480, 499};
  mex_InitInfAndNan();
  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);
  /* Initialize Coverage Information */
  covrtScriptInit(
      &emlrtCoverageInstance,
      "C:\\Users\\rafal\\Documents\\MATLAB\\task1_max_points\\task_1.m", 0U, 3U,
      3U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);
  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0U, 0U, "task_1", 0, -1, 1263);
  covrtFcnInit(&emlrtCoverageInstance, 0U, 1U, "task_1_anonFcn1", 940, -1,
               1045);
  covrtFcnInit(&emlrtCoverageInstance, 0U, 2U, "task_1_anonFcn2", 1057, -1,
               1106);
  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 0U, 453, -1, 1170);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 1U, 940, -1, 1045);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 2U, 1057, -1, 1106);
  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);
  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\rafal\\Documents\\MATLAB\\task1_max_"
                  "points\\Custom_Hcost_function.m",
                  1U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);
  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 1U, 0U, "Custom_Hcost_function", 0, -1,
               157);
  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 1U, 0U, 144, -1, 153);
  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 1U);
  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);
  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\rafal\\Documents\\MATLAB\\task1_max_"
                  "points\\Custom_Gcost_function.m",
                  2U, 1U, 4U, 1U, 0U, 0U, 0U, 0U, 0U, 2U, 1U);
  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 2U, 0U, "Custom_Gcost_function", 0, -1,
               772);
  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 3U, 736, -1, 768);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 2U, 635, -1, 731);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 1U, 519, -1, 625);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 0U, 341, -1, 476);
  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 2U, 0U, 477, 514, 626, 735);
  /* Initialize MCDC Information */
  covrtMcdcInit(&emlrtCoverageInstance, 2U, 0U, 480, 514, 2, 0, cond_starts_2_0,
                cond_ends_2_0, 3, postfix_exprs_2_0);
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 2U);
}

void task_1_initialize(void)
{
  static const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2022a(&st, "EMLRT:runTime:MexFunctionNeedsLicense",
                          "navigation_toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    task_1_once();
  }
}

/* End of code generation (task_1_initialize.c) */
