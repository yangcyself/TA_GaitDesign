/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:58:12 GMT-08:00
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
  double t11147;
  double t11129;
  double t11137;
  double t11169;
  double t5978;
  double t11146;
  double t11226;
  double t11227;
  double t11229;
  double t11234;
  double t11236;
  double t11237;
  double t6004;
  double t8943;
  double t11228;
  double t11238;
  double t11240;
  double t11251;
  double t11252;
  double t11253;
  double t11258;
  double t11260;
  double t11261;
  double t11262;
  t11147 = Cos(var1[2]);
  t11129 = Cos(var1[3]);
  t11137 = Sin(var1[2]);
  t11169 = Sin(var1[3]);
  t5978 = Cos(var1[4]);
  t11146 = -1.*t11129*t11137;
  t11226 = -1.*t11147*t11169;
  t11227 = t11146 + t11226;
  t11229 = -1.*t11147*t11129;
  t11234 = t11137*t11169;
  t11236 = t11229 + t11234;
  t11237 = Sin(var1[4]);
  t6004 = -1.*t5978;
  t8943 = 1. + t6004;
  t11228 = 0.4*t8943*t11227;
  t11238 = -0.4*t11236*t11237;
  t11240 = t5978*t11227;
  t11251 = t11236*t11237;
  t11252 = t11240 + t11251;
  t11253 = 0.8*t11252;
  t11258 = t11228 + t11238 + t11253;
  t11260 = t11147*t11129;
  t11261 = -1.*t11137*t11169;
  t11262 = t11260 + t11261;
  p_output1[0]=1.;
  p_output1[1]=t11258;
  p_output1[2]=t11258;
  p_output1[3]=0.4*t11237*t11262 + 0.8*(t11240 - 1.*t11237*t11262) - 0.4*t11227*t5978;
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

#include "J_u_rightFootHeight_LeftStance.hh"

namespace LeftStance
{

void J_u_rightFootHeight_LeftStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
