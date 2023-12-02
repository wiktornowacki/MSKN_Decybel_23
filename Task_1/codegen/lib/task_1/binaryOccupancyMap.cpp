//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: binaryOccupancyMap.cpp
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 02-Dec-2023 04:19:57
//

// Include Files
#include "binaryOccupancyMap.h"
#include "CircularBuffer.h"
#include "CircularBufferIndex.h"
#include "SharedMapProperties.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <algorithm>
#include <cmath>

// Function Declarations
static int div_s32(int numerator, int denominator);

// Function Definitions
//
// Arguments    : const array<double, 2U> &gridInd
//                array<double, 2U> &localXY
// Return Type  : void
//
namespace coder {
void binaryOccupancyMap::grid2localImpl(const array<double, 2U> &gridInd,
                                        array<double, 2U> &localXY) const
{
  double xlimit_idx_0;
  double ylimit_idx_0;
  int loop_ub;
  xlimit_idx_0 = SharedProperties.GridOriginInLocal[0];
  ylimit_idx_0 = SharedProperties.GridOriginInLocal[1];
  localXY.set_size(gridInd.size(0), 2);
  loop_ub = gridInd.size(0);
  for (int i{0}; i < loop_ub; i++) {
    localXY[i] = (xlimit_idx_0 + (gridInd[i + gridInd.size(0)] - 1.0)) + 0.5;
    localXY[i + localXY.size(0)] = (ylimit_idx_0 + (561.0 - gridInd[i])) + 0.5;
  }
}

//
// Arguments    : int numerator
//                int denominator
// Return Type  : int
//
} // namespace coder
static int div_s32(int numerator, int denominator)
{
  int quotient;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }
  } else {
    unsigned int tempAbsQuotient;
    unsigned int u;
    if (numerator < 0) {
      tempAbsQuotient = ~static_cast<unsigned int>(numerator) + 1U;
    } else {
      tempAbsQuotient = static_cast<unsigned int>(numerator);
    }
    if (denominator < 0) {
      u = ~static_cast<unsigned int>(denominator) + 1U;
    } else {
      u = static_cast<unsigned int>(denominator);
    }
    tempAbsQuotient /= u;
    if ((numerator < 0) != (denominator < 0)) {
      quotient = -static_cast<int>(tempAbsQuotient);
    } else {
      quotient = static_cast<int>(tempAbsQuotient);
    }
  }
  return quotient;
}

//
// Arguments    : const array<double, 2U> &idx
//                array<double, 2U> &pos
// Return Type  : void
//
namespace coder {
void binaryOccupancyMap::grid2world(const array<double, 2U> &idx,
                                    array<double, 2U> &pos) const
{
  array<double, 2U> b_pos;
  int loop_ub;
  grid2localImpl(idx, pos);
  b_pos.set_size(pos.size(0), 2);
  loop_ub = pos.size(0);
  for (int i{0}; i < 2; i++) {
    for (int i1{0}; i1 < loop_ub; i1++) {
      b_pos[i1 + b_pos.size(0) * i] =
          pos[i1 + pos.size(0) * i] + SharedProperties.LocalOriginInWorld[i];
    }
  }
  pos.set_size(b_pos.size(0), 2);
  loop_ub = b_pos.size(0) << 1;
  for (int i{0}; i < loop_ub; i++) {
    pos[i] = b_pos[i];
  }
}

//
// Arguments    : boolean_T mat[230010]
// Return Type  : void
//
void binaryOccupancyMap::occupancyMatrix(boolean_T mat[230010])
{
  int k;
  boolean_T x[2];
  boolean_T exitg1;
  boolean_T y;
  x[0] = (Index.Head[0] == 1.0);
  x[1] = (Index.Head[1] == 1.0);
  y = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!x[k]) {
      y = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    std::copy(&Buffer.Buffer[0], &Buffer.Buffer[230010], &mat[0]);
  } else {
    int stride;
    boolean_T buffer[280];
    std::copy(&Buffer.Buffer[0], &Buffer.Buffer[230010], &mat[0]);
    stride = 1;
    for (k = 0; k < 2; k++) {
      double d;
      int i;
      int i1;
      int npages;
      int ns;
      int pagesize;
      int u0;
      d = -(Index.Head[k] - 1.0);
      if (d < 0.0) {
        u0 = -static_cast<int>(d);
        y = false;
      } else {
        u0 = static_cast<int>(d);
        y = true;
      }
      i = -151 * k + 561;
      if (u0 > i) {
        u0 -= i * div_s32(u0, i);
      }
      if (u0 > (i >> 1)) {
        u0 = (-151 * k - u0) + 561;
        y = !y;
      }
      x[k] = y;
      i1 = -151 * k + 560;
      ns = u0 - 1;
      pagesize = stride * i;
      npages = -409 * k + 409;
      if (u0 > 0) {
        for (int b_i{0}; b_i <= npages; b_i++) {
          int pageroot;
          pageroot = b_i * pagesize;
          for (int j{0}; j < stride; j++) {
            int b_i1;
            b_i1 = pageroot + j;
            if (x[k]) {
              int i2;
              for (int b_k{0}; b_k <= ns; b_k++) {
                buffer[b_k] = mat[b_i1 + (((b_k + i1) - u0) + 1) * stride];
              }
              i2 = u0 + 1;
              for (int b_k{i}; b_k >= i2; b_k--) {
                mat[b_i1 + (b_k - 1) * stride] =
                    mat[b_i1 + ((b_k - u0) - 1) * stride];
              }
              for (int b_k{0}; b_k <= ns; b_k++) {
                mat[b_i1 + b_k * stride] = buffer[b_k];
              }
            } else {
              int i2;
              for (int b_k{0}; b_k <= ns; b_k++) {
                buffer[b_k] = mat[b_i1 + b_k * stride];
              }
              i2 = (i1 - u0) + 1;
              for (int b_k{0}; b_k < i2; b_k++) {
                mat[b_i1 + b_k * stride] = mat[b_i1 + (b_k + u0) * stride];
              }
              for (int b_k{0}; b_k <= ns; b_k++) {
                mat[b_i1 + (((b_k + i1) - u0) + 1) * stride] = buffer[b_k];
              }
            }
          }
        }
      }
      stride = pagesize;
    }
    if (!HasParent) {
      std::copy(&mat[0], &mat[230010], &Buffer.Buffer[0]);
      Index.Head[0] = 1.0;
      Index.Head[1] = 1.0;
    }
  }
}

//
// Arguments    : const double pos[2]
//                double idx[2]
// Return Type  : void
//
void binaryOccupancyMap::world2grid(const double pos[2], double idx[2]) const
{
  double a[4];
  double localXY[2];
  double gridXY_idx_0;
  double gridXY_idx_1;
  double xlimit_idx_0;
  double ylimit_idx_0;
  int b_idx;
  int exponent;
  int k;
  boolean_T exitg1;
  boolean_T y;
  xlimit_idx_0 = SharedProperties.GridOriginInLocal[0];
  ylimit_idx_0 = SharedProperties.GridOriginInLocal[1];
  gridXY_idx_0 =
      -ylimit_idx_0 + (pos[1] - SharedProperties.LocalOriginInWorld[1]);
  gridXY_idx_1 =
      -xlimit_idx_0 + (pos[0] - SharedProperties.LocalOriginInWorld[0]);
  idx[0] = std::ceil(gridXY_idx_0);
  idx[1] = std::ceil(gridXY_idx_1);
  a[0] = std::abs(xlimit_idx_0);
  a[1] = std::abs(SharedProperties.GridOriginInLocal[0] + 410.0);
  a[2] = std::abs(ylimit_idx_0);
  a[3] = std::abs(SharedProperties.GridOriginInLocal[1] + 561.0);
  if (!std::isnan(a[0])) {
    b_idx = 1;
  } else {
    b_idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (!std::isnan(a[k - 1])) {
        b_idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (b_idx == 0) {
    ylimit_idx_0 = a[0];
  } else {
    ylimit_idx_0 = a[b_idx - 1];
    b_idx++;
    for (k = b_idx; k < 5; k++) {
      xlimit_idx_0 = a[k - 1];
      if (ylimit_idx_0 < xlimit_idx_0) {
        ylimit_idx_0 = xlimit_idx_0;
      }
    }
  }
  localXY[0] = std::abs(gridXY_idx_0);
  localXY[1] = std::abs(gridXY_idx_1);
  if (std::isinf(ylimit_idx_0) || std::isnan(ylimit_idx_0)) {
    xlimit_idx_0 = rtNaN;
  } else if (ylimit_idx_0 < 4.4501477170144028E-308) {
    xlimit_idx_0 = 4.94065645841247E-324;
  } else {
    std::frexp(ylimit_idx_0, &exponent);
    xlimit_idx_0 = std::ldexp(1.0, exponent - 53);
  }
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (localXY[k] < xlimit_idx_0 * 2.0) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (localXY[0] < xlimit_idx_0 * 2.0) {
      idx[0] = 1.0;
    }
    if (localXY[1] < xlimit_idx_0 * 2.0) {
      idx[1] = 1.0;
    }
  }
  idx[0] = 562.0 - idx[0];
}

} // namespace coder

//
// File trailer for binaryOccupancyMap.cpp
//
// [EOF]
//
