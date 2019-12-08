/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:57:54 GMT-08:00
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
  double t16406;
  double t7271;
  double t12377;
  double t16465;
  double t6821;
  double t14096;
  double t16466;
  double t16467;
  double t16469;
  double t16470;
  double t16474;
  double t16475;
  double t16477;
  double t16500;
  double t16501;
  double t16502;
  double t16487;
  double t16488;
  double t16489;
  double t16499;
  double t16503;
  double t16504;
  double t16505;
  double t16506;
  double t16468;
  double t16476;
  double t16478;
  double t16479;
  double t16480;
  double t16481;
  double t16482;
  double t16509;
  double t16510;
  double t16511;
  double t16517;
  double t16518;
  double t16519;
  double t16484;
  double t16485;
  double t16528;
  double t16529;
  double t16530;
  double t16531;
  double t16532;
  double t16533;
  double t16534;
  double t16546;
  double t16553;
  double t16554;
  double t16555;
  double t16556;
  double t16557;
  double t16558;
  double t16544;
  double t16545;
  double t16547;
  double t16548;
  double t16549;
  double t16550;
  double t16551;
  double t16561;
  double t16562;
  double t16563;
  double t16486;
  double t16507;
  t16406 = Cos(var1[2]);
  t7271 = Cos(var1[5]);
  t12377 = Sin(var1[2]);
  t16465 = Sin(var1[5]);
  t6821 = Cos(var1[6]);
  t14096 = -1.*t7271*t12377;
  t16466 = -1.*t16406*t16465;
  t16467 = t14096 + t16466;
  t16469 = t16406*t7271;
  t16470 = -1.*t12377*t16465;
  t16474 = t16469 + t16470;
  t16475 = Sin(var1[6]);
  t16477 = t6821*t16467;
  t16500 = -1.*t16406*t7271;
  t16501 = t12377*t16465;
  t16502 = t16500 + t16501;
  t16487 = 0.63*t16406*t16465;
  t16488 = -1.*t6821;
  t16489 = 1. + t16488;
  t16499 = 1.03*t16489*t16467;
  t16503 = -1.03*t16502*t16475;
  t16504 = t16502*t16475;
  t16505 = t16477 + t16504;
  t16506 = 1.43*t16505;
  t16468 = -1.03*t6821*t16467;
  t16476 = 1.03*t16474*t16475;
  t16478 = -1.*t16474*t16475;
  t16479 = t16477 + t16478;
  t16480 = 1.43*t16479;
  t16481 = t16468 + t16476 + t16480;
  t16482 = var2[6]*t16481;
  t16509 = 0.63*t7271*t12377;
  t16510 = t16509 + t16487 + t16499 + t16503 + t16506;
  t16511 = var2[5]*t16510;
  t16517 = t7271*t12377;
  t16518 = t16406*t16465;
  t16519 = t16517 + t16518;
  t16484 = -1.*t7271;
  t16485 = 1. + t16484;
  t16528 = 0.63*t12377*t16465;
  t16529 = 1.03*t16489*t16474;
  t16530 = -1.03*t16467*t16475;
  t16531 = t6821*t16474;
  t16532 = t16467*t16475;
  t16533 = t16531 + t16532;
  t16534 = 1.43*t16533;
  t16546 = t6821*t16502;
  t16553 = -0.63*t12377*t16465;
  t16554 = 1.03*t16489*t16502;
  t16555 = -1.03*t16519*t16475;
  t16556 = t16519*t16475;
  t16557 = t16546 + t16556;
  t16558 = 1.43*t16557;
  t16544 = -1.03*t6821*t16502;
  t16545 = 1.03*t16467*t16475;
  t16547 = -1.*t16467*t16475;
  t16548 = t16546 + t16547;
  t16549 = 1.43*t16548;
  t16550 = t16544 + t16545 + t16549;
  t16551 = var2[6]*t16550;
  t16561 = 0.63*t16406*t7271;
  t16562 = t16561 + t16553 + t16554 + t16555 + t16558;
  t16563 = var2[5]*t16562;
  t16486 = -0.63*t16485*t12377;
  t16507 = t16486 + t16487 + t16499 + t16503 + t16506;
  p_output1[0]=t16482 + t16511 + t16507*var2[2];
  p_output1[1]=t16482 + t16511 + t16510*var2[2];
  p_output1[2]=t16481*var2[2] + t16481*var2[5] + (t16476 + 1.03*t16519*t6821 + 1.43*(t16478 - 1.*t16519*t6821))*var2[6];
  p_output1[3]=1.;
  p_output1[4]=0.63*t16406*t16485 + t16528 + t16529 + t16530 + t16534;
  p_output1[5]=t16528 + t16529 + t16530 + t16534 - 0.63*t16406*t7271;
  p_output1[6]=1.03*t16475*t16519 + 1.43*(-1.*t16475*t16519 + t16531) - 1.03*t16474*t6821;
  p_output1[7]=t16551 + t16563 + (-0.63*t16406*t16485 + t16553 + t16554 + t16555 + t16558)*var2[2];
  p_output1[8]=t16551 + t16563 + t16562*var2[2];
  p_output1[9]=t16550*var2[2] + t16550*var2[5] + (t16545 + 1.03*t16474*t6821 + 1.43*(t16547 - 1.*t16474*t6821))*var2[6];
  p_output1[10]=1.;
  p_output1[11]=t16507;
  p_output1[12]=t16510;
  p_output1[13]=t16481;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_LeftToe_LeftStance.hh"

namespace LeftStance
{

void J_dh_LeftToe_LeftStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
