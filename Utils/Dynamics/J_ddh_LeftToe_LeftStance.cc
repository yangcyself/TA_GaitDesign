/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:58:00 GMT-08:00
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
  double t3165;
  double t4810;
  double t14152;
  double t14156;
  double t16522;
  double t16536;
  double t16537;
  double t16538;
  double t16569;
  double t16572;
  double t16573;
  double t16580;
  double t16593;
  double t16594;
  double t16595;
  double t16596;
  double t16597;
  double t16598;
  double t16615;
  double t10378;
  double t13899;
  double t16527;
  double t16535;
  double t16621;
  double t16622;
  double t16623;
  double t16618;
  double t16619;
  double t16620;
  double t16624;
  double t16625;
  double t16626;
  double t16628;
  double t16630;
  double t16633;
  double t16639;
  double t16644;
  double t16652;
  double t16660;
  double t16661;
  double t16662;
  double t16663;
  double t16664;
  double t16673;
  double t16674;
  double t16675;
  double t16671;
  double t16672;
  double t16676;
  double t16677;
  double t16678;
  double t16679;
  double t16669;
  double t16682;
  double t16683;
  double t16684;
  double t16512;
  double t16568;
  double t16581;
  double t16589;
  double t16590;
  double t16591;
  double t16592;
  double t16616;
  double t16617;
  double t16640;
  double t16641;
  double t16642;
  double t16651;
  double t16656;
  double t16657;
  double t16658;
  double t16659;
  double t16665;
  double t16666;
  double t16667;
  double t16668;
  double t16687;
  double t16688;
  double t16689;
  double t16705;
  double t16706;
  double t16707;
  double t16708;
  double t16709;
  double t14054;
  double t16691;
  double t16723;
  double t16725;
  double t16696;
  double t16697;
  double t16698;
  double t16699;
  double t16700;
  double t16670;
  double t16680;
  double t16681;
  double t16740;
  double t16742;
  double t16747;
  double t16748;
  double t16749;
  double t16750;
  double t16751;
  double t16757;
  double t16758;
  double t16759;
  double t16760;
  double t16761;
  double t16762;
  double t16765;
  double t16766;
  double t16767;
  double t16768;
  double t16736;
  double t16738;
  double t16739;
  double t16741;
  double t16743;
  double t16744;
  double t16745;
  double t16746;
  double t16752;
  double t16753;
  double t16754;
  double t16755;
  double t16771;
  double t16772;
  double t16773;
  double t16792;
  double t16794;
  t3165 = Cos(var1[2]);
  t4810 = Cos(var1[5]);
  t14152 = Sin(var1[2]);
  t14156 = Sin(var1[5]);
  t16522 = Cos(var1[6]);
  t16536 = t3165*t4810;
  t16537 = -1.*t14152*t14156;
  t16538 = t16536 + t16537;
  t16569 = -1.*t4810*t14152;
  t16572 = -1.*t3165*t14156;
  t16573 = t16569 + t16572;
  t16580 = Sin(var1[6]);
  t16593 = -1.03*t16522*t16573;
  t16594 = 1.03*t16538*t16580;
  t16595 = t16522*t16573;
  t16596 = -1.*t16538*t16580;
  t16597 = t16595 + t16596;
  t16598 = 1.43*t16597;
  t16615 = t16593 + t16594 + t16598;
  t10378 = -1.*t4810;
  t13899 = 1. + t10378;
  t16527 = -1.*t16522;
  t16535 = 1. + t16527;
  t16621 = -1.*t3165*t4810;
  t16622 = t14152*t14156;
  t16623 = t16621 + t16622;
  t16618 = -0.63*t13899*t14152;
  t16619 = 0.63*t3165*t14156;
  t16620 = 1.03*t16535*t16573;
  t16624 = -1.03*t16623*t16580;
  t16625 = t16623*t16580;
  t16626 = t16595 + t16625;
  t16628 = 1.43*t16626;
  t16630 = t16618 + t16619 + t16620 + t16624 + t16628;
  t16633 = 0.63*t4810*t14152;
  t16639 = t16633 + t16619 + t16620 + t16624 + t16628;
  t16644 = 1.03*t16573*t16580;
  t16652 = -1.*t16573*t16580;
  t16660 = -1.03*t16522*t16623;
  t16661 = t16522*t16623;
  t16662 = t16661 + t16652;
  t16663 = 1.43*t16662;
  t16664 = t16660 + t16644 + t16663;
  t16673 = t4810*t14152;
  t16674 = t3165*t14156;
  t16675 = t16673 + t16674;
  t16671 = -0.63*t14152*t14156;
  t16672 = 1.03*t16535*t16623;
  t16676 = -1.03*t16675*t16580;
  t16677 = t16675*t16580;
  t16678 = t16661 + t16677;
  t16679 = 1.43*t16678;
  t16669 = var2[6]*t16664;
  t16682 = 0.63*t3165*t4810;
  t16683 = t16682 + t16671 + t16672 + t16676 + t16679;
  t16684 = var2[5]*t16683;
  t16512 = 0.63*t14152*t14156;
  t16568 = 1.03*t16535*t16538;
  t16581 = -1.03*t16573*t16580;
  t16589 = t16522*t16538;
  t16590 = t16573*t16580;
  t16591 = t16589 + t16590;
  t16592 = 1.43*t16591;
  t16616 = var3[6]*t16615;
  t16617 = var2[6]*t16615;
  t16640 = var3[5]*t16639;
  t16641 = var2[5]*t16639;
  t16642 = 1.03*t16522*t16538;
  t16651 = -1.*t16522*t16538;
  t16656 = t16651 + t16652;
  t16657 = 1.43*t16656;
  t16658 = t16642 + t16644 + t16657;
  t16659 = var2[6]*t16658;
  t16665 = var2[2]*t16664;
  t16666 = var2[5]*t16664;
  t16667 = t16659 + t16665 + t16666;
  t16668 = var2[6]*t16667;
  t16687 = var2[2]*t16683;
  t16688 = t16669 + t16687 + t16684;
  t16689 = var2[5]*t16688;
  t16705 = 1.03*t16522*t16675;
  t16706 = -1.*t16522*t16675;
  t16707 = t16706 + t16596;
  t16708 = 1.43*t16707;
  t16709 = t16705 + t16594 + t16708;
  t14054 = 0.63*t3165*t13899;
  t16691 = -0.63*t3165*t4810;
  t16723 = 2.*var2[6]*t16615;
  t16725 = 2.*var2[5]*t16639;
  t16696 = -1.03*t16522*t16538;
  t16697 = 1.03*t16675*t16580;
  t16698 = -1.*t16675*t16580;
  t16699 = t16589 + t16698;
  t16700 = 1.43*t16699;
  t16670 = -0.63*t3165*t13899;
  t16680 = t16670 + t16671 + t16672 + t16676 + t16679;
  t16681 = var2[2]*t16680;
  t16740 = 1.03*t16623*t16580;
  t16742 = -1.*t16623*t16580;
  t16747 = -1.03*t16522*t16675;
  t16748 = t16522*t16675;
  t16749 = t16748 + t16742;
  t16750 = 1.43*t16749;
  t16751 = t16747 + t16740 + t16750;
  t16757 = -0.63*t3165*t14156;
  t16758 = 1.03*t16535*t16675;
  t16759 = -1.03*t16538*t16580;
  t16760 = t16538*t16580;
  t16761 = t16748 + t16760;
  t16762 = 1.43*t16761;
  t16765 = -0.63*t4810*t14152;
  t16766 = t16765 + t16757 + t16758 + t16759 + t16762;
  t16767 = var2[5]*t16766;
  t16768 = var2[6]*t16751;
  t16736 = var3[6]*t16664;
  t16738 = var3[5]*t16683;
  t16739 = 1.03*t16522*t16573;
  t16741 = -1.*t16522*t16573;
  t16743 = t16741 + t16742;
  t16744 = 1.43*t16743;
  t16745 = t16739 + t16740 + t16744;
  t16746 = var2[6]*t16745;
  t16752 = var2[2]*t16751;
  t16753 = var2[5]*t16751;
  t16754 = t16746 + t16752 + t16753;
  t16755 = var2[6]*t16754;
  t16771 = var2[2]*t16766;
  t16772 = t16771 + t16767 + t16768;
  t16773 = var2[5]*t16772;
  t16792 = 2.*var2[6]*t16664;
  t16794 = 2.*var2[5]*t16683;
  p_output1[0]=1.;
  p_output1[1]=t14054 + t16512 + t16568 + t16581 + t16592 + t16616 + t16617 + t16640 + t16641 + t16668 + t16689 + t16630*var2[2] + (t16669 + t16681 + t16684)*var2[2] + t16630*var3[2];
  p_output1[2]=t16512 + t16568 + t16581 + t16592 + t16616 + t16617 + t16640 + t16641 + t16668 + t16689 + t16691 + t16639*var2[2] + t16688*var2[2] + t16639*var3[2];
  p_output1[3]=t16696 + t16697 + t16700 + t16615*var2[2] + t16667*var2[2] + t16615*var2[5] + t16667*var2[5] + t16709*var2[6] + var2[6]*(t16658*var2[2] + t16658*var2[5] + (t16642 + t16676 + 1.43*(t16651 + t16677))*var2[6]) + t16615*var3[2] + t16615*var3[5] + t16709*var3[6];
  p_output1[4]=1.;
  p_output1[5]=t14054 + t16512 + t16568 + t16581 + t16592 + t16723 + t16725 + 2.*t16630*var2[2];
  p_output1[6]=t16512 + t16568 + t16581 + t16592 + t16691 + t16723 + t16725 + 2.*t16639*var2[2];
  p_output1[7]=t16696 + t16697 + t16700 + 2.*t16615*var2[2] + 2.*t16615*var2[5] + 2.*t16709*var2[6];
  p_output1[8]=1.;
  p_output1[9]=t14054 + t16512 + t16568 + t16581 + t16592;
  p_output1[10]=t16512 + t16568 + t16581 + t16592 + t16691;
  p_output1[11]=t16696 + t16697 + t16700;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t16618 + t16619 + t16620 + t16624 + t16628 + t16669 + t16681 + t16684 + t16736 + t16738 + t16755 + t16773 + var2[2]*(t16767 + t16768 + (0.63*t13899*t14152 + t16757 + t16758 + t16759 + t16762)*var2[2]) + t16680*var3[2];
  p_output1[16]=t16619 + t16620 + t16624 + t16628 + t16633 + t16669 + t16684 + t16687 + t16736 + t16738 + t16755 + t16773 + t16772*var2[2] + t16683*var3[2];
  p_output1[17]=t16593 + t16594 + t16598 + t16659 + t16665 + t16666 + t16754*var2[2] + t16754*var2[5] + var2[6]*(t16745*var2[2] + t16745*var2[5] + (t16739 + t16759 + 1.43*(t16741 + t16760))*var2[6]) + t16664*var3[2] + t16664*var3[5] + t16658*var3[6];
  p_output1[18]=1.;
  p_output1[19]=t16618 + t16619 + t16620 + t16624 + t16628 + t16792 + t16794 + 2.*t16680*var2[2];
  p_output1[20]=t16619 + t16620 + t16624 + t16628 + t16633 + t16792 + t16794 + 2.*t16683*var2[2];
  p_output1[21]=t16593 + t16594 + t16598 + 2.*t16664*var2[2] + 2.*t16664*var2[5] + 2.*t16658*var2[6];
  p_output1[22]=1.;
  p_output1[23]=t16630;
  p_output1[24]=t16639;
  p_output1[25]=t16615;
  p_output1[26]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 27, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_LeftToe_LeftStance.hh"

namespace LeftStance
{

void J_ddh_LeftToe_LeftStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
