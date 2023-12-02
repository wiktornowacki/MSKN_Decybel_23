/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * task_1.c
 *
 * Code generation for function 'task_1'
 *
 */

/* Include files */
#include "task_1.h"
#include "plannerAStarGrid.h"
#include "rt_nonfinite.h"
#include "task_1_data.h"
#include "task_1_types.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    21,       /* lineNo */
    "task_1", /* fcnName */
    "C:\\Users\\rafal\\Documents\\MATLAB\\task1_max_points\\task_1.m" /* pathName
                                                                       */
};

static emlrtRSInfo b_emlrtRSI = {
    28,       /* lineNo */
    "task_1", /* fcnName */
    "C:\\Users\\rafal\\Documents\\MATLAB\\task1_max_points\\task_1.m" /* pathName
                                                                       */
};

static emlrtRSInfo c_emlrtRSI = {
    29,       /* lineNo */
    "task_1", /* fcnName */
    "C:\\Users\\rafal\\Documents\\MATLAB\\task1_max_points\\task_1.m" /* pathName
                                                                       */
};

/* Function Definitions */
void task_1(task_1StackData *SD, const emlrtStack *sp, const real_T map[920040],
            const real_T startPoint[2], const real_T stopPoint[2],
            emxArray_real_T *path)
{
  emlrtStack st;
  real_T expl_temp;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0U);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0U);
  /*  Team - MSKN Decybel */
  /*  Author - Rafał Szygenda */
  /*  Użycie funkcji: */
  /*  Funkcja wykorzystuje multilayer map gdzie kolejne wartswy to: */
  /*  1 - mapa z blokadami */
  /*  2 - Mapa kosztu prędkości */
  /*  3 - Mapa kosztu zatłoczenia ruchu */
  /*  4 - Mapa kosztu przeszkód na drodze */
  /*  Punkty Start oraz Stop powinny zostać wygenerowane przez dostarczoną */
  /*  funkcję "startStopGenerator.m".  */
  /*  Zamiana 4 warstwowej mapy do zmiennych */
  memcpy(&SD->f10.c_this_workspace_speed_limit_co[0], &map[230010],
         230010U * sizeof(real_T));
  memcpy(&SD->f10.c_this_workspace_trafic_intensi[0], &map[460020],
         230010U * sizeof(real_T));
  memcpy(&SD->f10.this_workspace_obstacles_map[0], &map[690030],
         230010U * sizeof(real_T));
  /* Konwersja mapy do binaryOccupancy do użycia AStar */
  st.site = &emlrtRSI;
  for (k = 0; k < 230010; k++) {
    if (muDoubleScalarIsNaN(map[k])) {
      emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI, "MATLAB:nologicalnan",
                                    "MATLAB:nologicalnan", 0);
    }
  }
  SD->f10.mapa_binarna.HasParent = false;
  SD->f10.mapa_binarna.SharedProperties.GridOriginInLocal[0] = 0.0;
  SD->f10.mapa_binarna.SharedProperties.GridOriginInLocal[1] = 0.0;
  SD->f10.mapa_binarna.SharedProperties.LocalOriginInWorld[0] = 0.0;
  SD->f10.mapa_binarna.SharedProperties.LocalOriginInWorld[1] = 0.0;
  SD->f10.mapa_binarna.DefaultValueInternal = false;
  SD->f10.mapa_binarna.Buffer.Index = &SD->f10.mapa_binarna.Index;
  for (k = 0; k < 230010; k++) {
    SD->f10.mapa_binarna.Buffer.Buffer[k] = !(map[k] != 0.0);
  }
  SD->f10.mapa_binarna.Index.Head[0] = 1.0;
  SD->f10.mapa_binarna.Index.Head[1] = 1.0;
  /* Użycie path plannera */
  /*  Z racji minimalizacji funkcji f(n) = g(n) + H(n) dla astar, jedna z tych
   */
  /*  funkcji implementuje niestandardową funkcję kosztu ruchu, a druga zwraca
   */
  /*  zero, tak aby f(n) = custom_cost(n)  */
  st.site = &b_emlrtRSI;
  c_plannerAStarGrid_plannerAStar(SD, &st, &SD->f10.planner,
                                  &SD->f10.mapa_binarna,
                                  SD->f10.c_this_workspace_speed_limit_co,
                                  SD->f10.c_this_workspace_trafic_intensi,
                                  SD->f10.this_workspace_obstacles_map);
  st.site = &c_emlrtRSI;
  plannerAStarGrid_plan(SD, &st, &SD->f10.planner, startPoint, stopPoint, path,
                        &expl_temp, SD->f10.c_this_workspace_speed_limit_co);
  /*  disp(['total custom cost (implemented function) = '
   * num2str(solution_info.PathCost) ]) */
}

/* End of code generation (task_1.c) */
