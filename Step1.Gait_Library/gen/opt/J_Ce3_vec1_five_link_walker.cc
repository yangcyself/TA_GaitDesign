/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:24 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
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


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t3118;
  double t1773;
  double t1939;
  double t3126;
  double t6798;
  double t1018;
  double t2963;
  double t3166;
  double t6603;
  double t6761;
  double t7060;
  double t7960;
  double t8317;
  double t8338;
  double t8407;
  double t9858;
  double t10131;
  double t10167;
  double t10205;
  double t10559;
  double t14070;
  double t14048;
  double t14057;
  double t14071;
  double t14069;
  double t14075;
  double t14094;
  double t14095;
  double t14096;
  double t14097;
  double t14098;
  double t14099;
  double t14100;
  double t14111;
  double t14112;
  double t14113;
  double t14119;
  double t14120;
  double t14183;
  double t14184;
  double t14185;
  double t14175;
  double t14176;
  double t14182;
  double t9318;
  double t9500;
  double t9534;
  double t14187;
  double t14188;
  double t14189;
  double t13973;
  double t13914;
  double t13915;
  double t13919;
  double t13920;
  double t13974;
  double t14204;
  double t14210;
  double t14230;
  double t14231;
  double t14232;
  double t14227;
  double t14228;
  double t14229;
  double t14107;
  double t14108;
  double t14109;
  double t14234;
  double t14235;
  double t14236;
  double t14170;
  double t14163;
  double t14165;
  double t14168;
  double t14169;
  double t14171;
  double t14244;
  double t14250;
  double t14207;
  double t14208;
  double t14203;
  double t14205;
  double t14193;
  double t14201;
  double t14224;
  double t14225;
  double t14247;
  double t14248;
  double t14243;
  double t14245;
  double t14240;
  double t14241;
  double t14258;
  double t14259;
  double t14298;
  double t14299;
  double t14300;
  double t14302;
  double t14303;
  double t14304;
  double t14318;
  double t14319;
  double t14320;
  double t14322;
  double t14323;
  double t14324;
  double t9624;
  double t13904;
  double t13905;
  double t13913;
  double t10711;
  double t10713;
  double t10818;
  double t10834;
  double t14336;
  double t14337;
  double t14338;
  double t14339;
  double t14340;
  double t14186;
  double t14190;
  double t14191;
  double t14192;
  double t14209;
  double t14263;
  double t14264;
  double t14265;
  double t14266;
  double t14269;
  double t14270;
  double t14353;
  double t14354;
  double t14292;
  double t14293;
  double t14294;
  double t14295;
  double t14296;
  double t14297;
  double t14301;
  double t14305;
  double t14306;
  double t14308;
  double t14309;
  double t14310;
  double t14365;
  double t14366;
  double t14367;
  double t14341;
  double t14342;
  double t14343;
  double t14346;
  double t14347;
  double t14348;
  double t14349;
  double t14350;
  double t14351;
  double t14352;
  double t14355;
  double t14358;
  double t14359;
  double t14360;
  double t14361;
  double t14364;
  double t14369;
  double t14370;
  double t14374;
  double t14399;
  double t14400;
  double t14376;
  double t14402;
  double t14403;
  double t14378;
  double t14110;
  double t14155;
  double t14161;
  double t14162;
  double t14121;
  double t14128;
  double t14147;
  double t14148;
  double t14415;
  double t14416;
  double t14417;
  double t14418;
  double t14419;
  double t14233;
  double t14237;
  double t14238;
  double t14239;
  double t14249;
  double t14277;
  double t14278;
  double t14279;
  double t14280;
  double t14281;
  double t14282;
  double t14432;
  double t14433;
  double t14312;
  double t14313;
  double t14314;
  double t14315;
  double t14316;
  double t14317;
  double t14321;
  double t14325;
  double t14326;
  double t14328;
  double t14329;
  double t14330;
  double t14444;
  double t14445;
  double t14446;
  double t14420;
  double t14421;
  double t14422;
  double t14425;
  double t14426;
  double t14427;
  double t14428;
  double t14429;
  double t14430;
  double t14431;
  double t14434;
  double t14437;
  double t14438;
  double t14439;
  double t14440;
  double t14443;
  double t14448;
  double t14449;
  double t14453;
  double t14478;
  double t14479;
  double t14455;
  double t14481;
  double t14482;
  double t14457;
  double t14272;
  double t14274;
  double t14284;
  double t14286;
  double t14516;
  double t14517;
  double t14518;
  double t14519;
  double t14520;
  double t14521;
  double t14522;
  double t14523;
  double t14524;
  double t14525;
  double t14526;
  double t14527;
  double t14528;
  double t14529;
  double t14530;
  double t14531;
  double t14532;
  double t14534;
  double t14535;
  double t14536;
  double t14537;
  double t14538;
  double t14539;
  double t14540;
  double t14541;
  double t14495;
  double t14496;
  double t14497;
  double t14498;
  double t14501;
  double t14502;
  double t14503;
  double t14504;
  double t14344;
  double t14345;
  double t14356;
  double t14357;
  double t14362;
  double t14363;
  double t14368;
  double t14371;
  double t14372;
  double t14373;
  double t14375;
  double t14377;
  double t14379;
  double t14380;
  double t14381;
  double t14382;
  double t14383;
  double t14384;
  double t14213;
  double t14550;
  double t14508;
  double t14578;
  double t14579;
  double t14580;
  double t14551;
  double t14385;
  double t14386;
  double t14387;
  double t14552;
  double t14553;
  double t14389;
  double t14390;
  double t14391;
  double t14556;
  double t14557;
  double t14558;
  double t14559;
  double t14560;
  double t14561;
  double t14564;
  double t14565;
  double t14566;
  double t14567;
  double t14568;
  double t14569;
  double t14572;
  double t14573;
  double t14401;
  double t14404;
  double t14405;
  double t14577;
  double t14583;
  double t14407;
  double t14408;
  double t14409;
  double t14588;
  double t14611;
  double t14612;
  double t14592;
  double t14506;
  double t14507;
  double t14640;
  double t14641;
  double t14642;
  double t14643;
  double t14644;
  double t14646;
  double t14647;
  double t14648;
  double t14649;
  double t14650;
  double t14632;
  double t14633;
  double t14634;
  double t14388;
  double t14392;
  double t14393;
  double t14394;
  double t14395;
  double t14396;
  double t14397;
  double t14398;
  double t14406;
  double t14410;
  double t14411;
  double t14412;
  double t14413;
  double t14414;
  double t14599;
  double t14600;
  double t14601;
  double t14602;
  double t14603;
  double t14604;
  double t14605;
  double t14606;
  double t14607;
  double t14608;
  double t14609;
  double t14610;
  double t14613;
  double t14614;
  double t14615;
  double t14616;
  double t14617;
  double t14618;
  double t14619;
  double t14620;
  double t14621;
  double t14622;
  double t14623;
  double t14624;
  double t14625;
  double t14626;
  double t14627;
  double t14628;
  double t14629;
  double t14630;
  double t14631;
  double t14636;
  double t14637;
  double t14686;
  double t14688;
  double t14689;
  double t14690;
  double t14680;
  double t14681;
  double t14682;
  double t14656;
  double t14423;
  double t14424;
  double t14435;
  double t14436;
  double t14441;
  double t14442;
  double t14447;
  double t14450;
  double t14451;
  double t14452;
  double t14454;
  double t14456;
  double t14458;
  double t14459;
  double t14460;
  double t14461;
  double t14462;
  double t14463;
  double t14256;
  double t14696;
  double t14512;
  double t14724;
  double t14725;
  double t14726;
  double t14697;
  double t14464;
  double t14465;
  double t14466;
  double t14698;
  double t14699;
  double t14468;
  double t14469;
  double t14470;
  double t14702;
  double t14703;
  double t14704;
  double t14705;
  double t14706;
  double t14707;
  double t14710;
  double t14711;
  double t14712;
  double t14713;
  double t14714;
  double t14715;
  double t14718;
  double t14719;
  double t14480;
  double t14483;
  double t14484;
  double t14723;
  double t14729;
  double t14486;
  double t14487;
  double t14488;
  double t14734;
  double t14757;
  double t14758;
  double t14738;
  double t14510;
  double t14511;
  double t14786;
  double t14787;
  double t14788;
  double t14789;
  double t14790;
  double t14792;
  double t14793;
  double t14794;
  double t14795;
  double t14796;
  double t14778;
  double t14779;
  double t14780;
  double t14467;
  double t14471;
  double t14472;
  double t14473;
  double t14474;
  double t14475;
  double t14476;
  double t14477;
  double t14485;
  double t14489;
  double t14490;
  double t14491;
  double t14492;
  double t14493;
  double t14745;
  double t14746;
  double t14747;
  double t14748;
  double t14749;
  double t14750;
  double t14751;
  double t14752;
  double t14753;
  double t14754;
  double t14755;
  double t14756;
  double t14759;
  double t14760;
  double t14761;
  double t14762;
  double t14763;
  double t14764;
  double t14765;
  double t14766;
  double t14767;
  double t14768;
  double t14769;
  double t14770;
  double t14771;
  double t14772;
  double t14773;
  double t14774;
  double t14775;
  double t14776;
  double t14777;
  double t14782;
  double t14783;
  double t14832;
  double t14834;
  double t14835;
  double t14836;
  double t14826;
  double t14827;
  double t14828;
  double t14802;
  t3118 = Cos(var1[3]);
  t1773 = Cos(var1[4]);
  t1939 = Sin(var1[3]);
  t3126 = Sin(var1[4]);
  t6798 = Cos(var1[2]);
  t1018 = Sin(var1[2]);
  t2963 = -1.*t1773*t1939;
  t3166 = -1.*t3118*t3126;
  t6603 = t2963 + t3166;
  t6761 = -1.*t1018*t6603;
  t7060 = t3118*t1773;
  t7960 = -1.*t1939*t3126;
  t8317 = t7060 + t7960;
  t8338 = -1.*t6798*t8317;
  t8407 = t6761 + t8338;
  t9858 = -1.*t1773;
  t10131 = 1. + t9858;
  t10167 = 0.4*t10131;
  t10205 = 0.64*t1773;
  t10559 = t10167 + t10205;
  t14070 = Cos(var1[5]);
  t14048 = Cos(var1[6]);
  t14057 = Sin(var1[5]);
  t14071 = Sin(var1[6]);
  t14069 = -1.*t14048*t14057;
  t14075 = -1.*t14070*t14071;
  t14094 = t14069 + t14075;
  t14095 = -1.*t1018*t14094;
  t14096 = t14070*t14048;
  t14097 = -1.*t14057*t14071;
  t14098 = t14096 + t14097;
  t14099 = -1.*t6798*t14098;
  t14100 = t14095 + t14099;
  t14111 = -1.*t14048;
  t14112 = 1. + t14111;
  t14113 = 0.4*t14112;
  t14119 = 0.64*t14048;
  t14120 = t14113 + t14119;
  t14183 = t6798*t3118;
  t14184 = -1.*t1018*t1939;
  t14185 = t14183 + t14184;
  t14175 = -1.*t3118*t1018;
  t14176 = -1.*t6798*t1939;
  t14182 = t14175 + t14176;
  t9318 = -1.*t6798*t3118;
  t9500 = t1018*t1939;
  t9534 = t9318 + t9500;
  t14187 = t3118*t1018;
  t14188 = t6798*t1939;
  t14189 = t14187 + t14188;
  t13973 = -1.*t1018*t8317;
  t13914 = t1773*t1939;
  t13915 = t3118*t3126;
  t13919 = t13914 + t13915;
  t13920 = -1.*t6798*t13919;
  t13974 = t13920 + t13973;
  t14204 = t6798*t8317;
  t14210 = t1018*t8317;
  t14230 = t6798*t14070;
  t14231 = -1.*t1018*t14057;
  t14232 = t14230 + t14231;
  t14227 = -1.*t14070*t1018;
  t14228 = -1.*t6798*t14057;
  t14229 = t14227 + t14228;
  t14107 = -1.*t6798*t14070;
  t14108 = t1018*t14057;
  t14109 = t14107 + t14108;
  t14234 = t14070*t1018;
  t14235 = t6798*t14057;
  t14236 = t14234 + t14235;
  t14170 = -1.*t1018*t14098;
  t14163 = t14048*t14057;
  t14165 = t14070*t14071;
  t14168 = t14163 + t14165;
  t14169 = -1.*t6798*t14168;
  t14171 = t14169 + t14170;
  t14244 = t6798*t14098;
  t14250 = t1018*t14098;
  t14207 = t1018*t6603;
  t14208 = t14207 + t14204;
  t14203 = -1.*t1018*t13919;
  t14205 = t14203 + t14204;
  t14193 = t6798*t6603;
  t14201 = t14193 + t13973;
  t14224 = t6798*t13919;
  t14225 = t14224 + t14210;
  t14247 = t1018*t14094;
  t14248 = t14247 + t14244;
  t14243 = -1.*t1018*t14168;
  t14245 = t14243 + t14244;
  t14240 = t6798*t14094;
  t14241 = t14240 + t14170;
  t14258 = t6798*t14168;
  t14259 = t14258 + t14250;
  t14298 = t10559*t1939;
  t14299 = 0.24*t3118*t3126;
  t14300 = t14298 + t14299;
  t14302 = t3118*t10559;
  t14303 = -0.24*t1939*t3126;
  t14304 = t14302 + t14303;
  t14318 = t14120*t14057;
  t14319 = 0.24*t14070*t14071;
  t14320 = t14318 + t14319;
  t14322 = t14070*t14120;
  t14323 = -0.24*t14057*t14071;
  t14324 = t14322 + t14323;
  t9624 = -0.748*t9534;
  t13904 = t10559*t3126;
  t13905 = -0.24*t1773*t3126;
  t13913 = t13904 + t13905;
  t10711 = t10559*t1773;
  t10713 = Power(t3126,2);
  t10818 = 0.24*t10713;
  t10834 = t10711 + t10818;
  t14336 = -1.*t3118*t1773;
  t14337 = t1939*t3126;
  t14338 = t14336 + t14337;
  t14339 = t6798*t14338;
  t14340 = t6761 + t14339;
  t14186 = -20.4*t14182*t14185;
  t14190 = -6.8*t14189*t14185;
  t14191 = -20.4*t14182*t9534;
  t14192 = -6.8*t14189*t9534;
  t14209 = -1.*t6798*t6603;
  t14263 = Power(t14182,2);
  t14264 = -13.6*t14263;
  t14265 = -13.6*t14182*t14189;
  t14266 = Power(t14185,2);
  t14269 = -13.6*t14266;
  t14270 = -13.6*t14185*t9534;
  t14353 = t1018*t14338;
  t14354 = t14193 + t14353;
  t14292 = Power(t3118,2);
  t14293 = 0.11*t14292;
  t14294 = Power(t1939,2);
  t14295 = 0.11*t14294;
  t14296 = t14293 + t14295;
  t14297 = -6.8*t9534*t14296;
  t14301 = -1.*t14300*t8317;
  t14305 = -1.*t6603*t14304;
  t14306 = t14301 + t14305;
  t14308 = t14300*t13919;
  t14309 = t8317*t14304;
  t14310 = t14308 + t14309;
  t14365 = -1.*t10559*t1939;
  t14366 = -0.24*t3118*t3126;
  t14367 = t14365 + t14366;
  t14341 = 0.384*var2[4]*t14340;
  t14342 = -3.2*t13913*t14201;
  t14343 = -3.2*t10834*t14340;
  t14346 = -6.4*t14205*t14201;
  t14347 = -3.2*t14208*t13974;
  t14348 = -3.2*t8407*t14225;
  t14349 = -6.4*t14201*t14340;
  t14350 = -1.*t1018*t14338;
  t14351 = t14209 + t14350;
  t14352 = -3.2*t14208*t14351;
  t14355 = -3.2*t8407*t14354;
  t14358 = -6.4*t14208*t14205;
  t14359 = -6.4*t14201*t14225;
  t14360 = -6.4*t14208*t14340;
  t14361 = -6.4*t14201*t14354;
  t14364 = -3.2*t14201*t14306;
  t14369 = t14300*t8317;
  t14370 = t6603*t14304;
  t14374 = -3.2*t14310*t14340;
  t14399 = -0.24*t1773*t1939;
  t14400 = t14399 + t14366;
  t14376 = -1.*t6603*t14300;
  t14402 = 0.24*t3118*t1773;
  t14403 = t14402 + t14303;
  t14378 = -1.*t14304*t14338;
  t14110 = -0.748*t14109;
  t14155 = t14120*t14071;
  t14161 = -0.24*t14048*t14071;
  t14162 = t14155 + t14161;
  t14121 = t14120*t14048;
  t14128 = Power(t14071,2);
  t14147 = 0.24*t14128;
  t14148 = t14121 + t14147;
  t14415 = -1.*t14070*t14048;
  t14416 = t14057*t14071;
  t14417 = t14415 + t14416;
  t14418 = t6798*t14417;
  t14419 = t14095 + t14418;
  t14233 = -20.4*t14229*t14232;
  t14237 = -6.8*t14236*t14232;
  t14238 = -20.4*t14229*t14109;
  t14239 = -6.8*t14236*t14109;
  t14249 = -1.*t6798*t14094;
  t14277 = Power(t14229,2);
  t14278 = -13.6*t14277;
  t14279 = -13.6*t14229*t14236;
  t14280 = Power(t14232,2);
  t14281 = -13.6*t14280;
  t14282 = -13.6*t14232*t14109;
  t14432 = t1018*t14417;
  t14433 = t14240 + t14432;
  t14312 = Power(t14070,2);
  t14313 = 0.11*t14312;
  t14314 = Power(t14057,2);
  t14315 = 0.11*t14314;
  t14316 = t14313 + t14315;
  t14317 = -6.8*t14109*t14316;
  t14321 = -1.*t14320*t14098;
  t14325 = -1.*t14094*t14324;
  t14326 = t14321 + t14325;
  t14328 = t14320*t14168;
  t14329 = t14098*t14324;
  t14330 = t14328 + t14329;
  t14444 = -1.*t14120*t14057;
  t14445 = -0.24*t14070*t14071;
  t14446 = t14444 + t14445;
  t14420 = 0.384*var2[6]*t14419;
  t14421 = -3.2*t14162*t14241;
  t14422 = -3.2*t14148*t14419;
  t14425 = -6.4*t14245*t14241;
  t14426 = -3.2*t14248*t14171;
  t14427 = -3.2*t14100*t14259;
  t14428 = -6.4*t14241*t14419;
  t14429 = -1.*t1018*t14417;
  t14430 = t14249 + t14429;
  t14431 = -3.2*t14248*t14430;
  t14434 = -3.2*t14100*t14433;
  t14437 = -6.4*t14248*t14245;
  t14438 = -6.4*t14241*t14259;
  t14439 = -6.4*t14248*t14419;
  t14440 = -6.4*t14241*t14433;
  t14443 = -3.2*t14241*t14326;
  t14448 = t14320*t14098;
  t14449 = t14094*t14324;
  t14453 = -3.2*t14330*t14419;
  t14478 = -0.24*t14048*t14057;
  t14479 = t14478 + t14445;
  t14455 = -1.*t14094*t14320;
  t14481 = 0.24*t14070*t14048;
  t14482 = t14481 + t14323;
  t14457 = -1.*t14324*t14417;
  t14272 = Power(t14205,2);
  t14274 = Power(t14201,2);
  t14284 = Power(t14245,2);
  t14286 = Power(t14241,2);
  t14516 = -6.8*t14263;
  t14517 = -6.8*t14182*t14189;
  t14518 = -6.8*t14266;
  t14519 = -6.8*t14185*t9534;
  t14520 = -3.2*t8407*t14208;
  t14521 = -3.2*t14272;
  t14522 = -3.2*t14274;
  t14523 = -3.2*t13974*t14225;
  t14524 = -6.8*t14277;
  t14525 = -6.8*t14229*t14236;
  t14526 = -6.8*t14280;
  t14527 = -6.8*t14232*t14109;
  t14528 = -3.2*t14100*t14248;
  t14529 = -3.2*t14284;
  t14530 = -3.2*t14286;
  t14531 = -3.2*t14171*t14259;
  t14532 = t14516 + t14517 + t14518 + t14519 + t14520 + t14521 + t14522 + t14523 + t14524 + t14525 + t14526 + t14527 + t14528 + t14529 + t14530 + t14531;
  t14534 = 2.88*t1018;
  t14535 = -6.8*t14182*t14296;
  t14536 = -3.2*t14205*t14306;
  t14537 = -3.2*t14201*t14310;
  t14538 = -6.8*t14229*t14316;
  t14539 = -3.2*t14245*t14326;
  t14540 = -3.2*t14241*t14330;
  t14541 = t14534 + t14535 + t14536 + t14537 + t14538 + t14539 + t14540;
  t14495 = -0.748*t14182;
  t14496 = -3.2*t13913*t14205;
  t14497 = -3.2*t10834*t14201;
  t14498 = t14495 + t14496 + t14497;
  t14501 = -0.748*t14229;
  t14502 = -3.2*t14162*t14245;
  t14503 = -3.2*t14148*t14241;
  t14504 = t14501 + t14502 + t14503;
  t14344 = t9624 + t14342 + t14343;
  t14345 = -0.5*var2[3]*t14344;
  t14356 = t14186 + t14190 + t14191 + t14192 + t14346 + t14347 + t14348 + t14349 + t14352 + t14355;
  t14357 = -0.5*var2[1]*t14356;
  t14362 = t14264 + t14265 + t14269 + t14270 + t14358 + t14359 + t14360 + t14361;
  t14363 = -0.5*var2[0]*t14362;
  t14368 = t14367*t8317;
  t14371 = t13919*t14304;
  t14372 = t14368 + t14369 + t14370 + t14371;
  t14373 = -3.2*t14201*t14372;
  t14375 = -1.*t6603*t14367;
  t14377 = -1.*t8317*t14304;
  t14379 = t14375 + t14376 + t14377 + t14378;
  t14380 = -3.2*t14205*t14379;
  t14381 = t14297 + t14364 + t14373 + t14374 + t14380;
  t14382 = -0.5*var2[2]*t14381;
  t14383 = t14341 + t14345 + t14357 + t14363 + t14382;
  t14384 = var2[0]*t14383;
  t14213 = t1018*t13919;
  t14550 = t14213 + t14339;
  t14508 = -6.4*t14208*t14201;
  t14578 = -1.*t3118*t10559;
  t14579 = 0.24*t1939*t3126;
  t14580 = t14578 + t14579;
  t14551 = 0.384*var2[4]*t14550;
  t14385 = Power(t1773,2);
  t14386 = -0.24*t14385;
  t14387 = t10711 + t14386;
  t14552 = -3.2*t10834*t14550;
  t14553 = -3.2*t13913*t14354;
  t14389 = -1.*t10559*t3126;
  t14390 = 0.24*t1773*t3126;
  t14391 = t14389 + t14390;
  t14556 = -3.2*t14225*t14340;
  t14557 = -3.2*t14201*t14550;
  t14558 = t14224 + t14350;
  t14559 = -3.2*t14208*t14558;
  t14560 = -3.2*t14205*t14354;
  t14561 = -6.4*t14340*t14354;
  t14564 = Power(t14208,2);
  t14565 = -6.4*t14564;
  t14566 = -6.4*t14208*t14550;
  t14567 = -6.4*t14225*t14354;
  t14568 = Power(t14354,2);
  t14569 = -6.4*t14568;
  t14572 = -3.2*t14310*t14550;
  t14573 = -3.2*t14306*t14354;
  t14401 = t14400*t8317;
  t14404 = t13919*t14403;
  t14405 = t14401 + t14369 + t14370 + t14404;
  t14577 = -1.*t13919*t14304;
  t14583 = -1.*t14300*t14338;
  t14407 = -1.*t6603*t14400;
  t14408 = -1.*t8317*t14403;
  t14409 = t14407 + t14376 + t14408 + t14378;
  t14588 = t6603*t14300;
  t14611 = -0.24*t3118*t1773;
  t14612 = t14611 + t14579;
  t14592 = t14304*t14338;
  t14506 = -13.6*t14182*t14185;
  t14507 = -13.6*t14189*t14185;
  t14640 = -3.2*t14208*t14205;
  t14641 = -3.2*t14201*t14225;
  t14642 = -3.2*t14208*t14340;
  t14643 = -3.2*t14201*t14354;
  t14644 = t14516 + t14517 + t14518 + t14519 + t14640 + t14641 + t14642 + t14643;
  t14646 = -3.2*t14208*t14306;
  t14647 = -3.2*t14208*t14372;
  t14648 = -3.2*t14310*t14354;
  t14649 = -3.2*t14225*t14379;
  t14650 = t14535 + t14646 + t14647 + t14648 + t14649;
  t14632 = -3.2*t13913*t14208;
  t14633 = -3.2*t10834*t14354;
  t14634 = t14495 + t14632 + t14633;
  t14388 = -3.2*t14387*t14205;
  t14392 = -3.2*t14391*t14201;
  t14393 = t14388 + t14342 + t14392 + t14343;
  t14394 = -0.5*var2[3]*t14393;
  t14395 = t14346 + t14347 + t14348 + t14349 + t14352 + t14355;
  t14396 = -0.5*var2[1]*t14395;
  t14397 = t14358 + t14359 + t14360 + t14361;
  t14398 = -0.5*var2[0]*t14397;
  t14406 = -3.2*t14201*t14405;
  t14410 = -3.2*t14205*t14409;
  t14411 = t14364 + t14406 + t14374 + t14410;
  t14412 = -0.5*var2[2]*t14411;
  t14413 = t14341 + t14394 + t14396 + t14398 + t14412;
  t14414 = var2[0]*t14413;
  t14599 = -3.2*t14387*t14208;
  t14600 = -3.2*t14391*t14354;
  t14601 = t14599 + t14552 + t14553 + t14600;
  t14602 = -0.5*var2[3]*t14601;
  t14603 = t14508 + t14556 + t14557 + t14559 + t14560 + t14561;
  t14604 = -0.5*var2[1]*t14603;
  t14605 = t14565 + t14566 + t14567 + t14569;
  t14606 = -0.5*var2[0]*t14605;
  t14607 = -3.2*t14372*t14354;
  t14608 = -3.2*t14405*t14354;
  t14609 = -1.*t14400*t8317;
  t14610 = -1.*t6603*t14403;
  t14613 = -1.*t6603*t14612;
  t14614 = -1.*t14367*t14338;
  t14615 = -1.*t14400*t14338;
  t14616 = t14609 + t14305 + t14577 + t14610 + t14613 + t14614 + t14615 + t14583;
  t14617 = -3.2*t14225*t14616;
  t14618 = -3.2*t14208*t14379;
  t14619 = -3.2*t14208*t14409;
  t14620 = t6603*t14367;
  t14621 = t6603*t14400;
  t14622 = t14400*t13919;
  t14623 = t8317*t14403;
  t14624 = t8317*t14612;
  t14625 = t14620 + t14621 + t14588 + t14622 + t14309 + t14623 + t14624 + t14592;
  t14626 = -3.2*t14208*t14625;
  t14627 = t14572 + t14573 + t14607 + t14608 + t14617 + t14618 + t14619 + t14626;
  t14628 = -0.5*var2[2]*t14627;
  t14629 = t14551 + t14602 + t14604 + t14606 + t14628;
  t14630 = var2[0]*t14629;
  t14631 = 0.384*var2[4]*t14354;
  t14636 = -6.4*t14208*t14225;
  t14637 = -6.4*t14208*t14354;
  t14686 = t14640 + t14641 + t14642 + t14643;
  t14688 = -3.2*t14208*t14405;
  t14689 = -3.2*t14225*t14409;
  t14690 = t14646 + t14688 + t14648 + t14689;
  t14680 = -3.2*t14391*t14208;
  t14681 = -3.2*t14387*t14225;
  t14682 = t14632 + t14680 + t14681 + t14633;
  t14656 = 0.384*var2[0]*t14354;
  t14423 = t14110 + t14421 + t14422;
  t14424 = -0.5*var2[5]*t14423;
  t14435 = t14233 + t14237 + t14238 + t14239 + t14425 + t14426 + t14427 + t14428 + t14431 + t14434;
  t14436 = -0.5*var2[1]*t14435;
  t14441 = t14278 + t14279 + t14281 + t14282 + t14437 + t14438 + t14439 + t14440;
  t14442 = -0.5*var2[0]*t14441;
  t14447 = t14446*t14098;
  t14450 = t14168*t14324;
  t14451 = t14447 + t14448 + t14449 + t14450;
  t14452 = -3.2*t14241*t14451;
  t14454 = -1.*t14094*t14446;
  t14456 = -1.*t14098*t14324;
  t14458 = t14454 + t14455 + t14456 + t14457;
  t14459 = -3.2*t14245*t14458;
  t14460 = t14317 + t14443 + t14452 + t14453 + t14459;
  t14461 = -0.5*var2[2]*t14460;
  t14462 = t14420 + t14424 + t14436 + t14442 + t14461;
  t14463 = var2[0]*t14462;
  t14256 = t1018*t14168;
  t14696 = t14256 + t14418;
  t14512 = -6.4*t14248*t14241;
  t14724 = -1.*t14070*t14120;
  t14725 = 0.24*t14057*t14071;
  t14726 = t14724 + t14725;
  t14697 = 0.384*var2[6]*t14696;
  t14464 = Power(t14048,2);
  t14465 = -0.24*t14464;
  t14466 = t14121 + t14465;
  t14698 = -3.2*t14148*t14696;
  t14699 = -3.2*t14162*t14433;
  t14468 = -1.*t14120*t14071;
  t14469 = 0.24*t14048*t14071;
  t14470 = t14468 + t14469;
  t14702 = -3.2*t14259*t14419;
  t14703 = -3.2*t14241*t14696;
  t14704 = t14258 + t14429;
  t14705 = -3.2*t14248*t14704;
  t14706 = -3.2*t14245*t14433;
  t14707 = -6.4*t14419*t14433;
  t14710 = Power(t14248,2);
  t14711 = -6.4*t14710;
  t14712 = -6.4*t14248*t14696;
  t14713 = -6.4*t14259*t14433;
  t14714 = Power(t14433,2);
  t14715 = -6.4*t14714;
  t14718 = -3.2*t14330*t14696;
  t14719 = -3.2*t14326*t14433;
  t14480 = t14479*t14098;
  t14483 = t14168*t14482;
  t14484 = t14480 + t14448 + t14449 + t14483;
  t14723 = -1.*t14168*t14324;
  t14729 = -1.*t14320*t14417;
  t14486 = -1.*t14094*t14479;
  t14487 = -1.*t14098*t14482;
  t14488 = t14486 + t14455 + t14487 + t14457;
  t14734 = t14094*t14320;
  t14757 = -0.24*t14070*t14048;
  t14758 = t14757 + t14725;
  t14738 = t14324*t14417;
  t14510 = -13.6*t14229*t14232;
  t14511 = -13.6*t14236*t14232;
  t14786 = -3.2*t14248*t14245;
  t14787 = -3.2*t14241*t14259;
  t14788 = -3.2*t14248*t14419;
  t14789 = -3.2*t14241*t14433;
  t14790 = t14524 + t14525 + t14526 + t14527 + t14786 + t14787 + t14788 + t14789;
  t14792 = -3.2*t14248*t14326;
  t14793 = -3.2*t14248*t14451;
  t14794 = -3.2*t14330*t14433;
  t14795 = -3.2*t14259*t14458;
  t14796 = t14538 + t14792 + t14793 + t14794 + t14795;
  t14778 = -3.2*t14162*t14248;
  t14779 = -3.2*t14148*t14433;
  t14780 = t14501 + t14778 + t14779;
  t14467 = -3.2*t14466*t14245;
  t14471 = -3.2*t14470*t14241;
  t14472 = t14467 + t14421 + t14471 + t14422;
  t14473 = -0.5*var2[5]*t14472;
  t14474 = t14425 + t14426 + t14427 + t14428 + t14431 + t14434;
  t14475 = -0.5*var2[1]*t14474;
  t14476 = t14437 + t14438 + t14439 + t14440;
  t14477 = -0.5*var2[0]*t14476;
  t14485 = -3.2*t14241*t14484;
  t14489 = -3.2*t14245*t14488;
  t14490 = t14443 + t14485 + t14453 + t14489;
  t14491 = -0.5*var2[2]*t14490;
  t14492 = t14420 + t14473 + t14475 + t14477 + t14491;
  t14493 = var2[0]*t14492;
  t14745 = -3.2*t14466*t14248;
  t14746 = -3.2*t14470*t14433;
  t14747 = t14745 + t14698 + t14699 + t14746;
  t14748 = -0.5*var2[5]*t14747;
  t14749 = t14512 + t14702 + t14703 + t14705 + t14706 + t14707;
  t14750 = -0.5*var2[1]*t14749;
  t14751 = t14711 + t14712 + t14713 + t14715;
  t14752 = -0.5*var2[0]*t14751;
  t14753 = -3.2*t14451*t14433;
  t14754 = -3.2*t14484*t14433;
  t14755 = -1.*t14479*t14098;
  t14756 = -1.*t14094*t14482;
  t14759 = -1.*t14094*t14758;
  t14760 = -1.*t14446*t14417;
  t14761 = -1.*t14479*t14417;
  t14762 = t14755 + t14325 + t14723 + t14756 + t14759 + t14760 + t14761 + t14729;
  t14763 = -3.2*t14259*t14762;
  t14764 = -3.2*t14248*t14458;
  t14765 = -3.2*t14248*t14488;
  t14766 = t14094*t14446;
  t14767 = t14094*t14479;
  t14768 = t14479*t14168;
  t14769 = t14098*t14482;
  t14770 = t14098*t14758;
  t14771 = t14766 + t14767 + t14734 + t14768 + t14329 + t14769 + t14770 + t14738;
  t14772 = -3.2*t14248*t14771;
  t14773 = t14718 + t14719 + t14753 + t14754 + t14763 + t14764 + t14765 + t14772;
  t14774 = -0.5*var2[2]*t14773;
  t14775 = t14697 + t14748 + t14750 + t14752 + t14774;
  t14776 = var2[0]*t14775;
  t14777 = 0.384*var2[6]*t14433;
  t14782 = -6.4*t14248*t14259;
  t14783 = -6.4*t14248*t14433;
  t14832 = t14786 + t14787 + t14788 + t14789;
  t14834 = -3.2*t14248*t14484;
  t14835 = -3.2*t14259*t14488;
  t14836 = t14792 + t14834 + t14794 + t14835;
  t14826 = -3.2*t14470*t14248;
  t14827 = -3.2*t14466*t14259;
  t14828 = t14778 + t14826 + t14827 + t14779;
  t14802 = 0.384*var2[0]*t14433;
  p_output1[0]=var2[0]*(-0.5*(-6.4*t13974*t14225 - 6.4*t14100*t14248 - 6.4*t14171*t14259 + t14264 + t14265 + t14269 + t14270 - 6.4*t14272 - 6.4*t14274 + t14278 + t14279 + t14281 + t14282 - 6.4*t14284 - 6.4*t14286 - 6.4*t14208*t8407)*var2[0] - 0.5*(t14186 + t14190 + t14191 + t14192 - 9.6*t13974*t14205 - 3.2*t14208*(t14209 + t14210) + t14233 + t14237 + t14238 + t14239 - 9.6*t14100*t14241 - 9.6*t14171*t14245 - 3.2*t14248*(t14249 + t14250) - 3.2*(t14099 + t14256)*t14259 - 3.2*t14225*(t14213 + t8338) - 9.6*t14201*t8407)*var2[1] - 0.5*(t14297 - 3.2*t13974*t14306 + t14317 - 3.2*t14171*t14326 - 3.2*t14100*t14330 + 2.88*t6798 - 3.2*t14310*t8407)*var2[2] - 0.5*(-3.2*t13913*t13974 - 3.2*t10834*t8407 + t9624)*var2[3] + 0.384*t8407*var2[4] - 0.5*(t14110 - 3.2*t14100*t14148 - 3.2*t14162*t14171)*var2[5] + 0.384*t14100*var2[6]);
  p_output1[1]=t14384;
  p_output1[2]=t14414;
  p_output1[3]=t14463;
  p_output1[4]=t14493;
  p_output1[5]=-1.*(-6.4*t14205*t14225 - 6.4*t14245*t14259 + t14506 + t14507 + t14508 + t14510 + t14511 + t14512)*var2[0] - 0.5*t14532*var2[1] - 0.5*t14541*var2[2] - 0.5*t14498*var2[3] + 0.384*t14201*var2[4] - 0.5*t14504*var2[5] + 0.384*t14241*var2[6];
  p_output1[6]=-0.5*t14532*var2[0];
  p_output1[7]=-0.5*t14541*var2[0];
  p_output1[8]=-0.5*t14498*var2[0];
  p_output1[9]=0.384*t14201*var2[0];
  p_output1[10]=-0.5*t14504*var2[0];
  p_output1[11]=0.384*t14241*var2[0];
  p_output1[12]=t14384;
  p_output1[13]=var2[0]*(t14551 - 0.5*(t14264 + t14265 + t14269 + t14270 + t14565 + t14566 + t14567 + t14569)*var2[0] - 0.5*(t14186 + t14190 + t14191 + t14192 + t14508 + t14556 + t14557 + t14559 + t14560 + t14561)*var2[1] - 0.5*(t14297 - 6.4*t14354*t14372 - 6.4*t14208*t14379 + t14572 + t14573 - 3.2*t14225*(-2.*t14338*t14367 + t14577 + t14583 - 2.*t14304*t6603 - 1.*t14580*t6603 - 1.*t14367*t8317) - 3.2*t14208*(t13919*t14367 + t14588 + t14592 + 2.*t14367*t6603 + 2.*t14304*t8317 + t14580*t8317))*var2[2] - 0.5*(t14552 + t14553 + t9624)*var2[3]);
  p_output1[14]=t14630;
  p_output1[15]=t14631 - 1.*(t14506 + t14507 + t14636 + t14637)*var2[0] - 0.5*t14644*var2[1] - 0.5*t14650*var2[2] - 0.5*t14634*var2[3];
  p_output1[16]=-0.5*t14644*var2[0];
  p_output1[17]=-0.5*t14650*var2[0];
  p_output1[18]=-0.5*t14634*var2[0];
  p_output1[19]=t14656;
  p_output1[20]=t14414;
  p_output1[21]=t14630;
  p_output1[22]=var2[0]*(t14551 + t14604 + t14606 - 0.5*(-6.4*t14354*t14405 - 6.4*t14208*t14409 + t14572 + t14573 - 3.2*t14225*(-2.*t14338*t14400 + t14577 + t14583 + t14609 + t14613 - 2.*t14403*t6603) - 3.2*t14208*(t14588 + t14592 + t14622 + t14624 + 2.*t14400*t6603 + 2.*t14403*t8317))*var2[2] - 0.5*(-6.4*t14208*t14387 - 3.2*t14225*t14391 - 6.4*t14354*t14391 + t14552 + t14553 - 3.2*t14208*(0.24*t14385 - 1.*t10559*t1773))*var2[3]);
  p_output1[23]=t14631 - 1.*(t14636 + t14637)*var2[0] - 0.5*t14686*var2[1] - 0.5*t14690*var2[2] - 0.5*t14682*var2[3];
  p_output1[24]=-0.5*t14686*var2[0];
  p_output1[25]=-0.5*t14690*var2[0];
  p_output1[26]=-0.5*t14682*var2[0];
  p_output1[27]=t14656;
  p_output1[28]=t14463;
  p_output1[29]=var2[0]*(t14697 - 0.5*(t14278 + t14279 + t14281 + t14282 + t14711 + t14712 + t14713 + t14715)*var2[0] - 0.5*(t14233 + t14237 + t14238 + t14239 + t14512 + t14702 + t14703 + t14705 + t14706 + t14707)*var2[1] - 0.5*(t14317 - 6.4*t14433*t14451 - 6.4*t14248*t14458 + t14718 + t14719 - 3.2*t14259*(-2.*t14094*t14324 - 1.*t14098*t14446 - 2.*t14417*t14446 + t14723 - 1.*t14094*t14726 + t14729) - 3.2*t14248*(2.*t14098*t14324 + 2.*t14094*t14446 + t14168*t14446 + t14098*t14726 + t14734 + t14738))*var2[2] - 0.5*(t14110 + t14698 + t14699)*var2[5]);
  p_output1[30]=t14776;
  p_output1[31]=t14777 - 1.*(t14510 + t14511 + t14782 + t14783)*var2[0] - 0.5*t14790*var2[1] - 0.5*t14796*var2[2] - 0.5*t14780*var2[5];
  p_output1[32]=-0.5*t14790*var2[0];
  p_output1[33]=-0.5*t14796*var2[0];
  p_output1[34]=-0.5*t14780*var2[0];
  p_output1[35]=t14802;
  p_output1[36]=t14493;
  p_output1[37]=t14776;
  p_output1[38]=var2[0]*(t14697 + t14750 + t14752 - 0.5*(-6.4*t14433*t14484 - 6.4*t14248*t14488 + t14718 + t14719 - 3.2*t14259*(-2.*t14417*t14479 - 2.*t14094*t14482 + t14723 + t14729 + t14755 + t14759) - 3.2*t14248*(2.*t14094*t14479 + 2.*t14098*t14482 + t14734 + t14738 + t14768 + t14770))*var2[2] - 0.5*(-3.2*t14248*(-1.*t14048*t14120 + 0.24*t14464) - 6.4*t14248*t14466 - 3.2*t14259*t14470 - 6.4*t14433*t14470 + t14698 + t14699)*var2[5]);
  p_output1[39]=t14777 - 1.*(t14782 + t14783)*var2[0] - 0.5*t14832*var2[1] - 0.5*t14836*var2[2] - 0.5*t14828*var2[5];
  p_output1[40]=-0.5*t14832*var2[0];
  p_output1[41]=-0.5*t14836*var2[0];
  p_output1[42]=-0.5*t14828*var2[0];
  p_output1[43]=t14802;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec1_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_Ce3_vec1_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE