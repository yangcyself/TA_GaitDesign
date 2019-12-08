/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:57:33 GMT-08:00
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
  double t90;
  double t124;
  double t4802;
  double t5706;
  double t5830;
  double t5875;
  double t5905;
  double t5954;
  double t6007;
  double t6023;
  double t6058;
  double t6115;
  double t6411;
  double t8403;
  double t6562;
  double t6574;
  double t6590;
  double t8494;
  double t8495;
  double t8592;
  double t9037;
  double t9977;
  double t10572;
  double t10741;
  double t10788;
  double t12192;
  double t5926;
  double t5967;
  double t5979;
  double t5987;
  double t6124;
  double t6138;
  double t6142;
  double t6144;
  double t6145;
  double t6200;
  double t6245;
  double t14061;
  double t14076;
  double t14077;
  double t9582;
  double t14449;
  double t10034;
  double t10545;
  double t10546;
  double t12255;
  double t12356;
  double t12362;
  double t13137;
  double t13341;
  double t16279;
  double t16280;
  double t16282;
  double t13971;
  double t13972;
  double t14078;
  double t14087;
  double t14089;
  double t14169;
  double t14285;
  double t14343;
  double t16351;
  double t16354;
  double t16355;
  double t15934;
  double t15956;
  double t15963;
  double t16087;
  double t16266;
  double t16278;
  double t16286;
  double t16292;
  double t16293;
  double t16294;
  double t16296;
  double t16350;
  double t16362;
  double t16363;
  double t16364;
  t90 = Cos(var1[2]);
  t124 = Cos(var1[3]);
  t4802 = -1.*t90*t124;
  t5706 = Sin(var1[2]);
  t5830 = Sin(var1[3]);
  t5875 = t5706*t5830;
  t5905 = t4802 + t5875;
  t5954 = Cos(var1[4]);
  t6007 = t124*t5706;
  t6023 = t90*t5830;
  t6058 = t6007 + t6023;
  t6115 = Sin(var1[4]);
  t6411 = Cos(var1[5]);
  t8403 = Sin(var1[5]);
  t6562 = -1.*t6411;
  t6574 = 1. + t6562;
  t6590 = -0.63*t90*t6574;
  t8494 = -0.63*t5706*t8403;
  t8495 = -1.*t90*t6411;
  t8592 = t5706*t8403;
  t9037 = t8495 + t8592;
  t9977 = Cos(var1[6]);
  t10572 = t6411*t5706;
  t10741 = t90*t8403;
  t10788 = t10572 + t10741;
  t12192 = Sin(var1[6]);
  t5926 = -7.33788*t5905;
  t5967 = -1.*t5954;
  t5979 = 1. + t5967;
  t5987 = 0.4*t5979*t5905;
  t6124 = -0.4*t6058*t6115;
  t6138 = t5954*t5905;
  t6142 = t6058*t6115;
  t6144 = t6138 + t6142;
  t6145 = 0.64*t6144;
  t6200 = t5987 + t6124 + t6145;
  t6245 = -31.392000000000003*t6200;
  t14061 = -1.*t124*t5706;
  t14076 = -1.*t90*t5830;
  t14077 = t14061 + t14076;
  t9582 = 0.74*t9037;
  t14449 = 0.63*t90*t6411;
  t10034 = -1.*t9977;
  t10545 = 1. + t10034;
  t10546 = 1.03*t10545*t9037;
  t12255 = -1.03*t10788*t12192;
  t12356 = t9977*t9037;
  t12362 = t10788*t12192;
  t13137 = t12356 + t12362;
  t13341 = 1.27*t13137;
  t16279 = -1.*t6411*t5706;
  t16280 = -1.*t90*t8403;
  t16282 = t16279 + t16280;
  t13971 = t5926 + t6245;
  t13972 = -0.4*t5954*t5905;
  t14078 = 0.4*t14077*t6115;
  t14087 = -1.*t14077*t6115;
  t14089 = t6138 + t14087;
  t14169 = 0.64*t14089;
  t14285 = t13972 + t14078 + t14169;
  t14343 = -31.392000000000003*t14285;
  t16351 = t90*t124;
  t16354 = -1.*t5706*t5830;
  t16355 = t16351 + t16354;
  t15934 = t14449 + t8494 + t9582;
  t15956 = -66.708*t15934;
  t15963 = t14449 + t8494 + t10546 + t12255 + t13341;
  t16087 = -31.392000000000003*t15963;
  t16266 = t15956 + t16087;
  t16278 = -1.03*t9977*t9037;
  t16286 = 1.03*t16282*t12192;
  t16292 = -1.*t16282*t12192;
  t16293 = t12356 + t16292;
  t16294 = 1.27*t16293;
  t16296 = t16278 + t16286 + t16294;
  t16350 = -31.392000000000003*t16296;
  t16362 = t90*t6411;
  t16363 = -1.*t5706*t8403;
  t16364 = t16362 + t16363;
  p_output1[0]=t5926 + t6245 - 31.392000000000003*(t10546 + t12255 + t13341 + t6590 + t8494) + 28.252799999999997*t90 - 66.708*(t6590 + t8494 + t9582);
  p_output1[1]=t13971;
  p_output1[2]=t14343;
  p_output1[3]=t16266;
  p_output1[4]=t16350;
  p_output1[5]=t13971;
  p_output1[6]=t13971;
  p_output1[7]=t14343;
  p_output1[8]=t14343;
  p_output1[9]=t14343;
  p_output1[10]=-31.392000000000003*(t14078 + 0.4*t16355*t5954 + 0.64*(t14087 - 1.*t16355*t5954));
  p_output1[11]=t16266;
  p_output1[12]=t16266;
  p_output1[13]=t16350;
  p_output1[14]=t16350;
  p_output1[15]=t16350;
  p_output1[16]=-31.392000000000003*(t16286 + 1.03*t16364*t9977 + 1.27*(t16292 - 1.*t16364*t9977));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ge_vec_five_link_walker.hh"

namespace LeftStance
{

void J_Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
