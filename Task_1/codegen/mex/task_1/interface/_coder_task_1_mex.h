/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_task_1_mex.h
 *
 * Code generation for function '_coder_task_1_mex'
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
MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS(void);

void task_1_mexFunction(task_1StackData *SD, int32_T nlhs, mxArray *plhs[1],
                        int32_T nrhs, const mxArray *prhs[3]);

/* End of code generation (_coder_task_1_mex.h) */
