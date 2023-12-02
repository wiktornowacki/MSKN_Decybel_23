/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ind2sub.c
 *
 * Code generation for function 'ind2sub'
 *
 */

/* Include files */
#include "ind2sub.h"
#include "rt_nonfinite.h"
#include "task_1_data.h"

/* Function Definitions */
void b_ind2sub(const real_T ndx[230010], int32_T varargout_1[230010],
               int32_T varargout_2[230010])
{
  int32_T i;
  for (i = 0; i < 230010; i++) {
    int32_T i1;
    int32_T i2;
    i1 = (int32_T)ndx[i];
    i2 = (i1 - 1) / 561;
    varargout_2[i] = i2 + 1;
    varargout_1[i] = i1 - i2 * 561;
  }
}

void ind2sub(const real_T ndx[230010], int32_T varargout_1[230010],
             int32_T varargout_2[230010], int32_T varargout_3[230010])
{
  int32_T i;
  for (i = 0; i < 230010; i++) {
    int32_T i1;
    int32_T i2;
    i1 = (int32_T)ndx[i];
    i2 = (i1 - 1) / 230010;
    varargout_3[i] = i2 + 1;
    i1 = (i1 - i2 * 230010) - 1;
    i2 = i1 / 561;
    varargout_2[i] = i2 + 1;
    i1 -= i2 * 561;
    i1++;
    varargout_1[i] = i1;
  }
}

/* End of code generation (ind2sub.c) */
