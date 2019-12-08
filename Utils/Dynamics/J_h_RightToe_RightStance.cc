/*
 * Automatically Generated from Mathematica.
 * Tue 29 Oct 2019 19:41:51 GMT-07:00
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
  double t8773;
  double t8775;
  double t8772;
  double t8776;
  double t4370;
  double t8774;
  double t8777;
  double t8778;
  double t8783;
  double t8784;
  double t8785;
  double t8786;
  double t8766;
  double t8771;
  double t8779;
  double t8787;
  double t8788;
  double t8789;
  double t8790;
  double t8791;
  double t8792;
  double t8794;
  double t8795;
  double t8796;
  double t8803;
  double t8804;
  double t8805;
  double t8802;
  double t8806;
  double t8807;
  double t8808;
  double t8809;
  double t8810;
  double t8811;
  t8773 = Cos(var1[3]);
  t8775 = Sin(var1[2]);
  t8772 = Cos(var1[2]);
  t8776 = Sin(var1[3]);
  t4370 = Cos(var1[4]);
  t8774 = t8772*t8773;
  t8777 = -1.*t8775*t8776;
  t8778 = t8774 + t8777;
  t8783 = -1.*t8773*t8775;
  t8784 = -1.*t8772*t8776;
  t8785 = t8783 + t8784;
  t8786 = Sin(var1[4]);
  t8766 = -1.*t4370;
  t8771 = 1. + t8766;
  t8779 = 0.4*t8771*t8778;
  t8787 = -0.4*t8785*t8786;
  t8788 = t4370*t8778;
  t8789 = t8785*t8786;
  t8790 = t8788 + t8789;
  t8791 = 0.8*t8790;
  t8792 = t8779 + t8787 + t8791;
  t8794 = t8773*t8775;
  t8795 = t8772*t8776;
  t8796 = t8794 + t8795;
  t8803 = -1.*t8772*t8773;
  t8804 = t8775*t8776;
  t8805 = t8803 + t8804;
  t8802 = 0.4*t8771*t8785;
  t8806 = -0.4*t8805*t8786;
  t8807 = t4370*t8785;
  t8808 = t8805*t8786;
  t8809 = t8807 + t8808;
  t8810 = 0.8*t8809;
  t8811 = t8802 + t8806 + t8810;
  p_output1[0]=1.;
  p_output1[1]=t8792;
  p_output1[2]=t8792;
  p_output1[3]=-0.4*t4370*t8778 + 0.4*t8786*t8796 + 0.8*(t8788 - 1.*t8786*t8796);
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t8811;
  p_output1[8]=t8811;
  p_output1[9]=-0.4*t4370*t8785 + 0.4*t8778*t8786 + 0.8*(-1.*t8778*t8786 + t8807);
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

#include "J_h_RightToe_RightStance.hh"

namespace RightStance
{

void J_h_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
