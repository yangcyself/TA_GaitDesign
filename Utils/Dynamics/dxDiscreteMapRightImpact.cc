/*
 * Automatically Generated from Mathematica.
 * Tue 29 Oct 2019 19:43:37 GMT-07:00
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
  double t9241;
  double t9238;
  double t9239;
  double t9242;
  double t9248;
  double t9237;
  double t9240;
  double t9243;
  double t9244;
  double t9247;
  double t9249;
  double t9250;
  double t9251;
  double t9252;
  double t9253;
  double t9261;
  double t9262;
  double t9263;
  double t9264;
  double t9265;
  double t9329;
  double t9326;
  double t9327;
  double t9330;
  double t9328;
  double t9331;
  double t9332;
  double t9333;
  double t9334;
  double t9335;
  double t9336;
  double t9337;
  double t9338;
  double t9346;
  double t9347;
  double t9348;
  double t9349;
  double t9350;
  double t9257;
  double t9258;
  double t9259;
  double t9274;
  double t9275;
  double t9276;
  double t9277;
  double t9278;
  double t9279;
  double t9342;
  double t9343;
  double t9344;
  double t9359;
  double t9360;
  double t9361;
  double t9362;
  double t9363;
  double t9364;
  double t9376;
  double t9377;
  double t9378;
  double t9391;
  double t9392;
  double t9393;
  double t9437;
  double t9438;
  double t9439;
  double t9441;
  double t9442;
  double t9443;
  double t9457;
  double t9458;
  double t9459;
  double t9461;
  double t9462;
  double t9463;
  double t9234;
  double t9235;
  double t9380;
  double t9381;
  double t9382;
  double t9255;
  double t9256;
  double t9370;
  double t9371;
  double t9372;
  double t9271;
  double t9272;
  double t9273;
  double t9384;
  double t9385;
  double t9266;
  double t9267;
  double t9268;
  double t9269;
  double t9324;
  double t9325;
  double t9395;
  double t9396;
  double t9397;
  double t9340;
  double t9341;
  double t9387;
  double t9388;
  double t9389;
  double t9356;
  double t9357;
  double t9358;
  double t9399;
  double t9400;
  double t9351;
  double t9352;
  double t9353;
  double t9354;
  double t9368;
  double t9369;
  double t9406;
  double t9407;
  double t9408;
  double t9409;
  double t9412;
  double t9413;
  double t9420;
  double t9421;
  double t9404;
  double t9405;
  double t9373;
  double t9379;
  double t9383;
  double t9386;
  double t9390;
  double t9394;
  double t9398;
  double t9401;
  double t9402;
  double t9428;
  double t9429;
  double t9431;
  double t9432;
  double t9433;
  double t9434;
  double t9435;
  double t9440;
  double t9444;
  double t9445;
  double t9447;
  double t9448;
  double t9449;
  double t9451;
  double t9452;
  double t9453;
  double t9454;
  double t9455;
  double t9460;
  double t9464;
  double t9465;
  double t9467;
  double t9468;
  double t9469;
  double t9521;
  double t9522;
  double t9523;
  double t9430;
  double t9436;
  double t9446;
  double t9450;
  double t9456;
  double t9466;
  double t9470;
  double t9471;
  double t9502;
  double t9503;
  double t9504;
  double t9505;
  double t9506;
  double t9507;
  double t9508;
  double t9509;
  double t9512;
  double t9513;
  double t9514;
  double t9515;
  double t9516;
  double t9517;
  double t9518;
  double t9519;
  double t9520;
  double t9524;
  double t9525;
  double t9526;
  double t9527;
  double t9528;
  double t9529;
  double t9530;
  double t9476;
  double t9477;
  double t9478;
  double t9479;
  double t9260;
  double t9270;
  double t9280;
  double t9281;
  double t9534;
  double t9535;
  double t9536;
  double t9537;
  double t9564;
  double t9565;
  double t9531;
  double t9532;
  double t9482;
  double t9483;
  double t9484;
  double t9485;
  double t9345;
  double t9355;
  double t9365;
  double t9366;
  double t9542;
  double t9543;
  double t9544;
  double t9545;
  double t9597;
  double t9598;
  double t9539;
  double t9540;
  t9241 = Cos(var2[3]);
  t9238 = Cos(var2[4]);
  t9239 = Sin(var2[3]);
  t9242 = Sin(var2[4]);
  t9248 = Cos(var2[2]);
  t9237 = Sin(var2[2]);
  t9240 = -1.*t9238*t9239;
  t9243 = -1.*t9241*t9242;
  t9244 = t9240 + t9243;
  t9247 = t9237*t9244;
  t9249 = t9241*t9238;
  t9250 = -1.*t9239*t9242;
  t9251 = t9249 + t9250;
  t9252 = t9248*t9251;
  t9253 = t9247 + t9252;
  t9261 = -1.*t9238;
  t9262 = 1. + t9261;
  t9263 = 0.4*t9262;
  t9264 = 0.64*t9238;
  t9265 = t9263 + t9264;
  t9329 = Cos(var2[5]);
  t9326 = Cos(var2[6]);
  t9327 = Sin(var2[5]);
  t9330 = Sin(var2[6]);
  t9328 = -1.*t9326*t9327;
  t9331 = -1.*t9329*t9330;
  t9332 = t9328 + t9331;
  t9333 = t9237*t9332;
  t9334 = t9329*t9326;
  t9335 = -1.*t9327*t9330;
  t9336 = t9334 + t9335;
  t9337 = t9248*t9336;
  t9338 = t9333 + t9337;
  t9346 = -1.*t9326;
  t9347 = 1. + t9346;
  t9348 = 0.4*t9347;
  t9349 = 0.64*t9326;
  t9350 = t9348 + t9349;
  t9257 = t9248*t9241;
  t9258 = -1.*t9237*t9239;
  t9259 = t9257 + t9258;
  t9274 = t9238*t9239;
  t9275 = t9241*t9242;
  t9276 = t9274 + t9275;
  t9277 = t9248*t9276;
  t9278 = t9237*t9251;
  t9279 = t9277 + t9278;
  t9342 = t9248*t9329;
  t9343 = -1.*t9237*t9327;
  t9344 = t9342 + t9343;
  t9359 = t9326*t9327;
  t9360 = t9329*t9330;
  t9361 = t9359 + t9360;
  t9362 = t9248*t9361;
  t9363 = t9237*t9336;
  t9364 = t9362 + t9363;
  t9376 = t9241*t9237;
  t9377 = t9248*t9239;
  t9378 = t9376 + t9377;
  t9391 = t9329*t9237;
  t9392 = t9248*t9327;
  t9393 = t9391 + t9392;
  t9437 = t9265*t9239;
  t9438 = 0.24*t9241*t9242;
  t9439 = t9437 + t9438;
  t9441 = t9241*t9265;
  t9442 = -0.24*t9239*t9242;
  t9443 = t9441 + t9442;
  t9457 = t9350*t9327;
  t9458 = 0.24*t9329*t9330;
  t9459 = t9457 + t9458;
  t9461 = t9329*t9350;
  t9462 = -0.24*t9327*t9330;
  t9463 = t9461 + t9462;
  t9234 = -1.*var1[6];
  t9235 = var3[4] + t9234;
  t9380 = t9248*t9244;
  t9381 = -1.*t9237*t9251;
  t9382 = t9380 + t9381;
  t9255 = -1.*var1[5];
  t9256 = var3[3] + t9255;
  t9370 = -1.*t9241*t9237;
  t9371 = -1.*t9248*t9239;
  t9372 = t9370 + t9371;
  t9271 = t9265*t9242;
  t9272 = -0.24*t9238*t9242;
  t9273 = t9271 + t9272;
  t9384 = -1.*t9237*t9276;
  t9385 = t9384 + t9252;
  t9266 = t9265*t9238;
  t9267 = Power(t9242,2);
  t9268 = 0.24*t9267;
  t9269 = t9266 + t9268;
  t9324 = -1.*var1[4];
  t9325 = var3[6] + t9324;
  t9395 = t9248*t9332;
  t9396 = -1.*t9237*t9336;
  t9397 = t9395 + t9396;
  t9340 = -1.*var1[3];
  t9341 = var3[5] + t9340;
  t9387 = -1.*t9329*t9237;
  t9388 = -1.*t9248*t9327;
  t9389 = t9387 + t9388;
  t9356 = t9350*t9330;
  t9357 = -0.24*t9326*t9330;
  t9358 = t9356 + t9357;
  t9399 = -1.*t9237*t9361;
  t9400 = t9399 + t9337;
  t9351 = t9350*t9326;
  t9352 = Power(t9330,2);
  t9353 = 0.24*t9352;
  t9354 = t9351 + t9353;
  t9368 = -1.*var1[1];
  t9369 = var3[1] + t9368;
  t9406 = Power(t9248,2);
  t9407 = 12.*t9406;
  t9408 = Power(t9237,2);
  t9409 = 12.*t9408;
  t9412 = Power(t9259,2);
  t9413 = 6.8*t9412;
  t9420 = Power(t9344,2);
  t9421 = 6.8*t9420;
  t9404 = -1.*var1[0];
  t9405 = var3[0] + t9404;
  t9373 = 6.8*t9372*t9259;
  t9379 = 6.8*t9378*t9259;
  t9383 = 3.2*t9253*t9382;
  t9386 = 3.2*t9385*t9279;
  t9390 = 6.8*t9389*t9344;
  t9394 = 6.8*t9393*t9344;
  t9398 = 3.2*t9338*t9397;
  t9401 = 3.2*t9400*t9364;
  t9402 = t9373 + t9379 + t9383 + t9386 + t9390 + t9394 + t9398 + t9401;
  t9428 = -1.*var1[2];
  t9429 = var3[2] + t9428;
  t9431 = Power(t9241,2);
  t9432 = 0.11*t9431;
  t9433 = Power(t9239,2);
  t9434 = 0.11*t9433;
  t9435 = t9432 + t9434;
  t9440 = -1.*t9439*t9251;
  t9444 = -1.*t9244*t9443;
  t9445 = t9440 + t9444;
  t9447 = t9439*t9276;
  t9448 = t9251*t9443;
  t9449 = t9447 + t9448;
  t9451 = Power(t9329,2);
  t9452 = 0.11*t9451;
  t9453 = Power(t9327,2);
  t9454 = 0.11*t9453;
  t9455 = t9452 + t9454;
  t9460 = -1.*t9459*t9336;
  t9464 = -1.*t9332*t9463;
  t9465 = t9460 + t9464;
  t9467 = t9459*t9361;
  t9468 = t9336*t9463;
  t9469 = t9467 + t9468;
  t9521 = -1.*t9248*t9241;
  t9522 = t9237*t9239;
  t9523 = t9521 + t9522;
  t9430 = 2.88*t9248;
  t9436 = 6.8*t9259*t9435;
  t9446 = 3.2*t9279*t9445;
  t9450 = 3.2*t9253*t9449;
  t9456 = 6.8*t9344*t9455;
  t9466 = 3.2*t9364*t9465;
  t9470 = 3.2*t9338*t9469;
  t9471 = t9430 + t9436 + t9446 + t9450 + t9456 + t9466 + t9470;
  t9502 = -2.88*t9237;
  t9503 = 6.8*t9372*t9435;
  t9504 = 3.2*t9385*t9445;
  t9505 = 3.2*t9382*t9449;
  t9506 = 6.8*t9389*t9455;
  t9507 = 3.2*t9400*t9465;
  t9508 = 3.2*t9397*t9469;
  t9509 = t9502 + t9503 + t9504 + t9505 + t9506 + t9507 + t9508;
  t9512 = 0.4*t9262*t9259;
  t9513 = -0.4*t9372*t9242;
  t9514 = t9238*t9259;
  t9515 = t9372*t9242;
  t9516 = t9514 + t9515;
  t9517 = 0.8*t9516;
  t9518 = t9512 + t9513 + t9517;
  t9519 = -1.*var4[0]*t9518;
  t9520 = 0.4*t9262*t9372;
  t9524 = -0.4*t9523*t9242;
  t9525 = t9238*t9372;
  t9526 = t9523*t9242;
  t9527 = t9525 + t9526;
  t9528 = 0.8*t9527;
  t9529 = t9520 + t9524 + t9528;
  t9530 = -1.*var4[2]*t9529;
  t9476 = 0.748*t9372;
  t9477 = 3.2*t9273*t9385;
  t9478 = 3.2*t9269*t9382;
  t9479 = t9476 + t9477 + t9478;
  t9260 = 0.748*t9259;
  t9270 = 3.2*t9269*t9253;
  t9280 = 3.2*t9273*t9279;
  t9281 = t9260 + t9270 + t9280;
  t9534 = 0.748*t9435;
  t9535 = 3.2*t9273*t9445;
  t9536 = 3.2*t9269*t9449;
  t9537 = 0.67 + t9534 + t9535 + t9536;
  t9564 = 0.768*t9269;
  t9565 = 0.2 + t9564;
  t9531 = 0.768*t9449;
  t9532 = 0.2 + t9531;
  t9482 = 0.748*t9389;
  t9483 = 3.2*t9358*t9400;
  t9484 = 3.2*t9354*t9397;
  t9485 = t9482 + t9483 + t9484;
  t9345 = 0.748*t9344;
  t9355 = 3.2*t9354*t9338;
  t9365 = 3.2*t9358*t9364;
  t9366 = t9345 + t9355 + t9365;
  t9542 = 0.748*t9455;
  t9543 = 3.2*t9358*t9465;
  t9544 = 3.2*t9354*t9469;
  t9545 = 0.67 + t9542 + t9543 + t9544;
  t9597 = 0.768*t9354;
  t9598 = 0.2 + t9597;
  t9539 = 0.768*t9469;
  t9540 = 0.2 + t9539;
  p_output1[0]=0.768*t9235*t9253 + t9256*t9281 + 0.768*t9325*t9338 + t9341*t9366 + t9369*t9402 + t9405*(3.2*Power(t9253,2) + 3.2*Power(t9279,2) + 3.2*Power(t9338,2) + 3.2*Power(t9364,2) + 6.8*Power(t9378,2) + 6.8*Power(t9393,2) + t9407 + t9409 + t9413 + t9421) + t9429*t9471 - 1.*var4[0];
  p_output1[1]=0.768*t9235*t9382 + 0.768*t9325*t9397 + t9402*t9405 + t9369*(6.8*Power(t9372,2) + 3.2*Power(t9382,2) + 3.2*Power(t9385,2) + 6.8*Power(t9389,2) + 3.2*Power(t9397,2) + 3.2*Power(t9400,2) + t9407 + t9409 + t9413 + t9421) + t9256*t9479 + t9341*t9485 + t9429*t9509 - 1.*var4[2];
  p_output1[2]=t9429*(3.3612 + 6.8*Power(t9435,2) + 3.2*Power(t9445,2) + 3.2*Power(t9449,2) + 6.8*Power(t9455,2) + 3.2*Power(t9465,2) + 3.2*Power(t9469,2)) + t9405*t9471 + t9369*t9509 + t9519 + t9530 + t9235*t9532 + t9256*t9537 + t9325*t9540 + t9341*t9545;
  p_output1[3]=t9256*(1.58228 + 3.2*Power(t9269,2) + 3.2*Power(t9273,2)) + t9281*t9405 + t9369*t9479 + t9519 + t9530 + t9429*t9537 + t9235*t9565;
  p_output1[4]=1.2143199999999998*t9235 + 0.768*t9369*t9382 + 0.768*t9253*t9405 + t9429*t9532 + t9256*t9565 - 1.*(-0.4*t9238*t9259 + 0.4*t9242*t9378 + 0.8*(-1.*t9242*t9378 + t9514))*var4[0] - 1.*(0.4*t9242*t9259 - 0.4*t9238*t9372 + 0.8*(-1.*t9242*t9259 + t9525))*var4[2];
  p_output1[5]=t9341*(1.58228 + 3.2*Power(t9354,2) + 3.2*Power(t9358,2)) + t9366*t9405 + t9369*t9485 + t9429*t9545 + t9325*t9598;
  p_output1[6]=1.2143199999999998*t9325 + 0.768*t9369*t9397 + 0.768*t9338*t9405 + t9429*t9540 + t9341*t9598;
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

#include "dxDiscreteMapRightImpact.hh"

namespace RightImpact
{

void dxDiscreteMapRightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
