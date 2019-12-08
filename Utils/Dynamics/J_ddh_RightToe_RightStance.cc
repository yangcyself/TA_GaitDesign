/*
 * Automatically Generated from Mathematica.
 * Tue 29 Oct 2019 19:42:04 GMT-07:00
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
  double t8912;
  double t8914;
  double t8890;
  double t8915;
  double t4625;
  double t8913;
  double t8916;
  double t8927;
  double t8929;
  double t8930;
  double t8937;
  double t8938;
  double t8951;
  double t8952;
  double t8953;
  double t8954;
  double t8955;
  double t8969;
  double t8970;
  double t4763;
  double t6626;
  double t8974;
  double t8975;
  double t8976;
  double t8973;
  double t8977;
  double t8979;
  double t8981;
  double t8982;
  double t8983;
  double t9004;
  double t9006;
  double t9011;
  double t9012;
  double t9013;
  double t9014;
  double t9015;
  double t9022;
  double t9023;
  double t9024;
  double t9021;
  double t9025;
  double t9026;
  double t9027;
  double t9028;
  double t9029;
  double t9020;
  double t9030;
  double t9031;
  double t9032;
  double t8928;
  double t8946;
  double t8947;
  double t8948;
  double t8949;
  double t8950;
  double t8971;
  double t8972;
  double t8984;
  double t8990;
  double t8991;
  double t8992;
  double t8993;
  double t9005;
  double t9007;
  double t9008;
  double t9009;
  double t9010;
  double t9016;
  double t9017;
  double t9018;
  double t9019;
  double t9033;
  double t9034;
  double t9035;
  double t9045;
  double t9046;
  double t9047;
  double t9048;
  double t9049;
  double t9063;
  double t9064;
  double t9065;
  double t9066;
  double t9036;
  double t9037;
  double t9038;
  double t9039;
  double t9040;
  double t9071;
  double t9077;
  double t9079;
  double t9084;
  double t9085;
  double t9086;
  double t9087;
  double t9088;
  double t9093;
  double t9094;
  double t9095;
  double t9096;
  double t9097;
  double t9098;
  double t9099;
  double t9100;
  double t9101;
  double t9102;
  double t9073;
  double t9074;
  double t9075;
  double t9076;
  double t9078;
  double t9080;
  double t9081;
  double t9082;
  double t9083;
  double t9089;
  double t9090;
  double t9091;
  double t9092;
  double t9103;
  double t9104;
  double t9105;
  double t9120;
  double t9121;
  double t9122;
  double t9123;
  t8912 = Cos(var1[3]);
  t8914 = Sin(var1[2]);
  t8890 = Cos(var1[2]);
  t8915 = Sin(var1[3]);
  t4625 = Cos(var1[4]);
  t8913 = t8890*t8912;
  t8916 = -1.*t8914*t8915;
  t8927 = t8913 + t8916;
  t8929 = -1.*t8912*t8914;
  t8930 = -1.*t8890*t8915;
  t8937 = t8929 + t8930;
  t8938 = Sin(var1[4]);
  t8951 = -0.4*t4625*t8937;
  t8952 = 0.4*t8927*t8938;
  t8953 = t4625*t8937;
  t8954 = -1.*t8927*t8938;
  t8955 = t8953 + t8954;
  t8969 = 0.8*t8955;
  t8970 = t8951 + t8952 + t8969;
  t4763 = -1.*t4625;
  t6626 = 1. + t4763;
  t8974 = -1.*t8890*t8912;
  t8975 = t8914*t8915;
  t8976 = t8974 + t8975;
  t8973 = 0.4*t6626*t8937;
  t8977 = -0.4*t8976*t8938;
  t8979 = t8976*t8938;
  t8981 = t8953 + t8979;
  t8982 = 0.8*t8981;
  t8983 = t8973 + t8977 + t8982;
  t9004 = 0.4*t8937*t8938;
  t9006 = -1.*t8937*t8938;
  t9011 = -0.4*t4625*t8976;
  t9012 = t4625*t8976;
  t9013 = t9012 + t9006;
  t9014 = 0.8*t9013;
  t9015 = t9011 + t9004 + t9014;
  t9022 = t8912*t8914;
  t9023 = t8890*t8915;
  t9024 = t9022 + t9023;
  t9021 = 0.4*t6626*t8976;
  t9025 = -0.4*t9024*t8938;
  t9026 = t9024*t8938;
  t9027 = t9012 + t9026;
  t9028 = 0.8*t9027;
  t9029 = t9021 + t9025 + t9028;
  t9020 = var2[4]*t9015;
  t9030 = var2[2]*t9029;
  t9031 = var2[3]*t9029;
  t9032 = t9020 + t9030 + t9031;
  t8928 = 0.4*t6626*t8927;
  t8946 = -0.4*t8937*t8938;
  t8947 = t4625*t8927;
  t8948 = t8937*t8938;
  t8949 = t8947 + t8948;
  t8950 = 0.8*t8949;
  t8971 = var3[4]*t8970;
  t8972 = var2[4]*t8970;
  t8984 = var3[2]*t8983;
  t8990 = var3[3]*t8983;
  t8991 = var2[2]*t8983;
  t8992 = var2[3]*t8983;
  t8993 = 0.4*t4625*t8927;
  t9005 = -1.*t4625*t8927;
  t9007 = t9005 + t9006;
  t9008 = 0.8*t9007;
  t9009 = t8993 + t9004 + t9008;
  t9010 = var2[4]*t9009;
  t9016 = var2[2]*t9015;
  t9017 = var2[3]*t9015;
  t9018 = t9010 + t9016 + t9017;
  t9019 = var2[4]*t9018;
  t9033 = var2[2]*t9032;
  t9034 = var2[3]*t9032;
  t9035 = t8928 + t8946 + t8950 + t8971 + t8972 + t8984 + t8990 + t8991 + t8992 + t9019 + t9033 + t9034;
  t9045 = 0.4*t4625*t9024;
  t9046 = -1.*t4625*t9024;
  t9047 = t9046 + t8954;
  t9048 = 0.8*t9047;
  t9049 = t9045 + t8952 + t9048;
  t9063 = 2.*var2[4]*t8970;
  t9064 = 2.*var2[2]*t8983;
  t9065 = 2.*var2[3]*t8983;
  t9066 = t8928 + t8946 + t8950 + t9063 + t9064 + t9065;
  t9036 = -0.4*t4625*t8927;
  t9037 = 0.4*t9024*t8938;
  t9038 = -1.*t9024*t8938;
  t9039 = t8947 + t9038;
  t9040 = 0.8*t9039;
  t9071 = t8928 + t8946 + t8950;
  t9077 = 0.4*t8976*t8938;
  t9079 = -1.*t8976*t8938;
  t9084 = -0.4*t4625*t9024;
  t9085 = t4625*t9024;
  t9086 = t9085 + t9079;
  t9087 = 0.8*t9086;
  t9088 = t9084 + t9077 + t9087;
  t9093 = 0.4*t6626*t9024;
  t9094 = -0.4*t8927*t8938;
  t9095 = t8927*t8938;
  t9096 = t9085 + t9095;
  t9097 = 0.8*t9096;
  t9098 = t9093 + t9094 + t9097;
  t9099 = var2[2]*t9098;
  t9100 = var2[3]*t9098;
  t9101 = var2[4]*t9088;
  t9102 = t9099 + t9100 + t9101;
  t9073 = var3[4]*t9015;
  t9074 = var3[2]*t9029;
  t9075 = var3[3]*t9029;
  t9076 = 0.4*t4625*t8937;
  t9078 = -1.*t4625*t8937;
  t9080 = t9078 + t9079;
  t9081 = 0.8*t9080;
  t9082 = t9076 + t9077 + t9081;
  t9083 = var2[4]*t9082;
  t9089 = var2[2]*t9088;
  t9090 = var2[3]*t9088;
  t9091 = t9083 + t9089 + t9090;
  t9092 = var2[4]*t9091;
  t9103 = var2[2]*t9102;
  t9104 = var2[3]*t9102;
  t9105 = t8973 + t8977 + t8982 + t9073 + t9020 + t9074 + t9075 + t9030 + t9031 + t9092 + t9103 + t9104;
  t9120 = 2.*var2[4]*t9015;
  t9121 = 2.*var2[2]*t9029;
  t9122 = 2.*var2[3]*t9029;
  t9123 = t8973 + t8977 + t8982 + t9120 + t9121 + t9122;
  p_output1[0]=1.;
  p_output1[1]=t9035;
  p_output1[2]=t9035;
  p_output1[3]=t9036 + t9037 + t9040 + t8970*var2[2] + t9018*var2[2] + t8970*var2[3] + t9018*var2[3] + t9049*var2[4] + var2[4]*(t9009*var2[2] + t9009*var2[3] + (t8993 + t9025 + 0.8*(t9005 + t9026))*var2[4]) + t8970*var3[2] + t8970*var3[3] + t9049*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t9066;
  p_output1[6]=t9066;
  p_output1[7]=t9036 + t9037 + t9040 + 2.*t8970*var2[2] + 2.*t8970*var2[3] + 2.*t9049*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t9071;
  p_output1[10]=t9071;
  p_output1[11]=t9036 + t9037 + t9040;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t9105;
  p_output1[16]=t9105;
  p_output1[17]=t8951 + t8952 + t8969 + t9010 + t9016 + t9017 + t9091*var2[2] + t9091*var2[3] + var2[4]*(t9082*var2[2] + t9082*var2[3] + (t9076 + t9094 + 0.8*(t9078 + t9095))*var2[4]) + t9015*var3[2] + t9015*var3[3] + t9009*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t9123;
  p_output1[20]=t9123;
  p_output1[21]=t8951 + t8952 + t8969 + 2.*t9015*var2[2] + 2.*t9015*var2[3] + 2.*t9009*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t8983;
  p_output1[24]=t8983;
  p_output1[25]=t8970;
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

#include "J_ddh_RightToe_RightStance.hh"

namespace RightStance
{

void J_ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
