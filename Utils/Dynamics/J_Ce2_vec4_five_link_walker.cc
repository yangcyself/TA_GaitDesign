/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:56:48 GMT-08:00
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
  double t73;
  double t50;
  double t51;
  double t77;
  double t96;
  double t27;
  double t62;
  double t86;
  double t87;
  double t131;
  double t132;
  double t135;
  double t136;
  double t139;
  double t91;
  double t97;
  double t100;
  double t108;
  double t109;
  double t117;
  double t6211;
  double t6306;
  double t6440;
  double t5952;
  double t6109;
  double t6208;
  double t122;
  double t123;
  double t127;
  double t6512;
  double t6570;
  double t8585;
  double t146;
  double t149;
  double t150;
  double t145;
  double t153;
  double t154;
  double t8990;
  double t8967;
  double t8981;
  double t8982;
  double t8999;
  double t9000;
  double t9014;
  double t9040;
  double t8984;
  double t8991;
  double t9045;
  double t9060;
  double t9065;
  double t9538;
  double t9561;
  double t10712;
  double t10714;
  double t10715;
  double t10719;
  double t10720;
  double t10722;
  double t10734;
  double t10736;
  double t10739;
  double t128;
  double t158;
  double t161;
  double t162;
  double t2112;
  double t10772;
  double t10775;
  double t140;
  double t141;
  double t142;
  double t6442;
  double t8902;
  double t8911;
  double t8957;
  double t9438;
  double t9835;
  double t9837;
  double t9839;
  double t9860;
  double t9861;
  double t9888;
  double t10639;
  double t10641;
  double t10645;
  double t10691;
  double t10693;
  double t10711;
  double t10751;
  double t10752;
  double t10753;
  double t10718;
  double t10727;
  double t10732;
  double t10740;
  double t10742;
  double t10747;
  double t10748;
  double t10749;
  double t10756;
  double t10758;
  double t10759;
  double t10760;
  double t10761;
  double t10845;
  double t10846;
  double t10847;
  double t10778;
  double t10779;
  double t10782;
  double t10787;
  double t10790;
  double t10793;
  double t10794;
  double t10802;
  double t10803;
  double t10804;
  double t10811;
  double t10819;
  double t10820;
  double t10823;
  double t10825;
  double t10827;
  double t10834;
  double t10835;
  double t10903;
  double t10904;
  double t10843;
  double t10917;
  double t10918;
  double t10851;
  double t10856;
  double t12113;
  double t13943;
  double t10865;
  double t14085;
  double t14086;
  double t14100;
  double t14101;
  double t14102;
  double t14124;
  double t14129;
  double t14130;
  double t14160;
  double t14161;
  double t14162;
  double t14173;
  double t14175;
  double t14176;
  double t14191;
  double t14192;
  double t14193;
  double t14203;
  double t14222;
  double t14227;
  double t9315;
  double t9441;
  double t9009;
  double t9010;
  double t8992;
  double t9011;
  double t9079;
  double t9097;
  double t9530;
  double t9572;
  double t9831;
  double t14268;
  double t14275;
  double t14276;
  double t10805;
  double t14293;
  double t10841;
  double t10842;
  double t10848;
  double t10849;
  double t10852;
  double t10855;
  double t10857;
  double t10858;
  double t10859;
  double t10866;
  double t14318;
  double t10875;
  double t10876;
  double t10877;
  double t14319;
  double t10879;
  double t10880;
  double t10881;
  double t14320;
  double t14326;
  double t14331;
  double t14336;
  double t14337;
  double t14338;
  double t14346;
  double t10889;
  double t14353;
  double t10916;
  double t10919;
  double t10920;
  double t14355;
  double t10923;
  double t11990;
  double t13950;
  double t13952;
  double t13954;
  double t13955;
  double t13966;
  double t13967;
  double t13968;
  double t14022;
  double t14023;
  double t14033;
  double t14045;
  double t14050;
  double t14051;
  double t14177;
  double t10733;
  double t10750;
  double t10755;
  double t10762;
  double t10764;
  double t118;
  double t157;
  double t2693;
  double t2924;
  double t14394;
  double t14395;
  double t10767;
  double t14298;
  double t14303;
  double t14304;
  double t14305;
  double t14311;
  double t10836;
  double t10853;
  double t10854;
  double t10867;
  double t10868;
  double t14354;
  double t14359;
  double t14360;
  double t14361;
  double t14369;
  double t10902;
  double t10921;
  double t13962;
  double t13964;
  double t13969;
  double t14070;
  double t14071;
  double t14384;
  double t14385;
  double t14386;
  double t14387;
  double t14388;
  double t14389;
  double t14390;
  double t14228;
  double t14397;
  double t14445;
  double t14446;
  double t14451;
  double t14269;
  double t14270;
  double t14273;
  double t14324;
  double t10783;
  double t14408;
  double t14409;
  double t14410;
  double t14373;
  double t14378;
  double t14379;
  double t10878;
  double t10882;
  double t10887;
  double t14429;
  double t14430;
  double t14431;
  double t14432;
  double t14433;
  double t14234;
  double t14235;
  double t14245;
  double t14246;
  double t3204;
  double t14454;
  double t14455;
  double t14456;
  double t14487;
  double t14488;
  double t14266;
  double t14402;
  double t14462;
  t73 = Cos(var1[3]);
  t50 = Cos(var1[4]);
  t51 = Sin(var1[3]);
  t77 = Sin(var1[4]);
  t96 = Cos(var1[2]);
  t27 = Sin(var1[2]);
  t62 = -1.*t50*t51;
  t86 = -1.*t73*t77;
  t87 = t62 + t86;
  t131 = -1.*t50;
  t132 = 1. + t131;
  t135 = 0.4*t132;
  t136 = 0.64*t50;
  t139 = t135 + t136;
  t91 = -1.*t27*t87;
  t97 = -1.*t73*t50;
  t100 = t51*t77;
  t108 = t97 + t100;
  t109 = t96*t108;
  t117 = t91 + t109;
  t6211 = t96*t73;
  t6306 = -1.*t27*t51;
  t6440 = t6211 + t6306;
  t5952 = -1.*t73*t27;
  t6109 = -1.*t96*t51;
  t6208 = t5952 + t6109;
  t122 = -1.*t96*t73;
  t123 = t27*t51;
  t127 = t122 + t123;
  t6512 = t73*t27;
  t6570 = t96*t51;
  t8585 = t6512 + t6570;
  t146 = t73*t50;
  t149 = -1.*t51*t77;
  t150 = t146 + t149;
  t145 = t96*t87;
  t153 = -1.*t27*t150;
  t154 = t145 + t153;
  t8990 = t96*t150;
  t8967 = t50*t51;
  t8981 = t73*t77;
  t8982 = t8967 + t8981;
  t8999 = t27*t87;
  t9000 = t8999 + t8990;
  t9014 = -1.*t96*t150;
  t9040 = t91 + t9014;
  t8984 = -1.*t27*t8982;
  t8991 = t8984 + t8990;
  t9045 = t96*t8982;
  t9060 = t27*t150;
  t9065 = t9045 + t9060;
  t9538 = t27*t108;
  t9561 = t145 + t9538;
  t10712 = t139*t51;
  t10714 = 0.24*t73*t77;
  t10715 = t10712 + t10714;
  t10719 = t73*t139;
  t10720 = -0.24*t51*t77;
  t10722 = t10719 + t10720;
  t10734 = -1.*t139*t51;
  t10736 = -0.24*t73*t77;
  t10739 = t10734 + t10736;
  t128 = 0.748*t127;
  t158 = t139*t50;
  t161 = Power(t77,2);
  t162 = 0.24*t161;
  t2112 = t158 + t162;
  t10772 = t27*t8982;
  t10775 = t10772 + t109;
  t140 = t139*t77;
  t141 = -0.24*t50*t77;
  t142 = t140 + t141;
  t6442 = 20.4*t6208*t6440;
  t8902 = 6.8*t8585*t6440;
  t8911 = 20.4*t6208*t127;
  t8957 = 6.8*t8585*t127;
  t9438 = -1.*t27*t108;
  t9835 = Power(t6208,2);
  t9837 = 13.6*t9835;
  t9839 = 13.6*t6208*t8585;
  t9860 = Power(t6440,2);
  t9861 = 13.6*t9860;
  t9888 = 13.6*t6440*t127;
  t10639 = Power(t73,2);
  t10641 = 0.11*t10639;
  t10645 = Power(t51,2);
  t10691 = 0.11*t10645;
  t10693 = t10641 + t10691;
  t10711 = 6.8*t127*t10693;
  t10751 = t10715*t8982;
  t10752 = t150*t10722;
  t10753 = t10751 + t10752;
  t10718 = -1.*t10715*t150;
  t10727 = -1.*t87*t10722;
  t10732 = t10718 + t10727;
  t10740 = t10739*t150;
  t10742 = t10715*t150;
  t10747 = t87*t10722;
  t10748 = t8982*t10722;
  t10749 = t10740 + t10742 + t10747 + t10748;
  t10756 = -1.*t87*t10739;
  t10758 = -1.*t87*t10715;
  t10759 = -1.*t150*t10722;
  t10760 = -1.*t10722*t108;
  t10761 = t10756 + t10758 + t10759 + t10760;
  t10845 = -1.*t73*t139;
  t10846 = 0.24*t51*t77;
  t10847 = t10845 + t10846;
  t10778 = -0.384*var2[4]*t10775;
  t10779 = 3.2*t2112*t10775;
  t10782 = 3.2*t142*t9561;
  t10787 = 6.4*t9000*t154;
  t10790 = 3.2*t9065*t117;
  t10793 = 3.2*t154*t10775;
  t10794 = t9045 + t9438;
  t10802 = 3.2*t9000*t10794;
  t10803 = 3.2*t8991*t9561;
  t10804 = 6.4*t117*t9561;
  t10811 = Power(t9000,2);
  t10819 = 6.4*t10811;
  t10820 = 6.4*t9000*t10775;
  t10823 = 6.4*t9065*t9561;
  t10825 = Power(t9561,2);
  t10827 = 6.4*t10825;
  t10834 = 3.2*t10753*t10775;
  t10835 = 3.2*t10732*t9561;
  t10903 = -0.24*t50*t51;
  t10904 = t10903 + t10736;
  t10843 = -1.*t8982*t10722;
  t10917 = 0.24*t73*t50;
  t10918 = t10917 + t10720;
  t10851 = -1.*t10715*t108;
  t10856 = t87*t10715;
  t12113 = -0.24*t73*t50;
  t13943 = t12113 + t10846;
  t10865 = t10722*t108;
  t14085 = 13.6*t6208*t6440;
  t14086 = 13.6*t8585*t6440;
  t14100 = 6.4*t9000*t9065;
  t14101 = 6.4*t9000*t9561;
  t14102 = t14085 + t14086 + t14100 + t14101;
  t14124 = 6.8*t9835;
  t14129 = 6.8*t6208*t8585;
  t14130 = 6.8*t9860;
  t14160 = 6.8*t6440*t127;
  t14161 = 3.2*t9000*t8991;
  t14162 = 3.2*t154*t9065;
  t14173 = 3.2*t9000*t117;
  t14175 = 3.2*t154*t9561;
  t14176 = t14124 + t14129 + t14130 + t14160 + t14161 + t14162 + t14173 + t14175;
  t14191 = 6.8*t6208*t10693;
  t14192 = 3.2*t9000*t10732;
  t14193 = 3.2*t9000*t10749;
  t14203 = 3.2*t10753*t9561;
  t14222 = 3.2*t9065*t10761;
  t14227 = t14191 + t14192 + t14193 + t14203 + t14222;
  t9315 = -1.*t96*t87;
  t9441 = t9315 + t9438;
  t9009 = -1.*t96*t8982;
  t9010 = t9009 + t153;
  t8992 = 6.4*t8991*t154;
  t9011 = 3.2*t9000*t9010;
  t9079 = 3.2*t9040*t9065;
  t9097 = 6.4*t154*t117;
  t9530 = 3.2*t9000*t9441;
  t9572 = 3.2*t9040*t9561;
  t9831 = t6442 + t8902 + t8911 + t8957 + t8992 + t9011 + t9079 + t9097 + t9530 + t9572;
  t14268 = 0.748*t8585;
  t14275 = Power(t127,2);
  t14276 = 13.6*t14275;
  t10805 = t6442 + t8902 + t8911 + t8957 + t10787 + t10790 + t10793 + t10802 + t10803 + t10804;
  t14293 = 6.8*t8585*t10693;
  t10841 = -1.*t10739*t150;
  t10842 = -2.*t87*t10722;
  t10848 = -1.*t87*t10847;
  t10849 = -2.*t10739*t108;
  t10852 = t10841 + t10842 + t10843 + t10848 + t10849 + t10851;
  t10855 = 2.*t87*t10739;
  t10857 = t10739*t8982;
  t10858 = 2.*t150*t10722;
  t10859 = t150*t10847;
  t10866 = t10855 + t10856 + t10857 + t10858 + t10859 + t10865;
  t14318 = -0.384*var2[4]*t10794;
  t10875 = Power(t50,2);
  t10876 = -0.24*t10875;
  t10877 = t158 + t10876;
  t14319 = 3.2*t142*t117;
  t10879 = -1.*t139*t77;
  t10880 = 0.24*t50*t77;
  t10881 = t10879 + t10880;
  t14320 = 3.2*t2112*t10794;
  t14326 = Power(t154,2);
  t14331 = 6.4*t14326;
  t14336 = 6.4*t8991*t117;
  t14337 = Power(t117,2);
  t14338 = 6.4*t14337;
  t14346 = 6.4*t154*t10794;
  t10889 = t10787 + t10790 + t10793 + t10802 + t10803 + t10804;
  t14353 = 3.2*t10732*t117;
  t10916 = t10904*t150;
  t10919 = t8982*t10918;
  t10920 = t10916 + t10742 + t10747 + t10919;
  t14355 = 3.2*t10753*t10794;
  t10923 = -1.*t10904*t150;
  t11990 = -1.*t87*t10918;
  t13950 = -1.*t87*t13943;
  t13952 = -1.*t10739*t108;
  t13954 = -1.*t10904*t108;
  t13955 = t10923 + t10727 + t10843 + t11990 + t13950 + t13952 + t13954 + t10851;
  t13966 = -1.*t87*t10904;
  t13967 = -1.*t150*t10918;
  t13968 = t13966 + t10758 + t13967 + t10760;
  t14022 = t87*t10739;
  t14023 = t87*t10904;
  t14033 = t10904*t8982;
  t14045 = t150*t10918;
  t14050 = t150*t13943;
  t14051 = t14022 + t14023 + t10856 + t14033 + t10752 + t14045 + t14050 + t10865;
  t14177 = -0.5*var2[3]*t14176;
  t10733 = 3.2*t154*t10732;
  t10750 = 3.2*t154*t10749;
  t10755 = 3.2*t10753*t117;
  t10762 = 3.2*t8991*t10761;
  t10764 = t10711 + t10733 + t10750 + t10755 + t10762;
  t118 = -0.384*var2[4]*t117;
  t157 = 3.2*t142*t154;
  t2693 = 3.2*t2112*t117;
  t2924 = t128 + t157 + t2693;
  t14394 = 13.6*t6208*t127;
  t14395 = t14085 + t14394 + t8992 + t9097;
  t10767 = -0.5*var2[2]*t10764;
  t14298 = 3.2*t9040*t10732;
  t14303 = 3.2*t9040*t10749;
  t14304 = 3.2*t10753*t9441;
  t14305 = 3.2*t9010*t10761;
  t14311 = t14293 + t14298 + t14303 + t14304 + t14305;
  t10836 = 6.4*t10749*t9561;
  t10853 = 3.2*t9065*t10852;
  t10854 = 6.4*t9000*t10761;
  t10867 = 3.2*t9000*t10866;
  t10868 = t10711 + t10834 + t10835 + t10836 + t10853 + t10854 + t10867;
  t14354 = 6.4*t10749*t117;
  t14359 = 3.2*t8991*t10852;
  t14360 = 6.4*t154*t10761;
  t14361 = 3.2*t154*t10866;
  t14369 = t14293 + t14353 + t14354 + t14355 + t14359 + t14360 + t14361;
  t10902 = 3.2*t10749*t9561;
  t10921 = 3.2*t10920*t9561;
  t13962 = 3.2*t9065*t13955;
  t13964 = 3.2*t9000*t10761;
  t13969 = 3.2*t9000*t13968;
  t14070 = 3.2*t9000*t14051;
  t14071 = t10834 + t10835 + t10902 + t10921 + t13962 + t13964 + t13969 + t14070;
  t14384 = 3.2*t10749*t117;
  t14385 = 3.2*t10920*t117;
  t14386 = 3.2*t8991*t13955;
  t14387 = 3.2*t154*t10761;
  t14388 = 3.2*t154*t13968;
  t14389 = 3.2*t154*t14051;
  t14390 = t14353 + t14384 + t14385 + t14355 + t14386 + t14387 + t14388 + t14389;
  t14228 = -0.5*var2[3]*t14227;
  t14397 = -0.5*var2[3]*t10764;
  t14445 = 6.4*t10749*t10753;
  t14446 = 6.4*t10732*t10761;
  t14451 = t14445 + t14446;
  t14269 = 3.2*t142*t9040;
  t14270 = 3.2*t2112*t9441;
  t14273 = t14268 + t14269 + t14270;
  t14324 = t14268 + t14319 + t14320;
  t10783 = t128 + t10779 + t10782;
  t14408 = 3.2*t142*t10852;
  t14409 = 3.2*t2112*t10866;
  t14410 = t14408 + t14409;
  t14373 = 3.2*t10877*t154;
  t14378 = 3.2*t10881*t117;
  t14379 = t14373 + t14319 + t14378 + t14320;
  t10878 = 3.2*t10877*t9000;
  t10882 = 3.2*t10881*t9561;
  t10887 = t10878 + t10779 + t10782 + t10882;
  t14429 = 3.2*t10881*t10749;
  t14430 = 3.2*t142*t13955;
  t14431 = 3.2*t10877*t10761;
  t14432 = 3.2*t2112*t14051;
  t14433 = t14429 + t14430 + t14431 + t14432;
  t14234 = 0.748*t6208;
  t14235 = 3.2*t142*t9000;
  t14245 = 3.2*t2112*t9561;
  t14246 = t14234 + t14235 + t14245;
  t3204 = -0.5*var2[3]*t2924;
  t14454 = 3.2*t2112*t10749;
  t14455 = 3.2*t142*t10761;
  t14456 = t14454 + t14455;
  t14487 = -0.384*var2[0]*t10775;
  t14488 = -0.384*var2[1]*t10794;
  t14266 = -0.384*var2[3]*t9561;
  t14402 = -0.384*var2[3]*t117;
  t14462 = -0.384*var2[3]*t10749;
  p_output1[0]=(t10767 + t118 + t3204 - 0.5*(6.4*t117*t9000 + 6.4*t8991*t9000 + 6.4*t154*t9065 + 6.4*t154*t9561 + t9837 + t9839 + t9861 + t9888)*var2[0] - 0.5*t9831*var2[1])*var2[3];
  p_output1[1]=var2[3]*(t10778 - 0.5*(t10819 + t10820 + t10823 + t10827 + t9837 + t9839 + t9861 + t9888)*var2[0] - 0.5*t10805*var2[1] - 0.5*t10868*var2[2] - 0.5*t10783*var2[3]);
  p_output1[2]=var2[3]*(t10778 - 0.5*(t10819 + t10820 + t10823 + t10827)*var2[0] - 0.5*t10889*var2[1] - 0.5*t14071*var2[2] - 0.5*t10887*var2[3]);
  p_output1[3]=-0.5*t14102*var2[3];
  p_output1[4]=t14177;
  p_output1[5]=t14228;
  p_output1[6]=-0.5*t14102*var2[0] - 0.5*t14176*var2[1] - 0.5*t14227*var2[2] - 1.*t14246*var2[3] - 0.384*t9561*var2[4];
  p_output1[7]=t14266;
  p_output1[8]=var2[3]*(-0.5*t9831*var2[0] - 0.5*(t14276 + 6.4*t154*t9010 + 6.4*t117*t9040 + 6.4*t8991*t9040 + 6.4*t154*t9441 + t9837 + t9839 + t9888)*var2[1] - 0.5*t14311*var2[2] - 0.5*t14273*var2[3] - 0.384*t9441*var2[4]);
  p_output1[9]=var2[3]*(t14318 - 0.5*t10805*var2[0] - 0.5*(t14276 + t14331 + t14336 + t14338 + t14346 + t9837 + t9839 + t9888)*var2[1] - 0.5*t14369*var2[2] - 0.5*t14324*var2[3]);
  p_output1[10]=var2[3]*(t14318 - 0.5*t10889*var2[0] - 0.5*(t14331 + t14336 + t14338 + t14346)*var2[1] - 0.5*t14390*var2[2] - 0.5*t14379*var2[3]);
  p_output1[11]=t14177;
  p_output1[12]=-0.5*t14395*var2[3];
  p_output1[13]=t14397;
  p_output1[14]=t10767 + t118 - 0.5*t14176*var2[0] - 0.5*t14395*var2[1] - 1.*t2924*var2[3];
  p_output1[15]=t14402;
  p_output1[16]=(-0.5*t10764*var2[0] - 0.5*t14311*var2[1])*var2[3];
  p_output1[17]=var2[3]*(-0.5*t10868*var2[0] - 0.5*t14369*var2[1] - 0.5*(6.4*Power(t10749,2) + 6.4*Power(t10761,2) + 6.4*t10732*t10852 + 6.4*t10753*t10866)*var2[2] - 0.5*t14410*var2[3] - 0.384*t10866*var2[4]);
  p_output1[18]=var2[3]*(-0.5*t14071*var2[0] - 0.5*t14390*var2[1] - 0.5*(6.4*t10749*t10920 + 6.4*t10732*t13955 + 6.4*t10761*t13968 + 6.4*t10753*t14051)*var2[2] - 0.5*t14433*var2[3] - 0.384*t14051*var2[4]);
  p_output1[19]=t14228;
  p_output1[20]=t14397;
  p_output1[21]=-0.5*t14451*var2[3];
  p_output1[22]=-0.5*t14227*var2[0] - 0.5*t10764*var2[1] - 0.5*t14451*var2[2] - 1.*t14456*var2[3] - 0.384*t10749*var2[4];
  p_output1[23]=t14462;
  p_output1[24]=(-0.5*t2924*var2[0] - 0.5*t14273*var2[1])*var2[3];
  p_output1[25]=(-0.5*t10783*var2[0] - 0.5*t14324*var2[1] - 0.5*t14410*var2[2])*var2[3];
  p_output1[26]=(-0.5*t10887*var2[0] - 0.5*t14379*var2[1] - 0.5*t14433*var2[2])*var2[3];
  p_output1[27]=-0.5*t14246*var2[3];
  p_output1[28]=t3204;
  p_output1[29]=-0.5*t14456*var2[3];
  p_output1[30]=-0.5*t14246*var2[0] - 0.5*t2924*var2[1] - 0.5*t14456*var2[2];
  p_output1[31]=(-0.384*t117*var2[0] - 0.384*t9441*var2[1])*var2[3];
  p_output1[32]=(t14487 + t14488 - 0.384*t10866*var2[2])*var2[3];
  p_output1[33]=(t14487 + t14488 - 0.384*t14051*var2[2])*var2[3];
  p_output1[34]=t14266;
  p_output1[35]=t14402;
  p_output1[36]=t14462;
  p_output1[37]=-0.384*t9561*var2[0] - 0.384*t117*var2[1] - 0.384*t10749*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 38, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec4_five_link_walker.hh"

namespace LeftStance
{

void J_Ce2_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
