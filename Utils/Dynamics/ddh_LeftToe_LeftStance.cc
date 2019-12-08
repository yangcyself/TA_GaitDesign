/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:57:58 GMT-08:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t10472;
  double t13892;
  double t13926;
  double t16508;
  double t16513;
  double t16516;
  double t16520;
  double t16521;
  double t16523;
  double t16524;
  double t16525;
  double t16526;
  double t10473;
  double t13563;
  double t16514;
  double t16515;
  double t16542;
  double t16543;
  double t16552;
  double t16539;
  double t16540;
  double t16541;
  double t16559;
  double t16560;
  double t16564;
  double t16565;
  double t16566;
  double t16567;
  double t16570;
  double t16571;
  double t16574;
  double t16575;
  double t16576;
  double t16577;
  double t16578;
  double t16579;
  double t16582;
  double t16583;
  double t16584;
  double t16585;
  double t16586;
  double t16587;
  double t16588;
  double t16603;
  double t16604;
  double t16605;
  double t16601;
  double t16602;
  double t16606;
  double t16607;
  double t16608;
  double t16609;
  double t16599;
  double t16612;
  double t16613;
  double t16614;
  double t16600;
  double t16610;
  double t16611;
  double t16627;
  double t16629;
  double t16634;
  double t16635;
  double t16636;
  double t16637;
  double t16638;
  double t16645;
  double t16646;
  double t16647;
  double t16648;
  double t16649;
  double t16650;
  double t16643;
  double t16653;
  double t16654;
  double t16655;
  t10472 = Cos(var1[5]);
  t13892 = Sin(var1[2]);
  t13926 = Cos(var1[2]);
  t16508 = Sin(var1[5]);
  t16513 = Cos(var1[6]);
  t16516 = t10472*t13892;
  t16520 = t13926*t16508;
  t16521 = t16516 + t16520;
  t16523 = t13926*t10472;
  t16524 = -1.*t13892*t16508;
  t16525 = t16523 + t16524;
  t16526 = Sin(var1[6]);
  t10473 = -1.*t10472;
  t13563 = 1. + t10473;
  t16514 = -1.*t16513;
  t16515 = 1. + t16514;
  t16542 = -1.*t10472*t13892;
  t16543 = -1.*t13926*t16508;
  t16552 = t16542 + t16543;
  t16539 = 0.63*t13926*t13563;
  t16540 = 0.63*t13892*t16508;
  t16541 = 1.03*t16515*t16525;
  t16559 = -1.03*t16552*t16526;
  t16560 = t16513*t16525;
  t16564 = t16552*t16526;
  t16565 = t16560 + t16564;
  t16566 = 1.43*t16565;
  t16567 = t16539 + t16540 + t16541 + t16559 + t16566;
  t16570 = -0.63*t13926*t10472;
  t16571 = t16570 + t16540 + t16541 + t16559 + t16566;
  t16574 = -1.03*t16513*t16525;
  t16575 = 1.03*t16521*t16526;
  t16576 = -1.*t16521*t16526;
  t16577 = t16560 + t16576;
  t16578 = 1.43*t16577;
  t16579 = t16574 + t16575 + t16578;
  t16582 = -1.03*t16513*t16552;
  t16583 = 1.03*t16525*t16526;
  t16584 = t16513*t16552;
  t16585 = -1.*t16525*t16526;
  t16586 = t16584 + t16585;
  t16587 = 1.43*t16586;
  t16588 = t16582 + t16583 + t16587;
  t16603 = -1.*t13926*t10472;
  t16604 = t13892*t16508;
  t16605 = t16603 + t16604;
  t16601 = 0.63*t13926*t16508;
  t16602 = 1.03*t16515*t16552;
  t16606 = -1.03*t16605*t16526;
  t16607 = t16605*t16526;
  t16608 = t16584 + t16607;
  t16609 = 1.43*t16608;
  t16599 = var2[6]*t16588;
  t16612 = 0.63*t10472*t13892;
  t16613 = t16612 + t16601 + t16602 + t16606 + t16609;
  t16614 = var2[5]*t16613;
  t16600 = -0.63*t13563*t13892;
  t16610 = t16600 + t16601 + t16602 + t16606 + t16609;
  t16611 = var2[2]*t16610;
  t16627 = 1.03*t16552*t16526;
  t16629 = -1.*t16552*t16526;
  t16634 = -1.03*t16513*t16605;
  t16635 = t16513*t16605;
  t16636 = t16635 + t16629;
  t16637 = 1.43*t16636;
  t16638 = t16634 + t16627 + t16637;
  t16645 = -0.63*t13892*t16508;
  t16646 = 1.03*t16515*t16605;
  t16647 = -1.03*t16521*t16526;
  t16648 = t16521*t16526;
  t16649 = t16635 + t16648;
  t16650 = 1.43*t16649;
  t16643 = var2[6]*t16638;
  t16653 = 0.63*t13926*t10472;
  t16654 = t16653 + t16645 + t16646 + t16647 + t16650;
  t16655 = var2[5]*t16654;
  p_output1[0]=0.63*t13563*t13892 - 0.63*t13926*t16508 + 1.03*t16515*t16521 - 1.03*t16525*t16526 + 1.43*(t16513*t16521 + t16525*t16526) + var1[0] + var2[0] + t16567*var2[2] + (t16599 + t16611 + t16614)*var2[2] + t16571*var2[5] + (t16599 + t16614 + t16613*var2[2])*var2[5] + t16579*var2[6] + var2[6]*(t16588*var2[2] + t16588*var2[5] + (1.03*t16513*t16521 + t16583 + 1.43*(-1.*t16513*t16521 + t16585))*var2[6]) + var3[0] + t16567*var3[2] + t16571*var3[5] + t16579*var3[6] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t16539 + t16540 + t16541 + t16559 + t16566 + t16599 + t16611 + t16614 + var1[1] + var2[1] + var2[2]*(t16643 + t16655 + (-0.63*t13563*t13926 + t16645 + t16646 + t16647 + t16650)*var2[2]) + (t16643 + t16655 + t16654*var2[2])*var2[5] + var2[6]*(t16638*var2[2] + t16638*var2[5] + (1.03*t16513*t16525 + t16627 + 1.43*(-1.*t16513*t16525 + t16629))*var2[6]) + var3[1] + t16610*var3[2] + t16613*var3[5] + t16588*var3[6] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_LeftToe_LeftStance.hh"

namespace LeftStance
{

void ddh_LeftToe_LeftStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
