//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: _coder_task_1_mex.h
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 02-Dec-2023 04:19:57
//

#ifndef _CODER_TASK_1_MEX_H
#define _CODER_TASK_1_MEX_H

// Include Files
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"

// Function Declarations
MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS();

void unsafe_task_1_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                               const mxArray *prhs[3]);

#endif
//
// File trailer for _coder_task_1_mex.h
//
// [EOF]
//
