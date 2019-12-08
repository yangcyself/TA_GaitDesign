/*
 * Automatically Generated from Mathematica.
 * Tue 29 Oct 2019 19:42:16 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t9110;
  double t3078;
  double t9056;
  double t9062;
  double t9070;
  double t9108;
  double t9112;
  double t9113;
  double t9114;
  double t9115;
  double t9116;
  double t9117;
  double t9118;
  double t9125;
  double t9126;
  double t9127;
  double t9128;
  double t9129;
  double t9132;
  double t9133;
  double t9134;
  double t9137;
  double t9138;
  double t9141;
  double t9162;
  double t9164;
  double t9178;
  double t9179;
  double t9156;
  double t9157;
  double t9158;
  double t9159;
  double t9160;
  double t9161;
  double t9163;
  t9110 = -1.*var4[1];
  t3078 = -1. + var5[0];
  t9056 = -1. + var6[0];
  t9062 = 1/t9056;
  t9070 = -1.*t3078*t9062;
  t9108 = 1. + t9070;
  t9112 = var4[0] + t9110;
  t9113 = Power(t9112,-5);
  t9114 = -1.*var1[0];
  t9115 = t9114 + var1[1];
  t9116 = t3078*t9062*t9115;
  t9117 = t9110 + var1[0] + t9116;
  t9118 = Power(t9117,4);
  t9125 = Power(t9112,-4);
  t9126 = Power(t9117,3);
  t9127 = 1/t9112;
  t9128 = -1.*t9127*t9117;
  t9129 = 1. + t9128;
  t9132 = Power(t9112,-3);
  t9133 = Power(t9117,2);
  t9134 = Power(t9129,2);
  t9137 = Power(t9112,-2);
  t9138 = Power(t9129,3);
  t9141 = Power(t9129,4);
  t9162 = Power(t9117,5);
  t9164 = Power(t9112,-6);
  t9178 = -1.*t9137*t9117;
  t9179 = t9127 + t9178;
  t9156 = Power(t9129,5);
  t9157 = -1.*t9156;
  t9158 = -5.*t9127*t9117*t9141;
  t9159 = -10.*t9137*t9133*t9138;
  t9160 = -10.*t9132*t9126*t9134;
  t9161 = -5.*t9125*t9118*t9129;
  t9163 = -1.*t9113*t9162;
  p_output1[0]=5.*t9108*t9127*t9141*var3[0] + 20.*t9108*t9117*t9137*t9138*var3[4] - 5.*t9108*t9127*t9141*var3[4] + 30.*t9108*t9132*t9133*t9134*var3[8] - 20.*t9108*t9117*t9137*t9138*var3[8] + 20.*t9108*t9125*t9126*t9129*var3[12] - 30.*t9108*t9132*t9133*t9134*var3[12] + 5.*t9108*t9113*t9118*var3[16] - 20.*t9108*t9125*t9126*t9129*var3[16] - 5.*t9108*t9113*t9118*var3[20];
  p_output1[1]=5.*t3078*t9062*t9127*t9141*var3[0] + 20.*t3078*t9062*t9117*t9137*t9138*var3[4] - 5.*t3078*t9062*t9127*t9141*var3[4] + 30.*t3078*t9062*t9132*t9133*t9134*var3[8] - 20.*t3078*t9062*t9117*t9137*t9138*var3[8] + 20.*t3078*t9062*t9125*t9126*t9129*var3[12] - 30.*t3078*t9062*t9132*t9133*t9134*var3[12] + 5.*t3078*t9062*t9113*t9118*var3[16] - 20.*t3078*t9062*t9125*t9126*t9129*var3[16] - 5.*t3078*t9062*t9113*t9118*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t9157;
  p_output1[4]=t9158;
  p_output1[5]=t9159;
  p_output1[6]=t9160;
  p_output1[7]=t9161;
  p_output1[8]=t9163;
  p_output1[9]=-5.*t9117*t9137*t9141*var3[0] - 20.*t9132*t9133*t9138*var3[4] + 5.*t9117*t9137*t9141*var3[4] - 30.*t9125*t9126*t9134*var3[8] + 20.*t9132*t9133*t9138*var3[8] - 20.*t9113*t9118*t9129*var3[12] + 30.*t9125*t9126*t9134*var3[12] + 20.*t9113*t9118*t9129*var3[16] - 5.*t9162*t9164*var3[16] + 5.*t9162*t9164*var3[20];
  p_output1[10]=-5.*t9141*t9179*var3[0] + 5.*t9127*t9141*var3[4] - 5.*t9117*t9137*t9141*var3[4] - 20.*t9117*t9127*t9138*t9179*var3[4] - 20.*t9132*t9133*t9138*var3[8] + 20.*t9117*t9137*t9138*var3[8] - 30.*t9133*t9134*t9137*t9179*var3[8] - 30.*t9125*t9126*t9134*var3[12] + 30.*t9132*t9133*t9134*var3[12] - 20.*t9126*t9129*t9132*t9179*var3[12] - 20.*t9113*t9118*t9129*var3[16] + 20.*t9125*t9126*t9129*var3[16] - 5.*t9118*t9125*t9179*var3[16] + 5.*t9113*t9118*var3[20] - 5.*t9162*t9164*var3[20];
  p_output1[11]=5.*t9108*t9127*t9141*var3[1] + 20.*t9108*t9117*t9137*t9138*var3[5] - 5.*t9108*t9127*t9141*var3[5] + 30.*t9108*t9132*t9133*t9134*var3[9] - 20.*t9108*t9117*t9137*t9138*var3[9] + 20.*t9108*t9125*t9126*t9129*var3[13] - 30.*t9108*t9132*t9133*t9134*var3[13] + 5.*t9108*t9113*t9118*var3[17] - 20.*t9108*t9125*t9126*t9129*var3[17] - 5.*t9108*t9113*t9118*var3[21];
  p_output1[12]=5.*t3078*t9062*t9127*t9141*var3[1] + 20.*t3078*t9062*t9117*t9137*t9138*var3[5] - 5.*t3078*t9062*t9127*t9141*var3[5] + 30.*t3078*t9062*t9132*t9133*t9134*var3[9] - 20.*t3078*t9062*t9117*t9137*t9138*var3[9] + 20.*t3078*t9062*t9125*t9126*t9129*var3[13] - 30.*t3078*t9062*t9132*t9133*t9134*var3[13] + 5.*t3078*t9062*t9113*t9118*var3[17] - 20.*t3078*t9062*t9125*t9126*t9129*var3[17] - 5.*t3078*t9062*t9113*t9118*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t9157;
  p_output1[15]=t9158;
  p_output1[16]=t9159;
  p_output1[17]=t9160;
  p_output1[18]=t9161;
  p_output1[19]=t9163;
  p_output1[20]=-5.*t9117*t9137*t9141*var3[1] - 20.*t9132*t9133*t9138*var3[5] + 5.*t9117*t9137*t9141*var3[5] - 30.*t9125*t9126*t9134*var3[9] + 20.*t9132*t9133*t9138*var3[9] - 20.*t9113*t9118*t9129*var3[13] + 30.*t9125*t9126*t9134*var3[13] + 20.*t9113*t9118*t9129*var3[17] - 5.*t9162*t9164*var3[17] + 5.*t9162*t9164*var3[21];
  p_output1[21]=-5.*t9141*t9179*var3[1] + 5.*t9127*t9141*var3[5] - 5.*t9117*t9137*t9141*var3[5] - 20.*t9117*t9127*t9138*t9179*var3[5] - 20.*t9132*t9133*t9138*var3[9] + 20.*t9117*t9137*t9138*var3[9] - 30.*t9133*t9134*t9137*t9179*var3[9] - 30.*t9125*t9126*t9134*var3[13] + 30.*t9132*t9133*t9134*var3[13] - 20.*t9126*t9129*t9132*t9179*var3[13] - 20.*t9113*t9118*t9129*var3[17] + 20.*t9125*t9126*t9129*var3[17] - 5.*t9118*t9125*t9179*var3[17] + 5.*t9113*t9118*var3[21] - 5.*t9162*t9164*var3[21];
  p_output1[22]=5.*t9108*t9127*t9141*var3[2] + 20.*t9108*t9117*t9137*t9138*var3[6] - 5.*t9108*t9127*t9141*var3[6] + 30.*t9108*t9132*t9133*t9134*var3[10] - 20.*t9108*t9117*t9137*t9138*var3[10] + 20.*t9108*t9125*t9126*t9129*var3[14] - 30.*t9108*t9132*t9133*t9134*var3[14] + 5.*t9108*t9113*t9118*var3[18] - 20.*t9108*t9125*t9126*t9129*var3[18] - 5.*t9108*t9113*t9118*var3[22];
  p_output1[23]=5.*t3078*t9062*t9127*t9141*var3[2] + 20.*t3078*t9062*t9117*t9137*t9138*var3[6] - 5.*t3078*t9062*t9127*t9141*var3[6] + 30.*t3078*t9062*t9132*t9133*t9134*var3[10] - 20.*t3078*t9062*t9117*t9137*t9138*var3[10] + 20.*t3078*t9062*t9125*t9126*t9129*var3[14] - 30.*t3078*t9062*t9132*t9133*t9134*var3[14] + 5.*t3078*t9062*t9113*t9118*var3[18] - 20.*t3078*t9062*t9125*t9126*t9129*var3[18] - 5.*t3078*t9062*t9113*t9118*var3[22];
  p_output1[24]=1.;
  p_output1[25]=t9157;
  p_output1[26]=t9158;
  p_output1[27]=t9159;
  p_output1[28]=t9160;
  p_output1[29]=t9161;
  p_output1[30]=t9163;
  p_output1[31]=-5.*t9117*t9137*t9141*var3[2] - 20.*t9132*t9133*t9138*var3[6] + 5.*t9117*t9137*t9141*var3[6] - 30.*t9125*t9126*t9134*var3[10] + 20.*t9132*t9133*t9138*var3[10] - 20.*t9113*t9118*t9129*var3[14] + 30.*t9125*t9126*t9134*var3[14] + 20.*t9113*t9118*t9129*var3[18] - 5.*t9162*t9164*var3[18] + 5.*t9162*t9164*var3[22];
  p_output1[32]=-5.*t9141*t9179*var3[2] + 5.*t9127*t9141*var3[6] - 5.*t9117*t9137*t9141*var3[6] - 20.*t9117*t9127*t9138*t9179*var3[6] - 20.*t9132*t9133*t9138*var3[10] + 20.*t9117*t9137*t9138*var3[10] - 30.*t9133*t9134*t9137*t9179*var3[10] - 30.*t9125*t9126*t9134*var3[14] + 30.*t9132*t9133*t9134*var3[14] - 20.*t9126*t9129*t9132*t9179*var3[14] - 20.*t9113*t9118*t9129*var3[18] + 20.*t9125*t9126*t9129*var3[18] - 5.*t9118*t9125*t9179*var3[18] + 5.*t9113*t9118*var3[22] - 5.*t9162*t9164*var3[22];
  p_output1[33]=5.*t9108*t9127*t9141*var3[3] + 20.*t9108*t9117*t9137*t9138*var3[7] - 5.*t9108*t9127*t9141*var3[7] + 30.*t9108*t9132*t9133*t9134*var3[11] - 20.*t9108*t9117*t9137*t9138*var3[11] + 20.*t9108*t9125*t9126*t9129*var3[15] - 30.*t9108*t9132*t9133*t9134*var3[15] + 5.*t9108*t9113*t9118*var3[19] - 20.*t9108*t9125*t9126*t9129*var3[19] - 5.*t9108*t9113*t9118*var3[23];
  p_output1[34]=5.*t3078*t9062*t9127*t9141*var3[3] + 20.*t3078*t9062*t9117*t9137*t9138*var3[7] - 5.*t3078*t9062*t9127*t9141*var3[7] + 30.*t3078*t9062*t9132*t9133*t9134*var3[11] - 20.*t3078*t9062*t9117*t9137*t9138*var3[11] + 20.*t3078*t9062*t9125*t9126*t9129*var3[15] - 30.*t3078*t9062*t9132*t9133*t9134*var3[15] + 5.*t3078*t9062*t9113*t9118*var3[19] - 20.*t3078*t9062*t9125*t9126*t9129*var3[19] - 5.*t3078*t9062*t9113*t9118*var3[23];
  p_output1[35]=1.;
  p_output1[36]=t9157;
  p_output1[37]=t9158;
  p_output1[38]=t9159;
  p_output1[39]=t9160;
  p_output1[40]=t9161;
  p_output1[41]=t9163;
  p_output1[42]=-5.*t9117*t9137*t9141*var3[3] - 20.*t9132*t9133*t9138*var3[7] + 5.*t9117*t9137*t9141*var3[7] - 30.*t9125*t9126*t9134*var3[11] + 20.*t9132*t9133*t9138*var3[11] - 20.*t9113*t9118*t9129*var3[15] + 30.*t9125*t9126*t9134*var3[15] + 20.*t9113*t9118*t9129*var3[19] - 5.*t9162*t9164*var3[19] + 5.*t9162*t9164*var3[23];
  p_output1[43]=-5.*t9141*t9179*var3[3] + 5.*t9127*t9141*var3[7] - 5.*t9117*t9137*t9141*var3[7] - 20.*t9117*t9127*t9138*t9179*var3[7] - 20.*t9132*t9133*t9138*var3[11] + 20.*t9117*t9137*t9138*var3[11] - 30.*t9133*t9134*t9137*t9179*var3[11] - 30.*t9125*t9126*t9134*var3[15] + 30.*t9132*t9133*t9134*var3[15] - 20.*t9126*t9129*t9132*t9179*var3[15] - 20.*t9113*t9118*t9129*var3[19] + 20.*t9125*t9126*t9129*var3[19] - 5.*t9118*t9125*t9179*var3[19] + 5.*t9113*t9118*var3[23] - 5.*t9162*t9164*var3[23];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_time_RightStance.hh"

namespace RightStance
{

void J_y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
