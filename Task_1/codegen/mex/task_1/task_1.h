/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * task_1.h
 *
 * Code generation for function 'task_1'
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
void task_1(task_1StackData *SD, const emlrtStack *sp, const real_T map[920040],
            const real_T startPoint[2], const real_T stopPoint[2],
            emxArray_real_T *path);

/* End of code generation (task_1.h) */
