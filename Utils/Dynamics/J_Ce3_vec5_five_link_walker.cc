/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:57:21 GMT-08:00
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
  double t8830;
  double t8800;
  double t8806;
  double t8831;
  double t8837;
  double t8815;
  double t8834;
  double t8835;
  double t1952;
  double t8838;
  double t8839;
  double t9461;
  double t8836;
  double t10488;
  double t10593;
  double t10623;
  double t10630;
  double t10635;
  double t10642;
  double t10648;
  double t10658;
  double t10667;
  double t10668;
  double t10672;
  double t10705;
  double t9506;
  double t10482;
  double t10706;
  double t10707;
  double t10710;
  double t10863;
  double t10897;
  double t10922;
  double t13592;
  double t13609;
  double t13625;
  double t13626;
  double t13808;
  double t13813;
  double t13821;
  double t13822;
  double t13856;
  double t13862;
  double t13864;
  double t11467;
  double t11647;
  double t11830;
  double t11831;
  double t13560;
  double t13571;
  double t13837;
  double t13845;
  double t13846;
  double t13849;
  double t13890;
  double t13893;
  double t13869;
  double t13880;
  double t13931;
  double t13934;
  double t13936;
  double t13937;
  double t13939;
  double t13922;
  double t13923;
  double t13888;
  double t13895;
  double t13896;
  double t13897;
  double t13900;
  double t13902;
  double t13903;
  double t13906;
  double t13908;
  double t13914;
  double t13915;
  double t13917;
  double t13918;
  double t13919;
  double t13924;
  double t13928;
  double t14025;
  double t14027;
  double t14034;
  double t14010;
  double t14016;
  double t14017;
  double t13974;
  double t13977;
  t8830 = Cos(var1[3]);
  t8800 = Cos(var1[4]);
  t8806 = Sin(var1[3]);
  t8831 = Sin(var1[4]);
  t8837 = Cos(var1[2]);
  t8815 = -1.*t8800*t8806;
  t8834 = -1.*t8830*t8831;
  t8835 = t8815 + t8834;
  t1952 = Sin(var1[2]);
  t8838 = t8830*t8800;
  t8839 = -1.*t8806*t8831;
  t9461 = t8838 + t8839;
  t8836 = -1.*t1952*t8835;
  t10488 = -1.*t8837*t8835;
  t10593 = -1.*t8830*t8800;
  t10623 = t8806*t8831;
  t10630 = t10593 + t10623;
  t10635 = t8837*t10630;
  t10642 = t8836 + t10635;
  t10648 = 0.384*var2[0]*t10642;
  t10658 = -1.*t1952*t10630;
  t10667 = t10488 + t10658;
  t10668 = 0.384*var2[1]*t10667;
  t10672 = t10648 + t10668;
  t10705 = var2[4]*t10672;
  t9506 = -1.*t8837*t9461;
  t10482 = t8836 + t9506;
  t10706 = t8837*t8835;
  t10707 = -1.*t1952*t9461;
  t10710 = t10706 + t10707;
  t10863 = t8800*t8806;
  t10897 = t8830*t8831;
  t10922 = t10863 + t10897;
  t13592 = -1.*t8800;
  t13609 = 1. + t13592;
  t13625 = 0.4*t13609;
  t13626 = 0.64*t8800;
  t13808 = t13625 + t13626;
  t13813 = -1.*t13808*t8806;
  t13821 = -0.24*t8830*t8831;
  t13822 = t13813 + t13821;
  t13856 = t8830*t13808;
  t13862 = -0.24*t8806*t8831;
  t13864 = t13856 + t13862;
  t11467 = t1952*t10922;
  t11647 = t11467 + t10635;
  t11830 = 0.384*var2[0]*t11647;
  t11831 = t8837*t10922;
  t13560 = t11831 + t10658;
  t13571 = 0.384*var2[1]*t13560;
  t13837 = t13808*t8806;
  t13845 = 0.24*t8830*t8831;
  t13846 = t13837 + t13845;
  t13849 = t8835*t13846;
  t13890 = -0.24*t8800*t8806;
  t13893 = t13890 + t13821;
  t13869 = 0.24*t8806*t8831;
  t13880 = t13864*t10630;
  t13931 = t13822*t9461;
  t13934 = t13846*t9461;
  t13936 = t8835*t13864;
  t13937 = t10922*t13864;
  t13939 = t13931 + t13934 + t13936 + t13937;
  t13922 = t1952*t10630;
  t13923 = t10706 + t13922;
  t13888 = t8835*t13822;
  t13895 = t8835*t13893;
  t13896 = t13893*t10922;
  t13897 = t9461*t13864;
  t13900 = 0.24*t8830*t8800;
  t13902 = t13900 + t13862;
  t13903 = t9461*t13902;
  t13906 = -0.24*t8830*t8800;
  t13908 = t13906 + t13869;
  t13914 = t9461*t13908;
  t13915 = t13888 + t13895 + t13849 + t13896 + t13897 + t13903 + t13914 + t13880;
  t13917 = 0.384*var2[2]*t13915;
  t13918 = t11830 + t13571 + t13917;
  t13919 = var2[4]*t13918;
  t13924 = 0.384*var2[4]*t13923;
  t13928 = 0.384*var2[4]*t10642;
  t14025 = -1.*t13808*t8831;
  t14027 = 0.24*t8800*t8831;
  t14034 = t14025 + t14027;
  t14010 = t13893*t9461;
  t14016 = t10922*t13902;
  t14017 = t14010 + t13934 + t13936 + t14016;
  t13974 = 0.384*var2[1]*t10642;
  t13977 = 0.384*var2[0]*t13923;
  p_output1[0]=(0.384*t10482*var2[0] + 0.384*(t10488 + t1952*t9461)*var2[1])*var2[4];
  p_output1[1]=t10705;
  p_output1[2]=t10705;
  p_output1[3]=0.384*t10710*var2[4];
  p_output1[4]=0.384*t10482*var2[4];
  p_output1[5]=0.384*t10710*var2[0] + 0.384*t10482*var2[1];
  p_output1[6]=t10705;
  p_output1[7]=(t11830 + t13571 + 0.384*(t10922*t13822 + t13849 + t13880 + 2.*t13822*t8835 + 2.*t13864*t9461 + (t13869 - 1.*t13808*t8830)*t9461)*var2[2])*var2[4];
  p_output1[8]=t13919;
  p_output1[9]=t13924;
  p_output1[10]=t13928;
  p_output1[11]=0.384*t13939*var2[4];
  p_output1[12]=t13974 + t13977 + 0.384*t13939*var2[2];
  p_output1[13]=t10705;
  p_output1[14]=t13919;
  p_output1[15]=(t11830 + t13571 + 0.384*(t13849 + t13880 + t13896 + t13914 + 2.*t13893*t8835 + 2.*t13902*t9461)*var2[2] + 0.384*(-1.*t13808*t8800 + 0.24*Power(t8800,2))*var2[3])*var2[4];
  p_output1[16]=t13924;
  p_output1[17]=t13928;
  p_output1[18]=0.384*t14017*var2[4];
  p_output1[19]=0.384*t14034*var2[4];
  p_output1[20]=t13974 + t13977 + 0.384*t14017*var2[2] + 0.384*t14034*var2[3];
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

#include "J_Ce3_vec5_five_link_walker.hh"

namespace LeftStance
{

void J_Ce3_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
