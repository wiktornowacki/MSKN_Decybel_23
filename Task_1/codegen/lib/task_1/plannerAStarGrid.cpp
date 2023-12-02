//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: plannerAStarGrid.cpp
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 02-Dec-2023 04:19:57
//

// Include Files
#include "plannerAStarGrid.h"
#include "anonymous_function.h"
#include "binaryOccupancyMap.h"
#include "ind2sub.h"
#include "plannerAStarGrid1.h"
#include "rt_nonfinite.h"
#include "validateAStarBuiltinCostFunction.h"
#include "coder_array.h"
#include <algorithm>
#include <cstring>

// Function Definitions
//
// Arguments    : const nav::algs::internal::b_plannerAStarGrid &astarInternal
// Return Type  : void
//
namespace coder {
void plannerAStarGrid::getEssentialOutput(
    const nav::algs::internal::b_plannerAStarGrid &astarInternal)
{
  double d;
  int loop_ub;
  d = astarInternal.NumPathPoints;
  if (d < 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = static_cast<int>(d);
  }
  NumPathPoints = loop_ub;
  if (NumPathPoints == 0.0) {
    PathCost = rtInf;
  } else {
    PathCost = astarInternal.PathCost;
  }
  NumPathPoints = loop_ub;
  std::memset(&Path[0], 0, 230010U * sizeof(double));
  if (loop_ub < 1) {
    loop_ub = 0;
  }
  if (loop_ub - 1 >= 0) {
    std::copy(&astarInternal.PathIndicesInternal[0],
              &astarInternal.PathIndicesInternal[loop_ub], &Path[0]);
  }
  NumNodesExplored = astarInternal.NumNodesExplored;
}

//
// Arguments    : const nav::algs::internal::b_plannerAStarGrid &astarInternal
//                double GCostMatrix[230010]
// Return Type  : void
//
void plannerAStarGrid::getGCostMatrix(
    const nav::algs::internal::b_plannerAStarGrid &astarInternal,
    double GCostMatrix[230010])
{
  for (int i{0}; i < 230010; i++) {
    double d;
    d = astarInternal.GCostMatrix[i];
    GCostMatrix[i] = d;
    if (d == -1.0) {
      GCostMatrix[i] = rtInf;
    }
  }
}

//
// Arguments    : double currentNode
// Return Type  : double
//
double plannerAStarGrid::getNodeCostOMDefault(double currentNode)
{
  static signed char occMat[230010];
  static boolean_T bv[230010];
  binaryOccupancyMap *val;
  double cost;
  val = Map;
  val->occupancyMatrix(bv);
  for (int i{0}; i < 230010; i++) {
    occMat[i] = static_cast<signed char>(bv[i]);
  }
  cost = static_cast<double>(occMat[static_cast<int>(currentNode) - 1]) *
         10000.0 / 10000.0;
  if (cost > OccupiedThreshold) {
    cost = rtInf;
  }
  if (cost <= OccupiedThreshold) {
    cost = 0.0;
  }
  return cost;
}

//
// Arguments    : array<double, 2U> &pathOut
// Return Type  : void
//
void plannerAStarGrid::getPathOutput(array<double, 2U> &pathOut)
{
  static double pathXYTemp[460020];
  binaryOccupancyMap *b_val;
  array<double, 2U> b_pose;
  array<double, 2U> pose;
  array<double, 1U> val;
  double d;
  int i;
  d = NumPathPoints;
  for (i = 0; i < 460020; i++) {
    PathXY[i] = rtNaN;
  }
  for (i = 0; i < 460020; i++) {
    PathInGrid[i] = rtNaN;
  }
  if (d < 1.0) {
    i = 0;
  } else {
    i = static_cast<int>(d);
  }
  if (i == 0) {
    PathCost = rtInf;
    pathOut.set_size(0, 0);
  } else {
    int loop_ub;
    d = NumPathPoints;
    if (d < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = static_cast<int>(d);
    }
    val.set_size(loop_ub);
    for (i = 0; i < loop_ub; i++) {
      val[i] = Path[i];
    }
    pose.set_size(val.size(0), 3);
    loop_ub = val.size(0);
    for (i = 0; i < 3; i++) {
      for (int i1{0}; i1 < loop_ub; i1++) {
        pose[i1 + pose.size(0) * i] =
            IdPose[(static_cast<int>(val[i1]) + 230010 * i) - 1];
      }
    }
    for (i = 0; i < 460020; i++) {
      pathXYTemp[i] = rtNaN;
    }
    d = NumPathPoints;
    b_val = Map;
    b_pose.set_size(pose.size(0), 2);
    loop_ub = pose.size(0);
    for (i = 0; i < 2; i++) {
      for (int i1{0}; i1 < loop_ub; i1++) {
        b_pose[i1 + b_pose.size(0) * i] = pose[i1 + pose.size(0) * i];
      }
    }
    b_val->grid2world(b_pose, pathOut);
    if (d < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = static_cast<int>(d);
    }
    for (i = 0; i < 2; i++) {
      for (int i1{0}; i1 < loop_ub; i1++) {
        pathXYTemp[i1 + 230010 * i] = pathOut[i1 + loop_ub * i];
      }
    }
    for (i = 0; i < 460020; i++) {
      PathXY[i] = pathXYTemp[i];
    }
    for (i = 0; i < 460020; i++) {
      pathXYTemp[i] = rtNaN;
    }
    d = NumPathPoints;
    if (d < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = static_cast<int>(d);
    }
    for (i = 0; i < 2; i++) {
      for (int i1{0}; i1 < loop_ub; i1++) {
        pathXYTemp[i1 + 230010 * i] = pose[i1 + pose.size(0) * i];
      }
    }
    for (i = 0; i < 460020; i++) {
      PathInGrid[i] = pathXYTemp[i];
    }
    if (IsGrid != 0.0) {
      d = NumPathPoints;
      if (d < 1.0) {
        loop_ub = 0;
      } else {
        loop_ub = static_cast<int>(d);
      }
      pathOut.set_size(loop_ub, 2);
      for (i = 0; i < 2; i++) {
        for (int i1{0}; i1 < loop_ub; i1++) {
          pathOut[i1 + pathOut.size(0) * i] = PathInGrid[i1 + 230010 * i];
        }
      }
      if (pathOut.size(0) == 0) {
        pathOut.set_size(1, 2);
        pathOut[0] = PathInGrid[0];
        pathOut[pathOut.size(0)] = PathInGrid[230010];
      }
    } else {
      d = NumPathPoints;
      if (d < 1.0) {
        loop_ub = 0;
      } else {
        loop_ub = static_cast<int>(d);
      }
      pathOut.set_size(loop_ub, 2);
      for (i = 0; i < 2; i++) {
        for (int i1{0}; i1 < loop_ub; i1++) {
          pathOut[i1 + pathOut.size(0) * i] = PathXY[i1 + 230010 * i];
        }
      }
      if (pathOut.size(0) == 0) {
        pathOut.set_size(1, 2);
        pathOut[0] = PathXY[0];
        pathOut[pathOut.size(0)] = PathXY[230010];
      }
    }
  }
}

//
// Arguments    : nav::algs::internal::b_plannerAStarGrid &iobj_0
// Return Type  : nav::algs::internal::b_plannerAStarGrid *
//
nav::algs::internal::b_plannerAStarGrid *
plannerAStarGrid::initializeInternalPlanner(
    nav::algs::internal::b_plannerAStarGrid &iobj_0)
{
  static anonymous_function b_val;
  static double b_occMat[230010];
  static signed char occMat[230010];
  static boolean_T bv[230010];
  binaryOccupancyMap *val;
  nav::algs::internal::b_plannerAStarGrid *astarInternal;
  double th;
  OccupiedThreshold = 0.65;
  val = Map;
  val->occupancyMatrix(bv);
  for (int i{0}; i < 230010; i++) {
    occMat[i] = static_cast<signed char>(bv[i]);
  }
  th = OccupiedThreshold;
  b_val = GCostFcn;
  for (int i{0}; i < 230010; i++) {
    b_occMat[i] = static_cast<double>(occMat[i]) * 10000.0 / 10000.0;
  }
  astarInternal = iobj_0.init(b_occMat, th, b_val);
  if (UseCustomH == 0.0) {
    th = HCost;
    astarInternal->HCostMethod = th;
    astarInternal->UseCustomH = 0.0;
  }
  if (UseCustomG == 0.0) {
    th = GCost;
    astarInternal->GCostMethod = th;
    astarInternal->UseCustomG = 0.0;
  }
  if (TieBreaker != 0.0) {
    th = 1.07;
  } else {
    th = 1.0;
  }
  astarInternal->TieBreaker = th;
  th = DiagonalSearch;
  astarInternal->DiagonalSearchFlag = th;
  return astarInternal;
}

//
// Arguments    : binaryOccupancyMap &input
// Return Type  : void
//
void plannerAStarGrid::set_Map(binaryOccupancyMap &input)
{
  static double a[230010];
  static double dv[230010];
  static double poseIdTemp[230010];
  static int varargout_4[230010];
  static int varargout_5[230010];
  static int varargout_6[230010];
  Map = &input;
  for (int i{0}; i < 690030; i++) {
    IdPose[i] = 0.0;
  }
  for (int i{0}; i < 230010; i++) {
    dv[i] = static_cast<double>(i) + 1.0;
  }
  internal::ind2sub(dv, varargout_4, varargout_5, varargout_6);
  for (int i{0}; i < 230010; i++) {
    a[i] = varargout_4[i];
    poseIdTemp[i] = varargout_5[i];
    dv[i] = varargout_6[i];
  }
  for (int i{0}; i < 230010; i++) {
    IdPose[i] = a[i];
  }
  for (int i{0}; i < 230010; i++) {
    IdPose[i + 230010] = poseIdTemp[i];
  }
  for (int i{0}; i < 230010; i++) {
    IdPose[i + 460020] = dv[i];
  }
  for (int i{0}; i < 230010; i++) {
    poseIdTemp[i] = IdPose[i + 230010] - 1.0;
  }
  for (int i{0}; i < 230010; i++) {
    a[i] = IdPose[i + 460020] - 1.0;
  }
  for (int i{0}; i < 230010; i++) {
    poseIdTemp[i] = (IdPose[i] + poseIdTemp[i] * 561.0) + a[i] * 561.0 * 410.0;
  }
  for (int i{0}; i < 230010; i++) {
    PoseId[i] = poseIdTemp[i];
  }
}

//
// Arguments    : binaryOccupancyMap &varargin_1
//                const anonymous_function &varargin_3
// Return Type  : plannerAStarGrid *
//
plannerAStarGrid *plannerAStarGrid::init(binaryOccupancyMap &varargin_1,
                                         const anonymous_function &varargin_3)
{
  plannerAStarGrid *obj;
  double d;
  int a__2_size[2];
  char a__2_data[9];
  obj = this;
  obj->isFirstRun = 1.0;
  obj->set_Map(varargin_1);
  obj->UseCustomG = 1.0;
  obj->GCostFcn = varargin_3;
  obj->UseCustomG = 0.0;
  d = nav::internal::validation::validateAStarBuiltinCostFunction(a__2_data,
                                                                  a__2_size);
  obj->GCost = d;
  obj->UseCustomG = 1.0;
  obj->UseCustomH = 1.0;
  obj->UseCustomH = 0.0;
  d = nav::internal::validation::validateAStarBuiltinCostFunction(a__2_data,
                                                                  a__2_size);
  obj->HCost = d;
  obj->UseCustomH = 1.0;
  obj->OccupiedThreshold = 0.65;
  obj->TieBreaker = 0.0;
  obj->DiagonalSearch = 1.0;
  obj->isFirstRun = 0.0;
  return obj;
}

//
// Arguments    : const double start[2]
//                const double goal[2]
//                array<double, 2U> &path
//                double &debugInfo_NumNodesExplored
//                double debugInfo_GCostMatrix[230010]
// Return Type  : double
//
double plannerAStarGrid::plan(const double start[2], const double goal[2],
                              array<double, 2U> &path,
                              double &debugInfo_NumNodesExplored,
                              double debugInfo_GCostMatrix[230010])
{
  static nav::algs::internal::b_plannerAStarGrid astarInternal;
  binaryOccupancyMap *val;
  double goalgrid[2];
  double startgrid[2];
  double debugInfo_PathCost;
  double goalNode;
  double startNode;
  IsGrid = 0.0;
  IsGrid = 1.0;
  if (!(IsGrid != 0.0)) {
    val = Map;
    val->world2grid(start, startgrid);
    val = Map;
    val->world2grid(goal, goalgrid);
  } else {
    startgrid[0] = start[0];
    goalgrid[0] = goal[0];
    startgrid[1] = start[1];
    goalgrid[1] = goal[1];
  }
  goalNode = PoseId[(static_cast<int>(goalgrid[0]) +
                     561 * (static_cast<int>(goalgrid[1]) - 1)) -
                    1];
  startNode = PoseId[(static_cast<int>(startgrid[0]) +
                      561 * (static_cast<int>(startgrid[1]) - 1)) -
                     1];
  getNodeCostOMDefault(startNode);
  getNodeCostOMDefault(goalNode);
  StartInGrid[0] = startgrid[0];
  StartInGrid[1] = startgrid[1];
  GoalInGrid[0] = goalgrid[0];
  GoalInGrid[1] = goalgrid[1];
  initializeInternalPlanner(astarInternal);
  startgrid[0] = StartInGrid[0];
  startgrid[1] = StartInGrid[1];
  goalgrid[0] = GoalInGrid[0];
  goalgrid[1] = GoalInGrid[1];
  nav::algs::internal::b_plannerAStarGrid::runPlan(astarInternal, startgrid,
                                                   goalgrid);
  getEssentialOutput(astarInternal);
  getPathOutput(path);
  plannerAStarGrid::getGCostMatrix(astarInternal, debugInfo_GCostMatrix);
  debugInfo_PathCost = PathCost;
  debugInfo_NumNodesExplored = NumNodesExplored;
  return debugInfo_PathCost;
}

} // namespace coder

//
// File trailer for plannerAStarGrid.cpp
//
// [EOF]
//
