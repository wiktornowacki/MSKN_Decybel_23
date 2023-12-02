//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: main.cpp
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 02-Dec-2023 04:19:57
//

/*************************************************************************/
/* This automatically generated example C++ main file shows how to call  */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

// Include Files
#include "main.h"
#include "rt_nonfinite.h"
#include "task_1.h"
#include "task_1_terminate.h"
#include "coder_array.h"

// Function Declarations
static void argInit_1x2_real_T(double result[2]);

static void argInit_561x410x4_real_T(double result[920040]);

static double argInit_real_T();

// Function Definitions
//
// Arguments    : double result[2]
// Return Type  : void
//
static void argInit_1x2_real_T(double result[2])
{
  // Loop over the array to initialize each element.
  for (int idx1{0}; idx1 < 2; idx1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx1] = argInit_real_T();
  }
}

//
// Arguments    : double result[920040]
// Return Type  : void
//
static void argInit_561x410x4_real_T(double result[920040])
{
  // Loop over the array to initialize each element.
  for (int idx0{0}; idx0 < 561; idx0++) {
    for (int idx1{0}; idx1 < 410; idx1++) {
      for (int idx2{0}; idx2 < 4; idx2++) {
        // Set the value of the array element.
        // Change this value to the value that the application requires.
        result[(idx0 + 561 * idx1) + 230010 * idx2] = argInit_real_T();
      }
    }
  }
}

//
// Arguments    : void
// Return Type  : double
//
static double argInit_real_T()
{
  return 0.0;
}

//
// Arguments    : int argc
//                char **argv
// Return Type  : int
//
int main(int, char **)
{
  // The initialize function is being called automatically from your entry-point
  // function. So, a call to initialize is not included here. Invoke the
  // entry-point functions.
  // You can call entry-point functions multiple times.
  main_task_1();
  // Terminate the application.
  // You do not need to do this more than one time.
  task_1_terminate();
  return 0;
}

//
// Arguments    : void
// Return Type  : void
//
void main_task_1()
{
  static double dv[920040];
  coder::array<double, 2U> path;
  double startPoint_tmp[2];
  // Initialize function 'task_1' input arguments.
  // Initialize function input argument 'map'.
  // Initialize function input argument 'startPoint'.
  argInit_1x2_real_T(startPoint_tmp);
  // Initialize function input argument 'stopPoint'.
  // Call the entry-point 'task_1'.
  argInit_561x410x4_real_T(dv);
  task_1(dv, startPoint_tmp, startPoint_tmp, path);
}

//
// File trailer for main.cpp
//
// [EOF]
//
