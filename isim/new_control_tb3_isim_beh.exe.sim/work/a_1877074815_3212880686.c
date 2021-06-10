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

LAB0:    xsi_set_current_line(53, ng0);
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
LAB3:    t1 = (t0 + 7696);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 13477);
    t6 = (t0 + 7904);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1352U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t2 = (t0 + 3592U);
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

LAB11:    t19 = (t0 + 7904);
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
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_size_not_matching(8U, t21, 0);
    goto LAB11;

}

static void work_a_1877074815_3212880686_p_1(char *t0)
{
    char t19[16];
    char t20[16];
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
    unsigned char t14;
    unsigned char t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

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
LAB3:    t1 = (t0 + 7712);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 13485);
    t6 = (t0 + 7968);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2792U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1352U);
    t7 = *((char **)t2);
    t15 = *((unsigned char *)t7);
    t2 = (t0 + 3912U);
    t8 = *((char **)t2);
    t16 = (7 - 7);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t2 = (t8 + t18);
    t10 = ((IEEE_P_2592010699) + 4024);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 7;
    t22 = (t21 + 4U);
    *((int *)t22) = 1;
    t22 = (t21 + 8U);
    *((int *)t22) = -1;
    t23 = (1 - 7);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t24;
    t9 = xsi_base_array_concat(t9, t19, t10, (char)99, t15, (char)97, t2, t20, (char)101);
    t24 = (1U + 7U);
    t25 = (8U != t24);
    if (t25 == 1)
        goto LAB13;

LAB14:    t22 = (t0 + 7968);
    t26 = (t22 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t9, 8U);
    xsi_driver_first_trans_fast(t22);
    goto LAB11;

LAB13:    xsi_size_not_matching(8U, t24, 0);
    goto LAB14;

}

static void work_a_1877074815_3212880686_p_2(char *t0)
{
    char t19[16];
    char t20[16];
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
    unsigned char t14;
    unsigned char t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(73, ng0);
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
LAB3:    t1 = (t0 + 7728);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 13493);
    t6 = (t0 + 8032);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2952U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1352U);
    t7 = *((char **)t2);
    t15 = *((unsigned char *)t7);
    t2 = (t0 + 4072U);
    t8 = *((char **)t2);
    t16 = (7 - 7);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t2 = (t8 + t18);
    t10 = ((IEEE_P_2592010699) + 4024);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 7;
    t22 = (t21 + 4U);
    *((int *)t22) = 1;
    t22 = (t21 + 8U);
    *((int *)t22) = -1;
    t23 = (1 - 7);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t24;
    t9 = xsi_base_array_concat(t9, t19, t10, (char)99, t15, (char)97, t2, t20, (char)101);
    t24 = (1U + 7U);
    t25 = (8U != t24);
    if (t25 == 1)
        goto LAB13;

LAB14:    t22 = (t0 + 8032);
    t26 = (t22 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t9, 8U);
    xsi_driver_first_trans_fast(t22);
    goto LAB11;

LAB13:    xsi_size_not_matching(8U, t24, 0);
    goto LAB14;

}

static void work_a_1877074815_3212880686_p_3(char *t0)
{
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
    unsigned char t14;
    char *t15;

LAB0:    xsi_set_current_line(89, ng0);
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
LAB3:    t1 = (t0 + 7744);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 13501);
    t6 = (t0 + 8096);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3112U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4072U);
    t7 = *((char **)t2);
    t2 = (t0 + 8096);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    memcpy(t15, t7, 8U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB11;

}

static void work_a_1877074815_3212880686_p_4(char *t0)
{
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
    unsigned char t14;
    char *t15;

LAB0:    xsi_set_current_line(100, ng0);
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
LAB3:    t1 = (t0 + 7760);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 13509);
    t6 = (t0 + 8160);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3272U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4072U);
    t7 = *((char **)t2);
    t2 = (t0 + 8160);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    memcpy(t15, t7, 8U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB11;

}

static void work_a_1877074815_3212880686_p_5(char *t0)
{
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
    unsigned char t14;
    char *t15;

LAB0:    xsi_set_current_line(111, ng0);
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
LAB3:    t1 = (t0 + 7776);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 13517);
    t6 = (t0 + 8224);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3432U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4072U);
    t7 = *((char **)t2);
    t2 = (t0 + 8224);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    memcpy(t15, t7, 8U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB11;

}

static void work_a_1877074815_3212880686_p_6(char *t0)
{
    char t5[16];
    char t21[16];
    char t29[16];
    char t31[16];
    char t45[16];
    char t54[16];
    char t56[16];
    char t71[16];
    char t73[16];
    char t78[16];
    char t85[16];
    char t87[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t22;
    char *t23;
    int t24;
    unsigned char t25;
    char *t27;
    char *t28;
    char *t30;
    char *t32;
    char *t33;
    int t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t46;
    char *t47;
    int t48;
    unsigned int t49;
    unsigned char t50;
    char *t52;
    char *t53;
    char *t55;
    char *t57;
    char *t58;
    int t59;
    unsigned char t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t68;
    char *t70;
    char *t72;
    char *t74;
    char *t75;
    int t76;
    unsigned int t77;
    char *t79;
    int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t86;
    char *t88;
    char *t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned char t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;

LAB0:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t1 = (t0 + 13408U);
    t3 = (t0 + 13525);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (0 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:    t17 = (t0 + 4232U);
    t18 = *((char **)t17);
    t17 = (t0 + 13408U);
    t19 = (t0 + 13546);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 0;
    t23 = (t22 + 4U);
    *((int *)t23) = 3;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (3 - 0);
    t9 = (t24 * 1);
    t9 = (t9 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t9;
    t25 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t18, t17, t19, t21);
    if (t25 != 0)
        goto LAB5;

LAB6:    t41 = (t0 + 4232U);
    t42 = *((char **)t41);
    t41 = (t0 + 13408U);
    t43 = (t0 + 13562);
    t46 = (t45 + 0U);
    t47 = (t46 + 0U);
    *((int *)t47) = 0;
    t47 = (t46 + 4U);
    *((int *)t47) = 3;
    t47 = (t46 + 8U);
    *((int *)t47) = 1;
    t48 = (3 - 0);
    t49 = (t48 * 1);
    t49 = (t49 + 1);
    t47 = (t46 + 12U);
    *((unsigned int *)t47) = t49;
    t50 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t42, t41, t43, t45);
    if (t50 != 0)
        goto LAB9;

LAB10:
LAB13:    t66 = (t0 + 13578);
    t68 = (t0 + 13590);
    t72 = ((IEEE_P_2592010699) + 4024);
    t74 = (t73 + 0U);
    t75 = (t74 + 0U);
    *((int *)t75) = 0;
    t75 = (t74 + 4U);
    *((int *)t75) = 11;
    t75 = (t74 + 8U);
    *((int *)t75) = 1;
    t76 = (11 - 0);
    t77 = (t76 * 1);
    t77 = (t77 + 1);
    t75 = (t74 + 12U);
    *((unsigned int *)t75) = t77;
    t75 = (t78 + 0U);
    t79 = (t75 + 0U);
    *((int *)t79) = 0;
    t79 = (t75 + 4U);
    *((int *)t79) = 5;
    t79 = (t75 + 8U);
    *((int *)t79) = 1;
    t80 = (5 - 0);
    t77 = (t80 * 1);
    t77 = (t77 + 1);
    t79 = (t75 + 12U);
    *((unsigned int *)t79) = t77;
    t70 = xsi_base_array_concat(t70, t71, t72, (char)97, t66, t73, (char)97, t68, t78, (char)101);
    t79 = (t0 + 1832U);
    t81 = *((char **)t79);
    t77 = (7 - 7);
    t82 = (t77 * 1U);
    t83 = (0 + t82);
    t79 = (t81 + t83);
    t86 = ((IEEE_P_2592010699) + 4024);
    t88 = (t87 + 0U);
    t89 = (t88 + 0U);
    *((int *)t89) = 7;
    t89 = (t88 + 4U);
    *((int *)t89) = 6;
    t89 = (t88 + 8U);
    *((int *)t89) = -1;
    t90 = (6 - 7);
    t91 = (t90 * -1);
    t91 = (t91 + 1);
    t89 = (t88 + 12U);
    *((unsigned int *)t89) = t91;
    t84 = xsi_base_array_concat(t84, t85, t86, (char)97, t70, t71, (char)97, t79, t87, (char)101);
    t91 = (12U + 6U);
    t92 = (t91 + 2U);
    t93 = (20U != t92);
    if (t93 == 1)
        goto LAB15;

LAB16:    t89 = (t0 + 8288);
    t94 = (t89 + 56U);
    t95 = *((char **)t94);
    t96 = (t95 + 56U);
    t97 = *((char **)t96);
    memcpy(t97, t84, 20U);
    xsi_driver_first_trans_fast_port(t89);

LAB2:    t98 = (t0 + 7792);
    *((int *)t98) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 13526);
    t12 = (t0 + 8288);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 20U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB2;

LAB5:    t23 = (t0 + 13550);
    t27 = (t0 + 2152U);
    t28 = *((char **)t27);
    t30 = ((IEEE_P_2592010699) + 4024);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 0;
    t33 = (t32 + 4U);
    *((int *)t33) = 11;
    t33 = (t32 + 8U);
    *((int *)t33) = 1;
    t34 = (11 - 0);
    t9 = (t34 * 1);
    t9 = (t9 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t9;
    t33 = (t0 + 13376U);
    t27 = xsi_base_array_concat(t27, t29, t30, (char)97, t23, t31, (char)97, t28, t33, (char)101);
    t9 = (12U + 8U);
    t35 = (20U != t9);
    if (t35 == 1)
        goto LAB7;

LAB8:    t36 = (t0 + 8288);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t27, 20U);
    xsi_driver_first_trans_fast_port(t36);
    goto LAB2;

LAB7:    xsi_size_not_matching(20U, t9, 0);
    goto LAB8;

LAB9:    t47 = (t0 + 13566);
    t52 = (t0 + 1992U);
    t53 = *((char **)t52);
    t55 = ((IEEE_P_2592010699) + 4024);
    t57 = (t56 + 0U);
    t58 = (t57 + 0U);
    *((int *)t58) = 0;
    t58 = (t57 + 4U);
    *((int *)t58) = 11;
    t58 = (t57 + 8U);
    *((int *)t58) = 1;
    t59 = (11 - 0);
    t49 = (t59 * 1);
    t49 = (t49 + 1);
    t58 = (t57 + 12U);
    *((unsigned int *)t58) = t49;
    t58 = (t0 + 13360U);
    t52 = xsi_base_array_concat(t52, t54, t55, (char)97, t47, t56, (char)97, t53, t58, (char)101);
    t49 = (12U + 8U);
    t60 = (20U != t49);
    if (t60 == 1)
        goto LAB11;

LAB12:    t61 = (t0 + 8288);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    memcpy(t65, t52, 20U);
    xsi_driver_first_trans_fast_port(t61);
    goto LAB2;

LAB11:    xsi_size_not_matching(20U, t49, 0);
    goto LAB12;

LAB14:    goto LAB2;

LAB15:    xsi_size_not_matching(20U, t92, 0);
    goto LAB16;

}

static void work_a_1877074815_3212880686_p_7(char *t0)
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

LAB0:    xsi_set_current_line(129, ng0);
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
LAB3:    t1 = (t0 + 7808);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 8352);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2632U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 8352);
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
    t10 = (t9 == (unsigned char)2);
    t3 = t10;
    goto LAB9;

}

static void work_a_1877074815_3212880686_p_8(char *t0)
{
    char t12[16];
    char t25[16];
    char t27[16];
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
    char *t28;
    char *t29;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6};

LAB0:    xsi_set_current_line(139, ng0);
    t1 = (t0 + 8416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(140, ng0);
    t1 = (t0 + 8480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(141, ng0);
    t1 = (t0 + 8544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 13596);
    t3 = (t0 + 8608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 2U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(144, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (t0 + 8672);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t8;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(146, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t8);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 7824);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(151, ng0);
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

LAB4:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 8416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(161, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB2;

LAB5:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 8480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(171, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB16;

LAB18:
LAB17:    goto LAB2;

LAB6:    xsi_set_current_line(198, ng0);
    t1 = (t0 + 8736);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(199, ng0);
    t1 = (t0 + 8800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(200, ng0);
    t1 = (t0 + 8864);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(202, ng0);
    t1 = (t0 + 13618);
    t3 = (t27 + 0U);
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
    t4 = (t0 + 3912U);
    t5 = *((char **)t4);
    t4 = (t0 + 13392U);
    t6 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t25, t1, t27, t5, t4);
    t7 = (t0 + 4072U);
    t13 = *((char **)t7);
    t7 = (t0 + 13392U);
    t14 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t12, t6, t25, t13, t7);
    t18 = (t12 + 12U);
    t16 = *((unsigned int *)t18);
    t22 = (1U * t16);
    t8 = (8U != t22);
    if (t8 == 1)
        goto LAB26;

LAB27:    t19 = (t0 + 8928);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t28 = (t21 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t14, 8U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(204, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB28;

LAB30:
LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(154, ng0);
    t14 = (t0 + 8672);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)1;
    xsi_driver_first_trans_fast(t14);
    goto LAB8;

LAB10:    t3 = (t0 + 3592U);
    t5 = *((char **)t3);
    t3 = (t0 + 13392U);
    t6 = (t0 + 13598);
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

LAB13:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 8416);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(164, ng0);
    t1 = (t0 + 8672);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(172, ng0);
    t1 = (t0 + 8480);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(174, ng0);
    t1 = (t0 + 3912U);
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
    t4 = (t0 + 13606);
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

LAB21:    t1 = (t0 + 3912U);
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
    t4 = (t0 + 13610);
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

LAB23:    t1 = (t0 + 3912U);
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
    t4 = (t0 + 13614);
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
LAB20:    xsi_set_current_line(191, ng0);
    t1 = (t0 + 8672);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    xsi_set_current_line(175, ng0);
    t7 = (t0 + 8736);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(176, ng0);
    t1 = (t0 + 13608);
    t3 = (t0 + 8608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 2U);
    xsi_driver_first_trans_fast(t3);
    goto LAB20;

LAB22:    xsi_set_current_line(178, ng0);
    t7 = (t0 + 8800);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(179, ng0);
    t1 = (t0 + 13612);
    t3 = (t0 + 8608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 2U);
    xsi_driver_first_trans_fast(t3);
    goto LAB20;

LAB24:    xsi_set_current_line(181, ng0);
    t7 = (t0 + 8864);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(182, ng0);
    t1 = (t0 + 13616);
    t3 = (t0 + 8608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 2U);
    xsi_driver_first_trans_fast(t3);
    goto LAB20;

LAB26:    xsi_size_not_matching(8U, t22, 0);
    goto LAB27;

LAB28:    xsi_set_current_line(207, ng0);
    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t1 = (t0 + 13392U);
    t4 = (t0 + 3592U);
    t5 = *((char **)t4);
    t4 = (t0 + 13392U);
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t5, t4);
    if (t10 != 0)
        goto LAB31;

LAB33:
LAB32:    goto LAB29;

LAB31:    xsi_set_current_line(208, ng0);
    t6 = (t0 + 8544);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(209, ng0);
    t1 = (t0 + 8672);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB32;

}


extern void work_a_1877074815_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1877074815_3212880686_p_0,(void *)work_a_1877074815_3212880686_p_1,(void *)work_a_1877074815_3212880686_p_2,(void *)work_a_1877074815_3212880686_p_3,(void *)work_a_1877074815_3212880686_p_4,(void *)work_a_1877074815_3212880686_p_5,(void *)work_a_1877074815_3212880686_p_6,(void *)work_a_1877074815_3212880686_p_7,(void *)work_a_1877074815_3212880686_p_8};
	xsi_register_didat("work_a_1877074815_3212880686", "isim/new_control_tb3_isim_beh.exe.sim/work/a_1877074815_3212880686.didat");
	xsi_register_executes(pe);
}
