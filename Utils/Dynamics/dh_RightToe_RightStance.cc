/*
 * Automatically Generated from Mathematica.
 * Tue 29 Oct 2019 19:41:55 GMT-07:00
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
  double t8798;
  double t8800;
  double t8797;
  double t8801;
  double t4509;
  double t8799;
  double t8812;
  double t8813;
  double t8815;
  double t8816;
  double t8817;
  double t8818;
  double t4581;
  double t8793;
  double t8814;
  double t8819;
  double t8820;
  double t8821;
  double t8822;
  double t8823;
  double t8824;
  double t8828;
  double t8829;
  double t8830;
  double t8840;
  double t8847;
  double t8848;
  double t8849;
  double t8846;
  double t8850;
  double t8851;
  double t8852;
  double t8853;
  double t8854;
  t8798 = Cos(var1[3]);
  t8800 = Sin(var1[2]);
  t8797 = Cos(var1[2]);
  t8801 = Sin(var1[3]);
  t4509 = Cos(var1[4]);
  t8799 = t8797*t8798;
  t8812 = -1.*t8800*t8801;
  t8813 = t8799 + t8812;
  t8815 = -1.*t8798*t8800;
  t8816 = -1.*t8797*t8801;
  t8817 = t8815 + t8816;
  t8818 = Sin(var1[4]);
  t4581 = -1.*t4509;
  t8793 = 1. + t4581;
  t8814 = 0.4*t8793*t8813;
  t8819 = -0.4*t8817*t8818;
  t8820 = t4509*t8813;
  t8821 = t8817*t8818;
  t8822 = t8820 + t8821;
  t8823 = 0.8*t8822;
  t8824 = t8814 + t8819 + t8823;
  t8828 = t8798*t8800;
  t8829 = t8797*t8801;
  t8830 = t8828 + t8829;
  t8840 = t4509*t8817;
  t8847 = -1.*t8797*t8798;
  t8848 = t8800*t8801;
  t8849 = t8847 + t8848;
  t8846 = 0.4*t8793*t8817;
  t8850 = -0.4*t8849*t8818;
  t8851 = t8849*t8818;
  t8852 = t8840 + t8851;
  t8853 = 0.8*t8852;
  t8854 = t8846 + t8850 + t8853;
  p_output1[0]=var2[0] + t8824*var2[2] + t8824*var2[3] + (-0.4*t4509*t8813 + 0.4*t8818*t8830 + 0.8*(t8820 - 1.*t8818*t8830))*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t8854*var2[2] + t8854*var2[3] + (-0.4*t4509*t8817 + 0.4*t8813*t8818 + 0.8*(-1.*t8813*t8818 + t8840))*var2[4];
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

#include "dh_RightToe_RightStance.hh"

namespace RightStance
{

void dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
