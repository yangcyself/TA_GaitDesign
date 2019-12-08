/*
 * Automatically Generated from Mathematica.
 * Tue 29 Oct 2019 19:42:02 GMT-07:00
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
  double t8879;
  double t8876;
  double t8877;
  double t8880;
  double t8870;
  double t8878;
  double t8881;
  double t8889;
  double t8891;
  double t8892;
  double t8893;
  double t8894;
  double t8871;
  double t8875;
  double t8918;
  double t8919;
  double t8920;
  double t8917;
  double t8921;
  double t8922;
  double t8923;
  double t8924;
  double t8925;
  double t8926;
  double t8931;
  double t8932;
  double t8933;
  double t8934;
  double t8935;
  double t8936;
  double t8939;
  double t8940;
  double t8941;
  double t8942;
  double t8943;
  double t8944;
  double t8945;
  double t8958;
  double t8959;
  double t8960;
  double t8957;
  double t8961;
  double t8962;
  double t8963;
  double t8964;
  double t8965;
  double t8956;
  double t8966;
  double t8967;
  double t8968;
  double t8978;
  double t8980;
  double t8985;
  double t8986;
  double t8987;
  double t8988;
  double t8989;
  double t8995;
  double t8996;
  double t8997;
  double t8998;
  double t8999;
  double t9000;
  double t8994;
  double t9001;
  double t9002;
  double t9003;
  t8879 = Cos(var1[2]);
  t8876 = Cos(var1[3]);
  t8877 = Sin(var1[2]);
  t8880 = Sin(var1[3]);
  t8870 = Cos(var1[4]);
  t8878 = t8876*t8877;
  t8881 = t8879*t8880;
  t8889 = t8878 + t8881;
  t8891 = t8879*t8876;
  t8892 = -1.*t8877*t8880;
  t8893 = t8891 + t8892;
  t8894 = Sin(var1[4]);
  t8871 = -1.*t8870;
  t8875 = 1. + t8871;
  t8918 = -1.*t8876*t8877;
  t8919 = -1.*t8879*t8880;
  t8920 = t8918 + t8919;
  t8917 = 0.4*t8875*t8893;
  t8921 = -0.4*t8920*t8894;
  t8922 = t8870*t8893;
  t8923 = t8920*t8894;
  t8924 = t8922 + t8923;
  t8925 = 0.8*t8924;
  t8926 = t8917 + t8921 + t8925;
  t8931 = -0.4*t8870*t8893;
  t8932 = 0.4*t8889*t8894;
  t8933 = -1.*t8889*t8894;
  t8934 = t8922 + t8933;
  t8935 = 0.8*t8934;
  t8936 = t8931 + t8932 + t8935;
  t8939 = -0.4*t8870*t8920;
  t8940 = 0.4*t8893*t8894;
  t8941 = t8870*t8920;
  t8942 = -1.*t8893*t8894;
  t8943 = t8941 + t8942;
  t8944 = 0.8*t8943;
  t8945 = t8939 + t8940 + t8944;
  t8958 = -1.*t8879*t8876;
  t8959 = t8877*t8880;
  t8960 = t8958 + t8959;
  t8957 = 0.4*t8875*t8920;
  t8961 = -0.4*t8960*t8894;
  t8962 = t8960*t8894;
  t8963 = t8941 + t8962;
  t8964 = 0.8*t8963;
  t8965 = t8957 + t8961 + t8964;
  t8956 = var2[4]*t8945;
  t8966 = var2[2]*t8965;
  t8967 = var2[3]*t8965;
  t8968 = t8956 + t8966 + t8967;
  t8978 = 0.4*t8920*t8894;
  t8980 = -1.*t8920*t8894;
  t8985 = -0.4*t8870*t8960;
  t8986 = t8870*t8960;
  t8987 = t8986 + t8980;
  t8988 = 0.8*t8987;
  t8989 = t8985 + t8978 + t8988;
  t8995 = 0.4*t8875*t8960;
  t8996 = -0.4*t8889*t8894;
  t8997 = t8889*t8894;
  t8998 = t8986 + t8997;
  t8999 = 0.8*t8998;
  t9000 = t8995 + t8996 + t8999;
  t8994 = var2[4]*t8989;
  t9001 = var2[2]*t9000;
  t9002 = var2[3]*t9000;
  t9003 = t8994 + t9001 + t9002;
  p_output1[0]=0.4*t8875*t8889 - 0.4*t8893*t8894 + 0.8*(t8870*t8889 + t8893*t8894) + var1[0] + var2[0] + t8926*var2[2] + t8968*var2[2] + t8926*var2[3] + t8968*var2[3] + t8936*var2[4] + var2[4]*(t8945*var2[2] + t8945*var2[3] + (0.4*t8870*t8889 + t8940 + 0.8*(-1.*t8870*t8889 + t8942))*var2[4]) + var3[0] + t8926*var3[2] + t8926*var3[3] + t8936*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t8917 + t8921 + t8925 + t8956 + t8966 + t8967 + var1[1] + var2[1] + t9003*var2[2] + t9003*var2[3] + var2[4]*(t8989*var2[2] + t8989*var2[3] + (0.4*t8870*t8893 + t8978 + 0.8*(-1.*t8870*t8893 + t8980))*var2[4]) + var3[1] + t8965*var3[2] + t8965*var3[3] + t8945*var3[4] - 1.*var4[2];
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

#include "ddh_RightToe_RightStance.hh"

namespace RightStance
{

void ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
