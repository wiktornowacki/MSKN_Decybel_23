/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * task_1_internal_types.h
 *
 * Code generation for function 'task_1'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "task_1_types.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef typedef_nav_algs_internal_PriorityQueue
#define typedef_nav_algs_internal_PriorityQueue
typedef struct {
  boolean_T matlabCodegenIsDeleted;
  void *PQInternal;
} nav_algs_internal_PriorityQueue;
#endif /* typedef_nav_algs_internal_PriorityQueue */

#ifndef typedef_rtDesignRangeCheckInfo
#define typedef_rtDesignRangeCheckInfo
typedef struct {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
} rtDesignRangeCheckInfo;
#endif /* typedef_rtDesignRangeCheckInfo */

#ifndef typedef_rtRunTimeErrorInfo
#define typedef_rtRunTimeErrorInfo
typedef struct {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
} rtRunTimeErrorInfo;
#endif /* typedef_rtRunTimeErrorInfo */

/* End of code generation (task_1_internal_types.h) */
