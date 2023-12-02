/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_task_1_info.c
 *
 * Code generation for function 'task_1'
 *
 */

/* Include files */
#include "_coder_task_1_info.h"
#include "task_1_data.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[5] = {
      "789c6360f4f465646060e06380021e08c50be50a4069260654802ecf88a68e115539032b"
      "030b8a3e987c3f944ececf2b49ad288170f2127353e13a53f27333f3"
      "12f34a422a0b52198a528bf373ca5253c032699939a92199b9a9c1c81c3f102fd70d490a"
      "ce014981d8ce19a9c9d9c1a5b90c4519c50817e62073e0e1b101877f",
      "59880c0f1f1ce12180261fed1aeb6c15135a9c5a541c539498969813e3929f5c9a9b9a57"
      "521ce3eb18e2e3e8145392589c6d189f9b58115f909f09120709c41b"
      "eae5324218f18979f9796ec97946c8eeafa0d0fda204dc0f93772e2d2ec9cf8df748ce2f"
      "2e894f2bcd4b2ec9cccf4372470285ee60c3e90e884c4a7e69524e2a",
      "f5e2cd1ba77da8f2e4c41bd6b0d2cb059b4728bcf889743f3a8d50cf01a6cfa9dc62a4a7"
      "7d5137572ad1d33e181828fb28cd776238ec1340934f8a2a4e33b10c"
      "08752ef3cb2bab300e34883229f27347b82380803d84dcc180834f2ff38760f96b88ec7e"
      "3a97bfeea3e52fd1e5affb4096bf9be95cfe363c11dc4e4ffb6060b8",
      "97bf2ece969e7e9e95957e8e99598e41d9c9212e5965454e43bffc0500dd32d8ae", ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3096U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *propFieldName[9] = {"Version",
                                    "ResolvedFunctions",
                                    "Checksum",
                                    "EntryPoints",
                                    "CoverageInfo",
                                    "IsPolymorphic",
                                    "PropertyList",
                                    "UUID",
                                    "ClassEntryPointIsHandle"};
  const char_T *epFieldName[8] = {
      "Name",     "NumberOfInputs", "NumberOfOutputs", "ConstantInputs",
      "FullPath", "TimeStamp",      "Constructor",     "Visible"};
  xEntryPoints =
      emlrtCreateStructMatrix(1, 1, 8, (const char_T **)&epFieldName[0]);
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("task_1"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "FullPath",
      emlrtMxCreateString(
          "C:\\Users\\rafal\\Documents\\MATLAB\\task1_max_points\\task_1.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(739222.17965277773));
  emlrtSetField(xEntryPoints, 0, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 9, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("23.2.0.2428915 (R2023b) Update 4"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("9EMrI3h8utya7MaCLPmzHG"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "CoverageInfo",
                covrtSerializeInstanceData(&emlrtCoverageInstance));
  return xResult;
}

/* End of code generation (_coder_task_1_info.c) */
