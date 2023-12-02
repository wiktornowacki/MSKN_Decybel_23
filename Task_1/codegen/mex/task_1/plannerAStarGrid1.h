/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * plannerAStarGrid1.h
 *
 * Code generation for function 'plannerAStarGrid1'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "task_1_types.h"
#include "covrt.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void c_plannerAStarGrid_getHeuristic(task_1StackData *SD, const emlrtStack *sp,
                                     const c_nav_algs_internal_plannerASta *obj,
                                     const real_T goalIn[2], real_T Hn[230010]);

void c_plannerAStarGrid_reconstructP(task_1StackData *SD, const emlrtStack *sp,
                                     c_nav_algs_internal_plannerASta *obj,
                                     real_T CurrentRow, real_T CurrentCol,
                                     const real_T startIn[2]);

c_nav_algs_internal_plannerASta *d_plannerAStarGrid_plannerAStar(
    task_1StackData *SD, c_nav_algs_internal_plannerASta *obj,
    const real_T map[230010], real_T obstacleThreshold,
    const real_T c_varargin_2_workspace_speed_li[230010],
    const real_T c_varargin_2_workspace_trafic_i[230010],
    const real_T c_varargin_2_workspace_obstacle[230010]);

real_T plannerAStarGrid_gcostValue(const emlrtStack *sp,
                                   const c_nav_algs_internal_plannerASta *obj,
                                   real_T CurrentRow, real_T CurrentCol,
                                   real_T i, real_T j);

/* End of code generation (plannerAStarGrid1.h) */
