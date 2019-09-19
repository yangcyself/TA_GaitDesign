/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:19 GMT-04:00
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
  double t8423;
  double t6771;
  double t7072;
  double t8709;
  double t9443;
  double t6759;
  double t7073;
  double t8772;
  double t8850;
  double t8853;
  double t9857;
  double t10055;
  double t10301;
  double t10519;
  double t10553;
  double t10692;
  double t10706;
  double t10739;
  double t10751;
  double t10752;
  double t12701;
  double t12691;
  double t12692;
  double t12730;
  double t12693;
  double t12735;
  double t12736;
  double t12738;
  double t12739;
  double t12740;
  double t12741;
  double t12755;
  double t12759;
  double t12771;
  double t12772;
  double t12773;
  double t12774;
  double t12775;
  double t12811;
  double t12812;
  double t12814;
  double t12807;
  double t12808;
  double t12810;
  double t10626;
  double t10627;
  double t10677;
  double t12816;
  double t12817;
  double t12853;
  double t12672;
  double t10942;
  double t11397;
  double t11493;
  double t12671;
  double t12676;
  double t12868;
  double t12877;
  double t12893;
  double t12894;
  double t12895;
  double t12885;
  double t12886;
  double t12892;
  double t12761;
  double t12762;
  double t12766;
  double t12897;
  double t12898;
  double t12899;
  double t12791;
  double t12784;
  double t12785;
  double t12786;
  double t12787;
  double t12795;
  double t12910;
  double t12916;
  double t12874;
  double t12875;
  double t12867;
  double t12869;
  double t12859;
  double t12862;
  double t12882;
  double t12883;
  double t12913;
  double t12914;
  double t12909;
  double t12911;
  double t12906;
  double t12907;
  double t12921;
  double t12922;
  double t12959;
  double t12960;
  double t12961;
  double t12963;
  double t12964;
  double t12965;
  double t12979;
  double t12980;
  double t12981;
  double t12983;
  double t12984;
  double t12985;
  double t10678;
  double t10924;
  double t10925;
  double t10941;
  double t10773;
  double t10824;
  double t10844;
  double t10854;
  double t12997;
  double t12998;
  double t12999;
  double t13000;
  double t13001;
  double t12815;
  double t12854;
  double t12855;
  double t12856;
  double t12876;
  double t12926;
  double t12927;
  double t12928;
  double t12929;
  double t12930;
  double t12931;
  double t13014;
  double t13015;
  double t12953;
  double t12954;
  double t12955;
  double t12956;
  double t12957;
  double t12958;
  double t12962;
  double t12966;
  double t12967;
  double t12969;
  double t12970;
  double t12971;
  double t13026;
  double t13027;
  double t13028;
  double t13002;
  double t13003;
  double t13004;
  double t13007;
  double t13008;
  double t13009;
  double t13010;
  double t13011;
  double t13012;
  double t13013;
  double t13016;
  double t13019;
  double t13020;
  double t13021;
  double t13022;
  double t13025;
  double t13030;
  double t13031;
  double t13035;
  double t13060;
  double t13061;
  double t13037;
  double t13063;
  double t13064;
  double t13039;
  double t12767;
  double t12781;
  double t12782;
  double t12783;
  double t12776;
  double t12777;
  double t12778;
  double t12779;
  double t13076;
  double t13077;
  double t13078;
  double t13079;
  double t13080;
  double t12896;
  double t12900;
  double t12901;
  double t12902;
  double t12915;
  double t12938;
  double t12939;
  double t12940;
  double t12941;
  double t12942;
  double t12943;
  double t13093;
  double t13094;
  double t12973;
  double t12974;
  double t12975;
  double t12976;
  double t12977;
  double t12978;
  double t12982;
  double t12986;
  double t12987;
  double t12989;
  double t12990;
  double t12991;
  double t13105;
  double t13106;
  double t13107;
  double t13081;
  double t13082;
  double t13083;
  double t13086;
  double t13087;
  double t13088;
  double t13089;
  double t13090;
  double t13091;
  double t13092;
  double t13095;
  double t13098;
  double t13099;
  double t13100;
  double t13101;
  double t13104;
  double t13109;
  double t13110;
  double t13114;
  double t13139;
  double t13140;
  double t13116;
  double t13142;
  double t13143;
  double t13118;
  double t12933;
  double t12935;
  double t12945;
  double t12947;
  double t13155;
  double t13156;
  double t13157;
  double t13158;
  double t13159;
  double t13160;
  double t13161;
  double t13162;
  double t13163;
  double t13165;
  double t13166;
  double t13167;
  double t13168;
  double t13169;
  double t13170;
  double t13171;
  double t13172;
  double t13173;
  double t13174;
  double t13175;
  double t13176;
  double t13177;
  double t13178;
  double t13179;
  double t13180;
  double t13181;
  double t13184;
  double t13185;
  double t13186;
  double t13187;
  double t13190;
  double t13191;
  double t13192;
  double t13193;
  double t12878;
  double t12880;
  double t12881;
  double t12917;
  double t12919;
  double t12920;
  double t12866;
  double t12870;
  double t12879;
  double t12884;
  double t12908;
  double t12912;
  double t12918;
  double t12923;
  double t12924;
  double t13212;
  double t13223;
  double t13224;
  double t13017;
  double t13243;
  double t13029;
  double t13032;
  double t13033;
  double t13036;
  double t13038;
  double t13040;
  double t13253;
  double t13254;
  double t13050;
  double t13051;
  double t13052;
  double t13046;
  double t13047;
  double t13048;
  double t13255;
  double t13258;
  double t13259;
  double t13260;
  double t13261;
  double t13056;
  double t13265;
  double t13062;
  double t13065;
  double t13066;
  double t13267;
  double t13068;
  double t13069;
  double t13070;
  double t13218;
  double t13231;
  double t13232;
  double t13096;
  double t13246;
  double t13108;
  double t13111;
  double t13112;
  double t13115;
  double t13117;
  double t13119;
  double t13286;
  double t13287;
  double t13129;
  double t13130;
  double t13131;
  double t13125;
  double t13126;
  double t13127;
  double t13288;
  double t13291;
  double t13292;
  double t13293;
  double t13294;
  double t13135;
  double t13298;
  double t13141;
  double t13144;
  double t13145;
  double t13300;
  double t13147;
  double t13148;
  double t13149;
  double t13182;
  double t10603;
  double t10868;
  double t12688;
  double t12689;
  double t12690;
  double t12760;
  double t12780;
  double t12800;
  double t12801;
  double t12806;
  double t13319;
  double t13320;
  double t13321;
  double t13322;
  double t13323;
  double t13324;
  double t13325;
  double t12952;
  double t12968;
  double t12972;
  double t12988;
  double t12992;
  double t12993;
  double t13242;
  double t13244;
  double t13245;
  double t13247;
  double t13248;
  double t13249;
  double t13034;
  double t13041;
  double t13042;
  double t13266;
  double t13268;
  double t13269;
  double t13067;
  double t13071;
  double t13072;
  double t13280;
  double t13281;
  double t13282;
  double t13113;
  double t13120;
  double t13121;
  double t13299;
  double t13301;
  double t13302;
  double t13146;
  double t13150;
  double t13151;
  double t13313;
  double t13314;
  double t13315;
  double t13197;
  double t13198;
  double t13199;
  double t13200;
  double t13201;
  double t13202;
  double t13203;
  double t13204;
  double t12994;
  double t13213;
  double t13214;
  double t13215;
  double t13005;
  double t13256;
  double t13049;
  double t13053;
  double t13054;
  double t13273;
  double t13274;
  double t13275;
  double t13207;
  double t13331;
  double t13378;
  double t13379;
  double t13380;
  double t13381;
  double t13208;
  double t13332;
  double t13219;
  double t13220;
  double t13221;
  double t13084;
  double t13289;
  double t13128;
  double t13132;
  double t13133;
  double t13306;
  double t13307;
  double t13308;
  double t13209;
  double t13333;
  double t13404;
  double t13405;
  double t13406;
  double t13407;
  double t13210;
  double t13334;
  t8423 = Cos(var1[3]);
  t6771 = Cos(var1[4]);
  t7072 = Sin(var1[3]);
  t8709 = Sin(var1[4]);
  t9443 = Cos(var1[2]);
  t6759 = Sin(var1[2]);
  t7073 = -1.*t6771*t7072;
  t8772 = -1.*t8423*t8709;
  t8850 = t7073 + t8772;
  t8853 = -1.*t6759*t8850;
  t9857 = t8423*t6771;
  t10055 = -1.*t7072*t8709;
  t10301 = t9857 + t10055;
  t10519 = -1.*t9443*t10301;
  t10553 = t8853 + t10519;
  t10692 = -1.*t6771;
  t10706 = 1. + t10692;
  t10739 = 0.4*t10706;
  t10751 = 0.64*t6771;
  t10752 = t10739 + t10751;
  t12701 = Cos(var1[5]);
  t12691 = Cos(var1[6]);
  t12692 = Sin(var1[5]);
  t12730 = Sin(var1[6]);
  t12693 = -1.*t12691*t12692;
  t12735 = -1.*t12701*t12730;
  t12736 = t12693 + t12735;
  t12738 = -1.*t6759*t12736;
  t12739 = t12701*t12691;
  t12740 = -1.*t12692*t12730;
  t12741 = t12739 + t12740;
  t12755 = -1.*t9443*t12741;
  t12759 = t12738 + t12755;
  t12771 = -1.*t12691;
  t12772 = 1. + t12771;
  t12773 = 0.4*t12772;
  t12774 = 0.64*t12691;
  t12775 = t12773 + t12774;
  t12811 = t9443*t8423;
  t12812 = -1.*t6759*t7072;
  t12814 = t12811 + t12812;
  t12807 = -1.*t8423*t6759;
  t12808 = -1.*t9443*t7072;
  t12810 = t12807 + t12808;
  t10626 = -1.*t9443*t8423;
  t10627 = t6759*t7072;
  t10677 = t10626 + t10627;
  t12816 = t8423*t6759;
  t12817 = t9443*t7072;
  t12853 = t12816 + t12817;
  t12672 = -1.*t6759*t10301;
  t10942 = t6771*t7072;
  t11397 = t8423*t8709;
  t11493 = t10942 + t11397;
  t12671 = -1.*t9443*t11493;
  t12676 = t12671 + t12672;
  t12868 = t9443*t10301;
  t12877 = t6759*t10301;
  t12893 = t9443*t12701;
  t12894 = -1.*t6759*t12692;
  t12895 = t12893 + t12894;
  t12885 = -1.*t12701*t6759;
  t12886 = -1.*t9443*t12692;
  t12892 = t12885 + t12886;
  t12761 = -1.*t9443*t12701;
  t12762 = t6759*t12692;
  t12766 = t12761 + t12762;
  t12897 = t12701*t6759;
  t12898 = t9443*t12692;
  t12899 = t12897 + t12898;
  t12791 = -1.*t6759*t12741;
  t12784 = t12691*t12692;
  t12785 = t12701*t12730;
  t12786 = t12784 + t12785;
  t12787 = -1.*t9443*t12786;
  t12795 = t12787 + t12791;
  t12910 = t9443*t12741;
  t12916 = t6759*t12741;
  t12874 = t6759*t8850;
  t12875 = t12874 + t12868;
  t12867 = -1.*t6759*t11493;
  t12869 = t12867 + t12868;
  t12859 = t9443*t8850;
  t12862 = t12859 + t12672;
  t12882 = t9443*t11493;
  t12883 = t12882 + t12877;
  t12913 = t6759*t12736;
  t12914 = t12913 + t12910;
  t12909 = -1.*t6759*t12786;
  t12911 = t12909 + t12910;
  t12906 = t9443*t12736;
  t12907 = t12906 + t12791;
  t12921 = t9443*t12786;
  t12922 = t12921 + t12916;
  t12959 = t10752*t7072;
  t12960 = 0.24*t8423*t8709;
  t12961 = t12959 + t12960;
  t12963 = t8423*t10752;
  t12964 = -0.24*t7072*t8709;
  t12965 = t12963 + t12964;
  t12979 = t12775*t12692;
  t12980 = 0.24*t12701*t12730;
  t12981 = t12979 + t12980;
  t12983 = t12701*t12775;
  t12984 = -0.24*t12692*t12730;
  t12985 = t12983 + t12984;
  t10678 = 0.748*t10677;
  t10924 = t10752*t8709;
  t10925 = -0.24*t6771*t8709;
  t10941 = t10924 + t10925;
  t10773 = t10752*t6771;
  t10824 = Power(t8709,2);
  t10844 = 0.24*t10824;
  t10854 = t10773 + t10844;
  t12997 = -1.*t8423*t6771;
  t12998 = t7072*t8709;
  t12999 = t12997 + t12998;
  t13000 = t9443*t12999;
  t13001 = t8853 + t13000;
  t12815 = 20.4*t12810*t12814;
  t12854 = 6.8*t12853*t12814;
  t12855 = 20.4*t12810*t10677;
  t12856 = 6.8*t12853*t10677;
  t12876 = -1.*t9443*t8850;
  t12926 = Power(t12810,2);
  t12927 = 13.6*t12926;
  t12928 = 13.6*t12810*t12853;
  t12929 = Power(t12814,2);
  t12930 = 13.6*t12929;
  t12931 = 13.6*t12814*t10677;
  t13014 = t6759*t12999;
  t13015 = t12859 + t13014;
  t12953 = Power(t8423,2);
  t12954 = 0.11*t12953;
  t12955 = Power(t7072,2);
  t12956 = 0.11*t12955;
  t12957 = t12954 + t12956;
  t12958 = 6.8*t10677*t12957;
  t12962 = -1.*t12961*t10301;
  t12966 = -1.*t8850*t12965;
  t12967 = t12962 + t12966;
  t12969 = t12961*t11493;
  t12970 = t10301*t12965;
  t12971 = t12969 + t12970;
  t13026 = -1.*t10752*t7072;
  t13027 = -0.24*t8423*t8709;
  t13028 = t13026 + t13027;
  t13002 = -0.384*var2[4]*t13001;
  t13003 = 3.2*t10941*t12862;
  t13004 = 3.2*t10854*t13001;
  t13007 = 6.4*t12869*t12862;
  t13008 = 3.2*t12875*t12676;
  t13009 = 3.2*t10553*t12883;
  t13010 = 6.4*t12862*t13001;
  t13011 = -1.*t6759*t12999;
  t13012 = t12876 + t13011;
  t13013 = 3.2*t12875*t13012;
  t13016 = 3.2*t10553*t13015;
  t13019 = 6.4*t12875*t12869;
  t13020 = 6.4*t12862*t12883;
  t13021 = 6.4*t12875*t13001;
  t13022 = 6.4*t12862*t13015;
  t13025 = 3.2*t12862*t12967;
  t13030 = t12961*t10301;
  t13031 = t8850*t12965;
  t13035 = 3.2*t12971*t13001;
  t13060 = -0.24*t6771*t7072;
  t13061 = t13060 + t13027;
  t13037 = -1.*t8850*t12961;
  t13063 = 0.24*t8423*t6771;
  t13064 = t13063 + t12964;
  t13039 = -1.*t12965*t12999;
  t12767 = 0.748*t12766;
  t12781 = t12775*t12730;
  t12782 = -0.24*t12691*t12730;
  t12783 = t12781 + t12782;
  t12776 = t12775*t12691;
  t12777 = Power(t12730,2);
  t12778 = 0.24*t12777;
  t12779 = t12776 + t12778;
  t13076 = -1.*t12701*t12691;
  t13077 = t12692*t12730;
  t13078 = t13076 + t13077;
  t13079 = t9443*t13078;
  t13080 = t12738 + t13079;
  t12896 = 20.4*t12892*t12895;
  t12900 = 6.8*t12899*t12895;
  t12901 = 20.4*t12892*t12766;
  t12902 = 6.8*t12899*t12766;
  t12915 = -1.*t9443*t12736;
  t12938 = Power(t12892,2);
  t12939 = 13.6*t12938;
  t12940 = 13.6*t12892*t12899;
  t12941 = Power(t12895,2);
  t12942 = 13.6*t12941;
  t12943 = 13.6*t12895*t12766;
  t13093 = t6759*t13078;
  t13094 = t12906 + t13093;
  t12973 = Power(t12701,2);
  t12974 = 0.11*t12973;
  t12975 = Power(t12692,2);
  t12976 = 0.11*t12975;
  t12977 = t12974 + t12976;
  t12978 = 6.8*t12766*t12977;
  t12982 = -1.*t12981*t12741;
  t12986 = -1.*t12736*t12985;
  t12987 = t12982 + t12986;
  t12989 = t12981*t12786;
  t12990 = t12741*t12985;
  t12991 = t12989 + t12990;
  t13105 = -1.*t12775*t12692;
  t13106 = -0.24*t12701*t12730;
  t13107 = t13105 + t13106;
  t13081 = -0.384*var2[6]*t13080;
  t13082 = 3.2*t12783*t12907;
  t13083 = 3.2*t12779*t13080;
  t13086 = 6.4*t12911*t12907;
  t13087 = 3.2*t12914*t12795;
  t13088 = 3.2*t12759*t12922;
  t13089 = 6.4*t12907*t13080;
  t13090 = -1.*t6759*t13078;
  t13091 = t12915 + t13090;
  t13092 = 3.2*t12914*t13091;
  t13095 = 3.2*t12759*t13094;
  t13098 = 6.4*t12914*t12911;
  t13099 = 6.4*t12907*t12922;
  t13100 = 6.4*t12914*t13080;
  t13101 = 6.4*t12907*t13094;
  t13104 = 3.2*t12907*t12987;
  t13109 = t12981*t12741;
  t13110 = t12736*t12985;
  t13114 = 3.2*t12991*t13080;
  t13139 = -0.24*t12691*t12692;
  t13140 = t13139 + t13106;
  t13116 = -1.*t12736*t12981;
  t13142 = 0.24*t12701*t12691;
  t13143 = t13142 + t12984;
  t13118 = -1.*t12985*t13078;
  t12933 = Power(t12869,2);
  t12935 = Power(t12862,2);
  t12945 = Power(t12911,2);
  t12947 = Power(t12907,2);
  t13155 = 13.6*t12810*t12814;
  t13156 = 13.6*t12853*t12814;
  t13157 = 6.4*t12875*t12862;
  t13158 = 6.4*t12869*t12883;
  t13159 = 13.6*t12892*t12895;
  t13160 = 13.6*t12899*t12895;
  t13161 = 6.4*t12914*t12907;
  t13162 = 6.4*t12911*t12922;
  t13163 = t13155 + t13156 + t13157 + t13158 + t13159 + t13160 + t13161 + t13162;
  t13165 = 6.8*t12926;
  t13166 = 6.8*t12810*t12853;
  t13167 = 6.8*t12929;
  t13168 = 6.8*t12814*t10677;
  t13169 = 3.2*t10553*t12875;
  t13170 = 3.2*t12933;
  t13171 = 3.2*t12935;
  t13172 = 3.2*t12676*t12883;
  t13173 = 6.8*t12938;
  t13174 = 6.8*t12892*t12899;
  t13175 = 6.8*t12941;
  t13176 = 6.8*t12895*t12766;
  t13177 = 3.2*t12759*t12914;
  t13178 = 3.2*t12945;
  t13179 = 3.2*t12947;
  t13180 = 3.2*t12795*t12922;
  t13181 = t13165 + t13166 + t13167 + t13168 + t13169 + t13170 + t13171 + t13172 + t13173 + t13174 + t13175 + t13176 + t13177 + t13178 + t13179 + t13180;
  t13184 = 0.748*t12810;
  t13185 = 3.2*t10941*t12869;
  t13186 = 3.2*t10854*t12862;
  t13187 = t13184 + t13185 + t13186;
  t13190 = 0.748*t12892;
  t13191 = 3.2*t12783*t12911;
  t13192 = 3.2*t12779*t12907;
  t13193 = t13190 + t13191 + t13192;
  t12878 = t12876 + t12877;
  t12880 = t6759*t11493;
  t12881 = t12880 + t10519;
  t12917 = t12915 + t12916;
  t12919 = t6759*t12786;
  t12920 = t12919 + t12755;
  t12866 = 9.6*t10553*t12862;
  t12870 = 9.6*t12869*t12676;
  t12879 = 3.2*t12875*t12878;
  t12884 = 3.2*t12881*t12883;
  t12908 = 9.6*t12759*t12907;
  t12912 = 9.6*t12911*t12795;
  t12918 = 3.2*t12914*t12917;
  t12923 = 3.2*t12920*t12922;
  t12924 = t12815 + t12854 + t12855 + t12856 + t12866 + t12870 + t12879 + t12884 + t12896 + t12900 + t12901 + t12902 + t12908 + t12912 + t12918 + t12923;
  t13212 = 0.748*t12853;
  t13223 = Power(t10677,2);
  t13224 = 13.6*t13223;
  t13017 = t12815 + t12854 + t12855 + t12856 + t13007 + t13008 + t13009 + t13010 + t13013 + t13016;
  t13243 = 6.8*t12853*t12957;
  t13029 = t13028*t10301;
  t13032 = t11493*t12965;
  t13033 = t13029 + t13030 + t13031 + t13032;
  t13036 = -1.*t8850*t13028;
  t13038 = -1.*t10301*t12965;
  t13040 = t13036 + t13037 + t13038 + t13039;
  t13253 = -0.384*var2[4]*t13012;
  t13254 = 3.2*t10941*t10553;
  t13050 = -1.*t10752*t8709;
  t13051 = 0.24*t6771*t8709;
  t13052 = t13050 + t13051;
  t13046 = Power(t6771,2);
  t13047 = -0.24*t13046;
  t13048 = t10773 + t13047;
  t13255 = 3.2*t10854*t13012;
  t13258 = 6.4*t10553*t12869;
  t13259 = 6.4*t12862*t12676;
  t13260 = 6.4*t10553*t13001;
  t13261 = 6.4*t12862*t13012;
  t13056 = t13007 + t13008 + t13009 + t13010 + t13013 + t13016;
  t13265 = 3.2*t10553*t12967;
  t13062 = t13061*t10301;
  t13065 = t11493*t13064;
  t13066 = t13062 + t13030 + t13031 + t13065;
  t13267 = 3.2*t12971*t13012;
  t13068 = -1.*t8850*t13061;
  t13069 = -1.*t10301*t13064;
  t13070 = t13068 + t13037 + t13069 + t13039;
  t13218 = 0.748*t12899;
  t13231 = Power(t12766,2);
  t13232 = 13.6*t13231;
  t13096 = t12896 + t12900 + t12901 + t12902 + t13086 + t13087 + t13088 + t13089 + t13092 + t13095;
  t13246 = 6.8*t12899*t12977;
  t13108 = t13107*t12741;
  t13111 = t12786*t12985;
  t13112 = t13108 + t13109 + t13110 + t13111;
  t13115 = -1.*t12736*t13107;
  t13117 = -1.*t12741*t12985;
  t13119 = t13115 + t13116 + t13117 + t13118;
  t13286 = -0.384*var2[6]*t13091;
  t13287 = 3.2*t12783*t12759;
  t13129 = -1.*t12775*t12730;
  t13130 = 0.24*t12691*t12730;
  t13131 = t13129 + t13130;
  t13125 = Power(t12691,2);
  t13126 = -0.24*t13125;
  t13127 = t12776 + t13126;
  t13288 = 3.2*t12779*t13091;
  t13291 = 6.4*t12759*t12911;
  t13292 = 6.4*t12907*t12795;
  t13293 = 6.4*t12759*t13080;
  t13294 = 6.4*t12907*t13091;
  t13135 = t13086 + t13087 + t13088 + t13089 + t13092 + t13095;
  t13298 = 3.2*t12759*t12987;
  t13141 = t13140*t12741;
  t13144 = t12786*t13143;
  t13145 = t13141 + t13109 + t13110 + t13144;
  t13300 = 3.2*t12991*t13091;
  t13147 = -1.*t12736*t13140;
  t13148 = -1.*t12741*t13143;
  t13149 = t13147 + t13116 + t13148 + t13118;
  t13182 = -0.5*var2[2]*t13181;
  t10603 = -0.384*var2[4]*t10553;
  t10868 = 3.2*t10854*t10553;
  t12688 = 3.2*t10941*t12676;
  t12689 = t10678 + t10868 + t12688;
  t12690 = -0.5*var2[3]*t12689;
  t12760 = -0.384*var2[6]*t12759;
  t12780 = 3.2*t12779*t12759;
  t12800 = 3.2*t12783*t12795;
  t12801 = t12767 + t12780 + t12800;
  t12806 = -0.5*var2[5]*t12801;
  t13319 = 13.6*t12810*t10677;
  t13320 = 6.4*t10553*t12862;
  t13321 = 6.4*t12869*t12676;
  t13322 = 13.6*t12892*t12766;
  t13323 = 6.4*t12759*t12907;
  t13324 = 6.4*t12911*t12795;
  t13325 = t13155 + t13319 + t13320 + t13321 + t13159 + t13322 + t13323 + t13324;
  t12952 = -2.88*t9443;
  t12968 = 3.2*t12676*t12967;
  t12972 = 3.2*t10553*t12971;
  t12988 = 3.2*t12795*t12987;
  t12992 = 3.2*t12759*t12991;
  t12993 = t12952 + t12958 + t12968 + t12972 + t12978 + t12988 + t12992;
  t13242 = 2.88*t6759;
  t13244 = 3.2*t12881*t12967;
  t13245 = 3.2*t12878*t12971;
  t13247 = 3.2*t12920*t12987;
  t13248 = 3.2*t12917*t12991;
  t13249 = t13242 + t13243 + t13244 + t13245 + t13246 + t13247 + t13248;
  t13034 = 3.2*t12862*t13033;
  t13041 = 3.2*t12869*t13040;
  t13042 = t12958 + t13025 + t13034 + t13035 + t13041;
  t13266 = 3.2*t10553*t13033;
  t13268 = 3.2*t12676*t13040;
  t13269 = t13243 + t13265 + t13266 + t13267 + t13268;
  t13067 = 3.2*t12862*t13066;
  t13071 = 3.2*t12869*t13070;
  t13072 = t13025 + t13067 + t13035 + t13071;
  t13280 = 3.2*t10553*t13066;
  t13281 = 3.2*t12676*t13070;
  t13282 = t13265 + t13280 + t13267 + t13281;
  t13113 = 3.2*t12907*t13112;
  t13120 = 3.2*t12911*t13119;
  t13121 = t12978 + t13104 + t13113 + t13114 + t13120;
  t13299 = 3.2*t12759*t13112;
  t13301 = 3.2*t12795*t13119;
  t13302 = t13246 + t13298 + t13299 + t13300 + t13301;
  t13146 = 3.2*t12907*t13145;
  t13150 = 3.2*t12911*t13149;
  t13151 = t13104 + t13146 + t13114 + t13150;
  t13313 = 3.2*t12759*t13145;
  t13314 = 3.2*t12795*t13149;
  t13315 = t13298 + t13313 + t13300 + t13314;
  t13197 = -2.88*t6759;
  t13198 = 6.8*t12810*t12957;
  t13199 = 3.2*t12869*t12967;
  t13200 = 3.2*t12862*t12971;
  t13201 = 6.8*t12892*t12977;
  t13202 = 3.2*t12911*t12987;
  t13203 = 3.2*t12907*t12991;
  t13204 = t13197 + t13198 + t13199 + t13200 + t13201 + t13202 + t13203;
  t12994 = -0.5*var2[2]*t12993;
  t13213 = 3.2*t10941*t12881;
  t13214 = 3.2*t10854*t12878;
  t13215 = t13212 + t13213 + t13214;
  t13005 = t10678 + t13003 + t13004;
  t13256 = t13212 + t13254 + t13255;
  t13049 = 3.2*t13048*t12869;
  t13053 = 3.2*t13052*t12862;
  t13054 = t13049 + t13003 + t13053 + t13004;
  t13273 = 3.2*t13052*t10553;
  t13274 = 3.2*t13048*t12676;
  t13275 = t13254 + t13273 + t13274 + t13255;
  t13207 = -0.5*var2[2]*t13187;
  t13331 = -0.5*var2[2]*t12689;
  t13378 = -0.384*var2[0]*t13001;
  t13379 = -0.384*var2[1]*t13012;
  t13380 = t13378 + t13379;
  t13381 = var2[2]*t13380;
  t13208 = -0.384*var2[2]*t12862;
  t13332 = -0.384*var2[2]*t10553;
  t13219 = 3.2*t12783*t12920;
  t13220 = 3.2*t12779*t12917;
  t13221 = t13218 + t13219 + t13220;
  t13084 = t12767 + t13082 + t13083;
  t13289 = t13218 + t13287 + t13288;
  t13128 = 3.2*t13127*t12911;
  t13132 = 3.2*t13131*t12907;
  t13133 = t13128 + t13082 + t13132 + t13083;
  t13306 = 3.2*t13131*t12759;
  t13307 = 3.2*t13127*t12795;
  t13308 = t13287 + t13306 + t13307 + t13288;
  t13209 = -0.5*var2[2]*t13193;
  t13333 = -0.5*var2[2]*t12801;
  t13404 = -0.384*var2[0]*t13080;
  t13405 = -0.384*var2[1]*t13091;
  t13406 = t13404 + t13405;
  t13407 = var2[2]*t13406;
  t13210 = -0.384*var2[2]*t12907;
  t13334 = -0.384*var2[2]*t12759;
  p_output1[0]=(t10603 + t12690 + t12760 + t12806 + t12994 - 0.5*(6.4*t10553*t12875 + 6.4*t12676*t12883 + 6.4*t12759*t12914 + 6.4*t12795*t12922 + t12927 + t12928 + t12930 + t12931 + 6.4*t12933 + 6.4*t12935 + t12939 + t12940 + t12942 + t12943 + 6.4*t12945 + 6.4*t12947)*var2[0] - 0.5*t12924*var2[1])*var2[2];
  p_output1[1]=var2[2]*(t13002 - 0.5*(t12927 + t12928 + t12930 + t12931 + t13019 + t13020 + t13021 + t13022)*var2[0] - 0.5*t13017*var2[1] - 0.5*t13042*var2[2] - 0.5*t13005*var2[3]);
  p_output1[2]=var2[2]*(t13002 - 0.5*(t13019 + t13020 + t13021 + t13022)*var2[0] - 0.5*t13056*var2[1] - 0.5*t13072*var2[2] - 0.5*t13054*var2[3]);
  p_output1[3]=var2[2]*(t13081 - 0.5*(t12939 + t12940 + t12942 + t12943 + t13098 + t13099 + t13100 + t13101)*var2[0] - 0.5*t13096*var2[1] - 0.5*t13121*var2[2] - 0.5*t13084*var2[5]);
  p_output1[4]=var2[2]*(t13081 - 0.5*(t13098 + t13099 + t13100 + t13101)*var2[0] - 0.5*t13135*var2[1] - 0.5*t13151*var2[2] - 0.5*t13133*var2[5]);
  p_output1[5]=-0.5*t13163*var2[2];
  p_output1[6]=t13182;
  p_output1[7]=-0.5*t13163*var2[0] - 0.5*t13181*var2[1] - 1.*t13204*var2[2] - 0.5*t13187*var2[3] - 0.384*t12862*var2[4] - 0.5*t13193*var2[5] - 0.384*t12907*var2[6];
  p_output1[8]=t13207;
  p_output1[9]=t13208;
  p_output1[10]=t13209;
  p_output1[11]=t13210;
  p_output1[12]=var2[2]*(-0.5*t12924*var2[0] - 0.5*(6.4*Power(t10553,2) + 6.4*Power(t12676,2) + 6.4*Power(t12759,2) + 6.4*Power(t12795,2) + 6.4*t12862*t12878 + 6.4*t12869*t12881 + 6.4*t12907*t12917 + 6.4*t12911*t12920 + t12927 + t12928 + t12931 + t12939 + t12940 + t12943 + t13224 + t13232)*var2[1] - 0.5*t13249*var2[2] - 0.5*t13215*var2[3] - 0.384*t12878*var2[4] - 0.5*t13221*var2[5] - 0.384*t12917*var2[6]);
  p_output1[13]=var2[2]*(t13253 - 0.5*t13017*var2[0] - 0.5*(t12927 + t12928 + t12931 + t13224 + t13258 + t13259 + t13260 + t13261)*var2[1] - 0.5*t13269*var2[2] - 0.5*t13256*var2[3]);
  p_output1[14]=var2[2]*(t13253 - 0.5*t13056*var2[0] - 0.5*(t13258 + t13259 + t13260 + t13261)*var2[1] - 0.5*t13282*var2[2] - 0.5*t13275*var2[3]);
  p_output1[15]=var2[2]*(t13286 - 0.5*t13096*var2[0] - 0.5*(t12939 + t12940 + t12943 + t13232 + t13291 + t13292 + t13293 + t13294)*var2[1] - 0.5*t13302*var2[2] - 0.5*t13289*var2[5]);
  p_output1[16]=var2[2]*(t13286 - 0.5*t13135*var2[0] - 0.5*(t13291 + t13292 + t13293 + t13294)*var2[1] - 0.5*t13315*var2[2] - 0.5*t13308*var2[5]);
  p_output1[17]=t13182;
  p_output1[18]=-0.5*t13325*var2[2];
  p_output1[19]=t10603 + t12690 + t12760 + t12806 - 0.5*t13181*var2[0] - 0.5*t13325*var2[1] - 1.*t12993*var2[2];
  p_output1[20]=t13331;
  p_output1[21]=t13332;
  p_output1[22]=t13333;
  p_output1[23]=t13334;
  p_output1[24]=(-0.5*t12993*var2[0] - 0.5*t13249*var2[1])*var2[2];
  p_output1[25]=(-0.5*t13042*var2[0] - 0.5*t13269*var2[1])*var2[2];
  p_output1[26]=(-0.5*t13072*var2[0] - 0.5*t13282*var2[1])*var2[2];
  p_output1[27]=(-0.5*t13121*var2[0] - 0.5*t13302*var2[1])*var2[2];
  p_output1[28]=(-0.5*t13151*var2[0] - 0.5*t13315*var2[1])*var2[2];
  p_output1[29]=-0.5*t13204*var2[2];
  p_output1[30]=t12994;
  p_output1[31]=-0.5*t13204*var2[0] - 0.5*t12993*var2[1];
  p_output1[32]=(-0.5*t12689*var2[0] - 0.5*t13215*var2[1])*var2[2];
  p_output1[33]=(-0.5*t13005*var2[0] - 0.5*t13256*var2[1])*var2[2];
  p_output1[34]=(-0.5*t13054*var2[0] - 0.5*t13275*var2[1])*var2[2];
  p_output1[35]=t13207;
  p_output1[36]=t13331;
  p_output1[37]=-0.5*t13187*var2[0] - 0.5*t12689*var2[1];
  p_output1[38]=(-0.384*t10553*var2[0] - 0.384*t12878*var2[1])*var2[2];
  p_output1[39]=t13381;
  p_output1[40]=t13381;
  p_output1[41]=t13208;
  p_output1[42]=t13332;
  p_output1[43]=-0.384*t12862*var2[0] - 0.384*t10553*var2[1];
  p_output1[44]=(-0.5*t12801*var2[0] - 0.5*t13221*var2[1])*var2[2];
  p_output1[45]=(-0.5*t13084*var2[0] - 0.5*t13289*var2[1])*var2[2];
  p_output1[46]=(-0.5*t13133*var2[0] - 0.5*t13308*var2[1])*var2[2];
  p_output1[47]=t13209;
  p_output1[48]=t13333;
  p_output1[49]=-0.5*t13193*var2[0] - 0.5*t12801*var2[1];
  p_output1[50]=(-0.384*t12759*var2[0] - 0.384*t12917*var2[1])*var2[2];
  p_output1[51]=t13407;
  p_output1[52]=t13407;
  p_output1[53]=t13210;
  p_output1[54]=t13334;
  p_output1[55]=-0.384*t12907*var2[0] - 0.384*t12759*var2[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 56, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec3_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_Ce2_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE