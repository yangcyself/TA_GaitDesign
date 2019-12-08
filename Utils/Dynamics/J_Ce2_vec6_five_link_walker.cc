/*
 * Automatically Generated from Mathematica.
 * Sat 7 Dec 2019 17:56:56 GMT-08:00
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
  double t4698;
  double t3126;
  double t3131;
  double t5679;
  double t5866;
  double t2875;
  double t4366;
  double t5695;
  double t5784;
  double t10640;
  double t10717;
  double t10731;
  double t10763;
  double t10801;
  double t5833;
  double t5867;
  double t6129;
  double t8573;
  double t8589;
  double t8944;
  double t14372;
  double t14380;
  double t14437;
  double t14352;
  double t14370;
  double t14371;
  double t9178;
  double t9187;
  double t9221;
  double t14457;
  double t14514;
  double t14515;
  double t10830;
  double t10883;
  double t10884;
  double t10815;
  double t10924;
  double t12091;
  double t14563;
  double t14538;
  double t14539;
  double t14543;
  double t14566;
  double t14567;
  double t14576;
  double t14577;
  double t14562;
  double t14564;
  double t14578;
  double t14579;
  double t14580;
  double t14616;
  double t14617;
  double t14651;
  double t14652;
  double t14653;
  double t14654;
  double t14655;
  double t14671;
  double t14680;
  double t14681;
  double t14685;
  double t14692;
  double t14694;
  double t14695;
  double t14696;
  double t14700;
  double t14701;
  double t14702;
  double t14703;
  double t14707;
  double t14708;
  double t9352;
  double t12204;
  double t12217;
  double t12222;
  double t12404;
  double t12411;
  double t14729;
  double t14730;
  double t9389;
  double t10033;
  double t10807;
  double t10814;
  double t14438;
  double t14516;
  double t14525;
  double t14537;
  double t14589;
  double t14631;
  double t14633;
  double t14636;
  double t14637;
  double t14638;
  double t14639;
  double t14656;
  double t14657;
  double t14658;
  double t14659;
  double t14660;
  double t14661;
  double t14669;
  double t14672;
  double t14673;
  double t14674;
  double t14676;
  double t14677;
  double t14678;
  double t14679;
  double t14712;
  double t14713;
  double t14714;
  double t14693;
  double t14697;
  double t14698;
  double t14704;
  double t14705;
  double t14706;
  double t14709;
  double t14710;
  double t14716;
  double t14717;
  double t14718;
  double t14719;
  double t14720;
  double t14768;
  double t14769;
  double t14770;
  double t14771;
  double t14731;
  double t14732;
  double t14733;
  double t14738;
  double t14739;
  double t14740;
  double t14741;
  double t14742;
  double t14743;
  double t14744;
  double t14747;
  double t14748;
  double t14749;
  double t14750;
  double t14751;
  double t14752;
  double t14762;
  double t14763;
  double t14805;
  double t14806;
  double t14808;
  double t14809;
  double t14766;
  double t14774;
  double t14779;
  double t14817;
  double t14818;
  double t14783;
  double t14841;
  double t14842;
  double t14843;
  double t14844;
  double t14845;
  double t14847;
  double t14848;
  double t14849;
  double t14850;
  double t14851;
  double t14852;
  double t14853;
  double t14854;
  double t14855;
  double t14857;
  double t14858;
  double t14859;
  double t14860;
  double t14861;
  double t14862;
  double t14863;
  double t14864;
  double t14865;
  double t14588;
  double t14596;
  double t14568;
  double t14574;
  double t14565;
  double t14575;
  double t14581;
  double t14587;
  double t14615;
  double t14623;
  double t14629;
  double t14879;
  double t14884;
  double t14885;
  double t14745;
  double t14758;
  double t14759;
  double t14760;
  double t14894;
  double t14896;
  double t14765;
  double t14767;
  double t14772;
  double t14773;
  double t14775;
  double t14778;
  double t14780;
  double t14781;
  double t14782;
  double t14784;
  double t14905;
  double t14790;
  double t14791;
  double t14792;
  double t14794;
  double t14795;
  double t14796;
  double t14797;
  double t14906;
  double t14907;
  double t14910;
  double t14911;
  double t14912;
  double t14913;
  double t14914;
  double t14915;
  double t14801;
  double t14922;
  double t14807;
  double t14810;
  double t14811;
  double t14924;
  double t14814;
  double t14815;
  double t14816;
  double t14819;
  double t14820;
  double t14821;
  double t14822;
  double t14824;
  double t14825;
  double t14826;
  double t14829;
  double t14830;
  double t14831;
  double t14832;
  double t14833;
  double t14834;
  double t14835;
  double t14856;
  double t14670;
  double t14675;
  double t14699;
  double t14711;
  double t14715;
  double t14724;
  double t14725;
  double t9143;
  double t12187;
  double t12468;
  double t14347;
  double t14949;
  double t14950;
  double t14726;
  double t14893;
  double t14895;
  double t14897;
  double t14898;
  double t14899;
  double t14900;
  double t14901;
  double t14755;
  double t14756;
  double t14757;
  double t14761;
  double t14764;
  double t14776;
  double t14777;
  double t14785;
  double t14786;
  double t14919;
  double t14920;
  double t14921;
  double t14923;
  double t14925;
  double t14926;
  double t14927;
  double t14928;
  double t14812;
  double t14813;
  double t14823;
  double t14827;
  double t14828;
  double t14836;
  double t14837;
  double t14939;
  double t14940;
  double t14941;
  double t14942;
  double t14943;
  double t14944;
  double t14945;
  double t14866;
  double t14952;
  double t15003;
  double t15004;
  double t15005;
  double t15006;
  double t15007;
  double t14880;
  double t14881;
  double t14882;
  double t14908;
  double t14734;
  double t14963;
  double t14964;
  double t14965;
  double t14966;
  double t14932;
  double t14933;
  double t14934;
  double t14793;
  double t14798;
  double t14799;
  double t14987;
  double t14988;
  double t14989;
  double t14990;
  double t14991;
  double t14868;
  double t14869;
  double t14870;
  double t14871;
  double t14348;
  double t15010;
  double t15011;
  double t15012;
  double t15013;
  double t15044;
  double t15045;
  double t14877;
  double t14957;
  double t15019;
  t4698 = Cos(var1[5]);
  t3126 = Cos(var1[6]);
  t3131 = Sin(var1[5]);
  t5679 = Sin(var1[6]);
  t5866 = Cos(var1[2]);
  t2875 = Sin(var1[2]);
  t4366 = -1.*t3126*t3131;
  t5695 = -1.*t4698*t5679;
  t5784 = t4366 + t5695;
  t10640 = -1.*t3126;
  t10717 = 1. + t10640;
  t10731 = 1.03*t10717;
  t10763 = 1.27*t3126;
  t10801 = t10731 + t10763;
  t5833 = -1.*t2875*t5784;
  t5867 = -1.*t4698*t3126;
  t6129 = t3131*t5679;
  t8573 = t5867 + t6129;
  t8589 = t5866*t8573;
  t8944 = t5833 + t8589;
  t14372 = t5866*t4698;
  t14380 = -1.*t2875*t3131;
  t14437 = t14372 + t14380;
  t14352 = -1.*t4698*t2875;
  t14370 = -1.*t5866*t3131;
  t14371 = t14352 + t14370;
  t9178 = -1.*t5866*t4698;
  t9187 = t2875*t3131;
  t9221 = t9178 + t9187;
  t14457 = t4698*t2875;
  t14514 = t5866*t3131;
  t14515 = t14457 + t14514;
  t10830 = t4698*t3126;
  t10883 = -1.*t3131*t5679;
  t10884 = t10830 + t10883;
  t10815 = t5866*t5784;
  t10924 = -1.*t2875*t10884;
  t12091 = t10815 + t10924;
  t14563 = t5866*t10884;
  t14538 = t3126*t3131;
  t14539 = t4698*t5679;
  t14543 = t14538 + t14539;
  t14566 = t2875*t5784;
  t14567 = t14566 + t14563;
  t14576 = -1.*t5866*t10884;
  t14577 = t5833 + t14576;
  t14562 = -1.*t2875*t14543;
  t14564 = t14562 + t14563;
  t14578 = t5866*t14543;
  t14579 = t2875*t10884;
  t14580 = t14578 + t14579;
  t14616 = t2875*t8573;
  t14617 = t10815 + t14616;
  t14651 = -1.*t4698;
  t14652 = 1. + t14651;
  t14653 = 0.63*t14652;
  t14654 = 0.74*t4698;
  t14655 = t14653 + t14654;
  t14671 = t14655*t4698;
  t14680 = -0.63*t3131;
  t14681 = t10801*t3131;
  t14685 = 0.24*t4698*t5679;
  t14692 = t14680 + t14681 + t14685;
  t14694 = t4698*t10801;
  t14695 = -0.24*t3131*t5679;
  t14696 = t14653 + t14694 + t14695;
  t14700 = 0.63*t3131;
  t14701 = -1.*t10801*t3131;
  t14702 = -0.24*t4698*t5679;
  t14703 = t14700 + t14701 + t14702;
  t14707 = -0.63*t4698;
  t14708 = t14707 + t14694 + t14695;
  t9352 = 0.748*t9221;
  t12204 = -0.63*t3126;
  t12217 = t3126*t10801;
  t12222 = Power(t5679,2);
  t12404 = 0.24*t12222;
  t12411 = t12204 + t12217 + t12404;
  t14729 = t2875*t14543;
  t14730 = t14729 + t8589;
  t9389 = -0.63*t5679;
  t10033 = -0.24*t3126*t5679;
  t10807 = t10801*t5679;
  t10814 = t9389 + t10033 + t10807;
  t14438 = 20.4*t14371*t14437;
  t14516 = 6.8*t14515*t14437;
  t14525 = 20.4*t14371*t9221;
  t14537 = 6.8*t14515*t9221;
  t14589 = -1.*t2875*t8573;
  t14631 = Power(t14371,2);
  t14633 = 13.6*t14631;
  t14636 = 13.6*t14371*t14515;
  t14637 = Power(t14437,2);
  t14638 = 13.6*t14637;
  t14639 = 13.6*t14437*t9221;
  t14656 = t14655*t3131;
  t14657 = -0.11*t4698*t3131;
  t14658 = t14656 + t14657;
  t14659 = 6.8*t14371*t14658;
  t14660 = -1.*t14655*t3131;
  t14661 = 0.11*t4698*t3131;
  t14669 = t14660 + t14661;
  t14672 = Power(t4698,2);
  t14673 = -0.11*t14672;
  t14674 = t14671 + t14673;
  t14676 = Power(t3131,2);
  t14677 = 0.11*t14676;
  t14678 = t14671 + t14677;
  t14679 = 6.8*t9221*t14678;
  t14712 = t14692*t14543;
  t14713 = t10884*t14696;
  t14714 = t14712 + t14713;
  t14693 = -1.*t14692*t10884;
  t14697 = -1.*t5784*t14696;
  t14698 = t14693 + t14697;
  t14704 = t14703*t10884;
  t14705 = t14692*t10884;
  t14706 = t5784*t14696;
  t14709 = t14543*t14708;
  t14710 = t14704 + t14705 + t14706 + t14709;
  t14716 = -1.*t5784*t14703;
  t14717 = -1.*t5784*t14692;
  t14718 = -1.*t10884*t14708;
  t14719 = -1.*t14696*t8573;
  t14720 = t14716 + t14717 + t14718 + t14719;
  t14768 = 0.63*t4698;
  t14769 = -1.*t4698*t10801;
  t14770 = 0.24*t3131*t5679;
  t14771 = t14768 + t14769 + t14770;
  t14731 = -0.384*var2[6]*t14730;
  t14732 = 3.2*t12411*t14730;
  t14733 = 3.2*t10814*t14617;
  t14738 = 6.4*t14567*t12091;
  t14739 = 3.2*t14580*t8944;
  t14740 = 3.2*t12091*t14730;
  t14741 = t14578 + t14589;
  t14742 = 3.2*t14567*t14741;
  t14743 = 3.2*t14564*t14617;
  t14744 = 6.4*t8944*t14617;
  t14747 = Power(t14567,2);
  t14748 = 6.4*t14747;
  t14749 = 6.4*t14567*t14730;
  t14750 = 6.4*t14580*t14617;
  t14751 = Power(t14617,2);
  t14752 = 6.4*t14751;
  t14762 = 3.2*t14714*t14730;
  t14763 = 3.2*t14698*t14617;
  t14805 = -0.24*t3126*t3131;
  t14806 = t14805 + t14702;
  t14808 = 0.24*t4698*t3126;
  t14809 = t14808 + t14695;
  t14766 = -1.*t14543*t14696;
  t14774 = -1.*t14692*t8573;
  t14779 = t5784*t14692;
  t14817 = -0.24*t4698*t3126;
  t14818 = t14817 + t14770;
  t14783 = t14696*t8573;
  t14841 = 13.6*t14371*t14437;
  t14842 = 13.6*t14515*t14437;
  t14843 = 6.4*t14567*t14580;
  t14844 = 6.4*t14567*t14617;
  t14845 = t14841 + t14842 + t14843 + t14844;
  t14847 = 6.8*t14631;
  t14848 = 6.8*t14371*t14515;
  t14849 = 6.8*t14637;
  t14850 = 6.8*t14437*t9221;
  t14851 = 3.2*t14567*t14564;
  t14852 = 3.2*t12091*t14580;
  t14853 = 3.2*t14567*t8944;
  t14854 = 3.2*t12091*t14617;
  t14855 = t14847 + t14848 + t14849 + t14850 + t14851 + t14852 + t14853 + t14854;
  t14857 = 6.8*t14674*t14515;
  t14858 = 6.8*t14658*t14437;
  t14859 = 6.8*t14669*t14437;
  t14860 = 6.8*t14371*t14678;
  t14861 = 3.2*t14567*t14698;
  t14862 = 3.2*t14567*t14710;
  t14863 = 3.2*t14714*t14617;
  t14864 = 3.2*t14580*t14720;
  t14865 = t14857 + t14858 + t14859 + t14860 + t14861 + t14862 + t14863 + t14864;
  t14588 = -1.*t5866*t5784;
  t14596 = t14588 + t14589;
  t14568 = -1.*t5866*t14543;
  t14574 = t14568 + t10924;
  t14565 = 6.4*t14564*t12091;
  t14575 = 3.2*t14567*t14574;
  t14581 = 3.2*t14577*t14580;
  t14587 = 6.4*t12091*t8944;
  t14615 = 3.2*t14567*t14596;
  t14623 = 3.2*t14577*t14617;
  t14629 = t14438 + t14516 + t14525 + t14537 + t14565 + t14575 + t14581 + t14587 + t14615 + t14623;
  t14879 = 0.748*t14515;
  t14884 = Power(t9221,2);
  t14885 = 13.6*t14884;
  t14745 = t14438 + t14516 + t14525 + t14537 + t14738 + t14739 + t14740 + t14742 + t14743 + t14744;
  t14758 = -1.*t14655*t4698;
  t14759 = 0.11*t14672;
  t14760 = t14758 + t14759;
  t14894 = 6.8*t14658*t9221;
  t14896 = 6.8*t14515*t14678;
  t14765 = -1.*t14703*t10884;
  t14767 = -2.*t5784*t14708;
  t14772 = -1.*t5784*t14771;
  t14773 = -2.*t14703*t8573;
  t14775 = t14765 + t14766 + t14767 + t14772 + t14773 + t14774;
  t14778 = 2.*t5784*t14703;
  t14780 = t14703*t14543;
  t14781 = 2.*t10884*t14708;
  t14782 = t10884*t14771;
  t14784 = t14778 + t14779 + t14780 + t14781 + t14782 + t14783;
  t14905 = -0.384*var2[6]*t14741;
  t14790 = Power(t3126,2);
  t14791 = -0.24*t14790;
  t14792 = t12204 + t14791 + t12217;
  t14794 = 0.63*t5679;
  t14795 = 0.24*t3126*t5679;
  t14796 = -1.*t10801*t5679;
  t14797 = t14794 + t14795 + t14796;
  t14906 = 3.2*t10814*t8944;
  t14907 = 3.2*t12411*t14741;
  t14910 = Power(t12091,2);
  t14911 = 6.4*t14910;
  t14912 = 6.4*t14564*t8944;
  t14913 = Power(t8944,2);
  t14914 = 6.4*t14913;
  t14915 = 6.4*t12091*t14741;
  t14801 = t14738 + t14739 + t14740 + t14742 + t14743 + t14744;
  t14922 = 3.2*t14698*t8944;
  t14807 = t14806*t10884;
  t14810 = t14543*t14809;
  t14811 = t14807 + t14705 + t14810 + t14706;
  t14924 = 3.2*t14714*t14741;
  t14814 = -1.*t14806*t10884;
  t14815 = -1.*t5784*t14809;
  t14816 = -1.*t5784*t14708;
  t14819 = -1.*t5784*t14818;
  t14820 = -1.*t14806*t8573;
  t14821 = -1.*t14703*t8573;
  t14822 = t14814 + t14815 + t14766 + t14816 + t14819 + t14820 + t14821 + t14774;
  t14824 = -1.*t5784*t14806;
  t14825 = -1.*t10884*t14809;
  t14826 = t14824 + t14717 + t14825 + t14719;
  t14829 = t5784*t14806;
  t14830 = t5784*t14703;
  t14831 = t14806*t14543;
  t14832 = t10884*t14809;
  t14833 = t10884*t14708;
  t14834 = t10884*t14818;
  t14835 = t14829 + t14830 + t14779 + t14831 + t14832 + t14833 + t14834 + t14783;
  t14856 = -0.5*var2[5]*t14855;
  t14670 = 6.8*t14371*t14669;
  t14675 = 6.8*t14674*t14437;
  t14699 = 3.2*t12091*t14698;
  t14711 = 3.2*t12091*t14710;
  t14715 = 3.2*t14714*t8944;
  t14724 = 3.2*t14564*t14720;
  t14725 = t14659 + t14670 + t14675 + t14679 + t14699 + t14711 + t14715 + t14724;
  t9143 = -0.384*var2[6]*t8944;
  t12187 = 3.2*t10814*t12091;
  t12468 = 3.2*t12411*t8944;
  t14347 = t9352 + t12187 + t12468;
  t14949 = 13.6*t14371*t9221;
  t14950 = t14841 + t14949 + t14565 + t14587;
  t14726 = -0.5*var2[2]*t14725;
  t14893 = 6.8*t14674*t14371;
  t14895 = 6.8*t14669*t9221;
  t14897 = 3.2*t14577*t14698;
  t14898 = 3.2*t14577*t14710;
  t14899 = 3.2*t14714*t14596;
  t14900 = 3.2*t14574*t14720;
  t14901 = t14893 + t14894 + t14895 + t14896 + t14897 + t14898 + t14899 + t14900;
  t14755 = 13.6*t14371*t14669;
  t14756 = 6.8*t14515*t14669;
  t14757 = 13.6*t14674*t14437;
  t14761 = 6.8*t14760*t14437;
  t14764 = 6.4*t14710*t14617;
  t14776 = 3.2*t14580*t14775;
  t14777 = 6.4*t14567*t14720;
  t14785 = 3.2*t14567*t14784;
  t14786 = t14659 + t14755 + t14756 + t14757 + t14761 + t14679 + t14762 + t14763 + t14764 + t14776 + t14777 + t14785;
  t14919 = 13.6*t14674*t14371;
  t14920 = 6.8*t14760*t14371;
  t14921 = 13.6*t14669*t9221;
  t14923 = 6.4*t14710*t8944;
  t14925 = 3.2*t14564*t14775;
  t14926 = 6.4*t12091*t14720;
  t14927 = 3.2*t12091*t14784;
  t14928 = t14919 + t14920 + t14859 + t14894 + t14921 + t14896 + t14922 + t14923 + t14924 + t14925 + t14926 + t14927;
  t14812 = 3.2*t14811*t14617;
  t14813 = 3.2*t14710*t14617;
  t14823 = 3.2*t14580*t14822;
  t14827 = 3.2*t14567*t14826;
  t14828 = 3.2*t14567*t14720;
  t14836 = 3.2*t14567*t14835;
  t14837 = t14762 + t14763 + t14812 + t14813 + t14823 + t14827 + t14828 + t14836;
  t14939 = 3.2*t14811*t8944;
  t14940 = 3.2*t14710*t8944;
  t14941 = 3.2*t14564*t14822;
  t14942 = 3.2*t12091*t14826;
  t14943 = 3.2*t12091*t14720;
  t14944 = 3.2*t12091*t14835;
  t14945 = t14922 + t14939 + t14940 + t14924 + t14941 + t14942 + t14943 + t14944;
  t14866 = -0.5*var2[5]*t14865;
  t14952 = -0.5*var2[5]*t14725;
  t15003 = 13.6*t14674*t14658;
  t15004 = 13.6*t14669*t14678;
  t15005 = 6.4*t14714*t14710;
  t15006 = 6.4*t14698*t14720;
  t15007 = t15003 + t15004 + t15005 + t15006;
  t14880 = 3.2*t10814*t14577;
  t14881 = 3.2*t12411*t14596;
  t14882 = t14879 + t14880 + t14881;
  t14908 = t14879 + t14906 + t14907;
  t14734 = t9352 + t14732 + t14733;
  t14963 = 0.748*t14760;
  t14964 = 3.2*t10814*t14775;
  t14965 = 3.2*t12411*t14784;
  t14966 = t14963 + t14964 + t14965;
  t14932 = 3.2*t14792*t12091;
  t14933 = 3.2*t14797*t8944;
  t14934 = t14932 + t14933 + t14906 + t14907;
  t14793 = 3.2*t14792*t14567;
  t14798 = 3.2*t14797*t14617;
  t14799 = t14793 + t14732 + t14798 + t14733;
  t14987 = 3.2*t14797*t14710;
  t14988 = 3.2*t10814*t14822;
  t14989 = 3.2*t14792*t14720;
  t14990 = 3.2*t12411*t14835;
  t14991 = t14987 + t14988 + t14989 + t14990;
  t14868 = 0.748*t14371;
  t14869 = 3.2*t10814*t14567;
  t14870 = 3.2*t12411*t14617;
  t14871 = t14868 + t14869 + t14870;
  t14348 = -0.5*var2[5]*t14347;
  t15010 = 0.748*t14669;
  t15011 = 3.2*t12411*t14710;
  t15012 = 3.2*t10814*t14720;
  t15013 = t15010 + t15011 + t15012;
  t15044 = -0.384*var2[0]*t14730;
  t15045 = -0.384*var2[1]*t14741;
  t14877 = -0.384*var2[5]*t14617;
  t14957 = -0.384*var2[5]*t8944;
  t15019 = -0.384*var2[5]*t14710;
  p_output1[0]=(t14348 + t14726 + t9143 - 0.5*(6.4*t14564*t14567 + 6.4*t12091*t14580 + 6.4*t12091*t14617 + t14633 + t14636 + t14638 + t14639 + 6.4*t14567*t8944)*var2[0] - 0.5*t14629*var2[1])*var2[5];
  p_output1[1]=var2[5]*(t14731 - 0.5*(t14633 + t14636 + t14638 + t14639 + t14748 + t14749 + t14750 + t14752)*var2[0] - 0.5*t14745*var2[1] - 0.5*t14786*var2[2] - 0.5*t14734*var2[5]);
  p_output1[2]=var2[5]*(t14731 - 0.5*(t14748 + t14749 + t14750 + t14752)*var2[0] - 0.5*t14801*var2[1] - 0.5*t14837*var2[2] - 0.5*t14799*var2[5]);
  p_output1[3]=-0.5*t14845*var2[5];
  p_output1[4]=t14856;
  p_output1[5]=t14866;
  p_output1[6]=-0.5*t14845*var2[0] - 0.5*t14855*var2[1] - 0.5*t14865*var2[2] - 1.*t14871*var2[5] - 0.384*t14617*var2[6];
  p_output1[7]=t14877;
  p_output1[8]=var2[5]*(-0.5*t14629*var2[0] - 0.5*(6.4*t12091*t14574 + 6.4*t14564*t14577 + 6.4*t12091*t14596 + t14633 + t14636 + t14639 + t14885 + 6.4*t14577*t8944)*var2[1] - 0.5*t14901*var2[2] - 0.5*t14882*var2[5] - 0.384*t14596*var2[6]);
  p_output1[9]=var2[5]*(t14905 - 0.5*t14745*var2[0] - 0.5*(t14633 + t14636 + t14639 + t14885 + t14911 + t14912 + t14914 + t14915)*var2[1] - 0.5*t14928*var2[2] - 0.5*t14908*var2[5]);
  p_output1[10]=var2[5]*(t14905 - 0.5*t14801*var2[0] - 0.5*(t14911 + t14912 + t14914 + t14915)*var2[1] - 0.5*t14945*var2[2] - 0.5*t14934*var2[5]);
  p_output1[11]=t14856;
  p_output1[12]=-0.5*t14950*var2[5];
  p_output1[13]=t14952;
  p_output1[14]=t14726 + t9143 - 0.5*t14855*var2[0] - 0.5*t14950*var2[1] - 1.*t14347*var2[5];
  p_output1[15]=t14957;
  p_output1[16]=(-0.5*t14725*var2[0] - 0.5*t14901*var2[1])*var2[5];
  p_output1[17]=var2[5]*(-0.5*t14786*var2[0] - 0.5*t14928*var2[1] - 0.5*(13.6*t14658*t14669 + 13.6*Power(t14669,2) + 13.6*Power(t14674,2) + 6.4*Power(t14710,2) + 6.4*Power(t14720,2) + 13.6*t14678*t14760 + 6.4*t14698*t14775 + 6.4*t14714*t14784)*var2[2] - 0.5*t14966*var2[5] - 0.384*t14784*var2[6]);
  p_output1[18]=var2[5]*(-0.5*t14837*var2[0] - 0.5*t14945*var2[1] - 0.5*(6.4*t14710*t14811 + 6.4*t14698*t14822 + 6.4*t14720*t14826 + 6.4*t14714*t14835)*var2[2] - 0.5*t14991*var2[5] - 0.384*t14835*var2[6]);
  p_output1[19]=t14866;
  p_output1[20]=t14952;
  p_output1[21]=-0.5*t15007*var2[5];
  p_output1[22]=-0.5*t14865*var2[0] - 0.5*t14725*var2[1] - 0.5*t15007*var2[2] - 1.*t15013*var2[5] - 0.384*t14710*var2[6];
  p_output1[23]=t15019;
  p_output1[24]=(-0.5*t14347*var2[0] - 0.5*t14882*var2[1])*var2[5];
  p_output1[25]=(-0.5*t14734*var2[0] - 0.5*t14908*var2[1] - 0.5*t14966*var2[2])*var2[5];
  p_output1[26]=(-0.5*t14799*var2[0] - 0.5*t14934*var2[1] - 0.5*t14991*var2[2])*var2[5];
  p_output1[27]=-0.5*t14871*var2[5];
  p_output1[28]=t14348;
  p_output1[29]=-0.5*t15013*var2[5];
  p_output1[30]=-0.5*t14871*var2[0] - 0.5*t14347*var2[1] - 0.5*t15013*var2[2];
  p_output1[31]=(-0.384*t8944*var2[0] - 0.384*t14596*var2[1])*var2[5];
  p_output1[32]=(t15044 + t15045 - 0.384*t14784*var2[2])*var2[5];
  p_output1[33]=(t15044 + t15045 - 0.384*t14835*var2[2])*var2[5];
  p_output1[34]=t14877;
  p_output1[35]=t14957;
  p_output1[36]=t15019;
  p_output1[37]=-0.384*t14617*var2[0] - 0.384*t8944*var2[1] - 0.384*t14710*var2[2];
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

#include "J_Ce2_vec6_five_link_walker.hh"

namespace LeftStance
{

void J_Ce2_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
