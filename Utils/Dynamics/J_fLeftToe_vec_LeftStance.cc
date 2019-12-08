/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:57:41 GMT-08:00
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
  double t112;
  double t5875;
  double t6023;
  double t6138;
  double t6200;
  double t9743;
  double t9782;
  double t10572;
  double t12068;
  double t12356;
  double t12362;
  double t13378;
  double t5926;
  double t5962;
  double t6245;
  double t8592;
  double t15963;
  double t16087;
  double t16266;
  double t6142;
  double t10741;
  double t13861;
  double t13933;
  double t13971;
  double t14009;
  double t14242;
  double t15956;
  double t16296;
  double t16350;
  double t16351;
  double t16356;
  double t16357;
  double t16358;
  double t16386;
  double t16387;
  double t16388;
  double t15934;
  double t16359;
  double t16362;
  double t16365;
  double t16366;
  double t16370;
  double t16375;
  double t16376;
  double t16377;
  double t16378;
  double t16379;
  double t16380;
  double t16381;
  double t16382;
  double t16383;
  double t16384;
  double t16385;
  double t16389;
  double t16390;
  double t16391;
  double t16392;
  double t16393;
  double t16394;
  double t16395;
  double t16397;
  double t16398;
  double t16399;
  double t16400;
  double t16401;
  double t16402;
  double t16403;
  t112 = Cos(var1[2]);
  t5875 = Cos(var1[5]);
  t6023 = Sin(var1[2]);
  t6138 = Sin(var1[5]);
  t6200 = Cos(var1[6]);
  t9743 = -1.*t112*t5875;
  t9782 = t6023*t6138;
  t10572 = t9743 + t9782;
  t12068 = t5875*t6023;
  t12356 = t112*t6138;
  t12362 = t12068 + t12356;
  t13378 = Sin(var1[6]);
  t5926 = -1.*t5875;
  t5962 = 1. + t5926;
  t6245 = -1.*t6200;
  t8592 = 1. + t6245;
  t15963 = -1.*t5875*t6023;
  t16087 = -1.*t112*t6138;
  t16266 = t15963 + t16087;
  t6142 = -0.63*t6023*t6138;
  t10741 = 1.03*t8592*t10572;
  t13861 = -1.03*t12362*t13378;
  t13933 = t6200*t10572;
  t13971 = t12362*t13378;
  t14009 = t13933 + t13971;
  t14242 = 1.43*t14009;
  t15956 = 0.63*t112*t6138;
  t16296 = 1.03*t8592*t16266;
  t16350 = -1.03*t10572*t13378;
  t16351 = t6200*t16266;
  t16356 = t10572*t13378;
  t16357 = t16351 + t16356;
  t16358 = 1.43*t16357;
  t16386 = t112*t5875;
  t16387 = -1.*t6023*t6138;
  t16388 = t16386 + t16387;
  t15934 = -0.63*t5962*t6023;
  t16359 = t15934 + t15956 + t16296 + t16350 + t16358;
  t16362 = 0.63*t112*t5875;
  t16365 = t16362 + t6142 + t10741 + t13861 + t14242;
  t16366 = var2[2]*t16365;
  t16370 = 0.63*t5875*t6023;
  t16375 = t16370 + t15956 + t16296 + t16350 + t16358;
  t16376 = var2[0]*t16375;
  t16377 = t16366 + t16376;
  t16378 = -1.03*t6200*t10572;
  t16379 = 1.03*t16266*t13378;
  t16380 = -1.*t16266*t13378;
  t16381 = t13933 + t16380;
  t16382 = 1.43*t16381;
  t16383 = t16378 + t16379 + t16382;
  t16384 = var2[2]*t16383;
  t16385 = -1.03*t6200*t16266;
  t16389 = 1.03*t16388*t13378;
  t16390 = -1.*t16388*t13378;
  t16391 = t16351 + t16390;
  t16392 = 1.43*t16391;
  t16393 = t16385 + t16389 + t16392;
  t16394 = var2[0]*t16393;
  t16395 = t16384 + t16394;
  t16397 = 0.63*t6023*t6138;
  t16398 = 1.03*t8592*t16388;
  t16399 = -1.03*t16266*t13378;
  t16400 = t6200*t16388;
  t16401 = t16266*t13378;
  t16402 = t16400 + t16401;
  t16403 = 1.43*t16402;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t16359*var2[0] + (t10741 + t13861 + t14242 - 0.63*t112*t5962 + t6142)*var2[2];
  p_output1[3]=t16377;
  p_output1[4]=t16395;
  p_output1[5]=t16397 + t16398 + t16399 + t16403 + 0.63*t112*t5962;
  p_output1[6]=t16359;
  p_output1[7]=t16377;
  p_output1[8]=t16377;
  p_output1[9]=t16395;
  p_output1[10]=t16397 + t16398 + t16399 + t16403 - 0.63*t112*t5875;
  p_output1[11]=t16375;
  p_output1[12]=t16395;
  p_output1[13]=t16395;
  p_output1[14]=(t16389 + 1.03*t12362*t6200 + 1.43*(t16390 - 1.*t12362*t6200))*var2[0] + (t16379 + 1.03*t16388*t6200 + 1.43*(t16380 - 1.*t16388*t6200))*var2[2];
  p_output1[15]=1.03*t12362*t13378 + 1.43*(-1.*t12362*t13378 + t16400) - 1.03*t16388*t6200;
  p_output1[16]=t16393;
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

#include "J_fLeftToe_vec_LeftStance.hh"

namespace LeftStance
{

void J_fLeftToe_vec_LeftStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
