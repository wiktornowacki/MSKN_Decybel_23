/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * task_1_types.h
 *
 * Code generation for function 'task_1'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef typedef_c_matlabshared_autonomous_inter
#define typedef_c_matlabshared_autonomous_inter
typedef struct {
  real_T GridOriginInLocal[2];
  real_T LocalOriginInWorld[2];
} c_matlabshared_autonomous_inter;
#endif /* typedef_c_matlabshared_autonomous_inter */

#ifndef typedef_d_matlabshared_autonomous_inter
#define typedef_d_matlabshared_autonomous_inter
typedef struct {
  real_T Head[2];
} d_matlabshared_autonomous_inter;
#endif /* typedef_d_matlabshared_autonomous_inter */

#ifndef typedef_e_matlabshared_autonomous_inter
#define typedef_e_matlabshared_autonomous_inter
typedef struct {
  d_matlabshared_autonomous_inter *Index;
  boolean_T Buffer[230010];
} e_matlabshared_autonomous_inter;
#endif /* typedef_e_matlabshared_autonomous_inter */

#ifndef typedef_binaryOccupancyMap
#define typedef_binaryOccupancyMap
typedef struct {
  c_matlabshared_autonomous_inter SharedProperties;
  d_matlabshared_autonomous_inter Index;
  e_matlabshared_autonomous_inter Buffer;
  boolean_T DefaultValueInternal;
  boolean_T HasParent;
} binaryOccupancyMap;
#endif /* typedef_binaryOccupancyMap */

#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct {
  real_T speed_limit_cost_map[230010];
  real_T trafic_intensity_map[230010];
  real_T obstacles_map[230010];
} struct_T;
#endif /* typedef_struct_T */

#ifndef typedef_anonymous_function
#define typedef_anonymous_function
typedef struct {
  struct_T workspace;
} anonymous_function;
#endif /* typedef_anonymous_function */

#ifndef typedef_c_nav_algs_internal_plannerASta
#define typedef_c_nav_algs_internal_plannerASta
typedef struct {
  real_T Map[230010];
  anonymous_function GCostFcn;
  real_T TieBreaker;
  real_T DiagonalSearchFlag;
  real_T ObstacleThreshold;
  real_T MapResolution;
  real_T PathIndicesInternal[230010];
  real_T PathInternal[460020];
  real_T PathCost;
  real_T NumPathPoints;
  real_T NodesExploredIndicesInternal[230010];
  real_T NumNodesExplored;
  real_T GCostMatrix[230010];
  real_T ParentCol[230010];
  real_T ParentRow[230010];
  real_T MapIndex[230010];
  real_T AllNodes[460020];
  real_T UseCustomG;
  real_T UseCustomH;
  real_T GCostMethod;
  real_T HCostMethod;
} c_nav_algs_internal_plannerASta;
#endif /* typedef_c_nav_algs_internal_plannerASta */

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T {
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real_T */
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /* typedef_emxArray_real_T */

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T {
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_int32_T */
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /* typedef_emxArray_int32_T */

#ifndef typedef_plannerAStarGrid
#define typedef_plannerAStarGrid
typedef struct {
  binaryOccupancyMap *Map;
  real_T TieBreaker;
  real_T DiagonalSearch;
  real_T GCost;
  real_T HCost;
  anonymous_function GCostFcn;
  real_T OccupiedThreshold;
  real_T IsGrid;
  real_T StartInGrid[2];
  real_T GoalInGrid[2];
  real_T Path[230010];
  real_T PathXY[460020];
  real_T PathInGrid[460020];
  real_T NumPathPoints;
  real_T PathCost;
  real_T NumNodesExplored;
  real_T IdPose[690030];
  real_T PoseId[230010];
  real_T UseCustomG;
  real_T UseCustomH;
  real_T isFirstRun;
} plannerAStarGrid;
#endif /* typedef_plannerAStarGrid */

#ifndef typedef_b_plannerAStarGrid_getPathOutpu
#define typedef_b_plannerAStarGrid_getPathOutpu
typedef struct {
  real_T pathXYTemp[460020];
} b_plannerAStarGrid_getPathOutpu;
#endif /* typedef_b_plannerAStarGrid_getPathOutpu */

#ifndef typedef_d_plannerAStarGrid_reconstructP
#define typedef_d_plannerAStarGrid_reconstructP
typedef struct {
  real_T OptimalPath[460020];
  real_T pathIndices[230010];
} d_plannerAStarGrid_reconstructP;
#endif /* typedef_d_plannerAStarGrid_reconstructP */

#ifndef typedef_b_plannerAStarGrid_Chebyshev
#define typedef_b_plannerAStarGrid_Chebyshev
typedef struct {
  real_T c[460020];
  real_T difference[460020];
} b_plannerAStarGrid_Chebyshev;
#endif /* typedef_b_plannerAStarGrid_Chebyshev */

#ifndef typedef_e_plannerAStarGrid_plannerAStar
#define typedef_e_plannerAStarGrid_plannerAStar
typedef struct {
  real_T dv[230010];
  int32_T varargout_3[230010];
  int32_T varargout_4[230010];
} e_plannerAStarGrid_plannerAStar;
#endif /* typedef_e_plannerAStarGrid_plannerAStar */

#ifndef typedef_d_plannerAStarGrid_getNodeCostO
#define typedef_d_plannerAStarGrid_getNodeCostO
typedef struct {
  boolean_T bv[230010];
  int8_T occMat[230010];
} d_plannerAStarGrid_getNodeCostO;
#endif /* typedef_d_plannerAStarGrid_getNodeCostO */

#ifndef typedef_b_plannerAStarGrid_setInputStat
#define typedef_b_plannerAStarGrid_setInputStat
typedef struct {
  real_T dv[230010];
  int32_T varargout_4[230010];
  int32_T varargout_5[230010];
  int32_T varargout_6[230010];
  int32_T iv[230010];
  int32_T iv1[230010];
} b_plannerAStarGrid_setInputStat;
#endif /* typedef_b_plannerAStarGrid_setInputStat */

#ifndef typedef_d_plannerAStarGrid_getHeuristic
#define typedef_d_plannerAStarGrid_getHeuristic
typedef struct {
  real_T b[460020];
  real_T c[460020];
  real_T y[460020];
} d_plannerAStarGrid_getHeuristic;
#endif /* typedef_d_plannerAStarGrid_getHeuristic */

#ifndef typedef_b_plannerAStarGrid_runPlan
#define typedef_b_plannerAStarGrid_runPlan
typedef struct {
  real_T map[230010];
  real_T GScore[230010];
  real_T FScore[230010];
  int16_T ParentCol1[230010];
  int16_T ParentRow2[230010];
  int8_T ExploredNodes[230010];
  int8_T ClosedMAT[230010];
  boolean_T x[230010];
} b_plannerAStarGrid_runPlan;
#endif /* typedef_b_plannerAStarGrid_runPlan */

#ifndef typedef_b_plannerAStarGrid_plan
#define typedef_b_plannerAStarGrid_plan
typedef struct {
  c_nav_algs_internal_plannerASta astarInternal;
} b_plannerAStarGrid_plan;
#endif /* typedef_b_plannerAStarGrid_plan */

#ifndef typedef_d_plannerAStarGrid_initializeIn
#define typedef_d_plannerAStarGrid_initializeIn
typedef struct {
  real_T c_val_workspace_speed_limit_cos[230010];
  real_T c_val_workspace_trafic_intensit[230010];
  real_T val_workspace_obstacles_map[230010];
  real_T occMat[230010];
  boolean_T bv[230010];
  int8_T b_occMat[230010];
} d_plannerAStarGrid_initializeIn;
#endif /* typedef_d_plannerAStarGrid_initializeIn */

#ifndef typedef_b_task_1
#define typedef_b_task_1
typedef struct {
  plannerAStarGrid planner;
  real_T c_this_workspace_speed_limit_co[230010];
  real_T c_this_workspace_trafic_intensi[230010];
  real_T this_workspace_obstacles_map[230010];
  binaryOccupancyMap mapa_binarna;
} b_task_1;
#endif /* typedef_b_task_1 */

#ifndef typedef_task_1StackData
#define typedef_task_1StackData
typedef struct {
  union {
    b_plannerAStarGrid_getPathOutpu f0;
    d_plannerAStarGrid_reconstructP f1;
    b_plannerAStarGrid_Chebyshev f2;
    e_plannerAStarGrid_plannerAStar f3;
    d_plannerAStarGrid_getNodeCostO f4;
    b_plannerAStarGrid_setInputStat f5;
  } u1;
  union {
    d_plannerAStarGrid_getHeuristic f6;
    d_plannerAStarGrid_initializeIn f7;
  } u2;
  b_plannerAStarGrid_runPlan f8;
  b_plannerAStarGrid_plan f9;
  b_task_1 f10;
} task_1StackData;
#endif /* typedef_task_1StackData */

/* End of code generation (task_1_types.h) */
