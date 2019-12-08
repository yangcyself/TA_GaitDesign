/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:55:11 GMT-08:00
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
  double t9620;
  double t2143;
  double t9588;
  double t9621;
  double t9682;
  double t2121;
  double t9591;
  double t9648;
  double t9660;
  double t9681;
  double t9686;
  double t9687;
  double t9713;
  double t9715;
  double t9718;
  double t9757;
  double t9758;
  double t9768;
  double t9769;
  double t9777;
  double t9827;
  double t9821;
  double t9822;
  double t9828;
  double t9826;
  double t9832;
  double t9834;
  double t9836;
  double t9838;
  double t9840;
  double t9842;
  double t9843;
  double t9858;
  double t9875;
  double t9879;
  double t9880;
  double t9881;
  double t9882;
  double t9738;
  double t9740;
  double t9751;
  double t9802;
  double t9803;
  double t9806;
  double t9807;
  double t9808;
  double t9814;
  double t9866;
  double t9867;
  double t9872;
  double t9897;
  double t9898;
  double t9899;
  double t9900;
  double t9901;
  double t9905;
  double t9913;
  double t9933;
  double t9934;
  double t9947;
  double t9962;
  double t9965;
  double t10020;
  double t10021;
  double t10022;
  double t10024;
  double t10025;
  double t10026;
  double t10036;
  double t10037;
  double t10038;
  double t10039;
  double t10042;
  double t10053;
  double t10054;
  double t10055;
  double t10056;
  double t10058;
  double t10059;
  double t10060;
  double t9936;
  double t9937;
  double t9938;
  double t9909;
  double t9910;
  double t9911;
  double t9793;
  double t9797;
  double t9798;
  double t9940;
  double t9941;
  double t9778;
  double t9786;
  double t9790;
  double t9791;
  double t9971;
  double t9973;
  double t9974;
  double t9943;
  double t9944;
  double t9945;
  double t9893;
  double t9894;
  double t9895;
  double t9896;
  double t9978;
  double t9979;
  double t9874;
  double t9883;
  double t9884;
  double t9885;
  double t9886;
  double t9983;
  double t9984;
  double t9985;
  double t9986;
  double t9989;
  double t9990;
  double t9999;
  double t10000;
  double t9912;
  double t9935;
  double t9939;
  double t9942;
  double t9946;
  double t9969;
  double t9977;
  double t9980;
  double t9981;
  double t10012;
  double t10015;
  double t10016;
  double t10017;
  double t10018;
  double t10023;
  double t10027;
  double t10028;
  double t10030;
  double t10031;
  double t10032;
  double t10043;
  double t10044;
  double t10046;
  double t10048;
  double t10049;
  double t10050;
  double t10051;
  double t10057;
  double t10061;
  double t10062;
  double t10064;
  double t10065;
  double t10066;
  double t10011;
  double t10019;
  double t10029;
  double t10033;
  double t10047;
  double t10052;
  double t10063;
  double t10067;
  double t10068;
  double t10098;
  double t10099;
  double t10100;
  double t10101;
  double t10102;
  double t10103;
  double t10104;
  double t10105;
  double t10106;
  double t10072;
  double t10073;
  double t10074;
  double t10075;
  double t9753;
  double t9792;
  double t9815;
  double t9819;
  double t10112;
  double t10113;
  double t10114;
  double t10115;
  double t10144;
  double t10145;
  double t10109;
  double t10110;
  double t10078;
  double t10079;
  double t10080;
  double t10081;
  double t9873;
  double t9887;
  double t9906;
  double t9907;
  double t10120;
  double t10121;
  double t10122;
  double t10123;
  double t10163;
  double t10164;
  double t10117;
  double t10118;
  t9620 = Cos(var1[3]);
  t2143 = Cos(var1[4]);
  t9588 = Sin(var1[3]);
  t9621 = Sin(var1[4]);
  t9682 = Cos(var1[2]);
  t2121 = Sin(var1[2]);
  t9591 = -1.*t2143*t9588;
  t9648 = -1.*t9620*t9621;
  t9660 = t9591 + t9648;
  t9681 = t2121*t9660;
  t9686 = t9620*t2143;
  t9687 = -1.*t9588*t9621;
  t9713 = t9686 + t9687;
  t9715 = t9682*t9713;
  t9718 = t9681 + t9715;
  t9757 = -1.*t2143;
  t9758 = 1. + t9757;
  t9768 = 0.4*t9758;
  t9769 = 0.64*t2143;
  t9777 = t9768 + t9769;
  t9827 = Cos(var1[5]);
  t9821 = Cos(var1[6]);
  t9822 = Sin(var1[5]);
  t9828 = Sin(var1[6]);
  t9826 = -1.*t9821*t9822;
  t9832 = -1.*t9827*t9828;
  t9834 = t9826 + t9832;
  t9836 = t2121*t9834;
  t9838 = t9827*t9821;
  t9840 = -1.*t9822*t9828;
  t9842 = t9838 + t9840;
  t9843 = t9682*t9842;
  t9858 = t9836 + t9843;
  t9875 = -1.*t9821;
  t9879 = 1. + t9875;
  t9880 = 1.03*t9879;
  t9881 = 1.27*t9821;
  t9882 = t9880 + t9881;
  t9738 = t9682*t9620;
  t9740 = -1.*t2121*t9588;
  t9751 = t9738 + t9740;
  t9802 = t2143*t9588;
  t9803 = t9620*t9621;
  t9806 = t9802 + t9803;
  t9807 = t9682*t9806;
  t9808 = t2121*t9713;
  t9814 = t9807 + t9808;
  t9866 = t9682*t9827;
  t9867 = -1.*t2121*t9822;
  t9872 = t9866 + t9867;
  t9897 = t9821*t9822;
  t9898 = t9827*t9828;
  t9899 = t9897 + t9898;
  t9900 = t9682*t9899;
  t9901 = t2121*t9842;
  t9905 = t9900 + t9901;
  t9913 = t9620*t2121;
  t9933 = t9682*t9588;
  t9934 = t9913 + t9933;
  t9947 = t9827*t2121;
  t9962 = t9682*t9822;
  t9965 = t9947 + t9962;
  t10020 = t9777*t9588;
  t10021 = 0.24*t9620*t9621;
  t10022 = t10020 + t10021;
  t10024 = t9620*t9777;
  t10025 = -0.24*t9588*t9621;
  t10026 = t10024 + t10025;
  t10036 = -1.*t9827;
  t10037 = 1. + t10036;
  t10038 = 0.63*t10037;
  t10039 = 0.74*t9827;
  t10042 = t10038 + t10039;
  t10053 = -0.63*t9822;
  t10054 = t9882*t9822;
  t10055 = 0.24*t9827*t9828;
  t10056 = t10053 + t10054 + t10055;
  t10058 = t9827*t9882;
  t10059 = -0.24*t9822*t9828;
  t10060 = t10038 + t10058 + t10059;
  t9936 = t9682*t9660;
  t9937 = -1.*t2121*t9713;
  t9938 = t9936 + t9937;
  t9909 = -1.*t9620*t2121;
  t9910 = -1.*t9682*t9588;
  t9911 = t9909 + t9910;
  t9793 = t9777*t9621;
  t9797 = -0.24*t2143*t9621;
  t9798 = t9793 + t9797;
  t9940 = -1.*t2121*t9806;
  t9941 = t9940 + t9715;
  t9778 = t9777*t2143;
  t9786 = Power(t9621,2);
  t9790 = 0.24*t9786;
  t9791 = t9778 + t9790;
  t9971 = t9682*t9834;
  t9973 = -1.*t2121*t9842;
  t9974 = t9971 + t9973;
  t9943 = -1.*t9827*t2121;
  t9944 = -1.*t9682*t9822;
  t9945 = t9943 + t9944;
  t9893 = -0.63*t9828;
  t9894 = -0.24*t9821*t9828;
  t9895 = t9882*t9828;
  t9896 = t9893 + t9894 + t9895;
  t9978 = -1.*t2121*t9899;
  t9979 = t9978 + t9843;
  t9874 = -0.63*t9821;
  t9883 = t9821*t9882;
  t9884 = Power(t9828,2);
  t9885 = 0.24*t9884;
  t9886 = t9874 + t9883 + t9885;
  t9983 = Power(t9682,2);
  t9984 = -12.*t9983;
  t9985 = Power(t2121,2);
  t9986 = -12.*t9985;
  t9989 = Power(t9751,2);
  t9990 = -6.8*t9989;
  t9999 = Power(t9872,2);
  t10000 = -6.8*t9999;
  t9912 = -6.8*t9911*t9751;
  t9935 = -6.8*t9934*t9751;
  t9939 = -3.2*t9718*t9938;
  t9942 = -3.2*t9941*t9814;
  t9946 = -6.8*t9945*t9872;
  t9969 = -6.8*t9965*t9872;
  t9977 = -3.2*t9858*t9974;
  t9980 = -3.2*t9979*t9905;
  t9981 = t9912 + t9935 + t9939 + t9942 + t9946 + t9969 + t9977 + t9980;
  t10012 = Power(t9620,2);
  t10015 = 0.11*t10012;
  t10016 = Power(t9588,2);
  t10017 = 0.11*t10016;
  t10018 = t10015 + t10017;
  t10023 = -1.*t10022*t9713;
  t10027 = -1.*t9660*t10026;
  t10028 = t10023 + t10027;
  t10030 = t10022*t9806;
  t10031 = t9713*t10026;
  t10032 = t10030 + t10031;
  t10043 = t10042*t9822;
  t10044 = -0.11*t9827*t9822;
  t10046 = t10043 + t10044;
  t10048 = t10042*t9827;
  t10049 = Power(t9822,2);
  t10050 = 0.11*t10049;
  t10051 = t10048 + t10050;
  t10057 = -1.*t10056*t9842;
  t10061 = -1.*t9834*t10060;
  t10062 = t10057 + t10061;
  t10064 = t10056*t9899;
  t10065 = t9842*t10060;
  t10066 = t10064 + t10065;
  t10011 = -2.88*t9682;
  t10019 = -6.8*t9751*t10018;
  t10029 = -3.2*t9814*t10028;
  t10033 = -3.2*t9718*t10032;
  t10047 = -6.8*t9965*t10046;
  t10052 = -6.8*t9872*t10051;
  t10063 = -3.2*t9905*t10062;
  t10067 = -3.2*t9858*t10066;
  t10068 = t10011 + t10019 + t10029 + t10033 + t10047 + t10052 + t10063 + t10067;
  t10098 = 2.88*t2121;
  t10099 = -6.8*t9911*t10018;
  t10100 = -3.2*t9941*t10028;
  t10101 = -3.2*t9938*t10032;
  t10102 = -6.8*t10046*t9872;
  t10103 = -6.8*t9945*t10051;
  t10104 = -3.2*t9979*t10062;
  t10105 = -3.2*t9974*t10066;
  t10106 = t10098 + t10099 + t10100 + t10101 + t10102 + t10103 + t10104 + t10105;
  t10072 = -0.748*t9911;
  t10073 = -3.2*t9798*t9941;
  t10074 = -3.2*t9791*t9938;
  t10075 = t10072 + t10073 + t10074;
  t9753 = -0.748*t9751;
  t9792 = -3.2*t9791*t9718;
  t9815 = -3.2*t9798*t9814;
  t9819 = t9753 + t9792 + t9815;
  t10112 = -0.748*t10018;
  t10113 = -3.2*t9798*t10028;
  t10114 = -3.2*t9791*t10032;
  t10115 = -0.67 + t10112 + t10113 + t10114;
  t10144 = -0.768*t9791;
  t10145 = -0.2 + t10144;
  t10109 = -0.768*t10032;
  t10110 = -0.2 + t10109;
  t10078 = -0.748*t9945;
  t10079 = -3.2*t9896*t9979;
  t10080 = -3.2*t9886*t9974;
  t10081 = t10078 + t10079 + t10080;
  t9873 = -0.748*t9872;
  t9887 = -3.2*t9886*t9858;
  t9906 = -3.2*t9896*t9905;
  t9907 = t9873 + t9887 + t9906;
  t10120 = -0.748*t10051;
  t10121 = -3.2*t9896*t10062;
  t10122 = -3.2*t9886*t10066;
  t10123 = -0.67 + t10120 + t10121 + t10122;
  t10163 = -0.768*t9886;
  t10164 = -0.2 + t10163;
  t10117 = -0.768*t10066;
  t10118 = -0.2 + t10117;
  p_output1[0]=(t10000 - 3.2*Power(t9718,2) - 3.2*Power(t9814,2) - 3.2*Power(t9858,2) - 3.2*Power(t9905,2) - 6.8*Power(t9934,2) - 6.8*Power(t9965,2) + t9984 + t9986 + t9990)*var2[0] + t9981*var2[1] + t10068*var2[2] + t9819*var2[3] - 0.768*t9718*var2[4] + t9907*var2[5] - 0.768*t9858*var2[6];
  p_output1[1]=t9981*var2[0] + (t10000 - 6.8*Power(t9911,2) - 3.2*Power(t9938,2) - 3.2*Power(t9941,2) - 6.8*Power(t9945,2) - 3.2*Power(t9974,2) - 3.2*Power(t9979,2) + t9984 + t9986 + t9990)*var2[1] + t10106*var2[2] + t10075*var2[3] - 0.768*t9938*var2[4] + t10081*var2[5] - 0.768*t9974*var2[6];
  p_output1[2]=t10068*var2[0] + t10106*var2[1] + (-3.3612 - 6.8*Power(t10018,2) - 3.2*Power(t10028,2) - 3.2*Power(t10032,2) - 6.8*Power(t10046,2) - 6.8*Power(t10051,2) - 3.2*Power(t10062,2) - 3.2*Power(t10066,2))*var2[2] + t10115*var2[3] + t10110*var2[4] + t10123*var2[5] + t10118*var2[6];
  p_output1[3]=t9819*var2[0] + t10075*var2[1] + t10115*var2[2] + (-1.58228 - 3.2*Power(t9791,2) - 3.2*Power(t9798,2))*var2[3] + t10145*var2[4];
  p_output1[4]=-0.768*t9718*var2[0] - 0.768*t9938*var2[1] + t10110*var2[2] + t10145*var2[3] - 1.2143199999999998*var2[4];
  p_output1[5]=t9907*var2[0] + t10081*var2[1] + t10123*var2[2] + (-1.58228 - 3.2*Power(t9886,2) - 3.2*Power(t9896,2))*var2[5] + t10164*var2[6];
  p_output1[6]=-0.768*t9858*var2[0] - 0.768*t9974*var2[1] + t10118*var2[2] + t10164*var2[5] - 1.2143199999999998*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "MmatDx_five_link_walker.hh"

namespace LeftStance
{

void MmatDx_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
