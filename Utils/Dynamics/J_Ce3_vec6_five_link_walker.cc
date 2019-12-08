/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:57:25 GMT-08:00
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
  double t10638;
  double t10536;
  double t10543;
  double t10120;
  double t13843;
  double t6937;
  double t10728;
  double t10810;
  double t10821;
  double t10837;
  double t12433;
  double t13886;
  double t13887;
  double t13910;
  double t13984;
  double t13986;
  double t13987;
  double t13988;
  double t13994;
  double t13996;
  double t13997;
  double t13970;
  double t10721;
  double t13825;
  double t13853;
  double t13866;
  double t13868;
  double t13871;
  double t13872;
  double t13883;
  double t10483;
  double t10566;
  double t10567;
  double t10583;
  double t14002;
  double t13884;
  double t14041;
  double t14043;
  double t14056;
  double t14057;
  double t13973;
  double t14062;
  double t14114;
  double t14115;
  double t14120;
  double t14104;
  double t14106;
  double t14110;
  double t14121;
  double t14122;
  double t14134;
  double t14183;
  double t14186;
  double t14199;
  double t14201;
  double t14141;
  double t14163;
  double t14164;
  double t14167;
  double t14000;
  double t14004;
  double t14142;
  double t14144;
  double t14145;
  double t14168;
  double t14171;
  double t14180;
  double t13981;
  double t14006;
  double t14019;
  double t14229;
  double t14230;
  double t14237;
  double t14238;
  double t14239;
  double t14240;
  double t14243;
  double t14136;
  double t14140;
  double t14146;
  double t14149;
  double t14153;
  double t14154;
  double t14058;
  double t15939;
  double t15950;
  double t15953;
  double t15972;
  double t15973;
  double t15967;
  double t15968;
  double t15969;
  double t15970;
  double t16052;
  double t16056;
  double t16057;
  double t16061;
  double t16032;
  double t16033;
  double t16038;
  double t16040;
  double t16041;
  double t16042;
  double t15974;
  double t14289;
  double t14306;
  double t14308;
  double t14321;
  double t14356;
  double t14357;
  double t14362;
  double t14367;
  double t14423;
  double t15975;
  double t16142;
  double t16143;
  double t16062;
  double t16069;
  double t16145;
  double t16146;
  double t16154;
  double t16157;
  double t16073;
  double t16100;
  double t16101;
  double t15954;
  double t15955;
  double t16106;
  double t16107;
  double t16108;
  double t16120;
  double t16124;
  double t16165;
  double t16167;
  double t16169;
  double t16172;
  double t16173;
  double t16187;
  double t16188;
  double t16189;
  double t16192;
  double t16253;
  double t16254;
  double t16255;
  double t16260;
  double t16261;
  double t16262;
  double t14181;
  double t14205;
  double t14208;
  double t14209;
  double t14211;
  double t14215;
  double t14216;
  double t14217;
  double t14218;
  double t14219;
  double t16091;
  double t16092;
  double t16093;
  double t16099;
  double t16102;
  double t16103;
  double t16104;
  double t16105;
  double t16136;
  double t16144;
  double t16147;
  double t16148;
  double t16160;
  double t16161;
  double t16162;
  double t16163;
  double t16164;
  double t16174;
  double t16175;
  double t16176;
  double t16177;
  double t16178;
  double t16179;
  double t16180;
  double t16181;
  double t16182;
  double t16183;
  double t16184;
  double t16185;
  double t16186;
  double t16268;
  double t16269;
  double t16270;
  double t16271;
  double t14064;
  double t16295;
  double t16300;
  double t16301;
  double t16302;
  double t16304;
  double t16305;
  double t16306;
  double t16308;
  double t16309;
  double t16310;
  double t16324;
  double t16325;
  double t16326;
  double t16336;
  double t16337;
  double t16338;
  double t16341;
  double t16342;
  double t16343;
  double t16344;
  double t16345;
  t10638 = Cos(var1[6]);
  t10536 = Sin(var1[2]);
  t10543 = Sin(var1[5]);
  t10120 = Cos(var1[5]);
  t13843 = Sin(var1[6]);
  t6937 = Cos(var1[2]);
  t10728 = -1.*t10638;
  t10810 = 1. + t10728;
  t10821 = 1.03*t10810;
  t10837 = 1.27*t10638;
  t12433 = t10821 + t10837;
  t13886 = t10120*t10638;
  t13887 = -1.*t10543*t13843;
  t13910 = t13886 + t13887;
  t13984 = -0.63*t13843;
  t13986 = -0.24*t10638*t13843;
  t13987 = t12433*t13843;
  t13988 = t13984 + t13986 + t13987;
  t13994 = t10638*t10543;
  t13996 = t10120*t13843;
  t13997 = t13994 + t13996;
  t13970 = -1.*t6937*t13910;
  t10721 = -0.63*t10638;
  t13825 = t10638*t12433;
  t13853 = Power(t13843,2);
  t13866 = 0.24*t13853;
  t13868 = t10721 + t13825 + t13866;
  t13871 = -1.*t10638*t10543;
  t13872 = -1.*t10120*t13843;
  t13883 = t13871 + t13872;
  t10483 = -1.*t6937*t10120;
  t10566 = t10536*t10543;
  t10567 = t10483 + t10566;
  t10583 = -0.748*t10567;
  t14002 = -1.*t10536*t13910;
  t13884 = -1.*t10536*t13883;
  t14041 = t10120*t10536;
  t14043 = t6937*t10543;
  t14056 = t14041 + t14043;
  t14057 = -0.748*t14056;
  t13973 = t13884 + t13970;
  t14062 = -1.*t6937*t13883;
  t14114 = -1.*t10120*t10638;
  t14115 = t10543*t13843;
  t14120 = t14114 + t14115;
  t14104 = t6937*t13883;
  t14106 = t14104 + t14002;
  t14110 = -3.2*t13988*t14106;
  t14121 = t6937*t14120;
  t14122 = t13884 + t14121;
  t14134 = -3.2*t13868*t14122;
  t14183 = 0.63*t13843;
  t14186 = 0.24*t10638*t13843;
  t14199 = -1.*t12433*t13843;
  t14201 = t14183 + t14186 + t14199;
  t14141 = -3.2*t13988*t13973;
  t14163 = Power(t10638,2);
  t14164 = -0.24*t14163;
  t14167 = t10721 + t14164 + t13825;
  t14000 = -1.*t6937*t13997;
  t14004 = t14000 + t14002;
  t14142 = -1.*t10536*t14120;
  t14144 = t14062 + t14142;
  t14145 = -3.2*t13868*t14144;
  t14168 = -1.*t10536*t13997;
  t14171 = t6937*t13910;
  t14180 = t14168 + t14171;
  t13981 = -3.2*t13868*t13973;
  t14006 = -3.2*t13988*t14004;
  t14019 = t10583 + t13981 + t14006;
  t14229 = -1.*t10120*t10536;
  t14230 = -1.*t6937*t10543;
  t14237 = t14229 + t14230;
  t14238 = -0.748*t14237;
  t14239 = -3.2*t13988*t14180;
  t14240 = -3.2*t13868*t14106;
  t14243 = t14238 + t14239 + t14240;
  t14136 = t10583 + t14110 + t14134;
  t14140 = -0.5*var2[0]*t14136;
  t14146 = t14057 + t14141 + t14145;
  t14149 = -0.5*var2[1]*t14146;
  t14153 = t14140 + t14149;
  t14154 = var2[5]*t14153;
  t14058 = t10536*t13997;
  t15939 = -1.*t10120;
  t15950 = 1. + t15939;
  t15953 = 0.63*t15950;
  t15972 = t10120*t12433;
  t15973 = -0.24*t10543*t13843;
  t15967 = 0.63*t10543;
  t15968 = -1.*t12433*t10543;
  t15969 = -0.24*t10120*t13843;
  t15970 = t15967 + t15968 + t15969;
  t16052 = -0.63*t10543;
  t16056 = t12433*t10543;
  t16057 = 0.24*t10120*t13843;
  t16061 = t16052 + t16056 + t16057;
  t16032 = -0.63*t10120;
  t16033 = t16032 + t15972 + t15973;
  t16038 = 0.63*t10120;
  t16040 = -1.*t10120*t12433;
  t16041 = 0.24*t10543*t13843;
  t16042 = t16038 + t16040 + t16041;
  t15974 = t15953 + t15972 + t15973;
  t14289 = -3.2*t13988*t14122;
  t14306 = t6937*t13997;
  t14308 = t14306 + t14142;
  t14321 = -3.2*t13868*t14308;
  t14356 = t14058 + t14121;
  t14357 = -3.2*t13868*t14356;
  t14362 = t10536*t14120;
  t14367 = t14104 + t14362;
  t14423 = -3.2*t13988*t14367;
  t15975 = -1.*t13997*t15974;
  t16142 = -0.24*t10638*t10543;
  t16143 = t16142 + t15969;
  t16062 = -1.*t16061*t14120;
  t16069 = t13883*t16061;
  t16145 = 0.24*t10120*t10638;
  t16146 = t16145 + t15973;
  t16154 = -0.24*t10120*t10638;
  t16157 = t16154 + t16041;
  t16073 = t15974*t14120;
  t16100 = t10536*t13883;
  t16101 = t16100 + t14171;
  t15954 = 0.74*t10120;
  t15955 = t15953 + t15954;
  t16106 = t15970*t13910;
  t16107 = t16061*t13910;
  t16108 = t13883*t15974;
  t16120 = t13997*t16033;
  t16124 = t16106 + t16107 + t16108 + t16120;
  t16165 = -1.*t13883*t15970;
  t16167 = -1.*t13883*t16061;
  t16169 = -1.*t13910*t16033;
  t16172 = -1.*t15974*t14120;
  t16173 = t16165 + t16167 + t16169 + t16172;
  t16187 = -3.2*t13988*t16101;
  t16188 = -3.2*t13868*t14367;
  t16189 = t14238 + t16187 + t16188;
  t16192 = -1.*t15955*t10543;
  t16253 = 0.11*t10120*t10543;
  t16254 = t16192 + t16253;
  t16255 = -0.748*t16254;
  t16260 = -3.2*t13868*t16124;
  t16261 = -3.2*t13988*t16173;
  t16262 = t16255 + t16260 + t16261;
  t14181 = -3.2*t14167*t14180;
  t14205 = -3.2*t14201*t14106;
  t14208 = t14181 + t14205 + t14110 + t14134;
  t14209 = -0.5*var2[0]*t14208;
  t14211 = -3.2*t14201*t13973;
  t14215 = -3.2*t14167*t14004;
  t14216 = t14211 + t14141 + t14215 + t14145;
  t14217 = -0.5*var2[1]*t14216;
  t14218 = t14209 + t14217;
  t14219 = var2[5]*t14218;
  t16091 = -3.2*t14167*t14106;
  t16092 = -3.2*t14201*t14122;
  t16093 = t16091 + t16092 + t14289 + t14321;
  t16099 = -0.5*var2[1]*t16093;
  t16102 = -3.2*t14167*t16101;
  t16103 = -3.2*t14201*t14367;
  t16104 = t16102 + t14357 + t16103 + t14423;
  t16105 = -0.5*var2[0]*t16104;
  t16136 = -3.2*t14201*t16124;
  t16144 = -1.*t16143*t13910;
  t16147 = -1.*t13883*t16146;
  t16148 = -1.*t13883*t16033;
  t16160 = -1.*t13883*t16157;
  t16161 = -1.*t16143*t14120;
  t16162 = -1.*t15970*t14120;
  t16163 = t16144 + t16147 + t15975 + t16148 + t16160 + t16161 + t16162 + t16062;
  t16164 = -3.2*t13988*t16163;
  t16174 = -3.2*t14167*t16173;
  t16175 = t13883*t16143;
  t16176 = t13883*t15970;
  t16177 = t16143*t13997;
  t16178 = t13910*t16146;
  t16179 = t13910*t16033;
  t16180 = t13910*t16157;
  t16181 = t16175 + t16176 + t16069 + t16177 + t16178 + t16179 + t16180 + t16073;
  t16182 = -3.2*t13868*t16181;
  t16183 = t16136 + t16164 + t16174 + t16182;
  t16184 = -0.5*var2[2]*t16183;
  t16185 = t16099 + t16105 + t16184;
  t16186 = var2[5]*t16185;
  t16268 = 0.63*t10638;
  t16269 = 0.24*t14163;
  t16270 = -1.*t10638*t12433;
  t16271 = t16268 + t16269 + t16270;
  t14064 = t10536*t13910;
  t16295 = t14306 + t14064;
  t16300 = -1.*t16061*t13910;
  t16301 = -1.*t13883*t15974;
  t16302 = t16300 + t16301;
  t16304 = t16143*t13910;
  t16305 = t13997*t16146;
  t16306 = t16304 + t16107 + t16305 + t16108;
  t16308 = t16061*t13997;
  t16309 = t13910*t15974;
  t16310 = t16308 + t16309;
  t16324 = -1.*t13883*t16143;
  t16325 = -1.*t13910*t16146;
  t16326 = t16324 + t16167 + t16325 + t16172;
  t16336 = -3.2*t14201*t16101;
  t16337 = -3.2*t14167*t16295;
  t16338 = t16336 + t16187 + t16337 + t16188;
  t16341 = -3.2*t14167*t16302;
  t16342 = -3.2*t13868*t16306;
  t16343 = -3.2*t14201*t16310;
  t16344 = -3.2*t13988*t16326;
  t16345 = t16341 + t16342 + t16343 + t16344;
  p_output1[0]=(-0.5*t14019*var2[0] - 0.5*(t14057 - 3.2*t13988*(t13970 + t14058) - 3.2*t13868*(t14062 + t14064))*var2[1])*var2[5];
  p_output1[1]=t14154;
  p_output1[2]=t14219;
  p_output1[3]=-0.5*t14243*var2[5];
  p_output1[4]=-0.5*t14019*var2[5];
  p_output1[5]=-0.5*t14243*var2[0] - 0.5*t14019*var2[1];
  p_output1[6]=t14154;
  p_output1[7]=(-0.5*(t10583 + t14357 + t14423)*var2[0] - 0.5*(t14057 + t14289 + t14321)*var2[1] - 0.5*(-0.748*(0.11*Power(t10120,2) - 1.*t10120*t15955) - 3.2*t13988*(-1.*t13910*t15970 - 2.*t14120*t15970 + t15975 - 2.*t13883*t16033 - 1.*t13883*t16042 + t16062) - 3.2*t13868*(2.*t13883*t15970 + t13997*t15970 + 2.*t13910*t16033 + t13910*t16042 + t16069 + t16073))*var2[2])*var2[5];
  p_output1[8]=t16186;
  p_output1[9]=-0.5*t16189*var2[5];
  p_output1[10]=-0.5*t14136*var2[5];
  p_output1[11]=-0.5*t16262*var2[5];
  p_output1[12]=-0.5*t16189*var2[0] - 0.5*t14136*var2[1] - 0.5*t16262*var2[2];
  p_output1[13]=t14219;
  p_output1[14]=t16186;
  p_output1[15]=var2[5]*(-0.5*(t14357 - 6.4*t14201*t14367 + t14423 - 6.4*t14167*t16101 - 3.2*t16101*t16271 - 3.2*t14201*t16295)*var2[0] - 0.5*(-6.4*t14106*t14167 - 6.4*t14122*t14201 - 3.2*t14180*t14201 + t14289 + t14321 - 3.2*t14106*t16271)*var2[1] - 0.5*(-3.2*t13988*(t15975 + t16062 - 2.*t14120*t16143 + t16144 - 2.*t13883*t16146 + t16160) - 3.2*t13868*(t16069 + t16073 + 2.*t13883*t16143 + 2.*t13910*t16146 + t16177 + t16180) - 3.2*t14201*t16302 - 6.4*t14201*t16306 - 3.2*t16271*t16310 - 6.4*t14167*t16326)*var2[2] - 0.5*(-6.4*Power(t14167,2) - 6.4*t13988*t14201 - 6.4*Power(t14201,2) - 6.4*t13868*t16271)*var2[5] + 0.384*t16271*var2[6]);
  p_output1[16]=-0.5*t16338*var2[5];
  p_output1[17]=-0.5*t14208*var2[5];
  p_output1[18]=-0.5*t16345*var2[5];
  p_output1[19]=-0.5*t16338*var2[0] - 0.5*t14208*var2[1] - 0.5*t16345*var2[2] - 1.*(-6.4*t13988*t14167 - 6.4*t13868*t14201)*var2[5] + 0.384*t14201*var2[6];
  p_output1[20]=0.384*t14201*var2[5];
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

#include "J_Ce3_vec6_five_link_walker.hh"

namespace LeftStance
{

void J_Ce3_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
