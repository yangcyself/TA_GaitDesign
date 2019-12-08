/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:57:48 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t6007;
  double t14024;
  double t16411;
  double t16412;
  double t16414;
  double t16417;
  double t16418;
  double t16419;
  double t16421;
  double t16425;
  double t16426;
  double t16427;
  double t16413;
  double t16415;
  double t16416;
  double t16420;
  double t16428;
  double t16429;
  double t16430;
  double t16431;
  double t16432;
  double t16437;
  double t16438;
  double t16439;
  double t14200;
  double t14343;
  double t16448;
  double t16449;
  double t16450;
  double t16446;
  double t16447;
  double t16451;
  double t16452;
  double t16453;
  double t16454;
  double t16455;
  t6007 = Cos(var1[2]);
  t14024 = Cos(var1[5]);
  t16411 = Sin(var1[2]);
  t16412 = Sin(var1[5]);
  t16414 = Cos(var1[6]);
  t16417 = t6007*t14024;
  t16418 = -1.*t16411*t16412;
  t16419 = t16417 + t16418;
  t16421 = -1.*t14024*t16411;
  t16425 = -1.*t6007*t16412;
  t16426 = t16421 + t16425;
  t16427 = Sin(var1[6]);
  t16413 = 0.63*t16411*t16412;
  t16415 = -1.*t16414;
  t16416 = 1. + t16415;
  t16420 = 1.03*t16416*t16419;
  t16428 = -1.03*t16426*t16427;
  t16429 = t16414*t16419;
  t16430 = t16426*t16427;
  t16431 = t16429 + t16430;
  t16432 = 1.43*t16431;
  t16437 = t14024*t16411;
  t16438 = t6007*t16412;
  t16439 = t16437 + t16438;
  t14200 = -1.*t14024;
  t14343 = 1. + t14200;
  t16448 = -1.*t6007*t14024;
  t16449 = t16411*t16412;
  t16450 = t16448 + t16449;
  t16446 = 0.63*t6007*t16412;
  t16447 = 1.03*t16416*t16426;
  t16451 = -1.03*t16450*t16427;
  t16452 = t16414*t16426;
  t16453 = t16450*t16427;
  t16454 = t16452 + t16453;
  t16455 = 1.43*t16454;
  p_output1[0]=1.;
  p_output1[1]=t16413 + t16420 + t16428 + t16432 + 0.63*t14343*t6007;
  p_output1[2]=t16413 + t16420 + t16428 + t16432 - 0.63*t14024*t6007;
  p_output1[3]=-1.03*t16414*t16419 + 1.03*t16427*t16439 + 1.43*(t16429 - 1.*t16427*t16439);
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=-0.63*t14343*t16411 + t16446 + t16447 + t16451 + t16455;
  p_output1[8]=0.63*t14024*t16411 + t16446 + t16447 + t16451 + t16455;
  p_output1[9]=-1.03*t16414*t16426 + 1.03*t16419*t16427 + 1.43*(-1.*t16419*t16427 + t16452);
  p_output1[10]=-1.;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_LeftToe_LeftStance.hh"

namespace LeftStance
{

void J_h_LeftToe_LeftStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
