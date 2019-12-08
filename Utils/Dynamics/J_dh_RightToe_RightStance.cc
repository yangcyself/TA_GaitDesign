/*
 * Automatically Generated from Mathematica.
 * Tue 29 Oct 2019 19:41:57 GMT-07:00
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
  double t8827;
  double t6622;
  double t8825;
  double t8831;
  double t6546;
  double t8826;
  double t8832;
  double t8833;
  double t8835;
  double t8836;
  double t8837;
  double t8838;
  double t8841;
  double t8859;
  double t8860;
  double t8861;
  double t8856;
  double t8857;
  double t8858;
  double t8862;
  double t8863;
  double t8864;
  double t8865;
  double t8866;
  double t8834;
  double t8839;
  double t8842;
  double t8843;
  double t8844;
  double t8845;
  double t8855;
  double t8867;
  double t8868;
  double t8869;
  double t8872;
  double t8873;
  double t8874;
  double t8882;
  double t8883;
  double t8884;
  double t8885;
  double t8886;
  double t8887;
  double t8888;
  double t8897;
  double t8903;
  double t8904;
  double t8905;
  double t8906;
  double t8907;
  double t8908;
  double t8895;
  double t8896;
  double t8898;
  double t8899;
  double t8900;
  double t8901;
  double t8902;
  double t8909;
  double t8910;
  double t8911;
  t8827 = Cos(var1[2]);
  t6622 = Cos(var1[3]);
  t8825 = Sin(var1[2]);
  t8831 = Sin(var1[3]);
  t6546 = Cos(var1[4]);
  t8826 = -1.*t6622*t8825;
  t8832 = -1.*t8827*t8831;
  t8833 = t8826 + t8832;
  t8835 = t8827*t6622;
  t8836 = -1.*t8825*t8831;
  t8837 = t8835 + t8836;
  t8838 = Sin(var1[4]);
  t8841 = t6546*t8833;
  t8859 = -1.*t8827*t6622;
  t8860 = t8825*t8831;
  t8861 = t8859 + t8860;
  t8856 = -1.*t6546;
  t8857 = 1. + t8856;
  t8858 = 0.4*t8857*t8833;
  t8862 = -0.4*t8861*t8838;
  t8863 = t8861*t8838;
  t8864 = t8841 + t8863;
  t8865 = 0.8*t8864;
  t8866 = t8858 + t8862 + t8865;
  t8834 = -0.4*t6546*t8833;
  t8839 = 0.4*t8837*t8838;
  t8842 = -1.*t8837*t8838;
  t8843 = t8841 + t8842;
  t8844 = 0.8*t8843;
  t8845 = t8834 + t8839 + t8844;
  t8855 = var2[4]*t8845;
  t8867 = var2[2]*t8866;
  t8868 = var2[3]*t8866;
  t8869 = t8855 + t8867 + t8868;
  t8872 = t6622*t8825;
  t8873 = t8827*t8831;
  t8874 = t8872 + t8873;
  t8882 = 0.4*t8857*t8837;
  t8883 = -0.4*t8833*t8838;
  t8884 = t6546*t8837;
  t8885 = t8833*t8838;
  t8886 = t8884 + t8885;
  t8887 = 0.8*t8886;
  t8888 = t8882 + t8883 + t8887;
  t8897 = t6546*t8861;
  t8903 = 0.4*t8857*t8861;
  t8904 = -0.4*t8874*t8838;
  t8905 = t8874*t8838;
  t8906 = t8897 + t8905;
  t8907 = 0.8*t8906;
  t8908 = t8903 + t8904 + t8907;
  t8895 = -0.4*t6546*t8861;
  t8896 = 0.4*t8833*t8838;
  t8898 = -1.*t8833*t8838;
  t8899 = t8897 + t8898;
  t8900 = 0.8*t8899;
  t8901 = t8895 + t8896 + t8900;
  t8902 = var2[4]*t8901;
  t8909 = var2[2]*t8908;
  t8910 = var2[3]*t8908;
  t8911 = t8902 + t8909 + t8910;
  p_output1[0]=t8869;
  p_output1[1]=t8869;
  p_output1[2]=t8845*var2[2] + t8845*var2[3] + (t8839 + 0.4*t6546*t8874 + 0.8*(t8842 - 1.*t6546*t8874))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t8888;
  p_output1[5]=t8888;
  p_output1[6]=-0.4*t6546*t8837 + 0.4*t8838*t8874 + 0.8*(-1.*t8838*t8874 + t8884);
  p_output1[7]=t8911;
  p_output1[8]=t8911;
  p_output1[9]=t8901*var2[2] + t8901*var2[3] + (0.4*t6546*t8837 + t8896 + 0.8*(-1.*t6546*t8837 + t8898))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t8866;
  p_output1[12]=t8866;
  p_output1[13]=t8845;
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

#include "J_dh_RightToe_RightStance.hh"

namespace RightStance
{

void J_dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
