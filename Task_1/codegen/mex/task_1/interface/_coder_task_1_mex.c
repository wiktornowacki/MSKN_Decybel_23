/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_task_1_mex.c
 *
 * Code generation for function '_coder_task_1_mex'
 *
 */

/* Include files */
#include "_coder_task_1_mex.h"
#include "_coder_task_1_api.h"
#include "rt_nonfinite.h"
#include "task_1_data.h"
#include "task_1_initialize.h"
#include "task_1_terminate.h"
#include "task_1_types.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  task_1StackData *task_1StackDataGlobal = NULL;
  task_1StackDataGlobal = (task_1StackData *)emlrtMxCalloc(
      (size_t)1, (size_t)1U * sizeof(task_1StackData));
  mexAtExit(&task_1_atexit);
  /* Module initialization. */
  task_1_initialize();
  /* Dispatch the entry-point. */
  task_1_mexFunction(task_1StackDataGlobal, nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  task_1_terminate();
  emlrtMxFree(task_1StackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "windows-1250", true);
  return emlrtRootTLSGlobal;
}

void task_1_mexFunction(task_1StackData *SD, int32_T nlhs, mxArray *plhs[1],
                        int32_T nrhs, const mxArray *prhs[3])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        6, "task_1");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 6,
                        "task_1");
  }
  /* Call the function. */
  task_1_api(SD, prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

/* End of code generation (_coder_task_1_mex.c) */
