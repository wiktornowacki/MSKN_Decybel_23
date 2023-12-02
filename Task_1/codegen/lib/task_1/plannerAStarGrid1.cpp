//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: plannerAStarGrid1.cpp
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 02-Dec-2023 04:19:57
//

// Include Files
#include "plannerAStarGrid1.h"
#include "PriorityQueue.h"
#include "anonymous_function.h"
#include "ind2sub.h"
#include "rt_nonfinite.h"
#include "task_1_internal_types.h"
#include "coder_array.h"
#include "priorityqueue_api.hpp"
#include <algorithm>
#include <cmath>
#include <cstring>

// Function Definitions
//
// Arguments    : const double pose1[460020]
//                const double pose2[460020]
//                double dist[230010]
// Return Type  : void
//
namespace coder {
namespace nav {
namespace algs {
namespace internal {
void b_plannerAStarGrid::Chebyshev(const double pose1[460020],
                                   const double pose2[460020],
                                   double dist[230010])
{
  static double difference[460020];
  for (int k{0}; k < 460020; k++) {
    difference[k] = std::abs(pose1[k] - pose2[k]);
  }
  for (int k{0}; k < 230010; k++) {
    double d;
    double dist_tmp;
    dist_tmp = difference[k + 230010];
    d = difference[k];
    dist[k] = (d + dist_tmp) - std::fmin(d, dist_tmp);
  }
}

//
// Arguments    : double CurrentRow
//                double CurrentCol
//                double i
//                double j
// Return Type  : double
//
double b_plannerAStarGrid::gcostValue(double CurrentRow, double CurrentCol,
                                      double i, double j) const
{
  double gcostNeighbor;
  if (UseCustomG == 0.0) {
    switch (static_cast<int>(GCostMethod)) {
    case 2:
      gcostNeighbor = std::abs(0.0 - i) + std::abs(0.0 - j);
      break;
    case 3: {
      double difference_idx_0;
      double difference_idx_1;
      difference_idx_0 = std::abs(0.0 - i);
      difference_idx_1 = std::abs(0.0 - j);
      gcostNeighbor = (difference_idx_0 + difference_idx_1) -
                      std::fmin(difference_idx_0, difference_idx_1);
    } break;
    case 4:
      gcostNeighbor = -i * -i + -j * -j;
      break;
    default:
      gcostNeighbor = std::sqrt(-i * -i + -j * -j);
      break;
    }
    gcostNeighbor /= MapResolution;
  } else {
    double difference_idx_0;
    double difference_idx_1;
    difference_idx_0 = CurrentRow + i;
    difference_idx_1 = CurrentCol + j;
    // CUSTOM_GCOST_FUNCTION Summary of this function goes here
    //  Funkcja na podstawie punktow pomiedzy ruchem generuje nowy
    //  niestandardowyy koszt zdefiniowany w poleceniu
    //    Detailed explanation goes here
    //  x2-x1
    //  cost = SpeedLimitCost * Traffic + obstacle
    //
    if ((std::abs(CurrentRow - difference_idx_0) == 1.0) &&
        (std::abs(CurrentCol - difference_idx_1) == 1.0)) {
      int varargout_1_tmp;
      varargout_1_tmp = (static_cast<int>(difference_idx_0) +
                         561 * (static_cast<int>(difference_idx_1) - 1)) -
                        1;
      difference_idx_0 =
          1.4142135623730951 *
              GCostFcn.workspace.speed_limit_cost_map[varargout_1_tmp] *
              GCostFcn.workspace.trafic_intensity_map[varargout_1_tmp] +
          GCostFcn.workspace.obstacles_map[varargout_1_tmp];
    } else {
      int varargout_1_tmp;
      varargout_1_tmp = (static_cast<int>(difference_idx_0) +
                         561 * (static_cast<int>(difference_idx_1) - 1)) -
                        1;
      difference_idx_0 =
          GCostFcn.workspace.speed_limit_cost_map[varargout_1_tmp] *
              GCostFcn.workspace.trafic_intensity_map[varargout_1_tmp] +
          GCostFcn.workspace.obstacles_map[varargout_1_tmp];
    }
    gcostNeighbor = difference_idx_0 / MapResolution;
  }
  return gcostNeighbor;
}

//
// Arguments    : double CurrentRow
//                double CurrentCol
//                const double startIn[2]
// Return Type  : void
//
void b_plannerAStarGrid::reconstructPath(double CurrentRow, double CurrentCol,
                                         const double startIn[2])
{
  static double OptimalPath[460020];
  static double pathIndices[230010];
  array<double, 2U> r;
  array<double, 1U> r1;
  double k;
  double tmp;
  int i;
  int loop_ub_tmp;
  int nd2;
  k = 1.0;
  OptimalPath[0] = CurrentRow;
  OptimalPath[230010] = CurrentCol;
  pathIndices[0] = MapIndex[(static_cast<int>(CurrentRow) +
                             561 * (static_cast<int>(CurrentCol) - 1)) -
                            1];
  int exitg1;
  do {
    exitg1 = 0;
    k++;
    nd2 = (static_cast<int>(CurrentRow) +
           561 * (static_cast<int>(CurrentCol) - 1)) -
          1;
    CurrentCol = ParentCol[nd2];
    CurrentRow = ParentRow[nd2];
    if ((CurrentRow == 0.0) || (CurrentCol == 0.0)) {
      k--;
      exitg1 = 1;
    } else {
      OptimalPath[static_cast<int>(k) - 1] = CurrentRow;
      OptimalPath[static_cast<int>(k) + 230009] = CurrentCol;
      pathIndices[static_cast<int>(k) - 1] =
          MapIndex[(static_cast<int>(CurrentRow) +
                    561 * (static_cast<int>(CurrentCol) - 1)) -
                   1];
      if ((CurrentCol == startIn[1]) && (CurrentRow == startIn[0])) {
        exitg1 = 1;
      }
    }
  } while (exitg1 == 0);
  NumPathPoints = k;
  loop_ub_tmp = static_cast<int>(k);
  r.set_size(loop_ub_tmp, 2);
  for (i = 0; i < 2; i++) {
    for (nd2 = 0; nd2 < loop_ub_tmp; nd2++) {
      r[nd2 + r.size(0) * i] = OptimalPath[nd2 + 230010 * i];
    }
  }
  if (static_cast<int>(k) > 1) {
    nd2 = static_cast<int>(k) >> 1;
    for (int j{0}; j < 2; j++) {
      int offset;
      offset = j * r.size(0);
      for (int b_k{0}; b_k < nd2; b_k++) {
        int tmp_tmp;
        tmp_tmp = offset + b_k;
        tmp = r[tmp_tmp];
        i = ((offset + static_cast<int>(k)) - b_k) - 1;
        r[tmp_tmp] = r[i];
        r[i] = tmp;
      }
    }
  }
  for (i = 0; i < 2; i++) {
    for (nd2 = 0; nd2 < loop_ub_tmp; nd2++) {
      PathInternal[nd2 + 230010 * i] = r[nd2 + r.size(0) * i];
    }
  }
  r1.set_size(loop_ub_tmp);
  for (i = 0; i < loop_ub_tmp; i++) {
    r1[i] = pathIndices[i];
  }
  if (static_cast<int>(k) > 1) {
    nd2 = static_cast<int>(k) >> 1;
    for (int b_k{0}; b_k < nd2; b_k++) {
      tmp = r1[b_k];
      i = (static_cast<int>(k) - b_k) - 1;
      r1[b_k] = r1[i];
      r1[i] = tmp;
    }
  }
  for (i = 0; i < loop_ub_tmp; i++) {
    PathIndicesInternal[i] = r1[i];
  }
}

//
// Arguments    : const double map[230010]
//                double obstacleThreshold
//                const anonymous_function &varargin_2
// Return Type  : b_plannerAStarGrid *
//
b_plannerAStarGrid *
b_plannerAStarGrid::init(const double map[230010], double obstacleThreshold,
                         const anonymous_function &varargin_2)
{
  static double dv[230010];
  static int varargout_3[230010];
  static int varargout_4[230010];
  b_plannerAStarGrid *obj;
  obj = this;
  obj->NumPathPoints = 0.0;
  obj->GCostMethod = 1.0;
  obj->HCostMethod = 1.0;
  for (int i{0}; i < 230010; i++) {
    obj->Map[i] = map[i];
  }
  for (int i{0}; i < 460020; i++) {
    obj->PathInternal[i] = 0.0;
  }
  obj->ObstacleThreshold = obstacleThreshold;
  obj->MapResolution = 1.0;
  for (int i{0}; i < 230010; i++) {
    obj->PathIndicesInternal[i] = 0.0;
    obj->NodesExploredIndicesInternal[i] = 0.0;
    obj->ParentCol[i] = 0.0;
    obj->ParentRow[i] = 0.0;
    obj->MapIndex[i] = static_cast<double>(i) + 1.0;
    dv[i] = static_cast<double>(i) + 1.0;
  }
  ::coder::internal::ind2sub(dv, varargout_3, varargout_4);
  for (int i{0}; i < 230010; i++) {
    obj->AllNodes[i] = varargout_3[i];
    obj->AllNodes[i + 230010] = varargout_4[i];
  }
  obj->GCostFcn = varargin_2;
  obj->UseCustomG = 1.0;
  obj->UseCustomH = 1.0;
  return obj;
}

//
// Arguments    : b_plannerAStarGrid &astarInternal
//                const double start[2]
//                const double goal[2]
// Return Type  : void
//
void b_plannerAStarGrid::runPlan(b_plannerAStarGrid &astarInternal,
                                 const double start[2], const double goal[2])
{
  static double b[460020];
  static double pose1[460020];
  static double FScore[230010];
  static double GScore[230010];
  static double map[230010];
  static short ParentCol1[230010];
  static short ParentRow2[230010];
  static const signed char b_Neighbors[16]{-1, 0,  1,  -1, 1, -1, 0, 1,
                                           -1, -1, -1, 0,  0, 1,  1, 1};
  static const signed char Neighbors[8]{0, -1, 1, 0, -1, 0, 0, 1};
  static signed char ClosedMAT[230010];
  static signed char ExploredNodes[230010];
  static boolean_T x[230010];
  PriorityQueue OpenList;
  array<double, 1U> expNodes;
  array<int, 1U> ii;
  double openToPush_data[40];
  double MinScoreNode_data[5];
  double CurrentCol;
  double CurrentRow;
  double flag;
  double nodeId;
  int FScore_tmp;
  int Neighbors_size_idx_0;
  int NumNeighbors;
  int b_i;
  int i;
  int ibmat;
  int itilerow;
  int j;
  signed char Neighbors_data[16];
  boolean_T exitg2;
  for (i = 0; i < 230010; i++) {
    GScore[i] = rtInf;
    FScore[i] = rtInf;
    ExploredNodes[i] = 0;
    ParentCol1[i] = 0;
    ParentRow2[i] = 0;
    ClosedMAT[i] = 0;
    if (astarInternal.Map[i] == 1.0) {
      ClosedMAT[i] = 1;
    }
  }
  OpenList.PQInternal = priorityqueuecodegen_constructPQ(5.0, 2.0);
  OpenList.matlabCodegenIsDeleted = false;
  if (astarInternal.UseCustomH == 0.0) {
    nodeId = astarInternal.TieBreaker;
    for (j = 0; j < 2; j++) {
      ibmat = j * 230010;
      for (itilerow = 0; itilerow < 230010; itilerow++) {
        b[ibmat + itilerow] = goal[j];
      }
    }
    std::copy(&astarInternal.AllNodes[0], &astarInternal.AllNodes[460020],
              &pose1[0]);
    switch (static_cast<int>(astarInternal.HCostMethod)) {
    case 2:
      for (ibmat = 0; ibmat < 460020; ibmat++) {
        b[ibmat] = std::abs(pose1[ibmat] - b[ibmat]);
      }
      for (ibmat = 0; ibmat < 230010; ibmat++) {
        map[ibmat] = b[ibmat] + b[ibmat + 230010];
      }
      break;
    case 3:
      b_plannerAStarGrid::Chebyshev(pose1, b, map);
      break;
    case 4:
      for (ibmat = 0; ibmat < 460020; ibmat++) {
        flag = pose1[ibmat] - b[ibmat];
        pose1[ibmat] = flag;
        b[ibmat] = flag * flag;
      }
      for (ibmat = 0; ibmat < 230010; ibmat++) {
        map[ibmat] = b[ibmat] + b[ibmat + 230010];
      }
      break;
    default:
      for (ibmat = 0; ibmat < 460020; ibmat++) {
        flag = pose1[ibmat] - b[ibmat];
        pose1[ibmat] = flag;
        b[ibmat] = flag * flag;
      }
      for (ibmat = 0; ibmat < 230010; ibmat++) {
        map[ibmat] = std::sqrt(b[ibmat] + b[ibmat + 230010]);
      }
      break;
    }
    for (b_i = 0; b_i < 230010; b_i++) {
      map[b_i] = nodeId * (map[b_i] / astarInternal.MapResolution);
    }
  } else {
    flag = astarInternal.TieBreaker;
    nodeId = astarInternal.MapResolution;
    for (i = 0; i < 230010; i++) {
      map[i] = flag * 0.0 / nodeId;
    }
  }
  FScore_tmp =
      (static_cast<int>(start[0]) + 561 * (static_cast<int>(start[1]) - 1)) - 1;
  nodeId = map[FScore_tmp];
  FScore[FScore_tmp] = nodeId;
  MinScoreNode_data[0] = astarInternal.MapIndex[FScore_tmp];
  MinScoreNode_data[1] = astarInternal.MapIndex[FScore_tmp];
  MinScoreNode_data[2] = FScore[FScore_tmp];
  MinScoreNode_data[3] = 0.0;
  MinScoreNode_data[4] = nodeId;
  priorityqueuecodegen_push(OpenList.PQInternal, &MinScoreNode_data[0]);
  ExploredNodes[FScore_tmp] = 1;
  GScore[FScore_tmp] = 0.0;
  CurrentRow = 0.0;
  CurrentCol = 0.0;
  if (static_cast<int>(astarInternal.DiagonalSearchFlag) == 0) {
    Neighbors_size_idx_0 = 4;
    for (b_i = 0; b_i < 8; b_i++) {
      Neighbors_data[b_i] = Neighbors[b_i];
    }
    NumNeighbors = 4;
  } else {
    Neighbors_size_idx_0 = 8;
    for (b_i = 0; b_i < 16; b_i++) {
      Neighbors_data[b_i] = b_Neighbors[b_i];
    }
    NumNeighbors = 8;
  }
  int exitg1;
  do {
    exitg1 = 0;
    priorityqueuecodegen_getDataDim(OpenList.PQInternal);
    priorityqueuecodegen_top(OpenList.PQInternal, &MinScoreNode_data[0],
                             &nodeId);
    if (MinScoreNode_data[2] == rtInf) {
      exitg1 = 1;
    } else {
      flag = priorityqueuecodegen_isEmpty(OpenList.PQInternal);
      if (flag != 0.0) {
        astarInternal.ParentCol[FScore_tmp] = start[1];
        astarInternal.ParentRow[FScore_tmp] = start[0];
        exitg1 = 1;
      } else {
        CurrentRow =
            astarInternal.AllNodes[static_cast<int>(MinScoreNode_data[0]) - 1];
        CurrentCol =
            astarInternal
                .AllNodes[static_cast<int>(MinScoreNode_data[0]) + 230009];
        if (MinScoreNode_data[0] ==
            astarInternal.MapIndex[(static_cast<int>(goal[0]) +
                                    561 * (static_cast<int>(goal[1]) - 1)) -
                                   1]) {
          for (b_i = 0; b_i < 230010; b_i++) {
            astarInternal.ParentCol[b_i] = ParentCol1[b_i];
            astarInternal.ParentRow[b_i] = ParentRow2[b_i];
          }
          astarInternal.reconstructPath(CurrentRow, CurrentCol, start);
          exitg1 = 1;
        } else {
          int ClosedMAT_tmp;
          priorityqueuecodegen_pop(OpenList.PQInternal);
          ClosedMAT_tmp = (static_cast<int>(CurrentRow) +
                           561 * (static_cast<int>(CurrentCol) - 1)) -
                          1;
          ClosedMAT[ClosedMAT_tmp] = 1;
          ibmat = NumNeighbors * 5;
          std::memset(&openToPush_data[0], 0,
                      static_cast<unsigned int>(ibmat) * sizeof(double));
          ibmat = 0;
          for (int p{0}; p < NumNeighbors; p++) {
            i = Neighbors_data[p] - 1;
            j = Neighbors_data[p + Neighbors_size_idx_0] - 1;
            b_i = static_cast<int>(CurrentRow) + i;
            if ((b_i + 1 >= 1) && (b_i + 1 <= 561)) {
              itilerow = static_cast<int>(CurrentCol) + j;
              if ((itilerow + 1 >= 1) && (itilerow + 1 <= 410)) {
                b_i += 561 * itilerow;
                if ((!(astarInternal.Map[b_i] >=
                       astarInternal.ObstacleThreshold)) &&
                    (ClosedMAT[b_i] == 0)) {
                  nodeId = astarInternal.gcostValue(
                      CurrentRow, CurrentCol, static_cast<double>(i) + 1.0,
                      static_cast<double>(j) + 1.0);
                  flag = GScore[ClosedMAT_tmp] + nodeId;
                  if (FScore[b_i] == rtInf) {
                    ExploredNodes[b_i] = 1;
                    ParentCol1[b_i] = static_cast<short>(CurrentCol);
                    ParentRow2[b_i] = static_cast<short>(CurrentRow);
                    GScore[b_i] = flag;
                    nodeId = map[b_i];
                    FScore[b_i] = flag + nodeId;
                    openToPush_data[ibmat] = astarInternal.MapIndex[b_i];
                    openToPush_data[ibmat + NumNeighbors] =
                        astarInternal.MapIndex[ClosedMAT_tmp];
                    openToPush_data[ibmat + NumNeighbors * 2] = FScore[b_i];
                    openToPush_data[ibmat + NumNeighbors * 3] = GScore[b_i];
                    openToPush_data[ibmat + NumNeighbors * 4] = nodeId;
                    for (b_i = 0; b_i < 5; b_i++) {
                      MinScoreNode_data[b_i] =
                          openToPush_data[ibmat + NumNeighbors * b_i];
                    }
                    priorityqueuecodegen_push(OpenList.PQInternal,
                                              &MinScoreNode_data[0]);
                    ibmat++;
                  } else if (!(flag >= GScore[b_i])) {
                    ParentCol1[b_i] = static_cast<short>(CurrentCol);
                    ParentRow2[b_i] = static_cast<short>(CurrentRow);
                    GScore[b_i] = flag;
                    FScore[b_i] = flag + map[b_i];
                  }
                }
              }
            }
          }
        }
      }
    }
  } while (exitg1 == 0);
  astarInternal.PathCost = GScore[(static_cast<int>(CurrentRow) +
                                   561 * (static_cast<int>(CurrentCol) - 1)) -
                                  1];
  for (b_i = 0; b_i < 230010; b_i++) {
    astarInternal.GCostMatrix[b_i] = GScore[b_i];
    x[b_i] = (ExploredNodes[b_i] == 1);
  }
  ibmat = 0;
  ii.set_size(230010);
  j = 0;
  exitg2 = false;
  while ((!exitg2) && (j < 230010)) {
    if (x[j]) {
      ibmat++;
      ii[ibmat - 1] = j + 1;
      if (ibmat >= 230010) {
        exitg2 = true;
      } else {
        j++;
      }
    } else {
      j++;
    }
  }
  if (ibmat < 1) {
    ibmat = 0;
  }
  ii.set_size(ibmat);
  expNodes.set_size(ii.size(0));
  ibmat = ii.size(0);
  for (b_i = 0; b_i < ibmat; b_i++) {
    expNodes[b_i] = ii[b_i];
  }
  astarInternal.NumNodesExplored = expNodes.size(0);
  flag = astarInternal.NumNodesExplored;
  if (flag < 1.0) {
    ibmat = 0;
  } else {
    ibmat = static_cast<int>(flag);
  }
  for (b_i = 0; b_i < ibmat; b_i++) {
    astarInternal.NodesExploredIndicesInternal[b_i] = expNodes[b_i];
  }
}

} // namespace internal
} // namespace algs
} // namespace nav
} // namespace coder

//
// File trailer for plannerAStarGrid1.cpp
//
// [EOF]
//
