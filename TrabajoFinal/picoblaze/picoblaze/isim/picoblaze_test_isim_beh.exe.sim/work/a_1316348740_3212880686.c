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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Cursos/IntroFpga/TrabajoFinal/picoblaze/picoblaze/picoblaze.vhd";
extern char *IEEE_P_2592010699;



static void work_a_1316348740_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    int t13;
    char *t14;
    int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    int t24;
    int t25;
    char *t26;
    int t28;
    char *t29;
    int t31;
    char *t32;
    int t34;
    char *t35;
    int t37;
    char *t38;
    int t40;
    char *t41;
    int t43;
    char *t44;
    int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;

LAB0:    xsi_set_current_line(191, ng0);
    t1 = (t0 + 2800U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(201, ng0);
    t1 = (t0 + 2708U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB16;

LAB18:
LAB17:    t1 = (t0 + 6704);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(192, ng0);
    t1 = (t0 + 2432U);
    t5 = *((char **)t1);
    t1 = (t0 + 15140);
    t7 = xsi_mem_cmp(t1, t5, 8U);
    if (t7 == 1)
        goto LAB6;

LAB11:    t8 = (t0 + 15148);
    t10 = xsi_mem_cmp(t8, t5, 8U);
    if (t10 == 1)
        goto LAB7;

LAB12:    t11 = (t0 + 15156);
    t13 = xsi_mem_cmp(t11, t5, 8U);
    if (t13 == 1)
        goto LAB8;

LAB13:    t14 = (t0 + 15164);
    t16 = xsi_mem_cmp(t14, t5, 8U);
    if (t16 == 1)
        goto LAB9;

LAB14:
LAB10:    xsi_set_current_line(197, ng0);
    t1 = (t0 + 6800);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(193, ng0);
    t17 = (t0 + 3720U);
    t18 = *((char **)t17);
    t17 = (t0 + 6764);
    t19 = (t17 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t18, 8U);
    xsi_driver_first_trans_fast(t17);
    goto LAB5;

LAB7:    xsi_set_current_line(194, ng0);
    t1 = (t0 + 3812U);
    t2 = *((char **)t1);
    t1 = (t0 + 6764);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB8:    xsi_set_current_line(195, ng0);
    t1 = (t0 + 3904U);
    t2 = *((char **)t1);
    t1 = (t0 + 6764);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB9:    xsi_set_current_line(196, ng0);
    t1 = (t0 + 3996U);
    t2 = *((char **)t1);
    t1 = (t0 + 6764);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB15:;
LAB16:    xsi_set_current_line(202, ng0);
    t1 = (t0 + 2432U);
    t5 = *((char **)t1);
    t1 = (t0 + 15172);
    t7 = xsi_mem_cmp(t1, t5, 8U);
    if (t7 == 1)
        goto LAB20;

LAB35:    t8 = (t0 + 15180);
    t10 = xsi_mem_cmp(t8, t5, 8U);
    if (t10 == 1)
        goto LAB21;

LAB36:    t11 = (t0 + 15188);
    t13 = xsi_mem_cmp(t11, t5, 8U);
    if (t13 == 1)
        goto LAB22;

LAB37:    t14 = (t0 + 15196);
    t16 = xsi_mem_cmp(t14, t5, 8U);
    if (t16 == 1)
        goto LAB23;

LAB38:    t17 = (t0 + 15204);
    t23 = xsi_mem_cmp(t17, t5, 8U);
    if (t23 == 1)
        goto LAB24;

LAB39:    t19 = (t0 + 15212);
    t24 = xsi_mem_cmp(t19, t5, 8U);
    if (t24 == 1)
        goto LAB25;

LAB40:    t21 = (t0 + 15220);
    t25 = xsi_mem_cmp(t21, t5, 8U);
    if (t25 == 1)
        goto LAB26;

LAB41:    t26 = (t0 + 15228);
    t28 = xsi_mem_cmp(t26, t5, 8U);
    if (t28 == 1)
        goto LAB27;

LAB42:    t29 = (t0 + 15236);
    t31 = xsi_mem_cmp(t29, t5, 8U);
    if (t31 == 1)
        goto LAB28;

LAB43:    t32 = (t0 + 15244);
    t34 = xsi_mem_cmp(t32, t5, 8U);
    if (t34 == 1)
        goto LAB29;

LAB44:    t35 = (t0 + 15252);
    t37 = xsi_mem_cmp(t35, t5, 8U);
    if (t37 == 1)
        goto LAB30;

LAB45:    t38 = (t0 + 15260);
    t40 = xsi_mem_cmp(t38, t5, 8U);
    if (t40 == 1)
        goto LAB31;

LAB46:    t41 = (t0 + 15268);
    t43 = xsi_mem_cmp(t41, t5, 8U);
    if (t43 == 1)
        goto LAB32;

LAB47:    t44 = (t0 + 15276);
    t46 = xsi_mem_cmp(t44, t5, 8U);
    if (t46 == 1)
        goto LAB33;

LAB48:
LAB34:    xsi_set_current_line(217, ng0);
    t1 = (t0 + 6800);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(203, ng0);
    t47 = (t0 + 2524U);
    t48 = *((char **)t47);
    t47 = (t0 + 6836);
    t49 = (t47 + 32U);
    t50 = *((char **)t49);
    t51 = (t50 + 40U);
    t52 = *((char **)t51);
    memcpy(t52, t48, 8U);
    xsi_driver_first_trans_fast(t47);
    goto LAB19;

LAB21:    xsi_set_current_line(204, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t1 = (t0 + 6872);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB22:    xsi_set_current_line(205, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t1 = (t0 + 6908);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB23:    xsi_set_current_line(206, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t1 = (t0 + 6944);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB24:    xsi_set_current_line(207, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t1 = (t0 + 6980);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB25:    xsi_set_current_line(208, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t1 = (t0 + 7016);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB26:    xsi_set_current_line(209, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t1 = (t0 + 7052);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB27:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t1 = (t0 + 7088);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB28:    xsi_set_current_line(211, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t1 = (t0 + 7124);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB29:    xsi_set_current_line(212, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t1 = (t0 + 7160);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB30:    xsi_set_current_line(213, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t1 = (t0 + 7196);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB31:    xsi_set_current_line(214, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t1 = (t0 + 7232);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB32:    xsi_set_current_line(215, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t1 = (t0 + 7268);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB33:    xsi_set_current_line(216, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t1 = (t0 + 7304);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB49:;
}

static void work_a_1316348740_3212880686_p_1(char *t0)
{
    char t4[16];
    char t10[16];
    char t15[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;

LAB0:    xsi_set_current_line(226, ng0);
    t1 = (t0 + 4456U);
    t2 = *((char **)t1);
    t1 = (t0 + 4548U);
    t3 = *((char **)t1);
    t5 = ((IEEE_P_2592010699) + 2332);
    t6 = (t0 + 14764U);
    t7 = (t0 + 14764U);
    t1 = xsi_base_array_concat(t1, t4, t5, (char)97, t2, t6, (char)97, t3, t7, (char)101);
    t8 = (t0 + 4640U);
    t9 = *((char **)t8);
    t11 = ((IEEE_P_2592010699) + 2332);
    t12 = (t0 + 14764U);
    t8 = xsi_base_array_concat(t8, t10, t11, (char)97, t1, t4, (char)97, t9, t12, (char)101);
    t13 = (t0 + 4732U);
    t14 = *((char **)t13);
    t16 = ((IEEE_P_2592010699) + 2332);
    t17 = (t0 + 14764U);
    t13 = xsi_base_array_concat(t13, t15, t16, (char)97, t8, t10, (char)97, t14, t17, (char)101);
    t18 = (8U + 8U);
    t19 = (t18 + 8U);
    t20 = (t19 + 8U);
    t21 = (32U != t20);
    if (t21 == 1)
        goto LAB2;

LAB3:    t22 = (t0 + 7340);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t13, 32U);
    xsi_driver_first_trans_fast(t22);
    xsi_set_current_line(227, ng0);
    t1 = (t0 + 4824U);
    t2 = *((char **)t1);
    t1 = (t0 + 4916U);
    t3 = *((char **)t1);
    t5 = ((IEEE_P_2592010699) + 2332);
    t6 = (t0 + 14780U);
    t7 = (t0 + 14780U);
    t1 = xsi_base_array_concat(t1, t4, t5, (char)97, t2, t6, (char)97, t3, t7, (char)101);
    t8 = (t0 + 5008U);
    t9 = *((char **)t8);
    t11 = ((IEEE_P_2592010699) + 2332);
    t12 = (t0 + 14780U);
    t8 = xsi_base_array_concat(t8, t10, t11, (char)97, t1, t4, (char)97, t9, t12, (char)101);
    t13 = (t0 + 5100U);
    t14 = *((char **)t13);
    t16 = ((IEEE_P_2592010699) + 2332);
    t17 = (t0 + 14780U);
    t13 = xsi_base_array_concat(t13, t15, t16, (char)97, t8, t10, (char)97, t14, t17, (char)101);
    t18 = (8U + 8U);
    t19 = (t18 + 8U);
    t20 = (t19 + 8U);
    t21 = (32U != t20);
    if (t21 == 1)
        goto LAB4;

LAB5:    t22 = (t0 + 7376);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t13, 32U);
    xsi_driver_first_trans_fast(t22);
    xsi_set_current_line(229, ng0);
    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t27 = (0 - 7);
    t18 = (t27 * -1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t1 = (t2 + t20);
    t21 = *((unsigned char *)t1);
    t3 = (t0 + 7412);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t21;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(231, ng0);
    t1 = (t0 + 5284U);
    t2 = *((char **)t1);
    t27 = (0 - 7);
    t18 = (t27 * -1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t1 = (t2 + t20);
    t21 = *((unsigned char *)t1);
    t3 = (t0 + 7448);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t21;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(235, ng0);
    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t1 = (t0 + 7484);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(237, ng0);
    t1 = (t0 + 4456U);
    t2 = *((char **)t1);
    t1 = (t0 + 7520);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(238, ng0);
    t1 = (t0 + 4548U);
    t2 = *((char **)t1);
    t1 = (t0 + 7556);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(239, ng0);
    t1 = (t0 + 4640U);
    t2 = *((char **)t1);
    t1 = (t0 + 7592);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(240, ng0);
    t1 = (t0 + 4732U);
    t2 = *((char **)t1);
    t1 = (t0 + 7628);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(242, ng0);
    t1 = (t0 + 4824U);
    t2 = *((char **)t1);
    t1 = (t0 + 7664);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(243, ng0);
    t1 = (t0 + 4916U);
    t2 = *((char **)t1);
    t1 = (t0 + 7700);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(244, ng0);
    t1 = (t0 + 5008U);
    t2 = *((char **)t1);
    t1 = (t0 + 7736);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(245, ng0);
    t1 = (t0 + 5100U);
    t2 = *((char **)t1);
    t1 = (t0 + 7772);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(247, ng0);
    t1 = (t0 + 3720U);
    t2 = *((char **)t1);
    t1 = (t0 + 7808);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(248, ng0);
    t1 = (t0 + 3812U);
    t2 = *((char **)t1);
    t1 = (t0 + 7844);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(249, ng0);
    t1 = (t0 + 3904U);
    t2 = *((char **)t1);
    t1 = (t0 + 7880);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(250, ng0);
    t1 = (t0 + 3996U);
    t2 = *((char **)t1);
    t1 = (t0 + 7916);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(252, ng0);
    t1 = (t0 + 4088U);
    t2 = *((char **)t1);
    t1 = (t0 + 7952);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(253, ng0);
    t1 = (t0 + 4180U);
    t2 = *((char **)t1);
    t1 = (t0 + 7988);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(254, ng0);
    t1 = (t0 + 4272U);
    t2 = *((char **)t1);
    t1 = (t0 + 8024);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(255, ng0);
    t1 = (t0 + 4364U);
    t2 = *((char **)t1);
    t1 = (t0 + 8060);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 6712);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(32U, t20, 0);
    goto LAB3;

LAB4:    xsi_size_not_matching(32U, t20, 0);
    goto LAB5;

}

static void work_a_1316348740_3212880686_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;

LAB0:    xsi_set_current_line(265, ng0);
    t2 = (t0 + 2132U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 6720);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(266, ng0);
    t4 = (t0 + 2984U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 3628U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(280, ng0);
    t2 = (t0 + 2892U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 8096);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    xsi_set_current_line(283, ng0);
    t2 = (t0 + 3628U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB16;

LAB18:
LAB17:    goto LAB3;

LAB5:    t4 = (t0 + 2156U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(267, ng0);
    t4 = (t0 + 8096);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(271, ng0);
    t2 = (t0 + 8132);
    t8 = (t2 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(273, ng0);
    t2 = (t0 + 8096);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(275, ng0);
    t2 = (t0 + 3444U);
    t4 = *((char **)t2);
    t15 = (31 - 31);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 8168);
    t8 = (t5 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(276, ng0);
    t2 = (t0 + 3444U);
    t4 = *((char **)t2);
    t15 = (31 - 23);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 8204);
    t8 = (t5 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(277, ng0);
    t2 = (t0 + 3444U);
    t4 = *((char **)t2);
    t15 = (31 - 15);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 8240);
    t8 = (t5 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(278, ng0);
    t2 = (t0 + 3444U);
    t4 = *((char **)t2);
    t15 = (31 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 8276);
    t8 = (t5 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

LAB13:    t2 = (t0 + 5468U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB15;

LAB16:    xsi_set_current_line(285, ng0);
    t2 = (t0 + 8132);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB17;

}


extern void work_a_1316348740_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1316348740_3212880686_p_0,(void *)work_a_1316348740_3212880686_p_1,(void *)work_a_1316348740_3212880686_p_2};
	xsi_register_didat("work_a_1316348740_3212880686", "isim/picoblaze_test_isim_beh.exe.sim/work/a_1316348740_3212880686.didat");
	xsi_register_executes(pe);
}
