/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:56:23 GMT-08:00
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
  double t72;
  double t63;
  double t67;
  double t78;
  double t48;
  double t68;
  double t90;
  double t101;
  double t112;
  double t119;
  double t4877;
  double t5706;
  double t5792;
  double t5830;
  double t5857;
  double t5905;
  double t5926;
  double t5943;
  double t5954;
  double t5956;
  double t5903;
  double t5957;
  double t5962;
  double t5967;
  double t5979;
  double t124;
  double t1997;
  double t4703;
  double t5987;
  double t6007;
  double t6011;
  double t6023;
  double t6030;
  double t6058;
  double t6071;
  double t6083;
  double t6124;
  double t6132;
  double t6115;
  double t6138;
  double t6142;
  double t6144;
  double t6145;
  double t4802;
  double t4810;
  double t5875;
  double t4816;
  double t5873;
  double t6200;
  double t6201;
  double t6233;
  double t6245;
  double t6246;
  double t6411;
  double t6562;
  double t6575;
  double t8592;
  double t8675;
  double t8864;
  double t8403;
  double t8494;
  double t8495;
  double t8566;
  double t9743;
  double t9775;
  double t8951;
  double t9512;
  double t9582;
  double t9782;
  double t9977;
  double t10034;
  double t10038;
  double t10072;
  double t12192;
  double t12255;
  double t12362;
  double t13137;
  double t13180;
  double t13341;
  double t13342;
  double t13375;
  double t13378;
  double t13387;
  t72 = Cos(var1[3]);
  t63 = Cos(var1[4]);
  t67 = Sin(var1[3]);
  t78 = Sin(var1[4]);
  t48 = Sin(var1[2]);
  t68 = -1.*t63*t67;
  t90 = -1.*t72*t78;
  t101 = t68 + t90;
  t112 = -1.*t48*t101;
  t119 = Cos(var1[2]);
  t4877 = -1.*t72*t63;
  t5706 = t67*t78;
  t5792 = t4877 + t5706;
  t5830 = t119*t5792;
  t5857 = t112 + t5830;
  t5905 = t63*t67;
  t5926 = t72*t78;
  t5943 = t5905 + t5926;
  t5954 = t48*t5943;
  t5956 = t5954 + t5830;
  t5903 = -0.384*var2[2]*t5857;
  t5957 = -0.384*var2[3]*t5956;
  t5962 = -0.384*var2[4]*t5956;
  t5967 = t5903 + t5957 + t5962;
  t5979 = var2[4]*t5967;
  t124 = t72*t63;
  t1997 = -1.*t67*t78;
  t4703 = t124 + t1997;
  t5987 = t119*t101;
  t6007 = -1.*t48*t4703;
  t6011 = t5987 + t6007;
  t6023 = t48*t5792;
  t6030 = t5987 + t6023;
  t6058 = -1.*t119*t101;
  t6071 = -1.*t48*t5792;
  t6083 = t6058 + t6071;
  t6124 = t119*t5943;
  t6132 = t6124 + t6071;
  t6115 = -0.384*var2[2]*t6083;
  t6138 = -0.384*var2[3]*t6132;
  t6142 = -0.384*var2[4]*t6132;
  t6144 = t6115 + t6138 + t6142;
  t6145 = var2[4]*t6144;
  t4802 = -1.*t119*t4703;
  t4810 = t112 + t4802;
  t5875 = -0.384*var2[4]*t5857;
  t4816 = -0.384*var2[2]*t4810;
  t5873 = -0.384*var2[3]*t5857;
  t6200 = -1.*t63;
  t6201 = 1. + t6200;
  t6233 = 0.4*t6201;
  t6245 = 0.64*t63;
  t6246 = t6233 + t6245;
  t6411 = -1.*t6246*t67;
  t6562 = -0.24*t72*t78;
  t6575 = t6411 + t6562;
  t8592 = t72*t6246;
  t8675 = -0.24*t67*t78;
  t8864 = t8592 + t8675;
  t8403 = t6246*t67;
  t8494 = 0.24*t72*t78;
  t8495 = t8403 + t8494;
  t8566 = t101*t8495;
  t9743 = -0.24*t63*t67;
  t9775 = t9743 + t6562;
  t8951 = 0.24*t67*t78;
  t9512 = t8864*t5792;
  t9582 = t101*t6575;
  t9782 = t101*t9775;
  t9977 = t9775*t5943;
  t10034 = t4703*t8864;
  t10038 = 0.24*t72*t63;
  t10072 = t10038 + t8675;
  t12192 = t4703*t10072;
  t12255 = -0.24*t72*t63;
  t12362 = t12255 + t8951;
  t13137 = t4703*t12362;
  t13180 = t9582 + t9782 + t8566 + t9977 + t10034 + t12192 + t13137 + t9512;
  t13341 = t6575*t4703;
  t13342 = t8495*t4703;
  t13375 = t101*t8864;
  t13378 = t5943*t8864;
  t13387 = t13341 + t13342 + t13375 + t13378;
  p_output1[0]=(t4816 + t5873 + t5875)*var2[4];
  p_output1[1]=t5979;
  p_output1[2]=t5979;
  p_output1[3]=-0.384*t6011*var2[4];
  p_output1[4]=-0.384*t6030*var2[4];
  p_output1[5]=-0.384*t6011*var2[2] - 0.384*t6030*var2[3] - 0.768*t6030*var2[4];
  p_output1[6]=var2[4]*(-0.384*(t4703*t48 + t6058)*var2[2] - 0.384*t6083*var2[3] - 0.384*t6083*var2[4]);
  p_output1[7]=t6145;
  p_output1[8]=t6145;
  p_output1[9]=-0.384*t4810*var2[4];
  p_output1[10]=t5875;
  p_output1[11]=t4816 + t5873 - 0.768*t5857*var2[4];
  p_output1[12]=var2[4]*(-0.384*(2.*t101*t6575 + t5943*t6575 + t8566 + 2.*t4703*t8864 + t4703*(-1.*t6246*t72 + t8951) + t9512)*var2[3] - 0.384*t13180*var2[4]);
  p_output1[13]=var2[4]*(-0.384*t13180*var2[3] - 0.384*(t13137 + 2.*t10072*t4703 + t8566 + t9512 + 2.*t101*t9775 + t9977)*var2[4]);
  p_output1[14]=-0.384*t13387*var2[4];
  p_output1[15]=-0.384*t13387*var2[3] - 0.768*(t13342 + t13375 + t10072*t5943 + t4703*t9775)*var2[4];
  p_output1[16]=-0.384*(-1.*t6246*t63 + 0.24*Power(t63,2))*Power(var2[4],2);
  p_output1[17]=-0.768*(-1.*t6246*t78 + 0.24*t63*t78)*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec5_five_link_walker.hh"

namespace LeftStance
{

void J_Ce1_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
