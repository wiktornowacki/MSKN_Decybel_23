//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: binaryOccupancyMap.h
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 02-Dec-2023 04:19:57
//

#ifndef BINARYOCCUPANCYMAP_H
#define BINARYOCCUPANCYMAP_H

// Include Files
#include "CircularBuffer.h"
#include "CircularBufferIndex.h"
#include "SharedMapProperties.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include <cstddef>
#include <cstdlib>

// Type Definitions
namespace coder {
class binaryOccupancyMap {
public:
  void world2grid(const double pos[2], double idx[2]) const;
  void occupancyMatrix(boolean_T mat[230010]);
  void grid2world(const array<double, 2U> &idx, array<double, 2U> &pos) const;
  void grid2localImpl(const array<double, 2U> &gridInd,
                      array<double, 2U> &localXY) const;
  matlabshared::autonomous::internal::SharedMapProperties SharedProperties;
  matlabshared::autonomous::internal::CircularBufferIndex Index;
  matlabshared::autonomous::internal::CircularBuffer Buffer;
  boolean_T DefaultValueInternal;
  boolean_T HasParent;
};

} // namespace coder

#endif
//
// File trailer for binaryOccupancyMap.h
//
// [EOF]
//
