/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:56:03 GMT-08:00
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
  double t8674;
  double t5817;
  double t5832;
  double t11904;
  double t11945;
  double t1128;
  double t11946;
  double t11947;
  double t11948;
  double t11959;
  double t11960;
  double t11961;
  double t11964;
  double t11967;
  double t5961;
  double t11910;
  double t11922;
  double t11944;
  double t11949;
  double t11950;
  double t11988;
  double t11985;
  double t11986;
  double t11989;
  double t11993;
  double t11994;
  double t11995;
  double t12005;
  double t12006;
  double t12007;
  double t12008;
  double t12009;
  double t11987;
  double t11990;
  double t11991;
  double t11992;
  double t11996;
  double t11997;
  double t11952;
  double t11953;
  double t11954;
  double t12027;
  double t12028;
  double t12029;
  double t11975;
  double t11971;
  double t11972;
  double t11973;
  double t11974;
  double t11976;
  double t11999;
  double t12000;
  double t12001;
  double t12042;
  double t12043;
  double t12044;
  double t12016;
  double t12012;
  double t12013;
  double t12014;
  double t12015;
  double t12017;
  double t12031;
  double t12032;
  double t12033;
  double t12035;
  double t12036;
  double t12038;
  double t12039;
  double t12040;
  double t12046;
  double t12047;
  double t12048;
  double t12050;
  double t12051;
  double t12053;
  double t12054;
  double t12055;
  double t12108;
  double t12109;
  double t12110;
  double t12112;
  double t12113;
  double t12114;
  double t12122;
  double t12123;
  double t12124;
  double t12125;
  double t12126;
  double t12136;
  double t12137;
  double t12138;
  double t12139;
  double t12141;
  double t12142;
  double t12143;
  double t11958;
  double t11968;
  double t11969;
  double t11970;
  double t11978;
  double t11979;
  double t11980;
  double t11981;
  double t12154;
  double t12155;
  double t12156;
  double t12157;
  double t12158;
  double t12030;
  double t12034;
  double t12059;
  double t12060;
  double t12061;
  double t12062;
  double t12063;
  double t12064;
  double t12065;
  double t12066;
  double t12067;
  double t12068;
  double t12102;
  double t12103;
  double t12104;
  double t12105;
  double t12106;
  double t12107;
  double t12111;
  double t12115;
  double t12116;
  double t12118;
  double t12119;
  double t12120;
  double t12177;
  double t12178;
  double t12179;
  double t12159;
  double t12160;
  double t12161;
  double t12164;
  double t12165;
  double t12168;
  double t12169;
  double t12170;
  double t12171;
  double t12172;
  double t12173;
  double t12176;
  double t12181;
  double t12182;
  double t12186;
  double t12210;
  double t12211;
  double t12188;
  double t12213;
  double t12214;
  double t12190;
  double t12002;
  double t12003;
  double t12004;
  double t12010;
  double t12011;
  double t12019;
  double t12020;
  double t12021;
  double t12022;
  double t12023;
  double t12225;
  double t12226;
  double t12227;
  double t12228;
  double t12229;
  double t12045;
  double t12049;
  double t12079;
  double t12080;
  double t12081;
  double t12082;
  double t12083;
  double t12084;
  double t12085;
  double t12086;
  double t12087;
  double t12088;
  double t12131;
  double t12127;
  double t12128;
  double t12129;
  double t12130;
  double t12132;
  double t12133;
  double t12134;
  double t12135;
  double t12140;
  double t12144;
  double t12145;
  double t12147;
  double t12148;
  double t12149;
  double t12256;
  double t12257;
  double t12258;
  double t12259;
  double t12263;
  double t12264;
  double t12230;
  double t12231;
  double t12232;
  double t12235;
  double t12236;
  double t12239;
  double t12240;
  double t12241;
  double t12242;
  double t12243;
  double t12244;
  double t12255;
  double t12261;
  double t12262;
  double t12268;
  double t12293;
  double t12294;
  double t12270;
  double t12296;
  double t12297;
  double t12272;
  double t12069;
  double t12070;
  double t12076;
  double t12077;
  double t12089;
  double t12090;
  double t12096;
  double t12097;
  double t12071;
  double t12072;
  double t12073;
  double t12074;
  double t12075;
  double t12078;
  double t12091;
  double t12092;
  double t12093;
  double t12094;
  double t12095;
  double t12098;
  double t12099;
  double t12354;
  double t12365;
  double t12174;
  double t12375;
  double t12180;
  double t12183;
  double t12184;
  double t12187;
  double t12189;
  double t12191;
  double t12385;
  double t12200;
  double t12201;
  double t12202;
  double t12386;
  double t12196;
  double t12197;
  double t12198;
  double t12387;
  double t12390;
  double t12391;
  double t12208;
  double t12395;
  double t12212;
  double t12215;
  double t12216;
  double t12397;
  double t12218;
  double t12219;
  double t12220;
  double t12360;
  double t12368;
  double t12245;
  double t12378;
  double t12251;
  double t12252;
  double t12253;
  double t12247;
  double t12248;
  double t12249;
  double t12379;
  double t12260;
  double t12265;
  double t12266;
  double t12269;
  double t12271;
  double t12273;
  double t12414;
  double t12283;
  double t12284;
  double t12285;
  double t12278;
  double t12279;
  double t12280;
  double t12281;
  double t12415;
  double t12416;
  double t12419;
  double t12420;
  double t12291;
  double t12426;
  double t12295;
  double t12298;
  double t12299;
  double t12428;
  double t12301;
  double t12302;
  double t12303;
  double t12325;
  double t12326;
  double t12327;
  double t12328;
  double t12329;
  double t12330;
  double t12331;
  double t12332;
  double t12333;
  double t12308;
  double t12309;
  double t12310;
  double t12311;
  double t12101;
  double t12117;
  double t12121;
  double t12146;
  double t12150;
  double t12151;
  double t11977;
  double t11982;
  double t11983;
  double t12018;
  double t12024;
  double t12025;
  double t12374;
  double t12376;
  double t12377;
  double t12380;
  double t12381;
  double t12382;
  double t12396;
  double t12398;
  double t12399;
  double t12185;
  double t12192;
  double t12193;
  double t12409;
  double t12410;
  double t12411;
  double t12217;
  double t12221;
  double t12222;
  double t12424;
  double t12425;
  double t12427;
  double t12429;
  double t12430;
  double t12250;
  double t12254;
  double t12267;
  double t12274;
  double t12275;
  double t12440;
  double t12441;
  double t12442;
  double t12300;
  double t12304;
  double t12305;
  double t12334;
  double t12335;
  double t12336;
  double t12337;
  double t12338;
  double t12339;
  double t12340;
  double t12341;
  double t12342;
  double t12355;
  double t12356;
  double t12357;
  double t12388;
  double t12162;
  double t12452;
  double t12453;
  double t12454;
  double t12402;
  double t12403;
  double t12404;
  double t12199;
  double t12203;
  double t12204;
  double t12464;
  double t12465;
  double t12466;
  double t12467;
  double t12468;
  double t12343;
  double t12344;
  double t12345;
  double t12346;
  double t12521;
  double t12522;
  double t12523;
  double t12524;
  double t12560;
  double t12561;
  double t12347;
  double t12446;
  double t12525;
  double t12526;
  double t12554;
  double t12555;
  double t12361;
  double t12362;
  double t12363;
  double t12417;
  double t12233;
  double t12478;
  double t12479;
  double t12480;
  double t12481;
  double t12433;
  double t12434;
  double t12435;
  double t12282;
  double t12286;
  double t12287;
  double t12493;
  double t12494;
  double t12495;
  double t12496;
  double t12497;
  double t12348;
  double t12349;
  double t12350;
  double t12351;
  double t12527;
  double t12528;
  double t12529;
  double t12530;
  double t12593;
  double t12594;
  double t12352;
  double t12447;
  double t12531;
  double t12532;
  double t12587;
  double t12588;
  t8674 = Cos(var1[3]);
  t5817 = Cos(var1[4]);
  t5832 = Sin(var1[3]);
  t11904 = Sin(var1[4]);
  t11945 = Sin(var1[2]);
  t1128 = Cos(var1[2]);
  t11946 = t8674*t5817;
  t11947 = -1.*t5832*t11904;
  t11948 = t11946 + t11947;
  t11959 = -1.*t5817;
  t11960 = 1. + t11959;
  t11961 = 0.4*t11960;
  t11964 = 0.64*t5817;
  t11967 = t11961 + t11964;
  t5961 = -1.*t5817*t5832;
  t11910 = -1.*t8674*t11904;
  t11922 = t5961 + t11910;
  t11944 = t1128*t11922;
  t11949 = -1.*t11945*t11948;
  t11950 = t11944 + t11949;
  t11988 = Cos(var1[5]);
  t11985 = Cos(var1[6]);
  t11986 = Sin(var1[5]);
  t11989 = Sin(var1[6]);
  t11993 = t11988*t11985;
  t11994 = -1.*t11986*t11989;
  t11995 = t11993 + t11994;
  t12005 = -1.*t11985;
  t12006 = 1. + t12005;
  t12007 = 1.03*t12006;
  t12008 = 1.27*t11985;
  t12009 = t12007 + t12008;
  t11987 = -1.*t11985*t11986;
  t11990 = -1.*t11988*t11989;
  t11991 = t11987 + t11990;
  t11992 = t1128*t11991;
  t11996 = -1.*t11945*t11995;
  t11997 = t11992 + t11996;
  t11952 = -1.*t8674*t11945;
  t11953 = -1.*t1128*t5832;
  t11954 = t11952 + t11953;
  t12027 = t1128*t8674;
  t12028 = -1.*t11945*t5832;
  t12029 = t12027 + t12028;
  t11975 = t1128*t11948;
  t11971 = t5817*t5832;
  t11972 = t8674*t11904;
  t11973 = t11971 + t11972;
  t11974 = -1.*t11945*t11973;
  t11976 = t11974 + t11975;
  t11999 = -1.*t11988*t11945;
  t12000 = -1.*t1128*t11986;
  t12001 = t11999 + t12000;
  t12042 = t1128*t11988;
  t12043 = -1.*t11945*t11986;
  t12044 = t12042 + t12043;
  t12016 = t1128*t11995;
  t12012 = t11985*t11986;
  t12013 = t11988*t11989;
  t12014 = t12012 + t12013;
  t12015 = -1.*t11945*t12014;
  t12017 = t12015 + t12016;
  t12031 = t8674*t11945;
  t12032 = t1128*t5832;
  t12033 = t12031 + t12032;
  t12035 = t11945*t11922;
  t12036 = t12035 + t11975;
  t12038 = t1128*t11973;
  t12039 = t11945*t11948;
  t12040 = t12038 + t12039;
  t12046 = t11988*t11945;
  t12047 = t1128*t11986;
  t12048 = t12046 + t12047;
  t12050 = t11945*t11991;
  t12051 = t12050 + t12016;
  t12053 = t1128*t12014;
  t12054 = t11945*t11995;
  t12055 = t12053 + t12054;
  t12108 = t11967*t5832;
  t12109 = 0.24*t8674*t11904;
  t12110 = t12108 + t12109;
  t12112 = t8674*t11967;
  t12113 = -0.24*t5832*t11904;
  t12114 = t12112 + t12113;
  t12122 = -1.*t11988;
  t12123 = 1. + t12122;
  t12124 = 0.63*t12123;
  t12125 = 0.74*t11988;
  t12126 = t12124 + t12125;
  t12136 = -0.63*t11986;
  t12137 = t12009*t11986;
  t12138 = 0.24*t11988*t11989;
  t12139 = t12136 + t12137 + t12138;
  t12141 = t11988*t12009;
  t12142 = -0.24*t11986*t11989;
  t12143 = t12124 + t12141 + t12142;
  t11958 = -0.748*t11954;
  t11968 = t11967*t11904;
  t11969 = -0.24*t5817*t11904;
  t11970 = t11968 + t11969;
  t11978 = t11967*t5817;
  t11979 = Power(t11904,2);
  t11980 = 0.24*t11979;
  t11981 = t11978 + t11980;
  t12154 = -1.*t8674*t5817;
  t12155 = t5832*t11904;
  t12156 = t12154 + t12155;
  t12157 = t11945*t12156;
  t12158 = t11944 + t12157;
  t12030 = -13.6*t11954*t12029;
  t12034 = -13.6*t12033*t12029;
  t12059 = Power(t11954,2);
  t12060 = -6.8*t12059;
  t12061 = -6.8*t11954*t12033;
  t12062 = Power(t12029,2);
  t12063 = -6.8*t12062;
  t12064 = -1.*t1128*t8674;
  t12065 = t11945*t5832;
  t12066 = t12064 + t12065;
  t12067 = -6.8*t12029*t12066;
  t12068 = -1.*t11945*t11922;
  t12102 = Power(t8674,2);
  t12103 = 0.11*t12102;
  t12104 = Power(t5832,2);
  t12105 = 0.11*t12104;
  t12106 = t12103 + t12105;
  t12107 = -6.8*t11954*t12106;
  t12111 = -1.*t12110*t11948;
  t12115 = -1.*t11922*t12114;
  t12116 = t12111 + t12115;
  t12118 = t12110*t11973;
  t12119 = t11948*t12114;
  t12120 = t12118 + t12119;
  t12177 = -1.*t11967*t5832;
  t12178 = -0.24*t8674*t11904;
  t12179 = t12177 + t12178;
  t12159 = -0.768*var2[4]*t12158;
  t12160 = -3.2*t11970*t12036;
  t12161 = -3.2*t11981*t12158;
  t12164 = -6.4*t12036*t12040;
  t12165 = -6.4*t12036*t12158;
  t12168 = -3.2*t12036*t11976;
  t12169 = -3.2*t11950*t12040;
  t12170 = t1128*t12156;
  t12171 = t12068 + t12170;
  t12172 = -3.2*t12036*t12171;
  t12173 = -3.2*t11950*t12158;
  t12176 = -3.2*t12036*t12116;
  t12181 = t12110*t11948;
  t12182 = t11922*t12114;
  t12186 = -3.2*t12120*t12158;
  t12210 = -0.24*t5817*t5832;
  t12211 = t12210 + t12178;
  t12188 = -1.*t11922*t12110;
  t12213 = 0.24*t8674*t5817;
  t12214 = t12213 + t12113;
  t12190 = -1.*t12114*t12156;
  t12002 = -0.748*t12001;
  t12003 = -0.63*t11989;
  t12004 = -0.24*t11985*t11989;
  t12010 = t12009*t11989;
  t12011 = t12003 + t12004 + t12010;
  t12019 = -0.63*t11985;
  t12020 = t11985*t12009;
  t12021 = Power(t11989,2);
  t12022 = 0.24*t12021;
  t12023 = t12019 + t12020 + t12022;
  t12225 = -1.*t11988*t11985;
  t12226 = t11986*t11989;
  t12227 = t12225 + t12226;
  t12228 = t11945*t12227;
  t12229 = t11992 + t12228;
  t12045 = -13.6*t12001*t12044;
  t12049 = -13.6*t12048*t12044;
  t12079 = Power(t12001,2);
  t12080 = -6.8*t12079;
  t12081 = -6.8*t12001*t12048;
  t12082 = Power(t12044,2);
  t12083 = -6.8*t12082;
  t12084 = -1.*t1128*t11988;
  t12085 = t11945*t11986;
  t12086 = t12084 + t12085;
  t12087 = -6.8*t12044*t12086;
  t12088 = -1.*t11945*t11991;
  t12131 = t12126*t11988;
  t12127 = t12126*t11986;
  t12128 = -0.11*t11988*t11986;
  t12129 = t12127 + t12128;
  t12130 = -6.8*t12129*t12044;
  t12132 = Power(t11986,2);
  t12133 = 0.11*t12132;
  t12134 = t12131 + t12133;
  t12135 = -6.8*t12001*t12134;
  t12140 = -1.*t12139*t11995;
  t12144 = -1.*t11991*t12143;
  t12145 = t12140 + t12144;
  t12147 = t12139*t12014;
  t12148 = t11995*t12143;
  t12149 = t12147 + t12148;
  t12256 = 0.63*t11986;
  t12257 = -1.*t12009*t11986;
  t12258 = -0.24*t11988*t11989;
  t12259 = t12256 + t12257 + t12258;
  t12263 = -0.63*t11988;
  t12264 = t12263 + t12141 + t12142;
  t12230 = -0.768*var2[6]*t12229;
  t12231 = -3.2*t12011*t12051;
  t12232 = -3.2*t12023*t12229;
  t12235 = -6.4*t12051*t12055;
  t12236 = -6.4*t12051*t12229;
  t12239 = -3.2*t12051*t12017;
  t12240 = -3.2*t11997*t12055;
  t12241 = t1128*t12227;
  t12242 = t12088 + t12241;
  t12243 = -3.2*t12051*t12242;
  t12244 = -3.2*t11997*t12229;
  t12255 = -3.2*t12051*t12145;
  t12261 = t12139*t11995;
  t12262 = t11991*t12143;
  t12268 = -3.2*t12149*t12229;
  t12293 = -0.24*t11985*t11986;
  t12294 = t12293 + t12258;
  t12270 = -1.*t11991*t12139;
  t12296 = 0.24*t11988*t11985;
  t12297 = t12296 + t12142;
  t12272 = -1.*t12143*t12227;
  t12069 = -1.*t1128*t11948;
  t12070 = t12068 + t12069;
  t12076 = -1.*t1128*t11973;
  t12077 = t12076 + t11949;
  t12089 = -1.*t1128*t11995;
  t12090 = t12088 + t12089;
  t12096 = -1.*t1128*t12014;
  t12097 = t12096 + t11996;
  t12071 = -3.2*t12070*t12036;
  t12072 = Power(t11976,2);
  t12073 = -3.2*t12072;
  t12074 = Power(t11950,2);
  t12075 = -3.2*t12074;
  t12078 = -3.2*t12077*t12040;
  t12091 = -3.2*t12090*t12051;
  t12092 = Power(t12017,2);
  t12093 = -3.2*t12092;
  t12094 = Power(t11997,2);
  t12095 = -3.2*t12094;
  t12098 = -3.2*t12097*t12055;
  t12099 = t12060 + t12061 + t12063 + t12067 + t12071 + t12073 + t12075 + t12078 + t12080 + t12081 + t12083 + t12087 + t12091 + t12093 + t12095 + t12098;
  t12354 = -0.748*t12066;
  t12365 = -13.6*t11954*t12066;
  t12174 = t12060 + t12061 + t12063 + t12067 + t12168 + t12169 + t12172 + t12173;
  t12375 = -6.8*t12066*t12106;
  t12180 = t12179*t11948;
  t12183 = t11973*t12114;
  t12184 = t12180 + t12181 + t12182 + t12183;
  t12187 = -1.*t11922*t12179;
  t12189 = -1.*t11948*t12114;
  t12191 = t12187 + t12188 + t12189 + t12190;
  t12385 = -0.768*var2[4]*t12171;
  t12200 = Power(t5817,2);
  t12201 = -0.24*t12200;
  t12202 = t11978 + t12201;
  t12386 = -3.2*t11970*t11950;
  t12196 = -1.*t11967*t11904;
  t12197 = 0.24*t5817*t11904;
  t12198 = t12196 + t12197;
  t12387 = -3.2*t11981*t12171;
  t12390 = -6.4*t11976*t11950;
  t12391 = -6.4*t11950*t12171;
  t12208 = t12168 + t12169 + t12172 + t12173;
  t12395 = -3.2*t11950*t12116;
  t12212 = t12211*t11948;
  t12215 = t11973*t12214;
  t12216 = t12212 + t12181 + t12182 + t12215;
  t12397 = -3.2*t12120*t12171;
  t12218 = -1.*t11922*t12211;
  t12219 = -1.*t11948*t12214;
  t12220 = t12218 + t12188 + t12219 + t12190;
  t12360 = -0.748*t12086;
  t12368 = -13.6*t12001*t12086;
  t12245 = t12080 + t12081 + t12083 + t12087 + t12239 + t12240 + t12243 + t12244;
  t12378 = -6.8*t12001*t12129;
  t12251 = -1.*t12126*t11986;
  t12252 = 0.11*t11988*t11986;
  t12253 = t12251 + t12252;
  t12247 = Power(t11988,2);
  t12248 = -0.11*t12247;
  t12249 = t12131 + t12248;
  t12379 = -6.8*t12086*t12134;
  t12260 = t12259*t11995;
  t12265 = t12014*t12264;
  t12266 = t12260 + t12261 + t12262 + t12265;
  t12269 = -1.*t11991*t12259;
  t12271 = -1.*t11995*t12264;
  t12273 = t12269 + t12270 + t12271 + t12272;
  t12414 = -0.768*var2[6]*t12242;
  t12283 = Power(t11985,2);
  t12284 = -0.24*t12283;
  t12285 = t12019 + t12284 + t12020;
  t12278 = 0.63*t11989;
  t12279 = 0.24*t11985*t11989;
  t12280 = -1.*t12009*t11989;
  t12281 = t12278 + t12279 + t12280;
  t12415 = -3.2*t12011*t11997;
  t12416 = -3.2*t12023*t12242;
  t12419 = -6.4*t12017*t11997;
  t12420 = -6.4*t11997*t12242;
  t12291 = t12239 + t12240 + t12243 + t12244;
  t12426 = -3.2*t11997*t12145;
  t12295 = t12294*t11995;
  t12298 = t12014*t12297;
  t12299 = t12295 + t12261 + t12298 + t12262;
  t12428 = -3.2*t12149*t12242;
  t12301 = -1.*t11991*t12294;
  t12302 = -1.*t11995*t12297;
  t12303 = t12301 + t12270 + t12302 + t12272;
  t12325 = -6.8*t11954*t12029;
  t12326 = -6.8*t12033*t12029;
  t12327 = -3.2*t12036*t11950;
  t12328 = -3.2*t11976*t12040;
  t12329 = -6.8*t12001*t12044;
  t12330 = -6.8*t12048*t12044;
  t12331 = -3.2*t12051*t11997;
  t12332 = -3.2*t12017*t12055;
  t12333 = t12325 + t12326 + t12327 + t12328 + t12329 + t12330 + t12331 + t12332;
  t12308 = Power(t1128,2);
  t12309 = -12.*t12308;
  t12310 = Power(t11945,2);
  t12311 = -12.*t12310;
  t12101 = 2.88*t11945;
  t12117 = -3.2*t11976*t12116;
  t12121 = -3.2*t11950*t12120;
  t12146 = -3.2*t12017*t12145;
  t12150 = -3.2*t11997*t12149;
  t12151 = t12101 + t12107 + t12117 + t12121 + t12130 + t12135 + t12146 + t12150;
  t11977 = -3.2*t11970*t11976;
  t11982 = -3.2*t11981*t11950;
  t11983 = t11958 + t11977 + t11982;
  t12018 = -3.2*t12011*t12017;
  t12024 = -3.2*t12023*t11997;
  t12025 = t12002 + t12018 + t12024;
  t12374 = 2.88*t1128;
  t12376 = -3.2*t12077*t12116;
  t12377 = -3.2*t12070*t12120;
  t12380 = -3.2*t12097*t12145;
  t12381 = -3.2*t12090*t12149;
  t12382 = t12374 + t12375 + t12376 + t12377 + t12378 + t12379 + t12380 + t12381;
  t12396 = -3.2*t11950*t12184;
  t12398 = -3.2*t11976*t12191;
  t12399 = t12375 + t12395 + t12396 + t12397 + t12398;
  t12185 = -3.2*t12036*t12184;
  t12192 = -3.2*t12040*t12191;
  t12193 = t12107 + t12176 + t12185 + t12186 + t12192;
  t12409 = -3.2*t11950*t12216;
  t12410 = -3.2*t11976*t12220;
  t12411 = t12395 + t12409 + t12397 + t12410;
  t12217 = -3.2*t12036*t12216;
  t12221 = -3.2*t12040*t12220;
  t12222 = t12176 + t12217 + t12186 + t12221;
  t12424 = -6.8*t12001*t12253;
  t12425 = -6.8*t12249*t12044;
  t12427 = -3.2*t11997*t12266;
  t12429 = -3.2*t12017*t12273;
  t12430 = t12378 + t12424 + t12425 + t12379 + t12426 + t12427 + t12428 + t12429;
  t12250 = -6.8*t12249*t12048;
  t12254 = -6.8*t12253*t12044;
  t12267 = -3.2*t12051*t12266;
  t12274 = -3.2*t12055*t12273;
  t12275 = t12250 + t12130 + t12254 + t12135 + t12255 + t12267 + t12268 + t12274;
  t12440 = -3.2*t11997*t12299;
  t12441 = -3.2*t12017*t12303;
  t12442 = t12426 + t12440 + t12428 + t12441;
  t12300 = -3.2*t12051*t12299;
  t12304 = -3.2*t12055*t12303;
  t12305 = t12255 + t12300 + t12268 + t12304;
  t12334 = -2.88*t1128;
  t12335 = -6.8*t12029*t12106;
  t12336 = -3.2*t12040*t12116;
  t12337 = -3.2*t12036*t12120;
  t12338 = -6.8*t12048*t12129;
  t12339 = -6.8*t12044*t12134;
  t12340 = -3.2*t12055*t12145;
  t12341 = -3.2*t12051*t12149;
  t12342 = t12334 + t12335 + t12336 + t12337 + t12338 + t12339 + t12340 + t12341;
  t12355 = -3.2*t11981*t12070;
  t12356 = -3.2*t11970*t12077;
  t12357 = t12354 + t12355 + t12356;
  t12388 = t12354 + t12386 + t12387;
  t12162 = t11958 + t12160 + t12161;
  t12452 = -3.2*t11981*t12184;
  t12453 = -3.2*t11970*t12191;
  t12454 = t12452 + t12453;
  t12402 = -3.2*t12202*t11976;
  t12403 = -3.2*t12198*t11950;
  t12404 = t12402 + t12386 + t12403 + t12387;
  t12199 = -3.2*t12198*t12036;
  t12203 = -3.2*t12202*t12040;
  t12204 = t12160 + t12199 + t12203 + t12161;
  t12464 = -3.2*t12202*t12116;
  t12465 = -3.2*t12198*t12120;
  t12466 = -3.2*t11981*t12216;
  t12467 = -3.2*t11970*t12220;
  t12468 = t12464 + t12465 + t12466 + t12467;
  t12343 = -0.748*t12029;
  t12344 = -3.2*t11981*t12036;
  t12345 = -3.2*t11970*t12040;
  t12346 = t12343 + t12344 + t12345;
  t12521 = -0.748*t12106;
  t12522 = -3.2*t11970*t12116;
  t12523 = -3.2*t11981*t12120;
  t12524 = -0.67 + t12521 + t12522 + t12523;
  t12560 = -0.768*var2[1]*t12171;
  t12561 = -0.768*var2[0]*t12158;
  t12347 = -0.768*t12036;
  t12446 = -0.768*t11950;
  t12525 = -0.768*t12120;
  t12526 = -0.2 + t12525;
  t12554 = -0.768*t11981;
  t12555 = -0.2 + t12554;
  t12361 = -3.2*t12023*t12090;
  t12362 = -3.2*t12011*t12097;
  t12363 = t12360 + t12361 + t12362;
  t12417 = t12360 + t12415 + t12416;
  t12233 = t12002 + t12231 + t12232;
  t12478 = -0.748*t12253;
  t12479 = -3.2*t12023*t12266;
  t12480 = -3.2*t12011*t12273;
  t12481 = t12478 + t12479 + t12480;
  t12433 = -3.2*t12285*t12017;
  t12434 = -3.2*t12281*t11997;
  t12435 = t12433 + t12434 + t12415 + t12416;
  t12282 = -3.2*t12281*t12051;
  t12286 = -3.2*t12285*t12055;
  t12287 = t12282 + t12231 + t12286 + t12232;
  t12493 = -3.2*t12285*t12145;
  t12494 = -3.2*t12023*t12299;
  t12495 = -3.2*t12281*t12149;
  t12496 = -3.2*t12011*t12303;
  t12497 = t12493 + t12494 + t12495 + t12496;
  t12348 = -0.748*t12044;
  t12349 = -3.2*t12023*t12051;
  t12350 = -3.2*t12011*t12055;
  t12351 = t12348 + t12349 + t12350;
  t12527 = -0.748*t12134;
  t12528 = -3.2*t12011*t12145;
  t12529 = -3.2*t12023*t12149;
  t12530 = -0.67 + t12527 + t12528 + t12529;
  t12593 = -0.768*var2[1]*t12242;
  t12594 = -0.768*var2[0]*t12229;
  t12352 = -0.768*t12051;
  t12447 = -0.768*t11997;
  t12531 = -0.768*t12149;
  t12532 = -0.2 + t12531;
  t12587 = -0.768*t12023;
  t12588 = -0.2 + t12587;
  p_output1[0]=(t12030 + t12034 - 6.4*t11950*t12036 - 6.4*t11976*t12040 + t12045 + t12049 - 6.4*t11997*t12051 - 6.4*t12017*t12055)*var2[0] + t12099*var2[1] + t12151*var2[2] + t11983*var2[3] - 0.768*t11950*var2[4] + t12025*var2[5] - 0.768*t11997*var2[6];
  p_output1[1]=t12159 + (t12030 + t12034 + t12164 + t12165)*var2[0] + t12174*var2[1] + t12193*var2[2] + t12162*var2[3];
  p_output1[2]=t12159 + (t12164 + t12165)*var2[0] + t12208*var2[1] + t12222*var2[2] + t12204*var2[3];
  p_output1[3]=t12230 + (t12045 + t12049 + t12235 + t12236)*var2[0] + t12245*var2[1] + t12275*var2[2] + t12233*var2[5];
  p_output1[4]=t12230 + (t12235 + t12236)*var2[0] + t12291*var2[1] + t12305*var2[2] + t12287*var2[5];
  p_output1[5]=-6.8*Power(t12033,2) - 3.2*Power(t12036,2) - 3.2*Power(t12040,2) - 6.8*Power(t12048,2) - 3.2*Power(t12051,2) - 3.2*Power(t12055,2) + t12063 + t12083 + t12309 + t12311;
  p_output1[6]=t12333;
  p_output1[7]=t12342;
  p_output1[8]=t12346;
  p_output1[9]=t12347;
  p_output1[10]=t12351;
  p_output1[11]=t12352;
  p_output1[12]=t12099*var2[0] + (t12030 + t12045 - 6.4*t11950*t12070 - 6.4*t11976*t12077 - 6.4*t11997*t12090 - 6.4*t12017*t12097 + t12365 + t12368)*var2[1] + t12382*var2[2] + t12357*var2[3] - 0.768*t12070*var2[4] + t12363*var2[5] - 0.768*t12090*var2[6];
  p_output1[13]=t12385 + t12174*var2[0] + (t12030 + t12365 + t12390 + t12391)*var2[1] + t12399*var2[2] + t12388*var2[3];
  p_output1[14]=t12385 + t12208*var2[0] + (t12390 + t12391)*var2[1] + t12411*var2[2] + t12404*var2[3];
  p_output1[15]=t12414 + t12245*var2[0] + (t12045 + t12368 + t12419 + t12420)*var2[1] + t12430*var2[2] + t12417*var2[5];
  p_output1[16]=t12414 + t12291*var2[0] + (t12419 + t12420)*var2[1] + t12442*var2[2] + t12435*var2[5];
  p_output1[17]=t12333;
  p_output1[18]=t12060 + t12063 + t12073 + t12075 + t12080 + t12083 + t12093 + t12095 + t12309 + t12311;
  p_output1[19]=t12151;
  p_output1[20]=t11983;
  p_output1[21]=t12446;
  p_output1[22]=t12025;
  p_output1[23]=t12447;
  p_output1[24]=t12151*var2[0] + t12382*var2[1];
  p_output1[25]=t12193*var2[0] + t12399*var2[1] + (-6.4*t12120*t12184 - 6.4*t12116*t12191)*var2[2] + t12454*var2[3] - 0.768*t12184*var2[4];
  p_output1[26]=t12222*var2[0] + t12411*var2[1] + (-6.4*t12120*t12216 - 6.4*t12116*t12220)*var2[2] + t12468*var2[3] - 0.768*t12216*var2[4];
  p_output1[27]=t12275*var2[0] + t12430*var2[1] + (-13.6*t12129*t12249 - 13.6*t12134*t12253 - 6.4*t12149*t12266 - 6.4*t12145*t12273)*var2[2] + t12481*var2[5] - 0.768*t12266*var2[6];
  p_output1[28]=t12305*var2[0] + t12442*var2[1] + (-6.4*t12149*t12299 - 6.4*t12145*t12303)*var2[2] + t12497*var2[5] - 0.768*t12299*var2[6];
  p_output1[29]=t12342;
  p_output1[30]=t12151;
  p_output1[31]=-3.3612 - 6.8*Power(t12106,2) - 3.2*Power(t12116,2) - 3.2*Power(t12120,2) - 6.8*Power(t12129,2) - 6.8*Power(t12134,2) - 3.2*Power(t12145,2) - 3.2*Power(t12149,2);
  p_output1[32]=t12524;
  p_output1[33]=t12526;
  p_output1[34]=t12530;
  p_output1[35]=t12532;
  p_output1[36]=t11983*var2[0] + t12357*var2[1];
  p_output1[37]=t12162*var2[0] + t12388*var2[1] + t12454*var2[2];
  p_output1[38]=t12204*var2[0] + t12404*var2[1] + t12468*var2[2] + (-6.4*t11981*t12198 - 6.4*t11970*t12202)*var2[3] - 0.768*t12198*var2[4];
  p_output1[39]=t12346;
  p_output1[40]=t11983;
  p_output1[41]=t12524;
  p_output1[42]=-1.58228 - 3.2*Power(t11970,2) - 3.2*Power(t11981,2);
  p_output1[43]=t12555;
  p_output1[44]=-0.768*t11950*var2[0] - 0.768*t12070*var2[1];
  p_output1[45]=t12560 + t12561 - 0.768*t12184*var2[2];
  p_output1[46]=t12560 + t12561 - 0.768*t12216*var2[2] - 0.768*t12198*var2[3];
  p_output1[47]=t12347;
  p_output1[48]=t12446;
  p_output1[49]=t12526;
  p_output1[50]=t12555;
  p_output1[51]=-1.2143199999999998;
  p_output1[52]=t12025*var2[0] + t12363*var2[1];
  p_output1[53]=t12233*var2[0] + t12417*var2[1] + t12481*var2[2];
  p_output1[54]=t12287*var2[0] + t12435*var2[1] + t12497*var2[2] + (-6.4*t12023*t12281 - 6.4*t12011*t12285)*var2[5] - 0.768*t12281*var2[6];
  p_output1[55]=t12351;
  p_output1[56]=t12025;
  p_output1[57]=t12530;
  p_output1[58]=-1.58228 - 3.2*Power(t12011,2) - 3.2*Power(t12023,2);
  p_output1[59]=t12588;
  p_output1[60]=-0.768*t11997*var2[0] - 0.768*t12090*var2[1];
  p_output1[61]=t12593 + t12594 - 0.768*t12266*var2[2];
  p_output1[62]=t12593 + t12594 - 0.768*t12299*var2[2] - 0.768*t12281*var2[5];
  p_output1[63]=t12352;
  p_output1[64]=t12447;
  p_output1[65]=t12532;
  p_output1[66]=t12588;
  p_output1[67]=-1.2143199999999998;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 68, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_MmatDx_five_link_walker.hh"

namespace LeftStance
{

void J_MmatDx_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
