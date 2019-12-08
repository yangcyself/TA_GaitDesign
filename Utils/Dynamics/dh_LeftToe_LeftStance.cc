/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:57:52 GMT-08:00
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
  double t10038;
  double t13859;
  double t16433;
  double t16434;
  double t16436;
  double t16442;
  double t16443;
  double t16444;
  double t16456;
  double t16457;
  double t16458;
  double t16459;
  double t16435;
  double t16440;
  double t16441;
  double t16445;
  double t16460;
  double t16461;
  double t16462;
  double t16463;
  double t16464;
  double t16471;
  double t16472;
  double t16473;
  double t14073;
  double t14224;
  double t16483;
  double t16492;
  double t16493;
  double t16494;
  double t16490;
  double t16491;
  double t16495;
  double t16496;
  double t16497;
  double t16498;
  t10038 = Cos(var1[2]);
  t13859 = Cos(var1[5]);
  t16433 = Sin(var1[2]);
  t16434 = Sin(var1[5]);
  t16436 = Cos(var1[6]);
  t16442 = t10038*t13859;
  t16443 = -1.*t16433*t16434;
  t16444 = t16442 + t16443;
  t16456 = -1.*t13859*t16433;
  t16457 = -1.*t10038*t16434;
  t16458 = t16456 + t16457;
  t16459 = Sin(var1[6]);
  t16435 = 0.63*t16433*t16434;
  t16440 = -1.*t16436;
  t16441 = 1. + t16440;
  t16445 = 1.03*t16441*t16444;
  t16460 = -1.03*t16458*t16459;
  t16461 = t16436*t16444;
  t16462 = t16458*t16459;
  t16463 = t16461 + t16462;
  t16464 = 1.43*t16463;
  t16471 = t13859*t16433;
  t16472 = t10038*t16434;
  t16473 = t16471 + t16472;
  t14073 = -1.*t13859;
  t14224 = 1. + t14073;
  t16483 = t16436*t16458;
  t16492 = -1.*t10038*t13859;
  t16493 = t16433*t16434;
  t16494 = t16492 + t16493;
  t16490 = 0.63*t10038*t16434;
  t16491 = 1.03*t16441*t16458;
  t16495 = -1.03*t16494*t16459;
  t16496 = t16494*t16459;
  t16497 = t16483 + t16496;
  t16498 = 1.43*t16497;
  p_output1[0]=var2[0] + (0.63*t10038*t14224 + t16435 + t16445 + t16460 + t16464)*var2[2] + (-0.63*t10038*t13859 + t16435 + t16445 + t16460 + t16464)*var2[5] + (-1.03*t16436*t16444 + 1.03*t16459*t16473 + 1.43*(t16461 - 1.*t16459*t16473))*var2[6];
  p_output1[1]=0;
  p_output1[2]=var2[1] + (-0.63*t14224*t16433 + t16490 + t16491 + t16495 + t16498)*var2[2] + (0.63*t13859*t16433 + t16490 + t16491 + t16495 + t16498)*var2[5] + (-1.03*t16436*t16458 + 1.03*t16444*t16459 + 1.43*(-1.*t16444*t16459 + t16483))*var2[6];
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_LeftToe_LeftStance.hh"

namespace LeftStance
{

void dh_LeftToe_LeftStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
