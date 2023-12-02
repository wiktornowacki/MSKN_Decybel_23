//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: plannerAStarGrid.h
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 02-Dec-2023 04:19:57
//

#ifndef PLANNERASTARGRID_H
#define PLANNERASTARGRID_H

// Include Files
#include "anonymous_function.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include <cstddef>
#include <cstdlib>

// Type Declarations
namespace coder {
class binaryOccupancyMap;

namespace nav {
namespace algs {
namespace internal {
class b_plannerAStarGrid;

}
} // namespace algs
} // namespace nav
} // namespace coder

// Type Definitions
namespace coder {
class plannerAStarGrid {
public:
  plannerAStarGrid *init(binaryOccupancyMap &varargin_1,
                         const anonymous_function &varargin_3);
  void set_Map(binaryOccupancyMap &input);
  double plan(const double start[2], const double goal[2],
              array<double, 2U> &path, double &debugInfo_NumNodesExplored,
              double debugInfo_GCostMatrix[230010]);
  nav::algs::internal::b_plannerAStarGrid *
  initializeInternalPlanner(nav::algs::internal::b_plannerAStarGrid &iobj_0);
  void getEssentialOutput(
      const nav::algs::internal::b_plannerAStarGrid &astarInternal);
  void getPathOutput(array<double, 2U> &pathOut);
  static void
  getGCostMatrix(const nav::algs::internal::b_plannerAStarGrid &astarInternal,
                 double GCostMatrix[230010]);

private:
  double getNodeCostOMDefault(double currentNode);

public:
  binaryOccupancyMap *Map;
  double TieBreaker;
  double DiagonalSearch;
  double GCost;
  double HCost;
  anonymous_function GCostFcn;
  double OccupiedThreshold;
  double IsGrid;
  double StartInGrid[2];
  double GoalInGrid[2];
  double Path[230010];
  double PathXY[460020];
  double PathInGrid[460020];
  double NumPathPoints;
  double PathCost;
  double NumNodesExplored;
  double IdPose[690030];
  double PoseId[230010];
  double UseCustomG;
  double UseCustomH;
  double isFirstRun;
};

} // namespace coder

#endif
//
// File trailer for plannerAStarGrid.h
//
// [EOF]
//
