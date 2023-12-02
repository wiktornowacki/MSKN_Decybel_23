//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: ind2sub.cpp
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 02-Dec-2023 04:19:57
//

// Include Files
#include "ind2sub.h"
#include "rt_nonfinite.h"

// Function Definitions
//
// Arguments    : const double ndx[230010]
//                int varargout_1[230010]
//                int varargout_2[230010]
//                int varargout_3[230010]
// Return Type  : void
//
namespace coder {
namespace internal {
void ind2sub(const double ndx[230010], int varargout_1[230010],
             int varargout_2[230010], int varargout_3[230010])
{
  for (int i{0}; i < 230010; i++) {
    int i1;
    int i2;
    i1 = static_cast<int>(ndx[i]);
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

//
// Arguments    : const double ndx[230010]
//                int varargout_1[230010]
//                int varargout_2[230010]
// Return Type  : void
//
void ind2sub(const double ndx[230010], int varargout_1[230010],
             int varargout_2[230010])
{
  for (int i{0}; i < 230010; i++) {
    int i1;
    int i2;
    i1 = static_cast<int>(ndx[i]);
    i2 = (i1 - 1) / 561;
    varargout_2[i] = i2 + 1;
    varargout_1[i] = i1 - i2 * 561;
  }
}

} // namespace internal
} // namespace coder

//
// File trailer for ind2sub.cpp
//
// [EOF]
//
