/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 16:49:38 GMT-08:00
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
  double t13;
  double t23;
  double t25;
  double t26;
  double t32;
  double t37;
  double t38;
  double t39;
  double t41;
  double t42;
  double t43;
  double t44;
  double t14;
  double t16;
  double t20;
  double t22;
  double t27;
  double t28;
  double t33;
  double t34;
  double t35;
  double t36;
  double t45;
  double t46;
  double t56;
  double t57;
  double t58;
  t13 = Cos(var1[5]);
  t23 = Sin(var1[2]);
  t25 = Cos(var1[2]);
  t26 = Sin(var1[5]);
  t32 = Cos(var1[6]);
  t37 = t13*t23;
  t38 = t25*t26;
  t39 = t37 + t38;
  t41 = t25*t13;
  t42 = -1.*t23*t26;
  t43 = t41 + t42;
  t44 = Sin(var1[6]);
  t14 = -1.*t13;
  t16 = 1. + t14;
  t20 = 0.63*t16;
  t22 = 0. + t20;
  t27 = -0.63*t26;
  t28 = 0. + t27;
  t33 = -1.*t32;
  t34 = 1. + t33;
  t35 = 1.03*t34;
  t36 = 0. + t35;
  t45 = -1.03*t44;
  t46 = 0. + t45;
  t56 = -1.*t13*t23;
  t57 = -1.*t25*t26;
  t58 = t56 + t57;
  p_output1[0]=0. + t22*t23 + t25*t28 + t36*t39 + 1.03*(t32*t39 + t43*t44) + t43*t46 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t22*t25 - 1.*t23*t28 + t36*t43 + t46*t58 + 1.03*(t32*t43 + t44*t58) + var1[1];
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

#include "p_q2_left.hh"

namespace SymExpression
{

void p_q2_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
