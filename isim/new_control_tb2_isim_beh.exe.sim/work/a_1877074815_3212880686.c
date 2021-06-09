/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Microsoft/Documents/ise projekter-filer/oscilloscope/SigGenControl.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);


static void work_a_1877074815_3212880686_p_0(char *t0)
{
    char t17[16];
    char t18[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5568);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 9777);
    t6 = (t0 + 5680);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1352U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t2 = (t0 + 3272U);
    t7 = *((char **)t2);
    t14 = (7 - 7);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t7 + t16);
    t9 = ((IEEE_P_2592010699) + 4024);
    t10 = (t18 + 0U);
    t19 = (t10 + 0U);
    *((int *)t19) = 7;
    t19 = (t10 + 4U);
    *((int *)t19) = 1;
    t19 = (t10 + 8U);
    *((int *)t19) = -1;
    t20 = (1 - 7);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t10 + 12U);
    *((unsigned int *)t19) = t21;
    t8 = xsi_base_array_concat(t8, t17, t9, (char)99, t13, (char)97, t2, t18, (char)101);
    t21 = (1U + 7U);
    t22 = (8U != t21);
    if (t22 == 1)
        goto LAB10;

LAB11:    t19 = (t0 + 5680);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t8, 8U);
    xsi_driver_first_trans_fast(t19);
    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_size_not_matching(8U, t21, 0);
    goto LAB11;

}

static void work_a_1877074815_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5584);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 5744);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2632U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 5744);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t11;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void work_a_1877074815_3212880686_p_2(char *t0)
{
    char t12[16];
    char t25[16];
    char t27[16];
    char t28[16];
    char t29[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t26;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6};

LAB0:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 9785);
    t3 = (t0 + 5808);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 9793);
    t3 = (t0 + 5872);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 9801);
    t3 = (t0 + 5936);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (t0 + 6000);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t8;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t8);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 5600);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB10;

LAB11:    t9 = (unsigned char)0;

LAB12:    if (t9 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB2;

LAB4:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB2;

LAB5:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB16;

LAB18:
LAB17:    goto LAB2;

LAB6:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 9847);
    t3 = (t29 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 0;
    t4 = (t3 + 4U);
    *((int *)t4) = 7;
    t4 = (t3 + 8U);
    *((int *)t4) = 1;
    t15 = (7 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t16;
    t4 = (t0 + 3592U);
    t5 = *((char **)t4);
    t4 = (t0 + 9720U);
    t6 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t28, t1, t29, t5, t4);
    t7 = (t0 + 1832U);
    t13 = *((char **)t7);
    t7 = (t0 + 9672U);
    t14 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t27, t6, t28, t13, t7);
    t18 = (t0 + 1992U);
    t19 = *((char **)t18);
    t18 = (t0 + 9688U);
    t20 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t25, t14, t27, t19, t18);
    t21 = (t0 + 2152U);
    t30 = *((char **)t21);
    t21 = (t0 + 9704U);
    t31 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t12, t20, t25, t30, t21);
    t32 = (t12 + 12U);
    t16 = *((unsigned int *)t32);
    t22 = (1U * t16);
    t8 = (8U != t22);
    if (t8 == 1)
        goto LAB26;

LAB27:    t33 = (t0 + 6128);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t31, 8U);
    xsi_driver_first_trans_fast(t33);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t9 = *((unsigned char *)t2);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB31;

LAB32:    t8 = (unsigned char)0;

LAB33:    if (t8 != 0)
        goto LAB28;

LAB30:
LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(84, ng0);
    t14 = (t0 + 6000);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)1;
    xsi_driver_first_trans_fast(t14);
    goto LAB8;

LAB10:    t3 = (t0 + 3272U);
    t5 = *((char **)t3);
    t3 = (t0 + 9720U);
    t6 = (t0 + 9809);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 7;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (7 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t17 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t5, t3, t6, t12);
    t9 = t17;
    goto LAB12;

LAB13:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 6064);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 6000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 9817);
    t4 = (t0 + 5808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 9825);
    t3 = (t0 + 5872);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 9833);
    t3 = (t0 + 5936);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t16 = (7 - 7);
    t22 = (t16 * 1U);
    t23 = (0 + t22);
    t1 = (t2 + t23);
    t3 = (t12 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 7;
    t4 = (t3 + 4U);
    *((int *)t4) = 6;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t15 = (6 - 7);
    t24 = (t15 * -1);
    t24 = (t24 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t24;
    t4 = (t0 + 9841);
    t6 = (t25 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t26 = (1 - 0);
    t24 = (t26 * 1);
    t24 = (t24 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t24;
    t8 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t12, t4, t25);
    if (t8 != 0)
        goto LAB19;

LAB21:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t16 = (7 - 7);
    t22 = (t16 * 1U);
    t23 = (0 + t22);
    t1 = (t2 + t23);
    t3 = (t12 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 7;
    t4 = (t3 + 4U);
    *((int *)t4) = 6;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t15 = (6 - 7);
    t24 = (t15 * -1);
    t24 = (t24 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t24;
    t4 = (t0 + 9843);
    t6 = (t25 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t26 = (1 - 0);
    t24 = (t26 * 1);
    t24 = (t24 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t24;
    t8 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t12, t4, t25);
    if (t8 != 0)
        goto LAB22;

LAB23:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t16 = (7 - 7);
    t22 = (t16 * 1U);
    t23 = (0 + t22);
    t1 = (t2 + t23);
    t3 = (t12 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 7;
    t4 = (t3 + 4U);
    *((int *)t4) = 6;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t15 = (6 - 7);
    t24 = (t15 * -1);
    t24 = (t24 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t24;
    t4 = (t0 + 9845);
    t6 = (t25 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t26 = (1 - 0);
    t24 = (t26 * 1);
    t24 = (t24 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t24;
    t8 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t12, t4, t25);
    if (t8 != 0)
        goto LAB24;

LAB25:
LAB20:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 6000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    xsi_set_current_line(108, ng0);
    t7 = (t0 + 3272U);
    t13 = *((char **)t7);
    t7 = (t0 + 5808);
    t14 = (t7 + 56U);
    t18 = *((char **)t14);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t13, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB20;

LAB22:    xsi_set_current_line(112, ng0);
    t7 = (t0 + 3272U);
    t13 = *((char **)t7);
    t7 = (t0 + 5872);
    t14 = (t7 + 56U);
    t18 = *((char **)t14);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t13, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB20;

LAB24:    xsi_set_current_line(116, ng0);
    t7 = (t0 + 3272U);
    t13 = *((char **)t7);
    t7 = (t0 + 5936);
    t14 = (t7 + 56U);
    t18 = *((char **)t14);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t13, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB20;

LAB26:    xsi_size_not_matching(8U, t22, 0);
    goto LAB27;

LAB28:    xsi_set_current_line(130, ng0);
    t6 = (t0 + 6192);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 6000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB29;

LAB31:    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 9720U);
    t4 = (t0 + 3272U);
    t5 = *((char **)t4);
    t4 = (t0 + 9720U);
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t5, t4);
    t8 = t11;
    goto LAB33;

}


extern void work_a_1877074815_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1877074815_3212880686_p_0,(void *)work_a_1877074815_3212880686_p_1,(void *)work_a_1877074815_3212880686_p_2};
	xsi_register_didat("work_a_1877074815_3212880686", "isim/new_control_tb2_isim_beh.exe.sim/work/a_1877074815_3212880686.didat");
	xsi_register_executes(pe);
}
