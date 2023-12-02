//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: validateAStarBuiltinCostFunction.cpp
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 02-Dec-2023 04:19:57
//

// Include Files
#include "validateAStarBuiltinCostFunction.h"
#include "rt_nonfinite.h"

// Function Definitions
//
// Arguments    : char strVal_data[]
//                int strVal_size[2]
// Return Type  : double
//
namespace coder {
namespace nav {
namespace internal {
namespace validation {
double validateAStarBuiltinCostFunction(char strVal_data[], int strVal_size[2])
{
  static const char a[9]{'E', 'u', 'c', 'l', 'i', 'd', 'e', 'a', 'n'};
  static const char cv[9]{'E', 'u', 'c', 'l', 'i', 'd', 'e', 'a', 'n'};
  static const char cv1[9]{'M', 'a', 'n', 'h', 'a', 't', 't', 'a', 'n'};
  static const char cv2[9]{'C', 'h', 'e', 'b', 'y', 's', 'h', 'e', 'v'};
  int b_idx;
  int exitg1;
  int ii;
  signed char ii_data[4];
  boolean_T x[4];
  boolean_T exitg2;
  strVal_size[0] = 1;
  strVal_size[1] = 9;
  for (b_idx = 0; b_idx < 9; b_idx++) {
    strVal_data[b_idx] = a[b_idx];
  }
  x[0] = false;
  b_idx = 0;
  do {
    exitg1 = 0;
    if (b_idx < 9) {
      if (cv[b_idx] != strVal_data[b_idx]) {
        exitg1 = 1;
      } else {
        b_idx++;
      }
    } else {
      x[0] = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  x[1] = false;
  b_idx = 0;
  do {
    exitg1 = 0;
    if (b_idx < 9) {
      if (cv1[b_idx] != strVal_data[b_idx]) {
        exitg1 = 1;
      } else {
        b_idx++;
      }
    } else {
      x[1] = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  x[2] = false;
  b_idx = 0;
  do {
    exitg1 = 0;
    if (b_idx < 9) {
      if (cv2[b_idx] != strVal_data[b_idx]) {
        exitg1 = 1;
      } else {
        b_idx++;
      }
    } else {
      x[2] = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  x[3] = false;
  b_idx = 0;
  ii = 0;
  exitg2 = false;
  while ((!exitg2) && (ii < 4)) {
    if (x[ii]) {
      b_idx++;
      ii_data[b_idx - 1] = static_cast<signed char>(ii + 1);
      if (b_idx >= 4) {
        exitg2 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  return ii_data[0];
}

} // namespace validation
} // namespace internal
} // namespace nav
} // namespace coder

//
// File trailer for validateAStarBuiltinCostFunction.cpp
//
// [EOF]
//
