/*
 * Automatically Generated from Mathematica.
 * Tue 29 Oct 2019 19:41:44 GMT-07:00
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
  double t4848;
  double t6378;
  double t4822;
  double t6585;
  double t4487;
  double t6352;
  double t6586;
  double t6604;
  double t6708;
  double t8532;
  double t8533;
  double t8590;
  double t4543;
  double t4663;
  double t8633;
  double t8696;
  double t8697;
  double t6673;
  double t8591;
  double t8603;
  double t8604;
  double t8608;
  double t8612;
  double t8631;
  double t8632;
  double t8701;
  double t8704;
  double t8705;
  double t8706;
  double t8707;
  double t8708;
  double t8709;
  double t8710;
  double t8713;
  double t8725;
  double t8728;
  double t8732;
  double t8714;
  double t8715;
  double t8716;
  double t8717;
  double t8719;
  double t8720;
  double t8721;
  double t8722;
  double t8733;
  double t8734;
  double t8735;
  double t8736;
  double t8740;
  double t8741;
  double t8742;
  double t8743;
  double t8744;
  double t8745;
  double t8746;
  double t8747;
  double t8748;
  double t8752;
  t4848 = Cos(var1[3]);
  t6378 = Sin(var1[2]);
  t4822 = Cos(var1[2]);
  t6585 = Sin(var1[3]);
  t4487 = Cos(var1[4]);
  t6352 = -1.*t4822*t4848;
  t6586 = t6378*t6585;
  t6604 = t6352 + t6586;
  t6708 = t4848*t6378;
  t8532 = t4822*t6585;
  t8533 = t6708 + t8532;
  t8590 = Sin(var1[4]);
  t4543 = -1.*t4487;
  t4663 = 1. + t4543;
  t8633 = -1.*t4848*t6378;
  t8696 = -1.*t4822*t6585;
  t8697 = t8633 + t8696;
  t6673 = 0.4*t4663*t6604;
  t8591 = -0.4*t8533*t8590;
  t8603 = t4487*t6604;
  t8604 = t8533*t8590;
  t8608 = t8603 + t8604;
  t8612 = 0.8*t8608;
  t8631 = t6673 + t8591 + t8612;
  t8632 = var2[2]*t8631;
  t8701 = 0.4*t4663*t8697;
  t8704 = -0.4*t6604*t8590;
  t8705 = t4487*t8697;
  t8706 = t6604*t8590;
  t8707 = t8705 + t8706;
  t8708 = 0.8*t8707;
  t8709 = t8701 + t8704 + t8708;
  t8710 = var2[0]*t8709;
  t8713 = t8632 + t8710;
  t8725 = t4822*t4848;
  t8728 = -1.*t6378*t6585;
  t8732 = t8725 + t8728;
  t8714 = -0.4*t4487*t6604;
  t8715 = 0.4*t8697*t8590;
  t8716 = -1.*t8697*t8590;
  t8717 = t8603 + t8716;
  t8719 = 0.8*t8717;
  t8720 = t8714 + t8715 + t8719;
  t8721 = var2[2]*t8720;
  t8722 = -0.4*t4487*t8697;
  t8733 = 0.4*t8732*t8590;
  t8734 = -1.*t8732*t8590;
  t8735 = t8705 + t8734;
  t8736 = 0.8*t8735;
  t8740 = t8722 + t8733 + t8736;
  t8741 = var2[0]*t8740;
  t8742 = t8721 + t8741;
  t8743 = 0.4*t4663*t8732;
  t8744 = -0.4*t8697*t8590;
  t8745 = t4487*t8732;
  t8746 = t8697*t8590;
  t8747 = t8745 + t8746;
  t8748 = 0.8*t8747;
  t8752 = t8743 + t8744 + t8748;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t8713;
  p_output1[3]=t8713;
  p_output1[4]=t8742;
  p_output1[5]=t8752;
  p_output1[6]=t8709;
  p_output1[7]=t8713;
  p_output1[8]=t8713;
  p_output1[9]=t8742;
  p_output1[10]=t8752;
  p_output1[11]=t8709;
  p_output1[12]=t8742;
  p_output1[13]=t8742;
  p_output1[14]=(0.4*t4487*t8533 + t8733 + 0.8*(-1.*t4487*t8533 + t8734))*var2[0] + (t8715 + 0.4*t4487*t8732 + 0.8*(t8716 - 1.*t4487*t8732))*var2[2];
  p_output1[15]=0.4*t8533*t8590 - 0.4*t4487*t8732 + 0.8*(-1.*t8533*t8590 + t8745);
  p_output1[16]=t8740;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRightToe_vec_RightStance.hh"

namespace RightStance
{

void J_fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
