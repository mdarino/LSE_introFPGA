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
static const char *ng0 = "C:/Cursos/IntroFpga/Practica05/testbench.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_0657343137_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    int64 t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1224U);
    t2 = *((char **)t1);
    t3 = *((int64 *)t2);
    t4 = (t3 / 2);
    t1 = (t0 + 592U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t6);
    t1 = (t0 + 2316);
    t8 = (t1 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_delta(t1, 0U, 1, t4);
    t12 = (t0 + 2316);
    xsi_driver_intertial_reject(t12, t4, t4);
    t1 = (t0 + 2264);
    *((int *)t1) = 1;

LAB1:    return;
}

static void work_a_0657343137_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    int64 t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1224U);
    t2 = *((char **)t1);
    t3 = *((int64 *)t2);
    t4 = (10 * t3);
    t1 = (t0 + 2352);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, t4);
    t9 = (t0 + 2352);
    xsi_driver_intertial_reject(t9, t4, t4);
    t1 = (t0 + 2272);
    *((int *)t1) = 1;

LAB1:    return;
}

static void work_a_0657343137_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    int64 t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 2068U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1224U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (5.5000000000000000 * t4);
    t2 = (t0 + 1968);
    xsi_process_wait(t2, t5);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t6 = *((unsigned char *)t3);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1224U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (5 * t4);
    t2 = (t0 + 1968);
    xsi_process_wait(t2, t5);

LAB13:    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 4108);
    xsi_report(t2, 27U, 0);
    goto LAB9;

LAB11:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4135);
    xsi_report(t2, 39U, 0);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4174);
    xsi_report(t2, 37U, 0);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t6 = *((unsigned char *)t3);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB15;

LAB17:
LAB16:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1224U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (30 * t4);
    t2 = (t0 + 1968);
    xsi_process_wait(t2, t5);

LAB20:    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB12:    goto LAB11;

LAB14:    goto LAB12;

LAB15:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4211);
    t9 = (t0 + 2388);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 8U);
    xsi_driver_first_trans_fast(t9);
    goto LAB16;

LAB18:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4219);
    t8 = (t0 + 2388);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1224U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (50 * t4);
    t2 = (t0 + 1968);
    xsi_process_wait(t2, t5);

LAB24:    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB19:    goto LAB18;

LAB21:    goto LAB19;

LAB22:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 960U);
    t3 = *((char **)t2);
    t2 = (t0 + 4052U);
    t8 = (t0 + 868U);
    t9 = *((char **)t8);
    t8 = (t0 + 4036U);
    t6 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t9, t8);
    if (t6 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 4253);
    xsi_report(t2, 33U, 0);

LAB27:    xsi_set_current_line(122, ng0);

LAB31:    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB23:    goto LAB22;

LAB25:    goto LAB23;

LAB26:    xsi_set_current_line(116, ng0);
    t10 = (t0 + 4227);
    xsi_report(t10, 26U, 0);
    goto LAB27;

LAB29:    goto LAB2;

LAB30:    goto LAB29;

LAB32:    goto LAB30;

}


extern void work_a_0657343137_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0657343137_2372691052_p_0,(void *)work_a_0657343137_2372691052_p_1,(void *)work_a_0657343137_2372691052_p_2};
	xsi_register_didat("work_a_0657343137_2372691052", "isim/testbench_vhd_isim_beh.exe.sim/work/a_0657343137_2372691052.didat");
	xsi_register_executes(pe);
}
