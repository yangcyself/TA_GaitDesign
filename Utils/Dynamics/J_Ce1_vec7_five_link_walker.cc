/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:56:31 GMT-08:00
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
  double t6070;
  double t5751;
  double t5843;
  double t6410;
  double t196;
  double t5994;
  double t6525;
  double t6635;
  double t6707;
  double t6716;
  double t9096;
  double t9278;
  double t9297;
  double t9319;
  double t9329;
  double t13205;
  double t13206;
  double t13240;
  double t13326;
  double t13327;
  double t9946;
  double t13331;
  double t13332;
  double t13388;
  double t13437;
  double t6749;
  double t6765;
  double t8639;
  double t13444;
  double t13461;
  double t13462;
  double t13484;
  double t13485;
  double t13573;
  double t13593;
  double t13594;
  double t13616;
  double t13620;
  double t13615;
  double t13621;
  double t13622;
  double t13623;
  double t13624;
  double t8642;
  double t9003;
  double t9415;
  double t9095;
  double t9403;
  double t13629;
  double t13750;
  double t13753;
  double t13754;
  double t13755;
  double t13756;
  double t13628;
  double t13630;
  double t13779;
  double t13783;
  double t13632;
  double t13757;
  double t13758;
  double t13763;
  double t13764;
  double t13765;
  double t13766;
  double t13767;
  double t13782;
  double t13784;
  double t13793;
  double t13799;
  double t13800;
  double t13801;
  double t13805;
  double t13806;
  double t13773;
  double t13778;
  double t13780;
  double t13789;
  double t13797;
  double t13798;
  double t13631;
  double t13759;
  double t13781;
  double t13785;
  double t13807;
  double t13833;
  double t13834;
  double t13832;
  double t13835;
  double t13836;
  t6070 = Cos(var1[5]);
  t5751 = Cos(var1[6]);
  t5843 = Sin(var1[5]);
  t6410 = Sin(var1[6]);
  t196 = Sin(var1[2]);
  t5994 = -1.*t5751*t5843;
  t6525 = -1.*t6070*t6410;
  t6635 = t5994 + t6525;
  t6707 = -1.*t196*t6635;
  t6716 = Cos(var1[2]);
  t9096 = -1.*t6070*t5751;
  t9278 = t5843*t6410;
  t9297 = t9096 + t9278;
  t9319 = t6716*t9297;
  t9329 = t6707 + t9319;
  t13205 = t5751*t5843;
  t13206 = t6070*t6410;
  t13240 = t13205 + t13206;
  t13326 = t196*t13240;
  t13327 = t13326 + t9319;
  t9946 = -0.384*var2[2]*t9329;
  t13331 = -0.384*var2[5]*t13327;
  t13332 = -0.384*var2[6]*t13327;
  t13388 = t9946 + t13331 + t13332;
  t13437 = var2[6]*t13388;
  t6749 = t6070*t5751;
  t6765 = -1.*t5843*t6410;
  t8639 = t6749 + t6765;
  t13444 = t6716*t6635;
  t13461 = -1.*t196*t8639;
  t13462 = t13444 + t13461;
  t13484 = t196*t9297;
  t13485 = t13444 + t13484;
  t13573 = -1.*t6716*t6635;
  t13593 = -1.*t196*t9297;
  t13594 = t13573 + t13593;
  t13616 = t6716*t13240;
  t13620 = t13616 + t13593;
  t13615 = -0.384*var2[2]*t13594;
  t13621 = -0.384*var2[5]*t13620;
  t13622 = -0.384*var2[6]*t13620;
  t13623 = t13615 + t13621 + t13622;
  t13624 = var2[6]*t13623;
  t8642 = -1.*t6716*t8639;
  t9003 = t6707 + t8642;
  t9415 = -0.384*var2[6]*t9329;
  t9095 = -0.384*var2[2]*t9003;
  t9403 = -0.384*var2[5]*t9329;
  t13629 = -0.24*t6070*t6410;
  t13750 = -1.*t5751;
  t13753 = 1. + t13750;
  t13754 = 1.03*t13753;
  t13755 = 1.27*t5751;
  t13756 = t13754 + t13755;
  t13628 = -0.24*t5751*t5843;
  t13630 = t13628 + t13629;
  t13779 = -0.24*t5843*t6410;
  t13783 = t6070*t13756;
  t13632 = 0.63*t5843;
  t13757 = -1.*t13756*t5843;
  t13758 = t13632 + t13757 + t13629;
  t13763 = -0.63*t5843;
  t13764 = t13756*t5843;
  t13765 = 0.24*t6070*t6410;
  t13766 = t13763 + t13764 + t13765;
  t13767 = t6635*t13766;
  t13782 = -0.63*t6070;
  t13784 = t13782 + t13783 + t13779;
  t13793 = 0.24*t5843*t6410;
  t13799 = -1.*t6070;
  t13800 = 1. + t13799;
  t13801 = 0.63*t13800;
  t13805 = t13801 + t13783 + t13779;
  t13806 = t13805*t9297;
  t13773 = t13630*t13240;
  t13778 = 0.24*t6070*t5751;
  t13780 = t13778 + t13779;
  t13789 = -0.24*t6070*t5751;
  t13797 = t13789 + t13793;
  t13798 = t8639*t13797;
  t13631 = t6635*t13630;
  t13759 = t6635*t13758;
  t13781 = t8639*t13780;
  t13785 = t8639*t13784;
  t13807 = t13631 + t13759 + t13767 + t13773 + t13781 + t13785 + t13798 + t13806;
  t13833 = t13766*t8639;
  t13834 = t6635*t13805;
  t13832 = t13758*t8639;
  t13835 = t13240*t13784;
  t13836 = t13832 + t13833 + t13834 + t13835;
  p_output1[0]=(t9095 + t9403 + t9415)*var2[6];
  p_output1[1]=t13437;
  p_output1[2]=t13437;
  p_output1[3]=-0.384*t13462*var2[6];
  p_output1[4]=-0.384*t13485*var2[6];
  p_output1[5]=-0.384*t13462*var2[2] - 0.384*t13485*var2[5] - 0.768*t13485*var2[6];
  p_output1[6]=var2[6]*(-0.384*(t13573 + t196*t8639)*var2[2] - 0.384*t13594*var2[5] - 0.384*t13594*var2[6]);
  p_output1[7]=t13624;
  p_output1[8]=t13624;
  p_output1[9]=-0.384*t9003*var2[6];
  p_output1[10]=t9415;
  p_output1[11]=t9095 + t9403 - 0.768*t9329*var2[6];
  p_output1[12]=var2[6]*(-0.384*(t13240*t13758 + t13767 + t13806 + 2.*t13758*t6635 + 2.*t13784*t8639 + (t13793 + 0.63*t6070 - 1.*t13756*t6070)*t8639)*var2[5] - 0.384*t13807*var2[6]);
  p_output1[13]=var2[6]*(-0.384*t13807*var2[5] - 0.384*(t13767 + t13773 + t13798 + t13806 + 2.*t13630*t6635 + 2.*t13780*t8639)*var2[6]);
  p_output1[14]=-0.384*t13836*var2[6];
  p_output1[15]=-0.384*t13836*var2[5] - 0.768*(t13240*t13780 + t13833 + t13834 + t13630*t8639)*var2[6];
  p_output1[16]=-0.384*(0.63*t5751 - 1.*t13756*t5751 + 0.24*Power(t5751,2))*Power(var2[6],2);
  p_output1[17]=-0.768*(0.63*t6410 - 1.*t13756*t6410 + 0.24*t5751*t6410)*var2[6];
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

#include "J_Ce1_vec7_five_link_walker.hh"

namespace LeftStance
{

void J_Ce1_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
