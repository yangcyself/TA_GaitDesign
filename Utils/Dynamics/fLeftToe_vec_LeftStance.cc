/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:56:01 GMT-08:00
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
  double t1028;
  double t1052;
  double t1129;
  double t2901;
  double t5748;
  double t11862;
  double t11872;
  double t11875;
  double t11877;
  double t11878;
  double t11879;
  double t11887;
  double t1086;
  double t1124;
  double t5893;
  double t9494;
  double t11925;
  double t11927;
  double t11929;
  double t3136;
  double t11876;
  double t11896;
  double t11900;
  double t11901;
  double t11902;
  double t11903;
  double t11923;
  double t11924;
  double t11932;
  double t11933;
  double t11934;
  double t11939;
  double t11943;
  double t11955;
  double t11956;
  double t11957;
  t1028 = Cos(var1[2]);
  t1052 = Cos(var1[5]);
  t1129 = Sin(var1[2]);
  t2901 = Sin(var1[5]);
  t5748 = Cos(var1[6]);
  t11862 = t1028*t1052;
  t11872 = -1.*t1129*t2901;
  t11875 = t11862 + t11872;
  t11877 = -1.*t1052*t1129;
  t11878 = -1.*t1028*t2901;
  t11879 = t11877 + t11878;
  t11887 = Sin(var1[6]);
  t1086 = -1.*t1052;
  t1124 = 1. + t1086;
  t5893 = -1.*t5748;
  t9494 = 1. + t5893;
  t11925 = -1.*t1028*t1052;
  t11927 = t1129*t2901;
  t11929 = t11925 + t11927;
  t3136 = 0.63*t1129*t2901;
  t11876 = 1.03*t9494*t11875;
  t11896 = -1.03*t11879*t11887;
  t11900 = t5748*t11875;
  t11901 = t11879*t11887;
  t11902 = t11900 + t11901;
  t11903 = 1.43*t11902;
  t11923 = 0.63*t1028*t2901;
  t11924 = 1.03*t9494*t11879;
  t11932 = -1.03*t11929*t11887;
  t11933 = t5748*t11879;
  t11934 = t11929*t11887;
  t11939 = t11933 + t11934;
  t11943 = 1.43*t11939;
  t11955 = t1052*t1129;
  t11956 = t1028*t2901;
  t11957 = t11955 + t11956;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=(0.63*t1028*t1124 + t11876 + t11896 + t11903 + t3136)*var2[0] + (-0.63*t1124*t1129 + t11923 + t11924 + t11932 + t11943)*var2[2];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(-0.63*t1028*t1052 + t11876 + t11896 + t11903 + t3136)*var2[0] + (0.63*t1052*t1129 + t11923 + t11924 + t11932 + t11943)*var2[2];
  p_output1[6]=(1.03*t11887*t11957 + 1.43*(t11900 - 1.*t11887*t11957) - 1.03*t11875*t5748)*var2[0] + (1.03*t11875*t11887 + 1.43*(-1.*t11875*t11887 + t11933) - 1.03*t11879*t5748)*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fLeftToe_vec_LeftStance.hh"

namespace LeftStance
{

void fLeftToe_vec_LeftStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
