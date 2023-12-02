/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * MapInterface.h
 *
 * Code generation for function 'MapInterface'
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
void MapInterface_grid2worldImpl(const emlrtStack *sp,
                                 const binaryOccupancyMap *obj,
                                 const emxArray_real_T *gridInd,
                                 emxArray_real_T *worldXY);

void MapInterface_world2grid(const binaryOccupancyMap *obj, const real_T pos[2],
                             real_T idx[2]);

/* End of code generation (MapInterface.h) */
