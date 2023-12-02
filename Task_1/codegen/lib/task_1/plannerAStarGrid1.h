//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: plannerAStarGrid1.h
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 02-Dec-2023 04:19:57
//

#ifndef PLANNERASTARGRID1_H
#define PLANNERASTARGRID1_H

// Include Files
#include "anonymous_function.h"
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Type Definitions
namespace coder {
namespace nav {
namespace algs {
namespace internal {
class b_plannerAStarGrid {
public:
  static void runPlan(b_plannerAStarGrid &astarInternal, const double start[2],
                      const double goal[2]);
  static void Chebyshev(const double pose1[460020], const double pose2[460020],
                        double dist[230010]);
  void reconstructPath(double CurrentRow, double CurrentCol,
                       const double startIn[2]);
  b_plannerAStarGrid *init(const double map[230010], double obstacleThreshold,
                           const anonymous_function &varargin_2);

private:
  double gcostValue(double CurrentRow, double CurrentCol, double i,
                    double j) const;

public:
  double Map[230010];
  anonymous_function GCostFcn;
  double TieBreaker;
  double DiagonalSearchFlag;
  double ObstacleThreshold;
  double MapResolution;
  double PathIndicesInternal[230010];
  double PathCost;
  double NumPathPoints;
  double NodesExploredIndicesInternal[230010];
  double NumNodesExplored;
  double GCostMatrix[230010];
  double ParentCol[230010];
  double ParentRow[230010];
  double MapIndex[230010];
  double AllNodes[460020];
  double UseCustomG;
  double UseCustomH;
  double GCostMethod;
  double HCostMethod;

private:
  double PathInternal[460020];
};

} // namespace internal
} // namespace algs
} // namespace nav
} // namespace coder

#endif
//
// File trailer for plannerAStarGrid1.h
//
// [EOF]
//
