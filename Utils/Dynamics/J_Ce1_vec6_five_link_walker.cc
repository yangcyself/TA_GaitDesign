/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:56:27 GMT-08:00
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
  double t6046;
  double t5948;
  double t6021;
  double t5891;
  double t6114;
  double t1756;
  double t6059;
  double t6064;
  double t6065;
  double t6096;
  double t6100;
  double t6435;
  double t6441;
  double t6453;
  double t5897;
  double t6034;
  double t6039;
  double t6044;
  double t6474;
  double t6476;
  double t6497;
  double t6515;
  double t6197;
  double t6305;
  double t6397;
  double t6550;
  double t6052;
  double t6105;
  double t6159;
  double t6178;
  double t6194;
  double t6401;
  double t6519;
  double t6527;
  double t6528;
  double t6592;
  double t6594;
  double t6601;
  double t6605;
  double t6610;
  double t6615;
  double t6617;
  double t6623;
  double t6629;
  double t6630;
  double t6636;
  double t6641;
  double t6642;
  double t6654;
  double t6771;
  double t6772;
  double t6804;
  double t6685;
  double t6686;
  double t6695;
  double t6703;
  double t6816;
  double t6817;
  double t8581;
  double t6653;
  double t6667;
  double t6671;
  double t6709;
  double t6713;
  double t8643;
  double t8658;
  double t8662;
  double t8869;
  double t8947;
  double t13389;
  double t13390;
  double t13391;
  double t13393;
  double t13397;
  double t13398;
  double t13415;
  double t13445;
  double t13207;
  double t13215;
  double t13219;
  double t13460;
  double t13476;
  double t13480;
  double t13481;
  double t6459;
  double t13488;
  double t13557;
  double t13558;
  double t13559;
  double t6463;
  double t13566;
  double t13574;
  double t6533;
  double t6558;
  double t13578;
  double t13579;
  double t13580;
  double t13581;
  double t13595;
  double t13601;
  double t13602;
  double t13583;
  double t13589;
  double t13590;
  double t13610;
  double t13611;
  double t13612;
  double t9515;
  double t9531;
  double t9573;
  double t12004;
  double t6471;
  double t6565;
  double t6578;
  double t6582;
  double t6715;
  double t13667;
  double t13668;
  double t13635;
  double t13657;
  double t13658;
  double t13662;
  double t13669;
  double t13682;
  double t13683;
  double t13687;
  double t13688;
  double t13633;
  double t13634;
  double t13639;
  double t13647;
  double t13653;
  double t13654;
  double t13655;
  double t13690;
  double t13691;
  double t13695;
  double t13696;
  double t13697;
  double t13693;
  double t13709;
  double t13720;
  double t13760;
  double t13761;
  double t13762;
  double t13746;
  double t13656;
  double t13681;
  double t13689;
  double t13701;
  double t13713;
  double t13715;
  double t13721;
  double t13745;
  double t13643;
  double t13684;
  double t13685;
  double t13686;
  double t13692;
  double t13694;
  double t13707;
  double t13708;
  double t13710;
  double t13711;
  double t13712;
  double t13714;
  double t13716;
  double t13717;
  double t13718;
  double t13719;
  double t13722;
  double t13723;
  double t13747;
  double t13748;
  double t13749;
  double t13786;
  double t13787;
  double t13788;
  double t13790;
  double t13791;
  double t13792;
  double t13794;
  double t13795;
  double t13796;
  double t13802;
  double t13803;
  double t13804;
  double t13751;
  double t13752;
  double t13815;
  double t13816;
  double t13817;
  double t13818;
  double t13819;
  double t13839;
  double t13840;
  double t13841;
  t6046 = Cos(var1[6]);
  t5948 = Sin(var1[2]);
  t6021 = Sin(var1[5]);
  t5891 = Cos(var1[5]);
  t6114 = Sin(var1[6]);
  t1756 = Cos(var1[2]);
  t6059 = -1.*t6046;
  t6064 = 1. + t6059;
  t6065 = 1.03*t6064;
  t6096 = 1.27*t6046;
  t6100 = t6065 + t6096;
  t6435 = t5891*t6046;
  t6441 = -1.*t6021*t6114;
  t6453 = t6435 + t6441;
  t5897 = -1.*t1756*t5891;
  t6034 = t5948*t6021;
  t6039 = t5897 + t6034;
  t6044 = 0.748*t6039;
  t6474 = -0.63*t6114;
  t6476 = -0.24*t6046*t6114;
  t6497 = t6100*t6114;
  t6515 = t6474 + t6476 + t6497;
  t6197 = -1.*t6046*t6021;
  t6305 = -1.*t5891*t6114;
  t6397 = t6197 + t6305;
  t6550 = -1.*t5948*t6453;
  t6052 = -0.63*t6046;
  t6105 = t6046*t6100;
  t6159 = Power(t6114,2);
  t6178 = 0.24*t6159;
  t6194 = t6052 + t6105 + t6178;
  t6401 = -1.*t5948*t6397;
  t6519 = t6046*t6021;
  t6527 = t5891*t6114;
  t6528 = t6519 + t6527;
  t6592 = t1756*t6397;
  t6594 = t6592 + t6550;
  t6601 = 3.2*t6515*t6594;
  t6605 = -1.*t5891*t6046;
  t6610 = t6021*t6114;
  t6615 = t6605 + t6610;
  t6617 = t1756*t6615;
  t6623 = t6401 + t6617;
  t6629 = 3.2*t6194*t6623;
  t6630 = t6044 + t6601 + t6629;
  t6636 = Power(t6046,2);
  t6641 = -0.24*t6636;
  t6642 = t6052 + t6641 + t6105;
  t6654 = t1756*t6453;
  t6771 = t5948*t6528;
  t6772 = t6771 + t6617;
  t6804 = 3.2*t6194*t6772;
  t6685 = 0.63*t6114;
  t6686 = 0.24*t6046*t6114;
  t6695 = -1.*t6100*t6114;
  t6703 = t6685 + t6686 + t6695;
  t6816 = t5948*t6615;
  t6817 = t6592 + t6816;
  t8581 = 3.2*t6515*t6817;
  t6653 = -1.*t5948*t6528;
  t6667 = t6653 + t6654;
  t6671 = 3.2*t6642*t6667;
  t6709 = 3.2*t6703*t6594;
  t6713 = t6671 + t6709 + t6601 + t6629;
  t8643 = t5948*t6397;
  t8658 = t8643 + t6654;
  t8662 = 3.2*t6642*t8658;
  t8869 = 3.2*t6703*t6817;
  t8947 = t8662 + t6804 + t8869 + t8581;
  t13389 = -1.*t5891*t5948;
  t13390 = -1.*t1756*t6021;
  t13391 = t13389 + t13390;
  t13393 = 0.748*t13391;
  t13397 = 3.2*t6515*t6667;
  t13398 = 3.2*t6194*t6594;
  t13415 = t13393 + t13397 + t13398;
  t13445 = 3.2*t6515*t8658;
  t13207 = t1756*t6528;
  t13215 = t5948*t6453;
  t13219 = t13207 + t13215;
  t13460 = 3.2*t6194*t6817;
  t13476 = 3.2*t6703*t8658;
  t13480 = 3.2*t6642*t13219;
  t13481 = t13476 + t13445 + t13480 + t13460;
  t6459 = -1.*t1756*t6453;
  t13488 = t5891*t5948;
  t13557 = t1756*t6021;
  t13558 = t13488 + t13557;
  t13559 = 0.748*t13558;
  t6463 = t6401 + t6459;
  t13566 = -1.*t1756*t6397;
  t13574 = 3.2*t6515*t6463;
  t6533 = -1.*t1756*t6528;
  t6558 = t6533 + t6550;
  t13578 = -1.*t5948*t6615;
  t13579 = t13566 + t13578;
  t13580 = 3.2*t6194*t13579;
  t13581 = t13559 + t13574 + t13580;
  t13595 = 3.2*t6515*t6623;
  t13601 = t13207 + t13578;
  t13602 = 3.2*t6194*t13601;
  t13583 = 3.2*t6703*t6463;
  t13589 = 3.2*t6642*t6558;
  t13590 = t13583 + t13574 + t13589 + t13580;
  t13610 = 3.2*t6642*t6594;
  t13611 = 3.2*t6703*t6623;
  t13612 = t13610 + t13611 + t13595 + t13602;
  t9515 = 0.63*t6046;
  t9531 = 0.24*t6636;
  t9573 = -1.*t6046*t6100;
  t12004 = t9515 + t9531 + t9573;
  t6471 = 3.2*t6194*t6463;
  t6565 = 3.2*t6515*t6558;
  t6578 = t6044 + t6471 + t6565;
  t6582 = -0.5*var2[2]*t6578;
  t6715 = -0.5*var2[6]*t6713;
  t13667 = t5891*t6100;
  t13668 = -0.24*t6021*t6114;
  t13635 = -0.24*t5891*t6114;
  t13657 = -1.*t5891;
  t13658 = 1. + t13657;
  t13662 = 0.63*t13658;
  t13669 = t13662 + t13667 + t13668;
  t13682 = -0.63*t5891;
  t13683 = t13682 + t13667 + t13668;
  t13687 = -0.24*t6046*t6021;
  t13688 = t13687 + t13635;
  t13633 = 0.63*t6021;
  t13634 = -1.*t6100*t6021;
  t13639 = t13633 + t13634 + t13635;
  t13647 = -0.63*t6021;
  t13653 = t6100*t6021;
  t13654 = 0.24*t5891*t6114;
  t13655 = t13647 + t13653 + t13654;
  t13690 = 0.24*t5891*t6046;
  t13691 = t13690 + t13668;
  t13695 = -0.24*t5891*t6046;
  t13696 = 0.24*t6021*t6114;
  t13697 = t13695 + t13696;
  t13693 = -1.*t6528*t13669;
  t13709 = -1.*t13655*t6615;
  t13720 = t6397*t13655;
  t13760 = 0.63*t5891;
  t13761 = -1.*t5891*t6100;
  t13762 = t13760 + t13761 + t13696;
  t13746 = t13669*t6615;
  t13656 = t13655*t6453;
  t13681 = t6397*t13669;
  t13689 = -1.*t13688*t6453;
  t13701 = -1.*t6397*t13697;
  t13713 = -1.*t6397*t13655;
  t13715 = -1.*t13669*t6615;
  t13721 = t13688*t6528;
  t13745 = t6453*t13697;
  t13643 = t13639*t6453;
  t13684 = t6528*t13683;
  t13685 = t13643 + t13656 + t13681 + t13684;
  t13686 = 3.2*t6703*t13685;
  t13692 = -1.*t6397*t13691;
  t13694 = -1.*t6397*t13683;
  t13707 = -1.*t13688*t6615;
  t13708 = -1.*t13639*t6615;
  t13710 = t13689 + t13692 + t13693 + t13694 + t13701 + t13707 + t13708 + t13709;
  t13711 = 3.2*t6515*t13710;
  t13712 = -1.*t6397*t13639;
  t13714 = -1.*t6453*t13683;
  t13716 = t13712 + t13713 + t13714 + t13715;
  t13717 = 3.2*t6642*t13716;
  t13718 = t6397*t13688;
  t13719 = t6397*t13639;
  t13722 = t6453*t13691;
  t13723 = t6453*t13683;
  t13747 = t13718 + t13719 + t13720 + t13721 + t13722 + t13723 + t13745 + t13746;
  t13748 = 3.2*t6194*t13747;
  t13749 = t13686 + t13711 + t13717 + t13748;
  t13786 = -1.*t13655*t6453;
  t13787 = -1.*t6397*t13669;
  t13788 = t13786 + t13787;
  t13790 = t13688*t6453;
  t13791 = t6528*t13691;
  t13792 = t13790 + t13656 + t13791 + t13681;
  t13794 = t13655*t6528;
  t13795 = t6453*t13669;
  t13796 = t13794 + t13795;
  t13802 = -1.*t6397*t13688;
  t13803 = -1.*t6453*t13691;
  t13804 = t13802 + t13713 + t13803 + t13715;
  t13751 = 0.74*t5891;
  t13752 = t13662 + t13751;
  t13815 = 3.2*t6642*t13788;
  t13816 = 3.2*t6194*t13792;
  t13817 = 3.2*t6703*t13796;
  t13818 = 3.2*t6515*t13804;
  t13819 = t13815 + t13816 + t13817 + t13818;
  t13839 = 6.4*t6642*t6515;
  t13840 = 6.4*t6703*t6194;
  t13841 = t13839 + t13840;
  p_output1[0]=var2[5]*(t6582 + t6715 - 0.5*t6630*var2[5]);
  p_output1[1]=var2[5]*(-0.5*t6630*var2[2] - 0.5*(t6044 + t6804 + t8581)*var2[5] - 0.5*t8947*var2[6]);
  p_output1[2]=var2[5]*(-0.5*t6713*var2[2] - 0.5*t8947*var2[5] - 0.5*(3.2*t13219*t6703 + t6804 + 6.4*t6703*t6817 + t8581 + 3.2*t12004*t8658 + 6.4*t6642*t8658)*var2[6]);
  p_output1[3]=-0.5*t13415*var2[5];
  p_output1[4]=-0.5*t13415*var2[2] - 1.*(t13393 + t13445 + t13460)*var2[5] - 0.5*t13481*var2[6];
  p_output1[5]=-0.5*t13481*var2[5];
  p_output1[6]=var2[5]*(-0.5*(t13559 + 3.2*(t13215 + t13566)*t6194 + 3.2*t6515*(t6459 + t6771))*var2[2] - 0.5*t13581*var2[5] - 0.5*t13590*var2[6]);
  p_output1[7]=var2[5]*(-0.5*t13581*var2[2] - 0.5*(t13559 + t13595 + t13602)*var2[5] - 0.5*t13612*var2[6]);
  p_output1[8]=var2[5]*(-0.5*t13590*var2[2] - 0.5*t13612*var2[5] - 0.5*(t13595 + t13602 + 3.2*t12004*t6594 + 6.4*t6594*t6642 + 6.4*t6623*t6703 + 3.2*t6667*t6703)*var2[6]);
  p_output1[9]=-0.5*t6578*var2[5];
  p_output1[10]=t6582 + t6715 - 1.*t6630*var2[5];
  p_output1[11]=-0.5*t6713*var2[5];
  p_output1[12]=var2[5]*(-0.5*(0.748*(-1.*t13752*t5891 + 0.11*Power(t5891,2)) + 3.2*t6194*(t13720 + t13746 + 2.*t13639*t6397 + 2.*t13683*t6453 + t13762*t6453 + t13639*t6528) + 3.2*t6515*(t13693 + t13709 - 2.*t13683*t6397 - 1.*t13762*t6397 - 1.*t13639*t6453 - 2.*t13639*t6615))*var2[5] - 0.5*t13749*var2[6]);
  p_output1[13]=var2[5]*(-0.5*t13749*var2[5] - 0.5*(3.2*t12004*t13796 + 3.2*t6194*(t13720 + t13721 + t13745 + t13746 + 2.*t13688*t6397 + 2.*t13691*t6453) + 3.2*t6515*(t13689 + t13693 + t13701 + t13709 - 2.*t13691*t6397 - 2.*t13688*t6615) + 6.4*t13804*t6642 + 3.2*t13788*t6703 + 6.4*t13792*t6703)*var2[6]);
  p_output1[14]=-1.*(0.748*(-1.*t13752*t6021 + 0.11*t5891*t6021) + 3.2*t13685*t6194 + 3.2*t13716*t6515)*var2[5] - 0.5*t13819*var2[6];
  p_output1[15]=-0.5*t13819*var2[5];
  p_output1[16]=-0.5*(6.4*t12004*t6194 + 6.4*Power(t6642,2) + 6.4*t6515*t6703 + 6.4*Power(t6703,2))*var2[5]*var2[6];
  p_output1[17]=-0.5*t13841*var2[6];
  p_output1[18]=-0.5*t13841*var2[5];
  p_output1[19]=-0.384*t12004*var2[5]*var2[6];
  p_output1[20]=-0.384*t6703*var2[6];
  p_output1[21]=-0.384*t6703*var2[5];
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

#include "J_Ce1_vec6_five_link_walker.hh"

namespace LeftStance
{

void J_Ce1_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
