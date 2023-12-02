//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: CircularBuffer.h
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 02-Dec-2023 04:19:57
//

#ifndef CIRCULARBUFFER_H
#define CIRCULARBUFFER_H

// Include Files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Type Declarations
namespace coder {
namespace matlabshared {
namespace autonomous {
namespace internal {
class CircularBufferIndex;

}
} // namespace autonomous
} // namespace matlabshared
} // namespace coder

// Type Definitions
namespace coder {
namespace matlabshared {
namespace autonomous {
namespace internal {
class CircularBuffer {
public:
  CircularBufferIndex *Index;
  boolean_T Buffer[230010];
};

} // namespace internal
} // namespace autonomous
} // namespace matlabshared
} // namespace coder

#endif
//
// File trailer for CircularBuffer.h
//
// [EOF]
//
