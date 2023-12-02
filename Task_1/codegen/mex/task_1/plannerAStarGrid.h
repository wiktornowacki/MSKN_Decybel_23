/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * plannerAStarGrid.h
 *
 * Code generation for function 'plannerAStarGrid'
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
plannerAStarGrid *c_plannerAStarGrid_plannerAStar(
    task_1StackData *SD, const emlrtStack *sp, plannerAStarGrid *obj,
    binaryOccupancyMap *varargin_1,
    const real_T c_varargin_3_workspace_speed_li[230010],
    const real_T c_varargin_3_workspace_trafic_i[230010],
    const real_T c_varargin_3_workspace_obstacle[230010]);

real_T plannerAStarGrid_plan(task_1StackData *SD, const emlrtStack *sp,
                             plannerAStarGrid *obj, const real_T start[2],
                             const real_T goal[2], emxArray_real_T *path,
                             real_T *debugInfo_NumNodesExplored,
                             real_T debugInfo_GCostMatrix[230010]);

/* End of code generation (plannerAStarGrid.h) */
