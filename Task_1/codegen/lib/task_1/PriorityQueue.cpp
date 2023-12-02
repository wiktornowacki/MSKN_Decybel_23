//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: PriorityQueue.cpp
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 02-Dec-2023 04:19:57
//

// Include Files
#include "PriorityQueue.h"
#include "rt_nonfinite.h"
#include "priorityqueue_api.hpp"

// Function Definitions
//
// Arguments    : void
// Return Type  : void
//
namespace coder {
namespace nav {
namespace algs {
namespace internal {
void PriorityQueue::matlabCodegenDestructor()
{
  if (!matlabCodegenIsDeleted) {
    matlabCodegenIsDeleted = true;
    priorityqueuecodegen_destructPQ(PQInternal);
  }
}

//
// Arguments    : void
// Return Type  : PriorityQueue
//
PriorityQueue::PriorityQueue()
{
  matlabCodegenIsDeleted = true;
}

//
// Arguments    : void
// Return Type  : void
//
PriorityQueue::~PriorityQueue()
{
  matlabCodegenDestructor();
}

} // namespace internal
} // namespace algs
} // namespace nav
} // namespace coder

//
// File trailer for PriorityQueue.cpp
//
// [EOF]
//
