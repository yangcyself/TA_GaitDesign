/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:57:00 GMT-08:00
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
  double t2714;
  double t1157;
  double t1864;
  double t3182;
  double t357;
  double t6479;
  double t6644;
  double t6646;
  double t6647;
  double t6648;
  double t6656;
  double t1927;
  double t6304;
  double t6424;
  double t6702;
  double t6704;
  double t6710;
  double t6731;
  double t6733;
  double t6734;
  double t6620;
  double t6657;
  double t6477;
  double t6481;
  double t6483;
  double t6529;
  double t6597;
  double t6606;
  double t6660;
  double t6662;
  double t6668;
  double t6698;
  double t6711;
  double t6712;
  double t6773;
  double t6774;
  double t6779;
  double t6780;
  double t6784;
  double t6787;
  double t6788;
  double t6809;
  double t6810;
  double t6843;
  double t6855;
  double t6867;
  double t6868;
  double t6875;
  double t6870;
  double t6871;
  double t6873;
  double t6874;
  double t6876;
  double t6883;
  double t6884;
  double t6887;
  double t6890;
  double t6891;
  double t6624;
  double t6643;
  double t6659;
  double t6751;
  double t6753;
  double t6754;
  double t6921;
  double t6922;
  double t6718;
  double t6719;
  double t6724;
  double t6725;
  double t6736;
  double t6738;
  double t6739;
  double t6740;
  double t6806;
  double t6897;
  double t6898;
  double t6900;
  double t6869;
  double t6877;
  double t6878;
  double t6888;
  double t6889;
  double t6893;
  double t6894;
  double t6895;
  double t6961;
  double t6963;
  double t6955;
  double t6956;
  double t6957;
  double t6904;
  double t6911;
  double t6912;
  double t6914;
  double t6915;
  double t6972;
  double t6973;
  double t6974;
  double t6923;
  double t6925;
  double t6927;
  double t6931;
  double t6932;
  double t6933;
  double t6934;
  double t6935;
  double t6936;
  double t6938;
  double t6939;
  double t6940;
  double t6941;
  double t6943;
  double t6944;
  double t6945;
  double t6946;
  double t6948;
  double t6949;
  double t6950;
  double t6951;
  double t6952;
  double t6968;
  double t6970;
  double t6976;
  double t6981;
  double t6994;
  double t6995;
  double t6998;
  double t6999;
  double t7055;
  double t7056;
  double t7058;
  double t7060;
  double t7061;
  double t7034;
  double t7035;
  double t7036;
  double t7040;
  double t7042;
  double t7043;
  double t7044;
  double t7046;
  double t7048;
  double t7049;
  double t7050;
  double t7051;
  double t7052;
  double t6805;
  double t6807;
  double t6775;
  double t6776;
  double t6766;
  double t6778;
  double t6791;
  double t6799;
  double t6808;
  double t6812;
  double t6813;
  double t6958;
  double t6964;
  double t6965;
  double t6969;
  double t6971;
  double t6977;
  double t6979;
  double t6982;
  double t6986;
  double t6987;
  double t6988;
  double t6991;
  double t6993;
  double t6996;
  double t6997;
  double t7000;
  double t7112;
  double t7006;
  double t7007;
  double t7009;
  double t7010;
  double t7115;
  double t7125;
  double t7143;
  double t7153;
  double t7154;
  double t7174;
  double t7175;
  double t7176;
  double t7177;
  double t7178;
  double t7180;
  double t7182;
  double t7186;
  double t7018;
  double t7019;
  double t7020;
  double t7024;
  double t7025;
  double t7027;
  double t7047;
  double t6880;
  double t6896;
  double t6903;
  double t6916;
  double t6917;
  double t6717;
  double t6735;
  double t6750;
  double t6756;
  double t6757;
  double t6762;
  double t7222;
  double t6918;
  double t7102;
  double t7103;
  double t7104;
  double t7105;
  double t7106;
  double t6953;
  double t6967;
  double t6983;
  double t6985;
  double t6990;
  double t7001;
  double t7002;
  double t7183;
  double t7185;
  double t7187;
  double t7189;
  double t7190;
  double t7191;
  double t7192;
  double t7017;
  double t7022;
  double t7023;
  double t7028;
  double t7029;
  double t7204;
  double t7207;
  double t7208;
  double t7215;
  double t7216;
  double t7053;
  double t7224;
  double t9056;
  double t9068;
  double t9069;
  double t9205;
  double t9232;
  double t7410;
  double t8929;
  double t9050;
  double t7076;
  double t7077;
  double t7078;
  double t7091;
  double t7092;
  double t7113;
  double t7114;
  double t7133;
  double t6924;
  double t6926;
  double t6928;
  double t7321;
  double t7322;
  double t7323;
  double t7324;
  double t7326;
  double t7196;
  double t7198;
  double t7200;
  double t7201;
  double t7202;
  double t7011;
  double t7012;
  double t7013;
  double t7014;
  double t7015;
  double t7342;
  double t7344;
  double t7346;
  double t7347;
  double t7348;
  double t7349;
  double t7350;
  double t7062;
  double t7255;
  double t9353;
  double t14787;
  double t14788;
  double t14789;
  double t14874;
  double t14875;
  double t6618;
  t2714 = Cos(var1[5]);
  t1157 = Cos(var1[6]);
  t1864 = Sin(var1[5]);
  t3182 = Sin(var1[6]);
  t357 = Sin(var1[2]);
  t6479 = Cos(var1[2]);
  t6644 = -1.*t1157;
  t6646 = 1. + t6644;
  t6647 = 1.03*t6646;
  t6648 = 1.27*t1157;
  t6656 = t6647 + t6648;
  t1927 = -1.*t1157*t1864;
  t6304 = -1.*t2714*t3182;
  t6424 = t1927 + t6304;
  t6702 = t2714*t1157;
  t6704 = -1.*t1864*t3182;
  t6710 = t6702 + t6704;
  t6731 = t6479*t6424;
  t6733 = -1.*t357*t6710;
  t6734 = t6731 + t6733;
  t6620 = -0.63*t1157;
  t6657 = t1157*t6656;
  t6477 = -1.*t357*t6424;
  t6481 = -1.*t2714*t1157;
  t6483 = t1864*t3182;
  t6529 = t6481 + t6483;
  t6597 = t6479*t6529;
  t6606 = t6477 + t6597;
  t6660 = t1157*t1864;
  t6662 = t2714*t3182;
  t6668 = t6660 + t6662;
  t6698 = -1.*t357*t6668;
  t6711 = t6479*t6710;
  t6712 = t6698 + t6711;
  t6773 = t357*t6424;
  t6774 = t6773 + t6711;
  t6779 = -1.*t6479*t6710;
  t6780 = t6477 + t6779;
  t6784 = t6479*t6668;
  t6787 = t357*t6710;
  t6788 = t6784 + t6787;
  t6809 = t357*t6529;
  t6810 = t6731 + t6809;
  t6843 = -0.63*t1864;
  t6855 = t6656*t1864;
  t6867 = 0.24*t2714*t3182;
  t6868 = t6843 + t6855 + t6867;
  t6875 = -0.24*t1864*t3182;
  t6870 = -1.*t2714;
  t6871 = 1. + t6870;
  t6873 = 0.63*t6871;
  t6874 = t2714*t6656;
  t6876 = t6873 + t6874 + t6875;
  t6883 = -0.24*t1157*t1864;
  t6884 = -0.24*t2714*t3182;
  t6887 = t6883 + t6884;
  t6890 = 0.24*t2714*t1157;
  t6891 = t6890 + t6875;
  t6624 = Power(t1157,2);
  t6643 = -0.24*t6624;
  t6659 = t6620 + t6643 + t6657;
  t6751 = Power(t3182,2);
  t6753 = 0.24*t6751;
  t6754 = t6620 + t6657 + t6753;
  t6921 = t357*t6668;
  t6922 = t6921 + t6597;
  t6718 = 0.63*t3182;
  t6719 = 0.24*t1157*t3182;
  t6724 = -1.*t6656*t3182;
  t6725 = t6718 + t6719 + t6724;
  t6736 = -0.63*t3182;
  t6738 = -0.24*t1157*t3182;
  t6739 = t6656*t3182;
  t6740 = t6736 + t6738 + t6739;
  t6806 = -1.*t357*t6529;
  t6897 = t6868*t6668;
  t6898 = t6710*t6876;
  t6900 = t6897 + t6898;
  t6869 = -1.*t6868*t6710;
  t6877 = -1.*t6424*t6876;
  t6878 = t6869 + t6877;
  t6888 = t6887*t6710;
  t6889 = t6868*t6710;
  t6893 = t6668*t6891;
  t6894 = t6424*t6876;
  t6895 = t6888 + t6889 + t6893 + t6894;
  t6961 = -0.63*t2714;
  t6963 = t6961 + t6874 + t6875;
  t6955 = 0.63*t1864;
  t6956 = -1.*t6656*t1864;
  t6957 = t6955 + t6956 + t6884;
  t6904 = -1.*t6424*t6887;
  t6911 = -1.*t6424*t6868;
  t6912 = -1.*t6710*t6891;
  t6914 = -1.*t6876*t6529;
  t6915 = t6904 + t6911 + t6912 + t6914;
  t6972 = -0.24*t2714*t1157;
  t6973 = 0.24*t1864*t3182;
  t6974 = t6972 + t6973;
  t6923 = -0.384*var2[6]*t6922;
  t6925 = 3.2*t6754*t6922;
  t6927 = 3.2*t6740*t6810;
  t6931 = 6.4*t6774*t6734;
  t6932 = 3.2*t6788*t6606;
  t6933 = 3.2*t6734*t6922;
  t6934 = t6784 + t6806;
  t6935 = 3.2*t6774*t6934;
  t6936 = 3.2*t6712*t6810;
  t6938 = 6.4*t6606*t6810;
  t6939 = t6931 + t6932 + t6933 + t6935 + t6936 + t6938;
  t6940 = -0.5*var2[1]*t6939;
  t6941 = Power(t6774,2);
  t6943 = 6.4*t6941;
  t6944 = 6.4*t6774*t6922;
  t6945 = 6.4*t6788*t6810;
  t6946 = Power(t6810,2);
  t6948 = 6.4*t6946;
  t6949 = t6943 + t6944 + t6945 + t6948;
  t6950 = -0.5*var2[0]*t6949;
  t6951 = 3.2*t6900*t6922;
  t6952 = 3.2*t6878*t6810;
  t6968 = -1.*t6887*t6710;
  t6970 = -1.*t6668*t6876;
  t6976 = -1.*t6424*t6974;
  t6981 = -1.*t6868*t6529;
  t6994 = t6424*t6868;
  t6995 = t6887*t6668;
  t6998 = t6710*t6974;
  t6999 = t6876*t6529;
  t7055 = 3.2*t6725*t6774;
  t7056 = 3.2*t6740*t6774;
  t7058 = 3.2*t6659*t6788;
  t7060 = 3.2*t6754*t6810;
  t7061 = t7055 + t7056 + t7058 + t7060;
  t7034 = 6.4*t6774*t6788;
  t7035 = 6.4*t6774*t6810;
  t7036 = t7034 + t7035;
  t7040 = 3.2*t6774*t6712;
  t7042 = 3.2*t6734*t6788;
  t7043 = 3.2*t6774*t6606;
  t7044 = 3.2*t6734*t6810;
  t7046 = t7040 + t7042 + t7043 + t7044;
  t7048 = 3.2*t6774*t6878;
  t7049 = 3.2*t6774*t6895;
  t7050 = 3.2*t6900*t6810;
  t7051 = 3.2*t6788*t6915;
  t7052 = t7048 + t7049 + t7050 + t7051;
  t6805 = -1.*t6479*t6424;
  t6807 = t6805 + t6806;
  t6775 = -1.*t6479*t6668;
  t6776 = t6775 + t6733;
  t6766 = 6.4*t6712*t6734;
  t6778 = 3.2*t6774*t6776;
  t6791 = 3.2*t6780*t6788;
  t6799 = 6.4*t6734*t6606;
  t6808 = 3.2*t6774*t6807;
  t6812 = 3.2*t6780*t6810;
  t6813 = t6766 + t6778 + t6791 + t6799 + t6808 + t6812;
  t6958 = t6957*t6710;
  t6964 = t6668*t6963;
  t6965 = t6958 + t6889 + t6894 + t6964;
  t6969 = -1.*t6424*t6891;
  t6971 = -1.*t6424*t6963;
  t6977 = -1.*t6887*t6529;
  t6979 = -1.*t6957*t6529;
  t6982 = t6968 + t6969 + t6970 + t6971 + t6976 + t6977 + t6979 + t6981;
  t6986 = -1.*t6424*t6957;
  t6987 = -1.*t6710*t6963;
  t6988 = t6986 + t6911 + t6987 + t6914;
  t6991 = t6424*t6887;
  t6993 = t6424*t6957;
  t6996 = t6710*t6891;
  t6997 = t6710*t6963;
  t7000 = t6991 + t6993 + t6994 + t6995 + t6996 + t6997 + t6998 + t6999;
  t7112 = -0.384*var2[6]*t6934;
  t7006 = 0.63*t1157;
  t7007 = 0.24*t6624;
  t7009 = -1.*t1157*t6656;
  t7010 = t7006 + t7007 + t7009;
  t7115 = 3.2*t6740*t6606;
  t7125 = 3.2*t6754*t6934;
  t7143 = Power(t6734,2);
  t7153 = 6.4*t7143;
  t7154 = 6.4*t6712*t6606;
  t7174 = Power(t6606,2);
  t7175 = 6.4*t7174;
  t7176 = 6.4*t6734*t6934;
  t7177 = t7153 + t7154 + t7175 + t7176;
  t7178 = -0.5*var2[1]*t7177;
  t7180 = -0.5*var2[0]*t6939;
  t7182 = 3.2*t6878*t6606;
  t7186 = 3.2*t6900*t6934;
  t7018 = -2.*t6424*t6891;
  t7019 = -2.*t6887*t6529;
  t7020 = t6968 + t7018 + t6970 + t6976 + t7019 + t6981;
  t7024 = 2.*t6424*t6887;
  t7025 = 2.*t6710*t6891;
  t7027 = t7024 + t6994 + t6995 + t7025 + t6998 + t6999;
  t7047 = -0.5*var2[6]*t7046;
  t6880 = 3.2*t6734*t6878;
  t6896 = 3.2*t6734*t6895;
  t6903 = 3.2*t6900*t6606;
  t6916 = 3.2*t6712*t6915;
  t6917 = t6880 + t6896 + t6903 + t6916;
  t6717 = 3.2*t6659*t6712;
  t6735 = 3.2*t6725*t6734;
  t6750 = 3.2*t6740*t6734;
  t6756 = 3.2*t6754*t6606;
  t6757 = t6717 + t6735 + t6750 + t6756;
  t6762 = -0.5*var2[5]*t6757;
  t7222 = t6766 + t6799;
  t6918 = -0.5*var2[2]*t6917;
  t7102 = 3.2*t6780*t6878;
  t7103 = 3.2*t6780*t6895;
  t7104 = 3.2*t6900*t6807;
  t7105 = 3.2*t6776*t6915;
  t7106 = t7102 + t7103 + t7104 + t7105;
  t6953 = 3.2*t6895*t6810;
  t6967 = 3.2*t6965*t6810;
  t6983 = 3.2*t6788*t6982;
  t6985 = 3.2*t6774*t6915;
  t6990 = 3.2*t6774*t6988;
  t7001 = 3.2*t6774*t7000;
  t7002 = t6951 + t6952 + t6953 + t6967 + t6983 + t6985 + t6990 + t7001;
  t7183 = 3.2*t6895*t6606;
  t7185 = 3.2*t6965*t6606;
  t7187 = 3.2*t6712*t6982;
  t7189 = 3.2*t6734*t6915;
  t7190 = 3.2*t6734*t6988;
  t7191 = 3.2*t6734*t7000;
  t7192 = t7182 + t7183 + t7185 + t7186 + t7187 + t7189 + t7190 + t7191;
  t7017 = 6.4*t6895*t6810;
  t7022 = 3.2*t6788*t7020;
  t7023 = 6.4*t6774*t6915;
  t7028 = 3.2*t6774*t7027;
  t7029 = t6951 + t6952 + t7017 + t7022 + t7023 + t7028;
  t7204 = 6.4*t6895*t6606;
  t7207 = 3.2*t6712*t7020;
  t7208 = 6.4*t6734*t6915;
  t7215 = 3.2*t6734*t7027;
  t7216 = t7182 + t7204 + t7186 + t7207 + t7208 + t7215;
  t7053 = -0.5*var2[6]*t7052;
  t7224 = -0.5*var2[6]*t6917;
  t9056 = 3.2*t6659*t6878;
  t9068 = 3.2*t6754*t6895;
  t9069 = 3.2*t6725*t6900;
  t9205 = 3.2*t6740*t6915;
  t9232 = t9056 + t9068 + t9069 + t9205;
  t7410 = 6.4*t6895*t6900;
  t8929 = 6.4*t6878*t6915;
  t9050 = t7410 + t8929;
  t7076 = 3.2*t6725*t6780;
  t7077 = 3.2*t6740*t6780;
  t7078 = 3.2*t6659*t6776;
  t7091 = 3.2*t6754*t6807;
  t7092 = t7076 + t7077 + t7078 + t7091;
  t7113 = 3.2*t6659*t6734;
  t7114 = 3.2*t6725*t6606;
  t7133 = t7113 + t7114 + t7115 + t7125;
  t6924 = 3.2*t6659*t6774;
  t6926 = 3.2*t6725*t6810;
  t6928 = t6924 + t6925 + t6926 + t6927;
  t7321 = 3.2*t6725*t6965;
  t7322 = 3.2*t6740*t6982;
  t7323 = 3.2*t6659*t6988;
  t7324 = 3.2*t6754*t7000;
  t7326 = t7321 + t7322 + t7323 + t7324;
  t7196 = 3.2*t6725*t6712;
  t7198 = 3.2*t7010*t6734;
  t7200 = 6.4*t6659*t6734;
  t7201 = 6.4*t6725*t6606;
  t7202 = t7196 + t7198 + t7200 + t7201 + t7115 + t7125;
  t7011 = 3.2*t7010*t6774;
  t7012 = 6.4*t6659*t6774;
  t7013 = 3.2*t6725*t6788;
  t7014 = 6.4*t6725*t6810;
  t7015 = t7011 + t7012 + t7013 + t6925 + t7014 + t6927;
  t7342 = 3.2*t6725*t6878;
  t7344 = 6.4*t6725*t6895;
  t7346 = 3.2*t7010*t6900;
  t7347 = 3.2*t6740*t7020;
  t7348 = 6.4*t6659*t6915;
  t7349 = 3.2*t6754*t7027;
  t7350 = t7342 + t7344 + t7346 + t7347 + t7348 + t7349;
  t7062 = -0.5*var2[6]*t7061;
  t7255 = -0.5*var2[6]*t6757;
  t9353 = -0.5*var2[6]*t9232;
  t14787 = 6.4*t6659*t6740;
  t14788 = 6.4*t6725*t6754;
  t14789 = t14787 + t14788;
  t14874 = -0.384*var2[0]*t6922;
  t14875 = -0.384*var2[1]*t6934;
  t6618 = -0.384*var2[6]*t6606;
  p_output1[0]=(t6618 + t6762 + t6918 - 0.5*(6.4*t6606*t6774 + 6.4*t6712*t6774 + 6.4*t6734*t6788 + 6.4*t6734*t6810)*var2[0] - 0.5*t6813*var2[1])*var2[6];
  p_output1[1]=(t6923 + t6940 + t6950 - 0.5*t7002*var2[2] - 0.5*t6928*var2[5])*var2[6];
  p_output1[2]=(t6923 + t6940 + t6950 - 0.5*t7029*var2[2] - 0.5*t7015*var2[5])*var2[6];
  p_output1[3]=-0.5*t7036*var2[6];
  p_output1[4]=t7047;
  p_output1[5]=t7053;
  p_output1[6]=t7062;
  p_output1[7]=-0.5*t7036*var2[0] - 0.5*t7046*var2[1] - 0.5*t7052*var2[2] - 0.5*t7061*var2[5] - 0.768*t6810*var2[6];
  p_output1[8]=var2[6]*(-0.5*t6813*var2[0] - 0.5*(6.4*t6734*t6776 + 6.4*t6606*t6780 + 6.4*t6712*t6780 + 6.4*t6734*t6807)*var2[1] - 0.5*t7106*var2[2] - 0.5*t7092*var2[5] - 0.384*t6807*var2[6]);
  p_output1[9]=(t7112 + t7178 + t7180 - 0.5*t7192*var2[2] - 0.5*t7133*var2[5])*var2[6];
  p_output1[10]=(t7112 + t7178 + t7180 - 0.5*t7216*var2[2] - 0.5*t7202*var2[5])*var2[6];
  p_output1[11]=t7047;
  p_output1[12]=-0.5*t7222*var2[6];
  p_output1[13]=t7224;
  p_output1[14]=t7255;
  p_output1[15]=t6762 + t6918 - 0.5*t7046*var2[0] - 0.5*t7222*var2[1] - 0.768*t6606*var2[6];
  p_output1[16]=(-0.5*t6917*var2[0] - 0.5*t7106*var2[1])*var2[6];
  p_output1[17]=var2[6]*(-0.5*t7002*var2[0] - 0.5*t7192*var2[1] - 0.5*(6.4*t6895*t6965 + 6.4*t6878*t6982 + 6.4*t6915*t6988 + 6.4*t6900*t7000)*var2[2] - 0.5*t7326*var2[5] - 0.384*t7000*var2[6]);
  p_output1[18]=var2[6]*(-0.5*t7029*var2[0] - 0.5*t7216*var2[1] - 0.5*(6.4*Power(t6895,2) + 6.4*Power(t6915,2) + 6.4*t6878*t7020 + 6.4*t6900*t7027)*var2[2] - 0.5*t7350*var2[5] - 0.384*t7027*var2[6]);
  p_output1[19]=t7053;
  p_output1[20]=t7224;
  p_output1[21]=-0.5*t9050*var2[6];
  p_output1[22]=t9353;
  p_output1[23]=-0.5*t7052*var2[0] - 0.5*t6917*var2[1] - 0.5*t9050*var2[2] - 0.5*t9232*var2[5] - 0.768*t6895*var2[6];
  p_output1[24]=(-0.5*t6757*var2[0] - 0.5*t7092*var2[1])*var2[6];
  p_output1[25]=(-0.5*t6928*var2[0] - 0.5*t7133*var2[1] - 0.5*t7326*var2[2])*var2[6];
  p_output1[26]=var2[6]*(-0.5*t7015*var2[0] - 0.5*t7202*var2[1] - 0.5*t7350*var2[2] - 0.5*(6.4*Power(t6659,2) + 6.4*Power(t6725,2) + 6.4*t6725*t6740 + 6.4*t6754*t7010)*var2[5] - 0.384*t7010*var2[6]);
  p_output1[27]=t7062;
  p_output1[28]=t7255;
  p_output1[29]=t9353;
  p_output1[30]=-0.5*t14789*var2[6];
  p_output1[31]=-0.5*t7061*var2[0] - 0.5*t6757*var2[1] - 0.5*t9232*var2[2] - 0.5*t14789*var2[5] - 0.768*t6725*var2[6];
  p_output1[32]=(-0.384*t6606*var2[0] - 0.384*t6807*var2[1])*var2[6];
  p_output1[33]=(t14874 + t14875 - 0.384*t7000*var2[2])*var2[6];
  p_output1[34]=(t14874 + t14875 - 0.384*t7027*var2[2] - 0.384*t7010*var2[5])*var2[6];
  p_output1[35]=-0.384*t6810*var2[6];
  p_output1[36]=t6618;
  p_output1[37]=-0.384*t6895*var2[6];
  p_output1[38]=-0.384*t6725*var2[6];
  p_output1[39]=-0.384*t6810*var2[0] - 0.384*t6606*var2[1] - 0.384*t6895*var2[2] - 0.384*t6725*var2[5];
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

#include "J_Ce2_vec7_five_link_walker.hh"

namespace LeftStance
{

void J_Ce2_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
