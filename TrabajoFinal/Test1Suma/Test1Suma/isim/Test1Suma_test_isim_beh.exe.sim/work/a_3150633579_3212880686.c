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
static const char *ng0 = "C:/Cursos/IntroFpga/TrabajoFinal/Test1Suma/Test1Suma/Test1Suma.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
extern char *WORK_P_0453171477;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);


static void work_a_3150633579_3212880686_p_0(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    int t12;
    unsigned int t13;
    int t14;
    int t15;
    unsigned char t16;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t4 = ((IEEE_P_2592010699) + 2332);
    t5 = (t0 + 3736U);
    t1 = xsi_base_array_concat(t1, t3, t4, (char)99, (unsigned char)2, (char)97, t2, t5, (char)101);
    t6 = (t0 + 1200U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t8 = (1U + 7U);
    memcpy(t6, t1, t8);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t4 = ((IEEE_P_2592010699) + 2332);
    t5 = (t0 + 3752U);
    t1 = xsi_base_array_concat(t1, t3, t4, (char)99, (unsigned char)2, (char)97, t2, t5, (char)101);
    t6 = (t0 + 1268U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t8 = (1U + 7U);
    memcpy(t6, t1, t8);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1200U);
    t2 = *((char **)t1);
    t1 = (t0 + 3800U);
    t4 = (t0 + 1268U);
    t5 = *((char **)t4);
    t4 = (t0 + 3816U);
    t6 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t3, t2, t1, t5, t4);
    t7 = (t0 + 1132U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    t10 = (t3 + 12U);
    t8 = *((unsigned int *)t10);
    t11 = (1U * t8);
    memcpy(t7, t6, t11);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1132U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0453171477) + 876U);
    t4 = *((char **)t1);
    t12 = *((int *)t4);
    t8 = (7 - t12);
    t11 = (t8 * 1U);
    t13 = (0 + t11);
    t1 = (t2 + t13);
    t5 = (t0 + 2064);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1132U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0453171477) + 876U);
    t4 = *((char **)t1);
    t12 = *((int *)t4);
    t14 = (t12 + 1);
    t15 = (t14 - 7);
    t8 = (t15 * -1);
    t11 = (1U * t8);
    t13 = (0 + t11);
    t1 = (t2 + t13);
    t16 = *((unsigned char *)t1);
    t5 = (t0 + 2100);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t16;
    xsi_driver_first_trans_fast_port(t5);
    t1 = (t0 + 2020);
    *((int *)t1) = 1;

LAB1:    return;
}


extern void work_a_3150633579_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3150633579_3212880686_p_0};
	xsi_register_didat("work_a_3150633579_3212880686", "isim/Test1Suma_test_isim_beh.exe.sim/work/a_3150633579_3212880686.didat");
	xsi_register_executes(pe);
}
