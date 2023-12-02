/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * handle.c
 *
 * Code generation for function 'handle'
 *
 */

/* Include files */
#include "handle.h"
#include "rt_nonfinite.h"
#include "task_1_data.h"
#include "task_1_internal_types.h"
#include "priorityqueue_api.hpp"

/* Function Definitions */
void handle_matlabCodegenDestructor(const emlrtStack *sp,
                                    nav_algs_internal_PriorityQueue *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    priorityqueuecodegen_destructPQ(obj->PQInternal);
  }
}

/* End of code generation (handle.c) */
