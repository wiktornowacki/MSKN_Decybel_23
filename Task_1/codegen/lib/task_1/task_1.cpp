//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: task_1.cpp
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 02-Dec-2023 04:19:57
//

// Include Files
#include "task_1.h"
#include "CircularBuffer.h"
#include "CircularBufferIndex.h"
#include "SharedMapProperties.h"
#include "anonymous_function.h"
#include "binaryOccupancyMap.h"
#include "plannerAStarGrid.h"
#include "rt_nonfinite.h"
#include "task_1_internal_types.h"
#include "coder_array.h"
#include <algorithm>

// Function Definitions
//
// Team - MSKN Decybel
//  Author - Rafał Szygenda
//  Użycie funkcji:
//  Funkcja wykorzystuje multilayer map gdzie kolejne wartswy to:
//  1 - mapa z blokadami
//  2 - Mapa kosztu prędkości
//  3 - Mapa kosztu zatłoczenia ruchu
//  4 - Mapa kosztu przeszkód na drodze
//  Punkty Start oraz Stop powinny zostać wygenerowane przez dostarczoną
//  funkcję "startStopGenerator.m".
//
// Arguments    : const double map[920040]
//                const double startPoint[2]
//                const double stopPoint[2]
//                coder::array<double, 2U> &path
// Return Type  : void
//
void task_1(const double map[920040], const double startPoint[2],
            const double stopPoint[2], coder::array<double, 2U> &path)
{
  static coder::anonymous_function b_this;
  static coder::binaryOccupancyMap mapa_binarna;
  static coder::plannerAStarGrid planner;
  static double expl_temp[230010];
  double b_expl_temp;
  //  Zamiana 4 warstwowej mapy do zmiennych
  std::copy(&map[230010], &map[460020],
            &b_this.workspace.speed_limit_cost_map[0]);
  std::copy(&map[460020], &map[690030],
            &b_this.workspace.trafic_intensity_map[0]);
  std::copy(&map[690030], &map[920040], &b_this.workspace.obstacles_map[0]);
  // Konwersja mapy do binaryOccupancy do użycia AStar
  mapa_binarna.HasParent = false;
  mapa_binarna.SharedProperties.GridOriginInLocal[0] = 0.0;
  mapa_binarna.SharedProperties.GridOriginInLocal[1] = 0.0;
  mapa_binarna.SharedProperties.LocalOriginInWorld[0] = 0.0;
  mapa_binarna.SharedProperties.LocalOriginInWorld[1] = 0.0;
  mapa_binarna.DefaultValueInternal = false;
  mapa_binarna.Buffer.Index = &mapa_binarna.Index;
  for (int i{0}; i < 230010; i++) {
    mapa_binarna.Buffer.Buffer[i] = !(map[i] != 0.0);
  }
  mapa_binarna.Index.Head[0] = 1.0;
  mapa_binarna.Index.Head[1] = 1.0;
  // Użycie path plannera
  //  Z racji minimalizacji funkcji f(n) = g(n) + H(n) dla astar, jedna z tych
  //  funkcji implementuje niestandardową funkcję kosztu ruchu, a druga zwraca
  //  zero, tak aby f(n) = custom_cost(n)
  planner.init(mapa_binarna, b_this);
  planner.plan(startPoint, stopPoint, path, b_expl_temp, expl_temp);
  //  disp(['total custom cost (implemented function) = '
  //  num2str(solution_info.PathCost) ])
}

//
// File trailer for task_1.cpp
//
// [EOF]
//
