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
static const char *ng0 = "C:/Cursos/IntroFpga/Practica1Procesos/kcpsm3_int_test.vhd";



static void work_a_2925719450_3212880686_p_0(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(103, ng0);

LAB3:    t1 = (t0 + 6035);
    t3 = (t0 + 3128);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2925719450_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(104, ng0);

LAB3:    t1 = (t0 + 3164);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2925719450_3212880686_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 844U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3076);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(114, ng0);
    t4 = (t0 + 1144U);
    t9 = *((char **)t4);
    t10 = (1 - 7);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t4 = (t9 + t13);
    t14 = *((unsigned char *)t4);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1144U);
    t4 = *((char **)t2);
    t10 = (2 - 7);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t2 = (t4 + t13);
    t3 = *((unsigned char *)t2);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t1 = (unsigned char)0;

LAB19:    if (t1 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB3;

LAB5:    t4 = (t0 + 868U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(115, ng0);
    t16 = (t0 + 1236U);
    t20 = *((char **)t16);
    t16 = (t0 + 3200);
    t21 = (t16 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    memcpy(t24, t20, 8U);
    xsi_driver_first_trans_fast_port(t16);
    goto LAB9;

LAB11:    t16 = (t0 + 1420U);
    t17 = *((char **)t16);
    t18 = *((unsigned char *)t17);
    t19 = (t18 == (unsigned char)3);
    t8 = t19;
    goto LAB13;

LAB14:    xsi_set_current_line(120, ng0);
    t5 = (t0 + 1236U);
    t16 = *((char **)t5);
    t5 = (t0 + 3236);
    t17 = (t5 + 32U);
    t20 = *((char **)t17);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t16, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB15;

LAB17:    t5 = (t0 + 1420U);
    t9 = *((char **)t5);
    t7 = *((unsigned char *)t9);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB19;

}

static void work_a_2925719450_3212880686_p_3(char *t0)
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

LAB0:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 844U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3084);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(137, ng0);
    t4 = (t0 + 1696U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 776U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 1604U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 3272);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 868U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(138, ng0);
    t4 = (t0 + 3272);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 3272);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}


extern void work_a_2925719450_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2925719450_3212880686_p_0,(void *)work_a_2925719450_3212880686_p_1,(void *)work_a_2925719450_3212880686_p_2,(void *)work_a_2925719450_3212880686_p_3};
	xsi_register_didat("work_a_2925719450_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_2925719450_3212880686.didat");
	xsi_register_executes(pe);
}
