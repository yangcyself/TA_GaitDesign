/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:58:53 GMT-08:00
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
  double t11266;
  double t11263;
  double t11264;
  double t11267;
  double t11271;
  double t11259;
  double t11265;
  double t11268;
  double t11269;
  double t11270;
  double t11272;
  double t11273;
  double t11274;
  double t11275;
  double t11276;
  double t11290;
  double t11291;
  double t11292;
  double t11293;
  double t11294;
  double t11320;
  double t11317;
  double t11318;
  double t11321;
  double t11319;
  double t11322;
  double t11323;
  double t11324;
  double t11325;
  double t11326;
  double t11327;
  double t11328;
  double t11329;
  double t11349;
  double t11350;
  double t11351;
  double t11356;
  double t11357;
  double t11285;
  double t11286;
  double t11288;
  double t11304;
  double t11305;
  double t11306;
  double t11307;
  double t11309;
  double t11310;
  double t11338;
  double t11339;
  double t11340;
  double t13824;
  double t13860;
  double t13867;
  double t13881;
  double t13891;
  double t13941;
  double t16686;
  double t16690;
  double t16692;
  double t16715;
  double t16716;
  double t16717;
  double t16797;
  double t16798;
  double t16799;
  double t16801;
  double t16802;
  double t16803;
  double t16811;
  double t16812;
  double t16813;
  double t16814;
  double t16815;
  double t16825;
  double t16826;
  double t16827;
  double t16828;
  double t16830;
  double t16831;
  double t16832;
  double t9775;
  double t10072;
  double t16694;
  double t16695;
  double t16701;
  double t11283;
  double t11284;
  double t14447;
  double t16631;
  double t16632;
  double t11301;
  double t11302;
  double t11303;
  double t16703;
  double t16704;
  double t11296;
  double t11297;
  double t11298;
  double t11299;
  double t11314;
  double t11315;
  double t16719;
  double t16720;
  double t16721;
  double t11331;
  double t11336;
  double t16711;
  double t16712;
  double t16713;
  double t12391;
  double t13342;
  double t13375;
  double t13823;
  double t16724;
  double t16726;
  double t11348;
  double t11358;
  double t11359;
  double t11360;
  double t11689;
  double t14151;
  double t14287;
  double t16732;
  double t16733;
  double t16734;
  double t16735;
  double t16763;
  double t16764;
  double t16778;
  double t16779;
  double t16730;
  double t16731;
  double t16685;
  double t16693;
  double t16702;
  double t16710;
  double t16714;
  double t16718;
  double t16722;
  double t16727;
  double t16728;
  double t16786;
  double t16787;
  double t16789;
  double t16790;
  double t16791;
  double t16793;
  double t16795;
  double t16800;
  double t16804;
  double t16805;
  double t16807;
  double t16808;
  double t16809;
  double t16816;
  double t16817;
  double t16818;
  double t16820;
  double t16821;
  double t16822;
  double t16823;
  double t16829;
  double t16833;
  double t16834;
  double t16836;
  double t16837;
  double t16838;
  double t16903;
  double t16904;
  double t16905;
  double t16788;
  double t16796;
  double t16806;
  double t16810;
  double t16819;
  double t16824;
  double t16835;
  double t16839;
  double t16840;
  double t16871;
  double t16872;
  double t16873;
  double t16874;
  double t16875;
  double t16876;
  double t16877;
  double t16878;
  double t16879;
  double t16845;
  double t16846;
  double t16847;
  double t16848;
  double t11289;
  double t11300;
  double t11311;
  double t11312;
  double t16885;
  double t16886;
  double t16887;
  double t16888;
  double t16940;
  double t16941;
  double t16882;
  double t16883;
  double t16891;
  double t16892;
  double t16893;
  double t16894;
  double t16895;
  double t16896;
  double t16897;
  double t16901;
  double t16902;
  double t16906;
  double t16907;
  double t16908;
  double t16909;
  double t16910;
  double t16851;
  double t16852;
  double t16853;
  double t16854;
  double t11347;
  double t12105;
  double t14005;
  double t14055;
  double t16916;
  double t16917;
  double t16918;
  double t16919;
  double t16965;
  double t16966;
  double t16913;
  double t16914;
  t11266 = Cos(var2[3]);
  t11263 = Cos(var2[4]);
  t11264 = Sin(var2[3]);
  t11267 = Sin(var2[4]);
  t11271 = Cos(var2[2]);
  t11259 = Sin(var2[2]);
  t11265 = -1.*t11263*t11264;
  t11268 = -1.*t11266*t11267;
  t11269 = t11265 + t11268;
  t11270 = t11259*t11269;
  t11272 = t11266*t11263;
  t11273 = -1.*t11264*t11267;
  t11274 = t11272 + t11273;
  t11275 = t11271*t11274;
  t11276 = t11270 + t11275;
  t11290 = -1.*t11263;
  t11291 = 1. + t11290;
  t11292 = 0.4*t11291;
  t11293 = 0.64*t11263;
  t11294 = t11292 + t11293;
  t11320 = Cos(var2[5]);
  t11317 = Cos(var2[6]);
  t11318 = Sin(var2[5]);
  t11321 = Sin(var2[6]);
  t11319 = -1.*t11317*t11318;
  t11322 = -1.*t11320*t11321;
  t11323 = t11319 + t11322;
  t11324 = t11259*t11323;
  t11325 = t11320*t11317;
  t11326 = -1.*t11318*t11321;
  t11327 = t11325 + t11326;
  t11328 = t11271*t11327;
  t11329 = t11324 + t11328;
  t11349 = -1.*t11317;
  t11350 = 1. + t11349;
  t11351 = 1.03*t11350;
  t11356 = 1.27*t11317;
  t11357 = t11351 + t11356;
  t11285 = t11271*t11266;
  t11286 = -1.*t11259*t11264;
  t11288 = t11285 + t11286;
  t11304 = t11263*t11264;
  t11305 = t11266*t11267;
  t11306 = t11304 + t11305;
  t11307 = t11271*t11306;
  t11309 = t11259*t11274;
  t11310 = t11307 + t11309;
  t11338 = t11271*t11320;
  t11339 = -1.*t11259*t11318;
  t11340 = t11338 + t11339;
  t13824 = t11317*t11318;
  t13860 = t11320*t11321;
  t13867 = t13824 + t13860;
  t13881 = t11271*t13867;
  t13891 = t11259*t11327;
  t13941 = t13881 + t13891;
  t16686 = t11266*t11259;
  t16690 = t11271*t11264;
  t16692 = t16686 + t16690;
  t16715 = t11320*t11259;
  t16716 = t11271*t11318;
  t16717 = t16715 + t16716;
  t16797 = t11294*t11264;
  t16798 = 0.24*t11266*t11267;
  t16799 = t16797 + t16798;
  t16801 = t11266*t11294;
  t16802 = -0.24*t11264*t11267;
  t16803 = t16801 + t16802;
  t16811 = -1.*t11320;
  t16812 = 1. + t16811;
  t16813 = 0.63*t16812;
  t16814 = 0.74*t11320;
  t16815 = t16813 + t16814;
  t16825 = -0.63*t11318;
  t16826 = t11357*t11318;
  t16827 = 0.24*t11320*t11321;
  t16828 = t16825 + t16826 + t16827;
  t16830 = t11320*t11357;
  t16831 = -0.24*t11318*t11321;
  t16832 = t16813 + t16830 + t16831;
  t9775 = -1.*var1[6];
  t10072 = var3[4] + t9775;
  t16694 = t11271*t11269;
  t16695 = -1.*t11259*t11274;
  t16701 = t16694 + t16695;
  t11283 = -1.*var1[5];
  t11284 = var3[3] + t11283;
  t14447 = -1.*t11266*t11259;
  t16631 = -1.*t11271*t11264;
  t16632 = t14447 + t16631;
  t11301 = t11294*t11267;
  t11302 = -0.24*t11263*t11267;
  t11303 = t11301 + t11302;
  t16703 = -1.*t11259*t11306;
  t16704 = t16703 + t11275;
  t11296 = t11294*t11263;
  t11297 = Power(t11267,2);
  t11298 = 0.24*t11297;
  t11299 = t11296 + t11298;
  t11314 = -1.*var1[4];
  t11315 = var3[6] + t11314;
  t16719 = t11271*t11323;
  t16720 = -1.*t11259*t11327;
  t16721 = t16719 + t16720;
  t11331 = -1.*var1[3];
  t11336 = var3[5] + t11331;
  t16711 = -1.*t11320*t11259;
  t16712 = -1.*t11271*t11318;
  t16713 = t16711 + t16712;
  t12391 = -0.63*t11321;
  t13342 = -0.24*t11317*t11321;
  t13375 = t11357*t11321;
  t13823 = t12391 + t13342 + t13375;
  t16724 = -1.*t11259*t13867;
  t16726 = t16724 + t11328;
  t11348 = -0.63*t11317;
  t11358 = t11317*t11357;
  t11359 = Power(t11321,2);
  t11360 = 0.24*t11359;
  t11689 = t11348 + t11358 + t11360;
  t14151 = -1.*var1[1];
  t14287 = var3[1] + t14151;
  t16732 = Power(t11271,2);
  t16733 = 12.*t16732;
  t16734 = Power(t11259,2);
  t16735 = 12.*t16734;
  t16763 = Power(t11288,2);
  t16764 = 6.8*t16763;
  t16778 = Power(t11340,2);
  t16779 = 6.8*t16778;
  t16730 = -1.*var1[0];
  t16731 = var3[0] + t16730;
  t16685 = 6.8*t16632*t11288;
  t16693 = 6.8*t16692*t11288;
  t16702 = 3.2*t11276*t16701;
  t16710 = 3.2*t16704*t11310;
  t16714 = 6.8*t16713*t11340;
  t16718 = 6.8*t16717*t11340;
  t16722 = 3.2*t11329*t16721;
  t16727 = 3.2*t16726*t13941;
  t16728 = t16685 + t16693 + t16702 + t16710 + t16714 + t16718 + t16722 + t16727;
  t16786 = -1.*var1[2];
  t16787 = var3[2] + t16786;
  t16789 = Power(t11266,2);
  t16790 = 0.11*t16789;
  t16791 = Power(t11264,2);
  t16793 = 0.11*t16791;
  t16795 = t16790 + t16793;
  t16800 = -1.*t16799*t11274;
  t16804 = -1.*t11269*t16803;
  t16805 = t16800 + t16804;
  t16807 = t16799*t11306;
  t16808 = t11274*t16803;
  t16809 = t16807 + t16808;
  t16816 = t16815*t11318;
  t16817 = -0.11*t11320*t11318;
  t16818 = t16816 + t16817;
  t16820 = t16815*t11320;
  t16821 = Power(t11318,2);
  t16822 = 0.11*t16821;
  t16823 = t16820 + t16822;
  t16829 = -1.*t16828*t11327;
  t16833 = -1.*t11323*t16832;
  t16834 = t16829 + t16833;
  t16836 = t16828*t13867;
  t16837 = t11327*t16832;
  t16838 = t16836 + t16837;
  t16903 = -1.*t11271*t11320;
  t16904 = t11259*t11318;
  t16905 = t16903 + t16904;
  t16788 = 2.88*t11271;
  t16796 = 6.8*t11288*t16795;
  t16806 = 3.2*t11310*t16805;
  t16810 = 3.2*t11276*t16809;
  t16819 = 6.8*t16717*t16818;
  t16824 = 6.8*t11340*t16823;
  t16835 = 3.2*t13941*t16834;
  t16839 = 3.2*t11329*t16838;
  t16840 = t16788 + t16796 + t16806 + t16810 + t16819 + t16824 + t16835 + t16839;
  t16871 = -2.88*t11259;
  t16872 = 6.8*t16632*t16795;
  t16873 = 3.2*t16704*t16805;
  t16874 = 3.2*t16701*t16809;
  t16875 = 6.8*t16818*t11340;
  t16876 = 6.8*t16713*t16823;
  t16877 = 3.2*t16726*t16834;
  t16878 = 3.2*t16721*t16838;
  t16879 = t16871 + t16872 + t16873 + t16874 + t16875 + t16876 + t16877 + t16878;
  t16845 = 0.748*t16632;
  t16846 = 3.2*t11303*t16704;
  t16847 = 3.2*t11299*t16701;
  t16848 = t16845 + t16846 + t16847;
  t11289 = 0.748*t11288;
  t11300 = 3.2*t11299*t11276;
  t11311 = 3.2*t11303*t11310;
  t11312 = t11289 + t11300 + t11311;
  t16885 = 0.748*t16795;
  t16886 = 3.2*t11303*t16805;
  t16887 = 3.2*t11299*t16809;
  t16888 = 0.67 + t16885 + t16886 + t16887;
  t16940 = 0.768*t11299;
  t16941 = 0.2 + t16940;
  t16882 = 0.768*t16809;
  t16883 = 0.2 + t16882;
  t16891 = 0.63*t11259*t11318;
  t16892 = 1.03*t11350*t11340;
  t16893 = -1.03*t16713*t11321;
  t16894 = t11317*t11340;
  t16895 = t16713*t11321;
  t16896 = t16894 + t16895;
  t16897 = 1.43*t16896;
  t16901 = 0.63*t11271*t11318;
  t16902 = 1.03*t11350*t16713;
  t16906 = -1.03*t16905*t11321;
  t16907 = t11317*t16713;
  t16908 = t16905*t11321;
  t16909 = t16907 + t16908;
  t16910 = 1.43*t16909;
  t16851 = 0.748*t16713;
  t16852 = 3.2*t13823*t16726;
  t16853 = 3.2*t11689*t16721;
  t16854 = t16851 + t16852 + t16853;
  t11347 = 0.748*t11340;
  t12105 = 3.2*t11689*t11329;
  t14005 = 3.2*t13823*t13941;
  t14055 = t11347 + t12105 + t14005;
  t16916 = 0.748*t16823;
  t16917 = 3.2*t13823*t16834;
  t16918 = 3.2*t11689*t16838;
  t16919 = 0.67 + t16916 + t16917 + t16918;
  t16965 = 0.768*t11689;
  t16966 = 0.2 + t16965;
  t16913 = 0.768*t16838;
  t16914 = 0.2 + t16913;
  p_output1[0]=0.768*t10072*t11276 + t11284*t11312 + 0.768*t11315*t11329 + t11336*t14055 + t14287*t16728 + t16731*(3.2*Power(t11276,2) + 3.2*Power(t11310,2) + 3.2*Power(t11329,2) + 3.2*Power(t13941,2) + 6.8*Power(t16692,2) + 6.8*Power(t16717,2) + t16733 + t16735 + t16764 + t16779) + t16787*t16840 - 1.*var4[0];
  p_output1[1]=0.768*t10072*t16701 + 0.768*t11315*t16721 + t16728*t16731 + t14287*(6.8*Power(t16632,2) + 3.2*Power(t16701,2) + 3.2*Power(t16704,2) + 6.8*Power(t16713,2) + 3.2*Power(t16721,2) + 3.2*Power(t16726,2) + t16733 + t16735 + t16764 + t16779) + t11284*t16848 + t11336*t16854 + t16787*t16879 - 1.*var4[2];
  p_output1[2]=t16787*(3.3612 + 6.8*Power(t16795,2) + 3.2*Power(t16805,2) + 3.2*Power(t16809,2) + 6.8*Power(t16818,2) + 6.8*Power(t16823,2) + 3.2*Power(t16834,2) + 3.2*Power(t16838,2)) + t16731*t16840 + t14287*t16879 + t10072*t16883 + t11284*t16888 + t11315*t16914 + t11336*t16919 - 1.*(0.63*t11271*t16812 + t16891 + t16892 + t16893 + t16897)*var4[0] - 1.*(-0.63*t11259*t16812 + t16901 + t16902 + t16906 + t16910)*var4[2];
  p_output1[3]=t11284*(1.58228 + 3.2*Power(t11299,2) + 3.2*Power(t11303,2)) + t11312*t16731 + t14287*t16848 + t16787*t16888 + t10072*t16941;
  p_output1[4]=1.2143199999999998*t10072 + 0.768*t14287*t16701 + 0.768*t11276*t16731 + t16787*t16883 + t11284*t16941;
  p_output1[5]=t11336*(1.58228 + 3.2*Power(t11689,2) + 3.2*Power(t13823,2)) + t14055*t16731 + t14287*t16854 + t16787*t16919 + t11315*t16966 - 1.*(-0.63*t11271*t11320 + t16891 + t16892 + t16893 + t16897)*var4[0] - 1.*(0.63*t11259*t11320 + t16901 + t16902 + t16906 + t16910)*var4[2];
  p_output1[6]=1.2143199999999998*t11315 + 0.768*t14287*t16721 + 0.768*t11329*t16731 + t16787*t16914 + t11336*t16966 - 1.*(-1.03*t11317*t11340 + 1.03*t11321*t16717 + 1.43*(-1.*t11321*t16717 + t16894))*var4[0] - 1.*(1.03*t11321*t11340 - 1.03*t11317*t16713 + 1.43*(-1.*t11321*t11340 + t16907))*var4[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMapLeftImpact.hh"

namespace LeftImpact
{

void dxDiscreteMapLeftImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
