/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:57:29 GMT-08:00
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
  double t10885;
  double t6080;
  double t10676;
  double t10886;
  double t13874;
  double t10757;
  double t11795;
  double t12402;
  double t1154;
  double t13978;
  double t13993;
  double t14035;
  double t13847;
  double t14074;
  double t14092;
  double t14103;
  double t14109;
  double t14131;
  double t14194;
  double t14252;
  double t14258;
  double t14260;
  double t14284;
  double t14286;
  double t14288;
  double t14037;
  double t14059;
  double t14309;
  double t14329;
  double t14341;
  double t15964;
  double t15965;
  double t15966;
  double t16070;
  double t16071;
  double t16072;
  double t16074;
  double t16075;
  double t16068;
  double t16079;
  double t16080;
  double t16086;
  double t16275;
  double t16276;
  double t15971;
  double t16034;
  double t16043;
  double t16046;
  double t16063;
  double t16067;
  double t16190;
  double t16191;
  double t16263;
  double t16264;
  double t16265;
  double t16297;
  double t16298;
  double t16267;
  double t16277;
  double t16281;
  double t16287;
  double t16288;
  double t16289;
  double t16290;
  double t16291;
  double t16340;
  double t16346;
  double t16347;
  double t16348;
  double t16349;
  double t16333;
  double t16334;
  double t16299;
  double t16303;
  double t16307;
  double t16311;
  double t16312;
  double t16316;
  double t16317;
  double t16318;
  double t16327;
  double t16328;
  double t16329;
  double t16330;
  double t16331;
  double t16332;
  double t16335;
  double t16339;
  double t16371;
  double t16372;
  double t16373;
  double t16374;
  double t16367;
  double t16368;
  double t16369;
  double t16352;
  double t16353;
  t10885 = Cos(var1[5]);
  t6080 = Cos(var1[6]);
  t10676 = Sin(var1[5]);
  t10886 = Sin(var1[6]);
  t13874 = Cos(var1[2]);
  t10757 = -1.*t6080*t10676;
  t11795 = -1.*t10885*t10886;
  t12402 = t10757 + t11795;
  t1154 = Sin(var1[2]);
  t13978 = t10885*t6080;
  t13993 = -1.*t10676*t10886;
  t14035 = t13978 + t13993;
  t13847 = -1.*t1154*t12402;
  t14074 = -1.*t13874*t12402;
  t14092 = -1.*t10885*t6080;
  t14103 = t10676*t10886;
  t14109 = t14092 + t14103;
  t14131 = t13874*t14109;
  t14194 = t13847 + t14131;
  t14252 = 0.384*var2[0]*t14194;
  t14258 = -1.*t1154*t14109;
  t14260 = t14074 + t14258;
  t14284 = 0.384*var2[1]*t14260;
  t14286 = t14252 + t14284;
  t14288 = var2[6]*t14286;
  t14037 = -1.*t13874*t14035;
  t14059 = t13847 + t14037;
  t14309 = t13874*t12402;
  t14329 = -1.*t1154*t14035;
  t14341 = t14309 + t14329;
  t15964 = t6080*t10676;
  t15965 = t10885*t10886;
  t15966 = t15964 + t15965;
  t16070 = -1.*t6080;
  t16071 = 1. + t16070;
  t16072 = 1.03*t16071;
  t16074 = 1.27*t6080;
  t16075 = t16072 + t16074;
  t16068 = 0.63*t10676;
  t16079 = -1.*t16075*t10676;
  t16080 = -0.24*t10885*t10886;
  t16086 = t16068 + t16079 + t16080;
  t16275 = t10885*t16075;
  t16276 = -0.24*t10676*t10886;
  t15971 = t1154*t15966;
  t16034 = t15971 + t14131;
  t16043 = 0.384*var2[0]*t16034;
  t16046 = t13874*t15966;
  t16063 = t16046 + t14258;
  t16067 = 0.384*var2[1]*t16063;
  t16190 = -0.63*t10676;
  t16191 = t16075*t10676;
  t16263 = 0.24*t10885*t10886;
  t16264 = t16190 + t16191 + t16263;
  t16265 = t12402*t16264;
  t16297 = -0.24*t6080*t10676;
  t16298 = t16297 + t16080;
  t16267 = -0.63*t10885;
  t16277 = t16267 + t16275 + t16276;
  t16281 = 0.24*t10676*t10886;
  t16287 = -1.*t10885;
  t16288 = 1. + t16287;
  t16289 = 0.63*t16288;
  t16290 = t16289 + t16275 + t16276;
  t16291 = t16290*t14109;
  t16340 = t16086*t14035;
  t16346 = t16264*t14035;
  t16347 = t12402*t16290;
  t16348 = t15966*t16277;
  t16349 = t16340 + t16346 + t16347 + t16348;
  t16333 = t1154*t14109;
  t16334 = t14309 + t16333;
  t16299 = t12402*t16298;
  t16303 = t12402*t16086;
  t16307 = t16298*t15966;
  t16311 = 0.24*t10885*t6080;
  t16312 = t16311 + t16276;
  t16316 = t14035*t16312;
  t16317 = t14035*t16277;
  t16318 = -0.24*t10885*t6080;
  t16327 = t16318 + t16281;
  t16328 = t14035*t16327;
  t16329 = t16299 + t16303 + t16265 + t16307 + t16316 + t16317 + t16328 + t16291;
  t16330 = 0.384*var2[2]*t16329;
  t16331 = t16043 + t16067 + t16330;
  t16332 = var2[6]*t16331;
  t16335 = 0.384*var2[6]*t16334;
  t16339 = 0.384*var2[6]*t14194;
  t16371 = 0.63*t10886;
  t16372 = 0.24*t6080*t10886;
  t16373 = -1.*t16075*t10886;
  t16374 = t16371 + t16372 + t16373;
  t16367 = t16298*t14035;
  t16368 = t15966*t16312;
  t16369 = t16367 + t16346 + t16368 + t16347;
  t16352 = 0.384*var2[1]*t14194;
  t16353 = 0.384*var2[0]*t16334;
  p_output1[0]=(0.384*t14059*var2[0] + 0.384*(t1154*t14035 + t14074)*var2[1])*var2[6];
  p_output1[1]=t14288;
  p_output1[2]=t14288;
  p_output1[3]=0.384*t14341*var2[6];
  p_output1[4]=0.384*t14059*var2[6];
  p_output1[5]=0.384*t14341*var2[0] + 0.384*t14059*var2[1];
  p_output1[6]=t14288;
  p_output1[7]=(t16043 + t16067 + 0.384*(2.*t12402*t16086 + t15966*t16086 + t16265 + 2.*t14035*t16277 + t14035*(0.63*t10885 - 1.*t10885*t16075 + t16281) + t16291)*var2[2])*var2[6];
  p_output1[8]=t16332;
  p_output1[9]=t16335;
  p_output1[10]=t16339;
  p_output1[11]=0.384*t16349*var2[6];
  p_output1[12]=t16352 + t16353 + 0.384*t16349*var2[2];
  p_output1[13]=t14288;
  p_output1[14]=t16332;
  p_output1[15]=(t16043 + t16067 + 0.384*(t16265 + t16291 + 2.*t12402*t16298 + t16307 + 2.*t14035*t16312 + t16328)*var2[2] + 0.384*(0.63*t6080 - 1.*t16075*t6080 + 0.24*Power(t6080,2))*var2[5])*var2[6];
  p_output1[16]=t16335;
  p_output1[17]=t16339;
  p_output1[18]=0.384*t16369*var2[6];
  p_output1[19]=0.384*t16374*var2[6];
  p_output1[20]=t16352 + t16353 + 0.384*t16369*var2[2] + 0.384*t16374*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec7_five_link_walker.hh"

namespace LeftStance
{

void J_Ce3_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
