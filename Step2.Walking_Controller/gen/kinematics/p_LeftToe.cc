/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 16:49:42 GMT-08:00
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
  double t27;
  double t43;
  double t46;
  double t47;
  double t51;
  double t58;
  double t61;
  double t62;
  double t64;
  double t65;
  double t66;
  double t67;
  double t31;
  double t37;
  double t40;
  double t41;
  double t48;
  double t49;
  double t52;
  double t53;
  double t54;
  double t55;
  double t68;
  double t69;
  double t79;
  double t80;
  double t81;
  t27 = Cos(var1[5]);
  t43 = Sin(var1[2]);
  t46 = Cos(var1[2]);
  t47 = Sin(var1[5]);
  t51 = Cos(var1[6]);
  t58 = t27*t43;
  t61 = t46*t47;
  t62 = t58 + t61;
  t64 = t46*t27;
  t65 = -1.*t43*t47;
  t66 = t64 + t65;
  t67 = Sin(var1[6]);
  t31 = -1.*t27;
  t37 = 1. + t31;
  t40 = 0.63*t37;
  t41 = 0. + t40;
  t48 = -0.63*t47;
  t49 = 0. + t48;
  t52 = -1.*t51;
  t53 = 1. + t52;
  t54 = 1.03*t53;
  t55 = 0. + t54;
  t68 = -1.03*t67;
  t69 = 0. + t68;
  t79 = -1.*t27*t43;
  t80 = -1.*t46*t47;
  t81 = t79 + t80;
  p_output1[0]=0. + t41*t43 + t46*t49 + t55*t62 + 1.43*(t51*t62 + t66*t67) + t66*t69 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t41*t46 - 1.*t43*t49 + t55*t66 + t69*t81 + 1.43*(t51*t66 + t67*t81) + var1[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_LeftToe.hh"

namespace SymExpression
{

void p_LeftToe_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
