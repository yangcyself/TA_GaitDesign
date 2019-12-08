/*
 * Automatically Generated from Mathematica.
 * Tue 29 Oct 2019 19:43:07 GMT-07:00
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
static void output1(double *p_output1,const double *var1)
{
  double t9194;
  double t9188;
  double t9189;
  double t9196;
  double t6651;
  double t9193;
  double t9197;
  double t9198;
  double t9200;
  double t9201;
  double t9202;
  double t9205;
  double t6663;
  double t6802;
  double t9199;
  double t9206;
  double t9207;
  double t9208;
  double t9226;
  double t9228;
  double t9229;
  double t9231;
  double t9232;
  double t9233;
  t9194 = Cos(var1[2]);
  t9188 = Cos(var1[5]);
  t9189 = Sin(var1[2]);
  t9196 = Sin(var1[5]);
  t6651 = Cos(var1[6]);
  t9193 = -1.*t9188*t9189;
  t9197 = -1.*t9194*t9196;
  t9198 = t9193 + t9197;
  t9200 = -1.*t9194*t9188;
  t9201 = t9189*t9196;
  t9202 = t9200 + t9201;
  t9205 = Sin(var1[6]);
  t6663 = -1.*t6651;
  t6802 = 1. + t6663;
  t9199 = 0.4*t6802*t9198;
  t9206 = -0.4*t9202*t9205;
  t9207 = t6651*t9198;
  t9208 = t9202*t9205;
  t9226 = t9207 + t9208;
  t9228 = 0.8*t9226;
  t9229 = t9199 + t9206 + t9228;
  t9231 = t9194*t9188;
  t9232 = -1.*t9189*t9196;
  t9233 = t9231 + t9232;
  p_output1[0]=1.;
  p_output1[1]=t9229;
  p_output1[2]=t9229;
  p_output1[3]=-0.4*t6651*t9198 + 0.4*t9205*t9233 + 0.8*(t9207 - 1.*t9205*t9233);
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_leftFootHeight_RightStance.hh"

namespace RightStance
{

void J_u_leftFootHeight_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
