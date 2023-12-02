//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: _coder_task_1_api.h
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 02-Dec-2023 04:19:57
//

#ifndef _CODER_TASK_1_API_H
#define _CODER_TASK_1_API_H

// Include Files
#include "coder_array_mex.h"
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
void task_1(real_T map[920040], real_T startPoint[2], real_T stopPoint[2],
            coder::array<real_T, 2U> *path);

void task_1_api(const mxArray *const prhs[3], const mxArray **plhs);

void task_1_atexit();

void task_1_initialize();

void task_1_terminate();

void task_1_xil_shutdown();

void task_1_xil_terminate();

#endif
//
// File trailer for _coder_task_1_api.h
//
// [EOF]
//
