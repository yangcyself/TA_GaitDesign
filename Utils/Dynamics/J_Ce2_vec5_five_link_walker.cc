/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:56:52 GMT-08:00
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
  double t5895;
  double t2898;
  double t5607;
  double t6190;
  double t2897;
  double t9070;
  double t10060;
  double t10061;
  double t10585;
  double t10597;
  double t10618;
  double t5617;
  double t6206;
  double t6319;
  double t10808;
  double t10809;
  double t10828;
  double t10872;
  double t10873;
  double t10888;
  double t10626;
  double t8923;
  double t9071;
  double t9451;
  double t9830;
  double t9833;
  double t9834;
  double t10730;
  double t10768;
  double t10771;
  double t10786;
  double t10831;
  double t10833;
  double t14112;
  double t14233;
  double t14262;
  double t14265;
  double t14267;
  double t14274;
  double t14277;
  double t14312;
  double t14313;
  double t14381;
  double t14382;
  double t14383;
  double t14392;
  double t14393;
  double t14396;
  double t14401;
  double t14403;
  double t14404;
  double t14411;
  double t14412;
  double t10628;
  double t10632;
  double t10654;
  double t12073;
  double t12125;
  double t12296;
  double t14439;
  double t14440;
  double t10869;
  double t10870;
  double t10871;
  double t10896;
  double t10898;
  double t11870;
  double t14281;
  double t14416;
  double t14417;
  double t14418;
  double t14391;
  double t14398;
  double t14399;
  double t14406;
  double t14407;
  double t14405;
  double t14413;
  double t14414;
  double t14478;
  double t14479;
  double t14425;
  double t14427;
  double t14420;
  double t14426;
  double t14428;
  double t14490;
  double t14491;
  double t14492;
  double t14441;
  double t14443;
  double t14444;
  double t14458;
  double t14459;
  double t14460;
  double t14461;
  double t14463;
  double t14464;
  double t14465;
  double t14466;
  double t14467;
  double t14468;
  double t14469;
  double t14470;
  double t14471;
  double t14472;
  double t14473;
  double t14474;
  double t14475;
  double t14476;
  double t14477;
  double t14485;
  double t14486;
  double t14493;
  double t14496;
  double t14506;
  double t14507;
  double t14509;
  double t14510;
  double t14556;
  double t14557;
  double t14558;
  double t14559;
  double t14560;
  double t14540;
  double t14541;
  double t14542;
  double t14544;
  double t14545;
  double t14546;
  double t14547;
  double t14548;
  double t14550;
  double t14551;
  double t14552;
  double t14553;
  double t14554;
  double t14280;
  double t14291;
  double t14251;
  double t14256;
  double t14084;
  double t14257;
  double t14278;
  double t14279;
  double t14292;
  double t14317;
  double t14325;
  double t14480;
  double t14481;
  double t14482;
  double t14489;
  double t14494;
  double t14495;
  double t14497;
  double t14499;
  double t14500;
  double t14501;
  double t14504;
  double t14505;
  double t14508;
  double t14511;
  double t14590;
  double t14518;
  double t14519;
  double t14520;
  double t14592;
  double t14594;
  double t14597;
  double t14598;
  double t14599;
  double t14600;
  double t14601;
  double t14602;
  double t14603;
  double t14604;
  double t14605;
  double t14606;
  double t14609;
  double t14527;
  double t14528;
  double t14529;
  double t14532;
  double t14533;
  double t14534;
  double t14549;
  double t14400;
  double t14415;
  double t14419;
  double t14434;
  double t14435;
  double t10864;
  double t10890;
  double t11994;
  double t12416;
  double t14072;
  double t14082;
  double t14632;
  double t14436;
  double t14582;
  double t14583;
  double t14584;
  double t14585;
  double t14586;
  double t14483;
  double t14484;
  double t14498;
  double t14502;
  double t14503;
  double t14512;
  double t14513;
  double t14607;
  double t14608;
  double t14610;
  double t14611;
  double t14612;
  double t14613;
  double t14614;
  double t14526;
  double t14530;
  double t14531;
  double t14535;
  double t14536;
  double t14624;
  double t14625;
  double t14626;
  double t14627;
  double t14628;
  double t14555;
  double t14634;
  double t14686;
  double t14687;
  double t14688;
  double t14689;
  double t14690;
  double t14682;
  double t14683;
  double t14684;
  double t14569;
  double t14570;
  double t14571;
  double t14572;
  double t14573;
  double t14591;
  double t14593;
  double t14595;
  double t14442;
  double t14452;
  double t14453;
  double t14645;
  double t14646;
  double t14647;
  double t14648;
  double t14649;
  double t14618;
  double t14619;
  double t14620;
  double t14621;
  double t14622;
  double t14517;
  double t14521;
  double t14522;
  double t14523;
  double t14524;
  double t14662;
  double t14663;
  double t14664;
  double t14665;
  double t14666;
  double t14667;
  double t14668;
  double t14561;
  double t14635;
  double t14691;
  double t14721;
  double t14722;
  double t14723;
  double t14735;
  double t14736;
  double t9948;
  t5895 = Cos(var1[3]);
  t2898 = Cos(var1[4]);
  t5607 = Sin(var1[3]);
  t6190 = Sin(var1[4]);
  t2897 = Sin(var1[2]);
  t9070 = Cos(var1[2]);
  t10060 = -1.*t2898;
  t10061 = 1. + t10060;
  t10585 = 0.4*t10061;
  t10597 = 0.64*t2898;
  t10618 = t10585 + t10597;
  t5617 = -1.*t2898*t5607;
  t6206 = -1.*t5895*t6190;
  t6319 = t5617 + t6206;
  t10808 = t5895*t2898;
  t10809 = -1.*t5607*t6190;
  t10828 = t10808 + t10809;
  t10872 = t9070*t6319;
  t10873 = -1.*t2897*t10828;
  t10888 = t10872 + t10873;
  t10626 = t10618*t2898;
  t8923 = -1.*t2897*t6319;
  t9071 = -1.*t5895*t2898;
  t9451 = t5607*t6190;
  t9830 = t9071 + t9451;
  t9833 = t9070*t9830;
  t9834 = t8923 + t9833;
  t10730 = t2898*t5607;
  t10768 = t5895*t6190;
  t10771 = t10730 + t10768;
  t10786 = -1.*t2897*t10771;
  t10831 = t9070*t10828;
  t10833 = t10786 + t10831;
  t14112 = t2897*t6319;
  t14233 = t14112 + t10831;
  t14262 = -1.*t9070*t10828;
  t14265 = t8923 + t14262;
  t14267 = t9070*t10771;
  t14274 = t2897*t10828;
  t14277 = t14267 + t14274;
  t14312 = t2897*t9830;
  t14313 = t10872 + t14312;
  t14381 = t10618*t5607;
  t14382 = 0.24*t5895*t6190;
  t14383 = t14381 + t14382;
  t14392 = t5895*t10618;
  t14393 = -0.24*t5607*t6190;
  t14396 = t14392 + t14393;
  t14401 = -0.24*t2898*t5607;
  t14403 = -0.24*t5895*t6190;
  t14404 = t14401 + t14403;
  t14411 = 0.24*t5895*t2898;
  t14412 = t14411 + t14393;
  t10628 = Power(t2898,2);
  t10632 = -0.24*t10628;
  t10654 = t10626 + t10632;
  t12073 = Power(t6190,2);
  t12125 = 0.24*t12073;
  t12296 = t10626 + t12125;
  t14439 = t2897*t10771;
  t14440 = t14439 + t9833;
  t10869 = t10618*t6190;
  t10870 = -0.24*t2898*t6190;
  t10871 = t10869 + t10870;
  t10896 = -1.*t10618*t6190;
  t10898 = 0.24*t2898*t6190;
  t11870 = t10896 + t10898;
  t14281 = -1.*t2897*t9830;
  t14416 = t14383*t10771;
  t14417 = t10828*t14396;
  t14418 = t14416 + t14417;
  t14391 = -1.*t14383*t10828;
  t14398 = -1.*t6319*t14396;
  t14399 = t14391 + t14398;
  t14406 = t14383*t10828;
  t14407 = t6319*t14396;
  t14405 = t14404*t10828;
  t14413 = t10771*t14412;
  t14414 = t14405 + t14406 + t14407 + t14413;
  t14478 = -1.*t10618*t5607;
  t14479 = t14478 + t14403;
  t14425 = -1.*t6319*t14383;
  t14427 = -1.*t14396*t9830;
  t14420 = -1.*t6319*t14404;
  t14426 = -1.*t10828*t14412;
  t14428 = t14420 + t14425 + t14426 + t14427;
  t14490 = -0.24*t5895*t2898;
  t14491 = 0.24*t5607*t6190;
  t14492 = t14490 + t14491;
  t14441 = -0.384*var2[4]*t14440;
  t14443 = 3.2*t12296*t14440;
  t14444 = 3.2*t10871*t14313;
  t14458 = 6.4*t14233*t10888;
  t14459 = 3.2*t14277*t9834;
  t14460 = 3.2*t10888*t14440;
  t14461 = t14267 + t14281;
  t14463 = 3.2*t14233*t14461;
  t14464 = 3.2*t10833*t14313;
  t14465 = 6.4*t9834*t14313;
  t14466 = t14458 + t14459 + t14460 + t14463 + t14464 + t14465;
  t14467 = -0.5*var2[1]*t14466;
  t14468 = Power(t14233,2);
  t14469 = 6.4*t14468;
  t14470 = 6.4*t14233*t14440;
  t14471 = 6.4*t14277*t14313;
  t14472 = Power(t14313,2);
  t14473 = 6.4*t14472;
  t14474 = t14469 + t14470 + t14471 + t14473;
  t14475 = -0.5*var2[0]*t14474;
  t14476 = 3.2*t14418*t14440;
  t14477 = 3.2*t14399*t14313;
  t14485 = -1.*t14404*t10828;
  t14486 = -1.*t10771*t14396;
  t14493 = -1.*t6319*t14492;
  t14496 = -1.*t14383*t9830;
  t14506 = t6319*t14383;
  t14507 = t14404*t10771;
  t14509 = t10828*t14492;
  t14510 = t14396*t9830;
  t14556 = 3.2*t10871*t14233;
  t14557 = 3.2*t11870*t14233;
  t14558 = 3.2*t10654*t14277;
  t14559 = 3.2*t12296*t14313;
  t14560 = t14556 + t14557 + t14558 + t14559;
  t14540 = 6.4*t14233*t14277;
  t14541 = 6.4*t14233*t14313;
  t14542 = t14540 + t14541;
  t14544 = 3.2*t14233*t10833;
  t14545 = 3.2*t10888*t14277;
  t14546 = 3.2*t14233*t9834;
  t14547 = 3.2*t10888*t14313;
  t14548 = t14544 + t14545 + t14546 + t14547;
  t14550 = 3.2*t14233*t14399;
  t14551 = 3.2*t14233*t14414;
  t14552 = 3.2*t14418*t14313;
  t14553 = 3.2*t14277*t14428;
  t14554 = t14550 + t14551 + t14552 + t14553;
  t14280 = -1.*t9070*t6319;
  t14291 = t14280 + t14281;
  t14251 = -1.*t9070*t10771;
  t14256 = t14251 + t10873;
  t14084 = 6.4*t10833*t10888;
  t14257 = 3.2*t14233*t14256;
  t14278 = 3.2*t14265*t14277;
  t14279 = 6.4*t10888*t9834;
  t14292 = 3.2*t14233*t14291;
  t14317 = 3.2*t14265*t14313;
  t14325 = t14084 + t14257 + t14278 + t14279 + t14292 + t14317;
  t14480 = t14479*t10828;
  t14481 = t10771*t14396;
  t14482 = t14480 + t14406 + t14407 + t14481;
  t14489 = -1.*t6319*t14412;
  t14494 = -1.*t14479*t9830;
  t14495 = -1.*t14404*t9830;
  t14497 = t14485 + t14398 + t14486 + t14489 + t14493 + t14494 + t14495 + t14496;
  t14499 = -1.*t6319*t14479;
  t14500 = -1.*t10828*t14396;
  t14501 = t14499 + t14425 + t14500 + t14427;
  t14504 = t6319*t14479;
  t14505 = t6319*t14404;
  t14508 = t10828*t14412;
  t14511 = t14504 + t14505 + t14506 + t14507 + t14417 + t14508 + t14509 + t14510;
  t14590 = -0.384*var2[4]*t14461;
  t14518 = -1.*t10618*t2898;
  t14519 = 0.24*t10628;
  t14520 = t14518 + t14519;
  t14592 = 3.2*t10871*t9834;
  t14594 = 3.2*t12296*t14461;
  t14597 = Power(t10888,2);
  t14598 = 6.4*t14597;
  t14599 = 6.4*t10833*t9834;
  t14600 = Power(t9834,2);
  t14601 = 6.4*t14600;
  t14602 = 6.4*t10888*t14461;
  t14603 = t14598 + t14599 + t14601 + t14602;
  t14604 = -0.5*var2[1]*t14603;
  t14605 = -0.5*var2[0]*t14466;
  t14606 = 3.2*t14399*t9834;
  t14609 = 3.2*t14418*t14461;
  t14527 = -2.*t6319*t14412;
  t14528 = -2.*t14404*t9830;
  t14529 = t14485 + t14486 + t14527 + t14493 + t14528 + t14496;
  t14532 = 2.*t6319*t14404;
  t14533 = 2.*t10828*t14412;
  t14534 = t14532 + t14506 + t14507 + t14533 + t14509 + t14510;
  t14549 = -0.5*var2[4]*t14548;
  t14400 = 3.2*t10888*t14399;
  t14415 = 3.2*t10888*t14414;
  t14419 = 3.2*t14418*t9834;
  t14434 = 3.2*t10833*t14428;
  t14435 = t14400 + t14415 + t14419 + t14434;
  t10864 = 3.2*t10654*t10833;
  t10890 = 3.2*t10871*t10888;
  t11994 = 3.2*t11870*t10888;
  t12416 = 3.2*t12296*t9834;
  t14072 = t10864 + t10890 + t11994 + t12416;
  t14082 = -0.5*var2[3]*t14072;
  t14632 = t14084 + t14279;
  t14436 = -0.5*var2[2]*t14435;
  t14582 = 3.2*t14265*t14399;
  t14583 = 3.2*t14265*t14414;
  t14584 = 3.2*t14418*t14291;
  t14585 = 3.2*t14256*t14428;
  t14586 = t14582 + t14583 + t14584 + t14585;
  t14483 = 3.2*t14482*t14313;
  t14484 = 3.2*t14414*t14313;
  t14498 = 3.2*t14277*t14497;
  t14502 = 3.2*t14233*t14501;
  t14503 = 3.2*t14233*t14428;
  t14512 = 3.2*t14233*t14511;
  t14513 = t14476 + t14477 + t14483 + t14484 + t14498 + t14502 + t14503 + t14512;
  t14607 = 3.2*t14482*t9834;
  t14608 = 3.2*t14414*t9834;
  t14610 = 3.2*t10833*t14497;
  t14611 = 3.2*t10888*t14501;
  t14612 = 3.2*t10888*t14428;
  t14613 = 3.2*t10888*t14511;
  t14614 = t14606 + t14607 + t14608 + t14609 + t14610 + t14611 + t14612 + t14613;
  t14526 = 6.4*t14414*t14313;
  t14530 = 3.2*t14277*t14529;
  t14531 = 6.4*t14233*t14428;
  t14535 = 3.2*t14233*t14534;
  t14536 = t14476 + t14477 + t14526 + t14530 + t14531 + t14535;
  t14624 = 6.4*t14414*t9834;
  t14625 = 3.2*t10833*t14529;
  t14626 = 6.4*t10888*t14428;
  t14627 = 3.2*t10888*t14534;
  t14628 = t14606 + t14624 + t14609 + t14625 + t14626 + t14627;
  t14555 = -0.5*var2[4]*t14554;
  t14634 = -0.5*var2[4]*t14435;
  t14686 = 3.2*t10654*t14399;
  t14687 = 3.2*t11870*t14418;
  t14688 = 3.2*t12296*t14414;
  t14689 = 3.2*t10871*t14428;
  t14690 = t14686 + t14687 + t14688 + t14689;
  t14682 = 6.4*t14418*t14414;
  t14683 = 6.4*t14399*t14428;
  t14684 = t14682 + t14683;
  t14569 = 3.2*t10871*t14265;
  t14570 = 3.2*t11870*t14265;
  t14571 = 3.2*t10654*t14256;
  t14572 = 3.2*t12296*t14291;
  t14573 = t14569 + t14570 + t14571 + t14572;
  t14591 = 3.2*t10654*t10888;
  t14593 = 3.2*t11870*t9834;
  t14595 = t14591 + t14592 + t14593 + t14594;
  t14442 = 3.2*t10654*t14233;
  t14452 = 3.2*t11870*t14313;
  t14453 = t14442 + t14443 + t14444 + t14452;
  t14645 = 3.2*t11870*t14482;
  t14646 = 3.2*t10871*t14497;
  t14647 = 3.2*t10654*t14501;
  t14648 = 3.2*t12296*t14511;
  t14649 = t14645 + t14646 + t14647 + t14648;
  t14618 = 3.2*t11870*t10833;
  t14619 = 6.4*t10654*t10888;
  t14620 = 3.2*t14520*t10888;
  t14621 = 6.4*t11870*t9834;
  t14622 = t14618 + t14619 + t14620 + t14592 + t14621 + t14594;
  t14517 = 6.4*t10654*t14233;
  t14521 = 3.2*t14520*t14233;
  t14522 = 3.2*t11870*t14277;
  t14523 = 6.4*t11870*t14313;
  t14524 = t14517 + t14521 + t14522 + t14443 + t14444 + t14523;
  t14662 = 3.2*t11870*t14399;
  t14663 = 3.2*t14520*t14418;
  t14664 = 6.4*t11870*t14414;
  t14665 = 3.2*t10871*t14529;
  t14666 = 6.4*t10654*t14428;
  t14667 = 3.2*t12296*t14534;
  t14668 = t14662 + t14663 + t14664 + t14665 + t14666 + t14667;
  t14561 = -0.5*var2[4]*t14560;
  t14635 = -0.5*var2[4]*t14072;
  t14691 = -0.5*var2[4]*t14690;
  t14721 = 6.4*t10654*t10871;
  t14722 = 6.4*t11870*t12296;
  t14723 = t14721 + t14722;
  t14735 = -0.384*var2[0]*t14440;
  t14736 = -0.384*var2[1]*t14461;
  t9948 = -0.384*var2[4]*t9834;
  p_output1[0]=(t14082 + t14436 + t9948 - 0.5*(6.4*t10833*t14233 + 6.4*t10888*t14277 + 6.4*t10888*t14313 + 6.4*t14233*t9834)*var2[0] - 0.5*t14325*var2[1])*var2[4];
  p_output1[1]=(t14441 + t14467 + t14475 - 0.5*t14513*var2[2] - 0.5*t14453*var2[3])*var2[4];
  p_output1[2]=(t14441 + t14467 + t14475 - 0.5*t14536*var2[2] - 0.5*t14524*var2[3])*var2[4];
  p_output1[3]=-0.5*t14542*var2[4];
  p_output1[4]=t14549;
  p_output1[5]=t14555;
  p_output1[6]=t14561;
  p_output1[7]=-0.5*t14542*var2[0] - 0.5*t14548*var2[1] - 0.5*t14554*var2[2] - 0.5*t14560*var2[3] - 0.768*t14313*var2[4];
  p_output1[8]=var2[4]*(-0.5*t14325*var2[0] - 0.5*(6.4*t10888*t14256 + 6.4*t10833*t14265 + 6.4*t10888*t14291 + 6.4*t14265*t9834)*var2[1] - 0.5*t14586*var2[2] - 0.5*t14573*var2[3] - 0.384*t14291*var2[4]);
  p_output1[9]=(t14590 + t14604 + t14605 - 0.5*t14614*var2[2] - 0.5*t14595*var2[3])*var2[4];
  p_output1[10]=(t14590 + t14604 + t14605 - 0.5*t14628*var2[2] - 0.5*t14622*var2[3])*var2[4];
  p_output1[11]=t14549;
  p_output1[12]=-0.5*t14632*var2[4];
  p_output1[13]=t14634;
  p_output1[14]=t14635;
  p_output1[15]=t14082 + t14436 - 0.5*t14548*var2[0] - 0.5*t14632*var2[1] - 0.768*t9834*var2[4];
  p_output1[16]=(-0.5*t14435*var2[0] - 0.5*t14586*var2[1])*var2[4];
  p_output1[17]=var2[4]*(-0.5*t14513*var2[0] - 0.5*t14614*var2[1] - 0.5*(6.4*t14414*t14482 + 6.4*t14399*t14497 + 6.4*t14428*t14501 + 6.4*t14418*t14511)*var2[2] - 0.5*t14649*var2[3] - 0.384*t14511*var2[4]);
  p_output1[18]=var2[4]*(-0.5*t14536*var2[0] - 0.5*t14628*var2[1] - 0.5*(6.4*Power(t14414,2) + 6.4*Power(t14428,2) + 6.4*t14399*t14529 + 6.4*t14418*t14534)*var2[2] - 0.5*t14668*var2[3] - 0.384*t14534*var2[4]);
  p_output1[19]=t14555;
  p_output1[20]=t14634;
  p_output1[21]=-0.5*t14684*var2[4];
  p_output1[22]=t14691;
  p_output1[23]=-0.5*t14554*var2[0] - 0.5*t14435*var2[1] - 0.5*t14684*var2[2] - 0.5*t14690*var2[3] - 0.768*t14414*var2[4];
  p_output1[24]=(-0.5*t14072*var2[0] - 0.5*t14573*var2[1])*var2[4];
  p_output1[25]=(-0.5*t14453*var2[0] - 0.5*t14595*var2[1] - 0.5*t14649*var2[2])*var2[4];
  p_output1[26]=var2[4]*(-0.5*t14524*var2[0] - 0.5*t14622*var2[1] - 0.5*t14668*var2[2] - 0.5*(6.4*Power(t10654,2) + 6.4*t10871*t11870 + 6.4*Power(t11870,2) + 6.4*t12296*t14520)*var2[3] - 0.384*t14520*var2[4]);
  p_output1[27]=t14561;
  p_output1[28]=t14635;
  p_output1[29]=t14691;
  p_output1[30]=-0.5*t14723*var2[4];
  p_output1[31]=-0.5*t14560*var2[0] - 0.5*t14072*var2[1] - 0.5*t14690*var2[2] - 0.5*t14723*var2[3] - 0.768*t11870*var2[4];
  p_output1[32]=(-0.384*t9834*var2[0] - 0.384*t14291*var2[1])*var2[4];
  p_output1[33]=(t14735 + t14736 - 0.384*t14511*var2[2])*var2[4];
  p_output1[34]=(t14735 + t14736 - 0.384*t14534*var2[2] - 0.384*t14520*var2[3])*var2[4];
  p_output1[35]=-0.384*t14313*var2[4];
  p_output1[36]=t9948;
  p_output1[37]=-0.384*t14414*var2[4];
  p_output1[38]=-0.384*t11870*var2[4];
  p_output1[39]=-0.384*t14313*var2[0] - 0.384*t9834*var2[1] - 0.384*t14414*var2[2] - 0.384*t11870*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec5_five_link_walker.hh"

namespace LeftStance
{

void J_Ce2_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
