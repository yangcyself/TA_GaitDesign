/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:56:19 GMT-08:00
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
  double t3053;
  double t347;
  double t1926;
  double t212;
  double t4454;
  double t21;
  double t3057;
  double t4288;
  double t4375;
  double t4378;
  double t4420;
  double t4508;
  double t4523;
  double t4530;
  double t246;
  double t2876;
  double t2932;
  double t2979;
  double t4542;
  double t4551;
  double t4556;
  double t4484;
  double t4492;
  double t4494;
  double t4583;
  double t4428;
  double t4461;
  double t4469;
  double t4470;
  double t4501;
  double t4557;
  double t4560;
  double t4564;
  double t4613;
  double t4614;
  double t4619;
  double t4626;
  double t4634;
  double t4643;
  double t4647;
  double t4652;
  double t4654;
  double t4664;
  double t4718;
  double t4720;
  double t4723;
  double t4733;
  double t4819;
  double t4823;
  double t4831;
  double t4836;
  double t4849;
  double t4863;
  double t4757;
  double t4758;
  double t4768;
  double t4729;
  double t4745;
  double t4754;
  double t4783;
  double t4792;
  double t5924;
  double t5928;
  double t5941;
  double t5999;
  double t6278;
  double t8948;
  double t9021;
  double t9058;
  double t9094;
  double t9318;
  double t9322;
  double t9367;
  double t9416;
  double t8567;
  double t8571;
  double t8576;
  double t9446;
  double t9522;
  double t9527;
  double t9539;
  double t4532;
  double t9862;
  double t9870;
  double t9925;
  double t9943;
  double t4537;
  double t10035;
  double t12376;
  double t4567;
  double t4586;
  double t12690;
  double t13090;
  double t13092;
  double t13102;
  double t13209;
  double t13210;
  double t13214;
  double t13140;
  double t13178;
  double t13179;
  double t13220;
  double t13227;
  double t13231;
  double t8505;
  double t8559;
  double t8565;
  double t4540;
  double t4587;
  double t4607;
  double t4610;
  double t4796;
  double t13416;
  double t13417;
  double t13433;
  double t13412;
  double t13413;
  double t13414;
  double t13446;
  double t13452;
  double t13458;
  double t13439;
  double t13440;
  double t13443;
  double t13438;
  double t13508;
  double t13509;
  double t13459;
  double t13463;
  double t13513;
  double t13516;
  double t13518;
  double t13519;
  double t13482;
  double t13489;
  double t13491;
  double t13492;
  double t13493;
  double t13494;
  double t13502;
  double t13510;
  double t13511;
  double t13517;
  double t13520;
  double t13528;
  double t13529;
  double t13530;
  double t13531;
  double t13532;
  double t13533;
  double t13534;
  double t13535;
  double t13536;
  double t13537;
  double t13538;
  double t13539;
  double t13540;
  double t13541;
  double t13552;
  double t13553;
  double t13554;
  double t13555;
  double t13556;
  double t13561;
  double t13562;
  double t13564;
  double t13565;
  double t13567;
  double t13568;
  double t13569;
  double t13575;
  double t13576;
  double t13577;
  double t13596;
  double t13597;
  double t13598;
  double t13599;
  double t13600;
  double t13617;
  double t13618;
  double t13619;
  t3053 = Cos(var1[4]);
  t347 = Sin(var1[2]);
  t1926 = Sin(var1[3]);
  t212 = Cos(var1[3]);
  t4454 = Sin(var1[4]);
  t21 = Cos(var1[2]);
  t3057 = -1.*t3053;
  t4288 = 1. + t3057;
  t4375 = 0.4*t4288;
  t4378 = 0.64*t3053;
  t4420 = t4375 + t4378;
  t4508 = t212*t3053;
  t4523 = -1.*t1926*t4454;
  t4530 = t4508 + t4523;
  t246 = -1.*t21*t212;
  t2876 = t347*t1926;
  t2932 = t246 + t2876;
  t2979 = 0.748*t2932;
  t4542 = t4420*t4454;
  t4551 = -0.24*t3053*t4454;
  t4556 = t4542 + t4551;
  t4484 = -1.*t3053*t1926;
  t4492 = -1.*t212*t4454;
  t4494 = t4484 + t4492;
  t4583 = -1.*t347*t4530;
  t4428 = t4420*t3053;
  t4461 = Power(t4454,2);
  t4469 = 0.24*t4461;
  t4470 = t4428 + t4469;
  t4501 = -1.*t347*t4494;
  t4557 = t3053*t1926;
  t4560 = t212*t4454;
  t4564 = t4557 + t4560;
  t4613 = t21*t4494;
  t4614 = t4613 + t4583;
  t4619 = 3.2*t4556*t4614;
  t4626 = -1.*t212*t3053;
  t4634 = t1926*t4454;
  t4643 = t4626 + t4634;
  t4647 = t21*t4643;
  t4652 = t4501 + t4647;
  t4654 = 3.2*t4470*t4652;
  t4664 = t2979 + t4619 + t4654;
  t4718 = Power(t3053,2);
  t4720 = -0.24*t4718;
  t4723 = t4428 + t4720;
  t4733 = t21*t4530;
  t4819 = t347*t4564;
  t4823 = t4819 + t4647;
  t4831 = 3.2*t4470*t4823;
  t4836 = t347*t4643;
  t4849 = t4613 + t4836;
  t4863 = 3.2*t4556*t4849;
  t4757 = -1.*t4420*t4454;
  t4758 = 0.24*t3053*t4454;
  t4768 = t4757 + t4758;
  t4729 = -1.*t347*t4564;
  t4745 = t4729 + t4733;
  t4754 = 3.2*t4723*t4745;
  t4783 = 3.2*t4768*t4614;
  t4792 = t4754 + t4619 + t4783 + t4654;
  t5924 = t347*t4494;
  t5928 = t5924 + t4733;
  t5941 = 3.2*t4723*t5928;
  t5999 = 3.2*t4768*t4849;
  t6278 = t5941 + t4831 + t4863 + t5999;
  t8948 = -1.*t212*t347;
  t9021 = -1.*t21*t1926;
  t9058 = t8948 + t9021;
  t9094 = 0.748*t9058;
  t9318 = 3.2*t4556*t4745;
  t9322 = 3.2*t4470*t4614;
  t9367 = t9094 + t9318 + t9322;
  t9416 = 3.2*t4556*t5928;
  t8567 = t21*t4564;
  t8571 = t347*t4530;
  t8576 = t8567 + t8571;
  t9446 = 3.2*t4470*t4849;
  t9522 = 3.2*t4768*t5928;
  t9527 = 3.2*t4723*t8576;
  t9539 = t9416 + t9522 + t9527 + t9446;
  t4532 = -1.*t21*t4530;
  t9862 = t212*t347;
  t9870 = t21*t1926;
  t9925 = t9862 + t9870;
  t9943 = 0.748*t9925;
  t4537 = t4501 + t4532;
  t10035 = -1.*t21*t4494;
  t12376 = 3.2*t4556*t4537;
  t4567 = -1.*t21*t4564;
  t4586 = t4567 + t4583;
  t12690 = -1.*t347*t4643;
  t13090 = t10035 + t12690;
  t13092 = 3.2*t4470*t13090;
  t13102 = t9943 + t12376 + t13092;
  t13209 = 3.2*t4556*t4652;
  t13210 = t8567 + t12690;
  t13214 = 3.2*t4470*t13210;
  t13140 = 3.2*t4768*t4537;
  t13178 = 3.2*t4723*t4586;
  t13179 = t12376 + t13140 + t13178 + t13092;
  t13220 = 3.2*t4723*t4614;
  t13227 = 3.2*t4768*t4652;
  t13231 = t13220 + t13209 + t13227 + t13214;
  t8505 = -1.*t4420*t3053;
  t8559 = 0.24*t4718;
  t8565 = t8505 + t8559;
  t4540 = 3.2*t4470*t4537;
  t4587 = 3.2*t4556*t4586;
  t4607 = t2979 + t4540 + t4587;
  t4610 = -0.5*var2[2]*t4607;
  t4796 = -0.5*var2[4]*t4792;
  t13416 = t212*t4420;
  t13417 = -0.24*t1926*t4454;
  t13433 = t13416 + t13417;
  t13412 = -1.*t4420*t1926;
  t13413 = -0.24*t212*t4454;
  t13414 = t13412 + t13413;
  t13446 = t4420*t1926;
  t13452 = 0.24*t212*t4454;
  t13458 = t13446 + t13452;
  t13439 = -1.*t212*t4420;
  t13440 = 0.24*t1926*t4454;
  t13443 = t13439 + t13440;
  t13438 = -1.*t4564*t13433;
  t13508 = -0.24*t3053*t1926;
  t13509 = t13508 + t13413;
  t13459 = -1.*t13458*t4643;
  t13463 = t4494*t13458;
  t13513 = 0.24*t212*t3053;
  t13516 = t13513 + t13417;
  t13518 = -0.24*t212*t3053;
  t13519 = t13518 + t13440;
  t13482 = t13433*t4643;
  t13489 = t13414*t4530;
  t13491 = t13458*t4530;
  t13492 = t4494*t13433;
  t13493 = t4564*t13433;
  t13494 = t13489 + t13491 + t13492 + t13493;
  t13502 = 3.2*t4768*t13494;
  t13510 = -1.*t13509*t4530;
  t13511 = -1.*t4494*t13433;
  t13517 = -1.*t4494*t13516;
  t13520 = -1.*t4494*t13519;
  t13528 = -1.*t13414*t4643;
  t13529 = -1.*t13509*t4643;
  t13530 = t13510 + t13511 + t13438 + t13517 + t13520 + t13528 + t13529 + t13459;
  t13531 = 3.2*t4556*t13530;
  t13532 = -1.*t4494*t13414;
  t13533 = -1.*t4494*t13458;
  t13534 = -1.*t4530*t13433;
  t13535 = -1.*t13433*t4643;
  t13536 = t13532 + t13533 + t13534 + t13535;
  t13537 = 3.2*t4723*t13536;
  t13538 = t4494*t13414;
  t13539 = t4494*t13509;
  t13540 = t13509*t4564;
  t13541 = t4530*t13433;
  t13552 = t4530*t13516;
  t13553 = t4530*t13519;
  t13554 = t13538 + t13539 + t13463 + t13540 + t13541 + t13552 + t13553 + t13482;
  t13555 = 3.2*t4470*t13554;
  t13556 = t13502 + t13531 + t13537 + t13555;
  t13561 = -1.*t13458*t4530;
  t13562 = t13561 + t13511;
  t13564 = t13458*t4564;
  t13565 = t13564 + t13541;
  t13567 = t13509*t4530;
  t13568 = t4564*t13516;
  t13569 = t13567 + t13491 + t13492 + t13568;
  t13575 = -1.*t4494*t13509;
  t13576 = -1.*t4530*t13516;
  t13577 = t13575 + t13533 + t13576 + t13535;
  t13596 = 3.2*t4723*t13562;
  t13597 = 3.2*t4768*t13565;
  t13598 = 3.2*t4470*t13569;
  t13599 = 3.2*t4556*t13577;
  t13600 = t13596 + t13597 + t13598 + t13599;
  t13617 = 6.4*t4723*t4556;
  t13618 = 6.4*t4768*t4470;
  t13619 = t13617 + t13618;
  p_output1[0]=var2[3]*(t4610 + t4796 - 0.5*t4664*var2[3]);
  p_output1[1]=var2[3]*(-0.5*t4664*var2[2] - 0.5*(t2979 + t4831 + t4863)*var2[3] - 0.5*t6278*var2[4]);
  p_output1[2]=var2[3]*(-0.5*t4792*var2[2] - 0.5*t6278*var2[3] - 0.5*(t4831 + 6.4*t4768*t4849 + t4863 + 6.4*t4723*t5928 + 3.2*t5928*t8565 + 3.2*t4768*t8576)*var2[4]);
  p_output1[3]=-0.5*t9367*var2[3];
  p_output1[4]=-0.5*t9367*var2[2] - 1.*(t9094 + t9416 + t9446)*var2[3] - 0.5*t9539*var2[4];
  p_output1[5]=-0.5*t9539*var2[3];
  p_output1[6]=var2[3]*(-0.5*(3.2*t4556*(t4532 + t4819) + 3.2*t4470*(t10035 + t8571) + t9943)*var2[2] - 0.5*t13102*var2[3] - 0.5*t13179*var2[4]);
  p_output1[7]=var2[3]*(-0.5*t13102*var2[2] - 0.5*(t13209 + t13214 + t9943)*var2[3] - 0.5*t13231*var2[4]);
  p_output1[8]=var2[3]*(-0.5*t13179*var2[2] - 0.5*t13231*var2[3] - 0.5*(t13209 + t13214 + 6.4*t4614*t4723 + 6.4*t4652*t4768 + 3.2*t4745*t4768 + 3.2*t4614*t8565)*var2[4]);
  p_output1[9]=-0.5*t4607*var2[3];
  p_output1[10]=t4610 + t4796 - 1.*t4664*var2[3];
  p_output1[11]=-0.5*t4792*var2[3];
  p_output1[12]=var2[3]*(-0.5*(3.2*t4470*(t13463 + t13482 + 2.*t13414*t4494 + 2.*t13433*t4530 + t13443*t4530 + t13414*t4564) + 3.2*t4556*(t13438 + t13459 - 2.*t13433*t4494 - 1.*t13443*t4494 - 1.*t13414*t4530 - 2.*t13414*t4643))*var2[3] - 0.5*t13556*var2[4]);
  p_output1[13]=var2[3]*(-0.5*t13556*var2[3] - 0.5*(3.2*t4470*(t13463 + t13482 + t13540 + t13553 + 2.*t13509*t4494 + 2.*t13516*t4530) + 3.2*t4556*(t13438 + t13459 + t13510 + t13520 - 2.*t13516*t4494 - 2.*t13509*t4643) + 6.4*t13577*t4723 + 3.2*t13562*t4768 + 6.4*t13569*t4768 + 3.2*t13565*t8565)*var2[4]);
  p_output1[14]=-1.*(3.2*t13494*t4470 + 3.2*t13536*t4556)*var2[3] - 0.5*t13600*var2[4];
  p_output1[15]=-0.5*t13600*var2[3];
  p_output1[16]=-0.5*(6.4*Power(t4723,2) + 6.4*t4556*t4768 + 6.4*Power(t4768,2) + 6.4*t4470*t8565)*var2[3]*var2[4];
  p_output1[17]=-0.5*t13619*var2[4];
  p_output1[18]=-0.5*t13619*var2[3];
  p_output1[19]=-0.384*t8565*var2[3]*var2[4];
  p_output1[20]=-0.384*t4768*var2[4];
  p_output1[21]=-0.384*t4768*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec4_five_link_walker.hh"

namespace LeftStance
{

void J_Ce1_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
