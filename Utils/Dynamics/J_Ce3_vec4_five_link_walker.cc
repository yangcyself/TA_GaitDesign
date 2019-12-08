/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:57:17 GMT-08:00
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
  double t6118;
  double t3068;
  double t3142;
  double t1846;
  double t6567;
  double t1059;
  double t6466;
  double t6520;
  double t6521;
  double t6522;
  double t6563;
  double t6640;
  double t6700;
  double t6701;
  double t8402;
  double t8410;
  double t8798;
  double t8804;
  double t8807;
  double t8808;
  double t6706;
  double t6564;
  double t6568;
  double t6571;
  double t6576;
  double t6591;
  double t6593;
  double t6599;
  double t1910;
  double t4543;
  double t5980;
  double t6063;
  double t8810;
  double t6621;
  double t8816;
  double t8817;
  double t8818;
  double t8828;
  double t6743;
  double t8832;
  double t8843;
  double t8844;
  double t8847;
  double t8840;
  double t8841;
  double t8842;
  double t8848;
  double t8849;
  double t8857;
  double t8860;
  double t8881;
  double t8882;
  double t8883;
  double t8874;
  double t8875;
  double t8876;
  double t8809;
  double t8811;
  double t8861;
  double t8862;
  double t8863;
  double t8877;
  double t8878;
  double t8879;
  double t6770;
  double t8812;
  double t8814;
  double t9726;
  double t9804;
  double t10041;
  double t10044;
  double t10377;
  double t10422;
  double t10471;
  double t8858;
  double t8859;
  double t8870;
  double t8871;
  double t8872;
  double t8873;
  double t8829;
  double t10624;
  double t10625;
  double t10634;
  double t10594;
  double t10619;
  double t10620;
  double t10659;
  double t10660;
  double t10661;
  double t10637;
  double t10646;
  double t10647;
  double t10548;
  double t10554;
  double t10564;
  double t10565;
  double t10568;
  double t10569;
  double t10570;
  double t10573;
  double t10579;
  double t10636;
  double t11815;
  double t11819;
  double t10662;
  double t10699;
  double t11829;
  double t11832;
  double t11834;
  double t12135;
  double t10709;
  double t11717;
  double t11721;
  double t11793;
  double t11794;
  double t11796;
  double t11800;
  double t11813;
  double t12465;
  double t15579;
  double t15580;
  double t15599;
  double t15600;
  double t15911;
  double t15912;
  double t15923;
  double t15940;
  double t15941;
  double t15947;
  double t8880;
  double t8884;
  double t8885;
  double t8886;
  double t9157;
  double t9295;
  double t9304;
  double t9308;
  double t9370;
  double t9442;
  double t11528;
  double t11665;
  double t11690;
  double t11716;
  double t11757;
  double t11782;
  double t11787;
  double t11789;
  double t11814;
  double t11820;
  double t11821;
  double t11833;
  double t12179;
  double t12186;
  double t12210;
  double t12231;
  double t12385;
  double t15604;
  double t15605;
  double t15614;
  double t15615;
  double t15659;
  double t15660;
  double t15661;
  double t15662;
  double t15668;
  double t15669;
  double t15908;
  double t15909;
  double t15910;
  double t15958;
  double t15961;
  double t15962;
  double t8833;
  double t16039;
  double t16044;
  double t16045;
  double t16047;
  double t16051;
  double t16053;
  double t16054;
  double t16055;
  double t16064;
  double t16065;
  double t16066;
  double t16076;
  double t16077;
  double t16078;
  double t16081;
  double t16082;
  double t16083;
  double t16084;
  double t16085;
  t6118 = Cos(var1[4]);
  t3068 = Sin(var1[2]);
  t3142 = Sin(var1[3]);
  t1846 = Cos(var1[3]);
  t6567 = Sin(var1[4]);
  t1059 = Cos(var1[2]);
  t6466 = -1.*t6118;
  t6520 = 1. + t6466;
  t6521 = 0.4*t6520;
  t6522 = 0.64*t6118;
  t6563 = t6521 + t6522;
  t6640 = t1846*t6118;
  t6700 = -1.*t3142*t6567;
  t6701 = t6640 + t6700;
  t8402 = t6563*t6567;
  t8410 = -0.24*t6118*t6567;
  t8798 = t8402 + t8410;
  t8804 = t6118*t3142;
  t8807 = t1846*t6567;
  t8808 = t8804 + t8807;
  t6706 = -1.*t1059*t6701;
  t6564 = t6563*t6118;
  t6568 = Power(t6567,2);
  t6571 = 0.24*t6568;
  t6576 = t6564 + t6571;
  t6591 = -1.*t6118*t3142;
  t6593 = -1.*t1846*t6567;
  t6599 = t6591 + t6593;
  t1910 = -1.*t1059*t1846;
  t4543 = t3068*t3142;
  t5980 = t1910 + t4543;
  t6063 = -0.748*t5980;
  t8810 = -1.*t3068*t6701;
  t6621 = -1.*t3068*t6599;
  t8816 = t1846*t3068;
  t8817 = t1059*t3142;
  t8818 = t8816 + t8817;
  t8828 = -0.748*t8818;
  t6743 = t6621 + t6706;
  t8832 = -1.*t1059*t6599;
  t8843 = -1.*t1846*t6118;
  t8844 = t3142*t6567;
  t8847 = t8843 + t8844;
  t8840 = t1059*t6599;
  t8841 = t8840 + t8810;
  t8842 = -3.2*t8798*t8841;
  t8848 = t1059*t8847;
  t8849 = t6621 + t8848;
  t8857 = -3.2*t6576*t8849;
  t8860 = -3.2*t8798*t6743;
  t8881 = -1.*t6563*t6567;
  t8882 = 0.24*t6118*t6567;
  t8883 = t8881 + t8882;
  t8874 = Power(t6118,2);
  t8875 = -0.24*t8874;
  t8876 = t6564 + t8875;
  t8809 = -1.*t1059*t8808;
  t8811 = t8809 + t8810;
  t8861 = -1.*t3068*t8847;
  t8862 = t8832 + t8861;
  t8863 = -3.2*t6576*t8862;
  t8877 = -1.*t3068*t8808;
  t8878 = t1059*t6701;
  t8879 = t8877 + t8878;
  t6770 = -3.2*t6576*t6743;
  t8812 = -3.2*t8798*t8811;
  t8814 = t6063 + t6770 + t8812;
  t9726 = -1.*t1846*t3068;
  t9804 = -1.*t1059*t3142;
  t10041 = t9726 + t9804;
  t10044 = -0.748*t10041;
  t10377 = -3.2*t8798*t8879;
  t10422 = -3.2*t6576*t8841;
  t10471 = t10044 + t10377 + t10422;
  t8858 = t6063 + t8842 + t8857;
  t8859 = -0.5*var2[0]*t8858;
  t8870 = t8828 + t8860 + t8863;
  t8871 = -0.5*var2[1]*t8870;
  t8872 = t8859 + t8871;
  t8873 = var2[3]*t8872;
  t8829 = t3068*t8808;
  t10624 = t1846*t6563;
  t10625 = -0.24*t3142*t6567;
  t10634 = t10624 + t10625;
  t10594 = -1.*t6563*t3142;
  t10619 = -0.24*t1846*t6567;
  t10620 = t10594 + t10619;
  t10659 = t6563*t3142;
  t10660 = 0.24*t1846*t6567;
  t10661 = t10659 + t10660;
  t10637 = -1.*t1846*t6563;
  t10646 = 0.24*t3142*t6567;
  t10647 = t10637 + t10646;
  t10548 = -3.2*t8798*t8849;
  t10554 = t1059*t8808;
  t10564 = t10554 + t8861;
  t10565 = -3.2*t6576*t10564;
  t10568 = t8829 + t8848;
  t10569 = -3.2*t6576*t10568;
  t10570 = t3068*t8847;
  t10573 = t8840 + t10570;
  t10579 = -3.2*t8798*t10573;
  t10636 = -1.*t8808*t10634;
  t11815 = -0.24*t6118*t3142;
  t11819 = t11815 + t10619;
  t10662 = -1.*t10661*t8847;
  t10699 = t6599*t10661;
  t11829 = 0.24*t1846*t6118;
  t11832 = t11829 + t10625;
  t11834 = -0.24*t1846*t6118;
  t12135 = t11834 + t10646;
  t10709 = t10634*t8847;
  t11717 = t3068*t6599;
  t11721 = t11717 + t8878;
  t11793 = t10620*t6701;
  t11794 = t10661*t6701;
  t11796 = t6599*t10634;
  t11800 = t8808*t10634;
  t11813 = t11793 + t11794 + t11796 + t11800;
  t12465 = -1.*t6599*t10620;
  t15579 = -1.*t6599*t10661;
  t15580 = -1.*t6701*t10634;
  t15599 = -1.*t10634*t8847;
  t15600 = t12465 + t15579 + t15580 + t15599;
  t15911 = -3.2*t8798*t11721;
  t15912 = -3.2*t6576*t10573;
  t15923 = t10044 + t15911 + t15912;
  t15940 = -3.2*t6576*t11813;
  t15941 = -3.2*t8798*t15600;
  t15947 = t15940 + t15941;
  t8880 = -3.2*t8876*t8879;
  t8884 = -3.2*t8883*t8841;
  t8885 = t8880 + t8842 + t8884 + t8857;
  t8886 = -0.5*var2[0]*t8885;
  t9157 = -3.2*t8883*t6743;
  t9295 = -3.2*t8876*t8811;
  t9304 = t8860 + t9157 + t9295 + t8863;
  t9308 = -0.5*var2[1]*t9304;
  t9370 = t8886 + t9308;
  t9442 = var2[3]*t9370;
  t11528 = -3.2*t8876*t8841;
  t11665 = -3.2*t8883*t8849;
  t11690 = t11528 + t10548 + t11665 + t10565;
  t11716 = -0.5*var2[1]*t11690;
  t11757 = -3.2*t8876*t11721;
  t11782 = -3.2*t8883*t10573;
  t11787 = t11757 + t10569 + t10579 + t11782;
  t11789 = -0.5*var2[0]*t11787;
  t11814 = -3.2*t8883*t11813;
  t11820 = -1.*t11819*t6701;
  t11821 = -1.*t6599*t10634;
  t11833 = -1.*t6599*t11832;
  t12179 = -1.*t6599*t12135;
  t12186 = -1.*t10620*t8847;
  t12210 = -1.*t11819*t8847;
  t12231 = t11820 + t11821 + t10636 + t11833 + t12179 + t12186 + t12210 + t10662;
  t12385 = -3.2*t8798*t12231;
  t15604 = -3.2*t8876*t15600;
  t15605 = t6599*t10620;
  t15614 = t6599*t11819;
  t15615 = t11819*t8808;
  t15659 = t6701*t10634;
  t15660 = t6701*t11832;
  t15661 = t6701*t12135;
  t15662 = t15605 + t15614 + t10699 + t15615 + t15659 + t15660 + t15661 + t10709;
  t15668 = -3.2*t6576*t15662;
  t15669 = t11814 + t12385 + t15604 + t15668;
  t15908 = -0.5*var2[2]*t15669;
  t15909 = t11716 + t11789 + t15908;
  t15910 = var2[3]*t15909;
  t15958 = -1.*t6563*t6118;
  t15961 = 0.24*t8874;
  t15962 = t15958 + t15961;
  t8833 = t3068*t6701;
  t16039 = t10554 + t8833;
  t16044 = -1.*t10661*t6701;
  t16045 = t16044 + t11821;
  t16047 = t10661*t8808;
  t16051 = t16047 + t15659;
  t16053 = t11819*t6701;
  t16054 = t8808*t11832;
  t16055 = t16053 + t11794 + t11796 + t16054;
  t16064 = -1.*t6599*t11819;
  t16065 = -1.*t6701*t11832;
  t16066 = t16064 + t15579 + t16065 + t15599;
  t16076 = -3.2*t8883*t11721;
  t16077 = -3.2*t8876*t16039;
  t16078 = t15911 + t16076 + t16077 + t15912;
  t16081 = -3.2*t8876*t16045;
  t16082 = -3.2*t8883*t16051;
  t16083 = -3.2*t6576*t16055;
  t16084 = -3.2*t8798*t16066;
  t16085 = t16081 + t16082 + t16083 + t16084;
  p_output1[0]=(-0.5*t8814*var2[0] - 0.5*(t8828 - 3.2*t8798*(t6706 + t8829) - 3.2*t6576*(t8832 + t8833))*var2[1])*var2[3];
  p_output1[1]=t8873;
  p_output1[2]=t9442;
  p_output1[3]=-0.5*t10471*var2[3];
  p_output1[4]=-0.5*t8814*var2[3];
  p_output1[5]=-0.5*t10471*var2[0] - 0.5*t8814*var2[1];
  p_output1[6]=t8873;
  p_output1[7]=(-0.5*(t10569 + t10579 + t6063)*var2[0] - 0.5*(t10548 + t10565 + t8828)*var2[1] - 0.5*(-3.2*t6576*(t10699 + t10709 + 2.*t10620*t6599 + 2.*t10634*t6701 + t10647*t6701 + t10620*t8808) - 3.2*t8798*(t10636 + t10662 - 2.*t10634*t6599 - 1.*t10647*t6599 - 1.*t10620*t6701 - 2.*t10620*t8847))*var2[2])*var2[3];
  p_output1[8]=t15910;
  p_output1[9]=-0.5*t15923*var2[3];
  p_output1[10]=-0.5*t8858*var2[3];
  p_output1[11]=-0.5*t15947*var2[3];
  p_output1[12]=-0.5*t15923*var2[0] - 0.5*t8858*var2[1] - 0.5*t15947*var2[2];
  p_output1[13]=t9442;
  p_output1[14]=t15910;
  p_output1[15]=var2[3]*(-0.5*(t10569 + t10579 - 3.2*t11721*t15962 - 6.4*t11721*t8876 - 6.4*t10573*t8883 - 3.2*t16039*t8883)*var2[0] - 0.5*(t10548 + t10565 - 3.2*t15962*t8841 - 6.4*t8841*t8876 - 6.4*t8849*t8883 - 3.2*t8879*t8883)*var2[1] - 0.5*(-3.2*t15962*t16051 - 3.2*t6576*(t10699 + t10709 + t15615 + t15661 + 2.*t11819*t6599 + 2.*t11832*t6701) - 3.2*t8798*(t10636 + t10662 + t11820 + t12179 - 2.*t11832*t6599 - 2.*t11819*t8847) - 6.4*t16066*t8876 - 3.2*t16045*t8883 - 6.4*t16055*t8883)*var2[2] - 0.5*(-6.4*t15962*t6576 - 6.4*Power(t8876,2) - 6.4*t8798*t8883 - 6.4*Power(t8883,2))*var2[3] + 0.384*t15962*var2[4]);
  p_output1[16]=-0.5*t16078*var2[3];
  p_output1[17]=-0.5*t8885*var2[3];
  p_output1[18]=-0.5*t16085*var2[3];
  p_output1[19]=-0.5*t16078*var2[0] - 0.5*t8885*var2[1] - 0.5*t16085*var2[2] - 1.*(-6.4*t8798*t8876 - 6.4*t6576*t8883)*var2[3] + 0.384*t8883*var2[4];
  p_output1[20]=0.384*t8883*var2[3];
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

#include "J_Ce3_vec4_five_link_walker.hh"

namespace LeftStance
{

void J_Ce3_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
