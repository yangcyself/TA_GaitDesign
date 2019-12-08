/*
 * Automatically Generated from Mathematica.
 * Tue 29 Oct 2019 19:42:23 GMT-07:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t9149;
  double t4784;
  double t6681;
  double t9140;
  double t9142;
  double t9148;
  double t9153;
  double t9154;
  double t9166;
  double t9167;
  double t9169;
  double t9170;
  double t9171;
  double t9175;
  double t9176;
  double t9177;
  double t9180;
  double t9181;
  double t9185;
  double t9186;
  double t9190;
  double t9191;
  double t9209;
  double t9220;
  double t9225;
  double t9245;
  double t9246;
  double t9210;
  double t9211;
  double t9212;
  double t9213;
  double t9214;
  double t9215;
  double t9216;
  double t9217;
  double t9218;
  double t9219;
  double t9221;
  double t9222;
  double t9223;
  double t9224;
  t9149 = -1.*var5[1];
  t4784 = -1. + var6[0];
  t6681 = -1. + var7[0];
  t9140 = 1/t6681;
  t9142 = -1.*t4784*t9140;
  t9148 = 1. + t9142;
  t9153 = var5[0] + t9149;
  t9154 = Power(t9153,-5);
  t9166 = -1.*var1[0];
  t9167 = t9166 + var1[1];
  t9169 = t4784*t9140*t9167;
  t9170 = t9149 + var1[0] + t9169;
  t9171 = Power(t9170,3);
  t9175 = Power(t9153,-4);
  t9176 = Power(t9170,2);
  t9177 = 1/t9153;
  t9180 = -1.*t9177*t9170;
  t9181 = 1. + t9180;
  t9185 = Power(t9153,-3);
  t9186 = Power(t9181,2);
  t9190 = Power(t9153,-2);
  t9191 = Power(t9181,3);
  t9209 = Power(t9181,4);
  t9220 = Power(t9170,4);
  t9225 = Power(t9153,-6);
  t9245 = -1.*t9190*t9170;
  t9246 = t9177 + t9245;
  t9210 = 5.*t9177*t9209;
  t9211 = 20.*t9190*t9170*t9191;
  t9212 = -5.*t9177*t9209;
  t9213 = t9211 + t9212;
  t9214 = 30.*t9185*t9176*t9186;
  t9215 = -20.*t9190*t9170*t9191;
  t9216 = t9214 + t9215;
  t9217 = 20.*t9175*t9171*t9181;
  t9218 = -30.*t9185*t9176*t9186;
  t9219 = t9217 + t9218;
  t9221 = 5.*t9154*t9220;
  t9222 = -20.*t9175*t9171*t9181;
  t9223 = t9221 + t9222;
  t9224 = -5.*t9154*t9220;
  p_output1[0]=-20.*t9148*t9190*t9191*var4[0] - 60.*t9148*t9170*t9185*t9186*var4[4] + 40.*t9148*t9190*t9191*var4[4] - 60.*t9148*t9175*t9176*t9181*var4[8] + 120.*t9148*t9170*t9185*t9186*var4[8] - 20.*t9148*t9190*t9191*var4[8] - 20.*t9148*t9154*t9171*var4[12] + 120.*t9148*t9175*t9176*t9181*var4[12] - 60.*t9148*t9170*t9185*t9186*var4[12] + 40.*t9148*t9154*t9171*var4[16] - 60.*t9148*t9175*t9176*t9181*var4[16] - 20.*t9148*t9154*t9171*var4[20];
  p_output1[1]=-20.*t4784*t9140*t9190*t9191*var4[0] - 60.*t4784*t9140*t9170*t9185*t9186*var4[4] + 40.*t4784*t9140*t9190*t9191*var4[4] - 60.*t4784*t9140*t9175*t9176*t9181*var4[8] + 120.*t4784*t9140*t9170*t9185*t9186*var4[8] - 20.*t4784*t9140*t9190*t9191*var4[8] - 20.*t4784*t9140*t9154*t9171*var4[12] + 120.*t4784*t9140*t9175*t9176*t9181*var4[12] - 60.*t4784*t9140*t9170*t9185*t9186*var4[12] + 40.*t4784*t9140*t9154*t9171*var4[16] - 60.*t4784*t9140*t9175*t9176*t9181*var4[16] - 20.*t4784*t9140*t9154*t9171*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t9210;
  p_output1[4]=t9213;
  p_output1[5]=t9216;
  p_output1[6]=t9219;
  p_output1[7]=t9223;
  p_output1[8]=t9224;
  p_output1[9]=20.*t9170*t9185*t9191*var4[0] - 5.*t9190*t9209*var4[0] + 60.*t9175*t9176*t9186*var4[4] - 60.*t9170*t9185*t9191*var4[4] + 5.*t9190*t9209*var4[4] + 60.*t9154*t9171*t9181*var4[8] - 150.*t9175*t9176*t9186*var4[8] + 40.*t9170*t9185*t9191*var4[8] - 140.*t9154*t9171*t9181*var4[12] + 90.*t9175*t9176*t9186*var4[12] + 20.*t9220*t9225*var4[12] + 80.*t9154*t9171*t9181*var4[16] - 45.*t9220*t9225*var4[16] + 25.*t9220*t9225*var4[20];
  p_output1[10]=5.*t9190*t9209*var4[0] + 20.*t9177*t9191*t9246*var4[0] + 40.*t9170*t9185*t9191*var4[4] - 20.*t9190*t9191*var4[4] - 5.*t9190*t9209*var4[4] + 60.*t9170*t9186*t9190*t9246*var4[4] - 20.*t9177*t9191*t9246*var4[4] + 90.*t9175*t9176*t9186*var4[8] - 60.*t9170*t9185*t9186*var4[8] - 40.*t9170*t9185*t9191*var4[8] + 20.*t9190*t9191*var4[8] + 60.*t9176*t9181*t9185*t9246*var4[8] - 60.*t9170*t9186*t9190*t9246*var4[8] + 80.*t9154*t9171*t9181*var4[12] - 60.*t9175*t9176*t9181*var4[12] - 90.*t9175*t9176*t9186*var4[12] + 60.*t9170*t9185*t9186*var4[12] + 20.*t9171*t9175*t9246*var4[12] - 60.*t9176*t9181*t9185*t9246*var4[12] - 20.*t9154*t9171*var4[16] - 80.*t9154*t9171*t9181*var4[16] + 60.*t9175*t9176*t9181*var4[16] + 25.*t9220*t9225*var4[16] - 20.*t9171*t9175*t9246*var4[16] + 20.*t9154*t9171*var4[20] - 25.*t9220*t9225*var4[20];
  p_output1[11]=-20.*t9148*t9190*t9191*var4[1] - 60.*t9148*t9170*t9185*t9186*var4[5] + 40.*t9148*t9190*t9191*var4[5] - 60.*t9148*t9175*t9176*t9181*var4[9] + 120.*t9148*t9170*t9185*t9186*var4[9] - 20.*t9148*t9190*t9191*var4[9] - 20.*t9148*t9154*t9171*var4[13] + 120.*t9148*t9175*t9176*t9181*var4[13] - 60.*t9148*t9170*t9185*t9186*var4[13] + 40.*t9148*t9154*t9171*var4[17] - 60.*t9148*t9175*t9176*t9181*var4[17] - 20.*t9148*t9154*t9171*var4[21];
  p_output1[12]=-20.*t4784*t9140*t9190*t9191*var4[1] - 60.*t4784*t9140*t9170*t9185*t9186*var4[5] + 40.*t4784*t9140*t9190*t9191*var4[5] - 60.*t4784*t9140*t9175*t9176*t9181*var4[9] + 120.*t4784*t9140*t9170*t9185*t9186*var4[9] - 20.*t4784*t9140*t9190*t9191*var4[9] - 20.*t4784*t9140*t9154*t9171*var4[13] + 120.*t4784*t9140*t9175*t9176*t9181*var4[13] - 60.*t4784*t9140*t9170*t9185*t9186*var4[13] + 40.*t4784*t9140*t9154*t9171*var4[17] - 60.*t4784*t9140*t9175*t9176*t9181*var4[17] - 20.*t4784*t9140*t9154*t9171*var4[21];
  p_output1[13]=1.;
  p_output1[14]=t9210;
  p_output1[15]=t9213;
  p_output1[16]=t9216;
  p_output1[17]=t9219;
  p_output1[18]=t9223;
  p_output1[19]=t9224;
  p_output1[20]=20.*t9170*t9185*t9191*var4[1] - 5.*t9190*t9209*var4[1] + 60.*t9175*t9176*t9186*var4[5] - 60.*t9170*t9185*t9191*var4[5] + 5.*t9190*t9209*var4[5] + 60.*t9154*t9171*t9181*var4[9] - 150.*t9175*t9176*t9186*var4[9] + 40.*t9170*t9185*t9191*var4[9] - 140.*t9154*t9171*t9181*var4[13] + 90.*t9175*t9176*t9186*var4[13] + 20.*t9220*t9225*var4[13] + 80.*t9154*t9171*t9181*var4[17] - 45.*t9220*t9225*var4[17] + 25.*t9220*t9225*var4[21];
  p_output1[21]=5.*t9190*t9209*var4[1] + 20.*t9177*t9191*t9246*var4[1] + 40.*t9170*t9185*t9191*var4[5] - 20.*t9190*t9191*var4[5] - 5.*t9190*t9209*var4[5] + 60.*t9170*t9186*t9190*t9246*var4[5] - 20.*t9177*t9191*t9246*var4[5] + 90.*t9175*t9176*t9186*var4[9] - 60.*t9170*t9185*t9186*var4[9] - 40.*t9170*t9185*t9191*var4[9] + 20.*t9190*t9191*var4[9] + 60.*t9176*t9181*t9185*t9246*var4[9] - 60.*t9170*t9186*t9190*t9246*var4[9] + 80.*t9154*t9171*t9181*var4[13] - 60.*t9175*t9176*t9181*var4[13] - 90.*t9175*t9176*t9186*var4[13] + 60.*t9170*t9185*t9186*var4[13] + 20.*t9171*t9175*t9246*var4[13] - 60.*t9176*t9181*t9185*t9246*var4[13] - 20.*t9154*t9171*var4[17] - 80.*t9154*t9171*t9181*var4[17] + 60.*t9175*t9176*t9181*var4[17] + 25.*t9220*t9225*var4[17] - 20.*t9171*t9175*t9246*var4[17] + 20.*t9154*t9171*var4[21] - 25.*t9220*t9225*var4[21];
  p_output1[22]=-20.*t9148*t9190*t9191*var4[2] - 60.*t9148*t9170*t9185*t9186*var4[6] + 40.*t9148*t9190*t9191*var4[6] - 60.*t9148*t9175*t9176*t9181*var4[10] + 120.*t9148*t9170*t9185*t9186*var4[10] - 20.*t9148*t9190*t9191*var4[10] - 20.*t9148*t9154*t9171*var4[14] + 120.*t9148*t9175*t9176*t9181*var4[14] - 60.*t9148*t9170*t9185*t9186*var4[14] + 40.*t9148*t9154*t9171*var4[18] - 60.*t9148*t9175*t9176*t9181*var4[18] - 20.*t9148*t9154*t9171*var4[22];
  p_output1[23]=-20.*t4784*t9140*t9190*t9191*var4[2] - 60.*t4784*t9140*t9170*t9185*t9186*var4[6] + 40.*t4784*t9140*t9190*t9191*var4[6] - 60.*t4784*t9140*t9175*t9176*t9181*var4[10] + 120.*t4784*t9140*t9170*t9185*t9186*var4[10] - 20.*t4784*t9140*t9190*t9191*var4[10] - 20.*t4784*t9140*t9154*t9171*var4[14] + 120.*t4784*t9140*t9175*t9176*t9181*var4[14] - 60.*t4784*t9140*t9170*t9185*t9186*var4[14] + 40.*t4784*t9140*t9154*t9171*var4[18] - 60.*t4784*t9140*t9175*t9176*t9181*var4[18] - 20.*t4784*t9140*t9154*t9171*var4[22];
  p_output1[24]=1.;
  p_output1[25]=t9210;
  p_output1[26]=t9213;
  p_output1[27]=t9216;
  p_output1[28]=t9219;
  p_output1[29]=t9223;
  p_output1[30]=t9224;
  p_output1[31]=20.*t9170*t9185*t9191*var4[2] - 5.*t9190*t9209*var4[2] + 60.*t9175*t9176*t9186*var4[6] - 60.*t9170*t9185*t9191*var4[6] + 5.*t9190*t9209*var4[6] + 60.*t9154*t9171*t9181*var4[10] - 150.*t9175*t9176*t9186*var4[10] + 40.*t9170*t9185*t9191*var4[10] - 140.*t9154*t9171*t9181*var4[14] + 90.*t9175*t9176*t9186*var4[14] + 20.*t9220*t9225*var4[14] + 80.*t9154*t9171*t9181*var4[18] - 45.*t9220*t9225*var4[18] + 25.*t9220*t9225*var4[22];
  p_output1[32]=5.*t9190*t9209*var4[2] + 20.*t9177*t9191*t9246*var4[2] + 40.*t9170*t9185*t9191*var4[6] - 20.*t9190*t9191*var4[6] - 5.*t9190*t9209*var4[6] + 60.*t9170*t9186*t9190*t9246*var4[6] - 20.*t9177*t9191*t9246*var4[6] + 90.*t9175*t9176*t9186*var4[10] - 60.*t9170*t9185*t9186*var4[10] - 40.*t9170*t9185*t9191*var4[10] + 20.*t9190*t9191*var4[10] + 60.*t9176*t9181*t9185*t9246*var4[10] - 60.*t9170*t9186*t9190*t9246*var4[10] + 80.*t9154*t9171*t9181*var4[14] - 60.*t9175*t9176*t9181*var4[14] - 90.*t9175*t9176*t9186*var4[14] + 60.*t9170*t9185*t9186*var4[14] + 20.*t9171*t9175*t9246*var4[14] - 60.*t9176*t9181*t9185*t9246*var4[14] - 20.*t9154*t9171*var4[18] - 80.*t9154*t9171*t9181*var4[18] + 60.*t9175*t9176*t9181*var4[18] + 25.*t9220*t9225*var4[18] - 20.*t9171*t9175*t9246*var4[18] + 20.*t9154*t9171*var4[22] - 25.*t9220*t9225*var4[22];
  p_output1[33]=-20.*t9148*t9190*t9191*var4[3] - 60.*t9148*t9170*t9185*t9186*var4[7] + 40.*t9148*t9190*t9191*var4[7] - 60.*t9148*t9175*t9176*t9181*var4[11] + 120.*t9148*t9170*t9185*t9186*var4[11] - 20.*t9148*t9190*t9191*var4[11] - 20.*t9148*t9154*t9171*var4[15] + 120.*t9148*t9175*t9176*t9181*var4[15] - 60.*t9148*t9170*t9185*t9186*var4[15] + 40.*t9148*t9154*t9171*var4[19] - 60.*t9148*t9175*t9176*t9181*var4[19] - 20.*t9148*t9154*t9171*var4[23];
  p_output1[34]=-20.*t4784*t9140*t9190*t9191*var4[3] - 60.*t4784*t9140*t9170*t9185*t9186*var4[7] + 40.*t4784*t9140*t9190*t9191*var4[7] - 60.*t4784*t9140*t9175*t9176*t9181*var4[11] + 120.*t4784*t9140*t9170*t9185*t9186*var4[11] - 20.*t4784*t9140*t9190*t9191*var4[11] - 20.*t4784*t9140*t9154*t9171*var4[15] + 120.*t4784*t9140*t9175*t9176*t9181*var4[15] - 60.*t4784*t9140*t9170*t9185*t9186*var4[15] + 40.*t4784*t9140*t9154*t9171*var4[19] - 60.*t4784*t9140*t9175*t9176*t9181*var4[19] - 20.*t4784*t9140*t9154*t9171*var4[23];
  p_output1[35]=1.;
  p_output1[36]=t9210;
  p_output1[37]=t9213;
  p_output1[38]=t9216;
  p_output1[39]=t9219;
  p_output1[40]=t9223;
  p_output1[41]=t9224;
  p_output1[42]=20.*t9170*t9185*t9191*var4[3] - 5.*t9190*t9209*var4[3] + 60.*t9175*t9176*t9186*var4[7] - 60.*t9170*t9185*t9191*var4[7] + 5.*t9190*t9209*var4[7] + 60.*t9154*t9171*t9181*var4[11] - 150.*t9175*t9176*t9186*var4[11] + 40.*t9170*t9185*t9191*var4[11] - 140.*t9154*t9171*t9181*var4[15] + 90.*t9175*t9176*t9186*var4[15] + 20.*t9220*t9225*var4[15] + 80.*t9154*t9171*t9181*var4[19] - 45.*t9220*t9225*var4[19] + 25.*t9220*t9225*var4[23];
  p_output1[43]=5.*t9190*t9209*var4[3] + 20.*t9177*t9191*t9246*var4[3] + 40.*t9170*t9185*t9191*var4[7] - 20.*t9190*t9191*var4[7] - 5.*t9190*t9209*var4[7] + 60.*t9170*t9186*t9190*t9246*var4[7] - 20.*t9177*t9191*t9246*var4[7] + 90.*t9175*t9176*t9186*var4[11] - 60.*t9170*t9185*t9186*var4[11] - 40.*t9170*t9185*t9191*var4[11] + 20.*t9190*t9191*var4[11] + 60.*t9176*t9181*t9185*t9246*var4[11] - 60.*t9170*t9186*t9190*t9246*var4[11] + 80.*t9154*t9171*t9181*var4[15] - 60.*t9175*t9176*t9181*var4[15] - 90.*t9175*t9176*t9186*var4[15] + 60.*t9170*t9185*t9186*var4[15] + 20.*t9171*t9175*t9246*var4[15] - 60.*t9176*t9181*t9185*t9246*var4[15] - 20.*t9154*t9171*var4[19] - 80.*t9154*t9171*t9181*var4[19] + 60.*t9175*t9176*t9181*var4[19] + 25.*t9220*t9225*var4[19] - 20.*t9171*t9175*t9246*var4[19] + 20.*t9154*t9171*var4[23] - 25.*t9220*t9225*var4[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "J_d1y_time_RightStance.hh"

namespace RightStance
{

void J_d1y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
