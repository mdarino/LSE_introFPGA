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
static const char *ng0 = "C:/Cursos/IntroFpga/TrabajoFinal/picoblaze/picoblaze/FloatPointALU.vhd";
extern char *WORK_P_0453171477;
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1547270861_1035706684(char *, char *, char *, char *, char *, char *);
int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);


static void work_a_0136107771_3212880686_p_0(char *t0)
{
    char t19[16];
    char t21[16];
    char t35[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t22;
    char *t23;
    unsigned int t24;
    char *t25;
    int t26;
    int t27;
    int t28;
    int t29;
    unsigned char t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;

LAB0:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(87, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)3, 8U);
    t5 = (t0 + 2088U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 8U);
    xsi_set_current_line(89, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 2156U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 32U);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0453171477) + 808U);
    t5 = *((char **)t1);
    t9 = *((int *)t5);
    t10 = (t9 - 31);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t3 = *((unsigned char *)t1);
    t6 = (t0 + 1408U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = t3;
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0453171477) + 808U);
    t5 = *((char **)t1);
    t9 = *((int *)t5);
    t10 = (t9 - 31);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t3 = *((unsigned char *)t1);
    t6 = (t0 + 1476U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = t3;
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0453171477) + 808U);
    t5 = *((char **)t1);
    t9 = *((int *)t5);
    t10 = (t9 - 1);
    t11 = (31 - t10);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t6 = (t0 + 1544U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t1, 8U);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0453171477) + 808U);
    t5 = *((char **)t1);
    t9 = *((int *)t5);
    t10 = (t9 - 1);
    t11 = (31 - t10);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t6 = (t0 + 1612U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t1, 8U);
    xsi_set_current_line(102, ng0);
    t1 = xsi_get_transient_memory(67U);
    memset(t1, 0, 67U);
    t2 = t1;
    memset(t2, (unsigned char)2, 67U);
    t5 = (t0 + 1680U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 67U);
    xsi_set_current_line(103, ng0);
    t1 = xsi_get_transient_memory(67U);
    memset(t1, 0, 67U);
    t2 = t1;
    memset(t2, (unsigned char)2, 67U);
    t5 = (t0 + 1748U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 67U);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 2156U);
    t5 = *((char **)t1);
    t1 = ((IEEE_P_2592010699) + 2332);
    t4 = xsi_vhdl_greater(t1, t2, 32U, t5, 32U);
    if (t4 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = (t0 + 2156U);
    t5 = *((char **)t1);
    t1 = ((IEEE_P_2592010699) + 2332);
    t4 = xsi_vhdl_greater(t1, t2, 32U, t5, 32U);
    if (t4 == 1)
        goto LAB14;

LAB15:    t3 = (unsigned char)0;

LAB16:    if (t3 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 1544U);
    t2 = *((char **)t1);
    t1 = (t0 + 1612U);
    t5 = *((char **)t1);
    t1 = ((IEEE_P_2592010699) + 2332);
    t3 = xsi_vhdl_greater(t1, t2, 8U, t5, 8U);
    if (t3 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 2224U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 2292U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 1612U);
    t2 = *((char **)t1);
    t1 = (t0 + 6332U);
    t5 = (t0 + 1544U);
    t6 = *((char **)t5);
    t5 = (t0 + 6316U);
    t7 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t19, t2, t1, t6, t5);
    t9 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t19);
    t8 = (t0 + 2360U);
    t15 = *((char **)t8);
    t8 = (t15 + 0);
    *((int *)t8) = t9;
    xsi_set_current_line(141, ng0);
    t1 = (t0 + 2360U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t10 = (t9 - 1);
    t1 = (t0 + 6852);
    *((int *)t1) = 0;
    t5 = (t0 + 6856);
    *((int *)t5) = t10;
    t26 = 0;
    t27 = t10;

LAB25:    if (t26 <= t27)
        goto LAB26;

LAB28:
LAB18:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 1544U);
    t2 = *((char **)t1);
    t1 = (t0 + 1612U);
    t5 = *((char **)t1);
    t3 = 1;
    if (8U == 8U)
        goto LAB33;

LAB34:    t3 = 0;

LAB35:    if (t3 != 0)
        goto LAB30;

LAB32:
LAB31:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 2224U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB42;

LAB44:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 1612U);
    t2 = *((char **)t1);
    t1 = (t0 + 2020U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    memcpy(t1, t2, 8U);

LAB43:    xsi_set_current_line(168, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB45;

LAB47:
LAB46:    xsi_set_current_line(172, ng0);
    t1 = (t0 + 1408U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1476U);
    t5 = *((char **)t1);
    t4 = *((unsigned char *)t5);
    t14 = (t3 == t4);
    if (t14 != 0)
        goto LAB48;

LAB50:    xsi_set_current_line(175, ng0);
    t1 = (t0 + 2292U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB51;

LAB53:    xsi_set_current_line(178, ng0);
    t1 = (t0 + 1476U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1952U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((unsigned char *)t1) = t3;

LAB52:
LAB49:    xsi_set_current_line(187, ng0);
    t1 = (t0 + 1680U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0453171477) + 944U);
    t5 = *((char **)t1);
    t9 = *((int *)t5);
    t11 = (66 - t9);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t7 = ((IEEE_P_2592010699) + 2332);
    t8 = (t21 + 0U);
    t15 = (t8 + 0U);
    *((int *)t15) = 66;
    t15 = (t8 + 4U);
    *((int *)t15) = 1;
    t15 = (t8 + 8U);
    *((int *)t15) = -1;
    t10 = (1 - 66);
    t24 = (t10 * -1);
    t24 = (t24 + 1);
    t15 = (t8 + 12U);
    *((unsigned int *)t15) = t24;
    t6 = xsi_base_array_concat(t6, t19, t7, (char)99, (unsigned char)2, (char)97, t1, t21, (char)101);
    t15 = (t0 + 1680U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    t24 = (1U + 66U);
    memcpy(t15, t6, t24);
    xsi_set_current_line(188, ng0);
    t1 = (t0 + 1748U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0453171477) + 944U);
    t5 = *((char **)t1);
    t9 = *((int *)t5);
    t11 = (66 - t9);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t7 = ((IEEE_P_2592010699) + 2332);
    t8 = (t21 + 0U);
    t15 = (t8 + 0U);
    *((int *)t15) = 66;
    t15 = (t8 + 4U);
    *((int *)t15) = 1;
    t15 = (t8 + 8U);
    *((int *)t15) = -1;
    t10 = (1 - 66);
    t24 = (t10 * -1);
    t24 = (t24 + 1);
    t15 = (t8 + 12U);
    *((unsigned int *)t15) = t24;
    t6 = xsi_base_array_concat(t6, t19, t7, (char)99, (unsigned char)2, (char)97, t1, t21, (char)101);
    t15 = (t0 + 1748U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    t24 = (1U + 66U);
    memcpy(t15, t6, t24);
    xsi_set_current_line(193, ng0);
    t1 = (t0 + 1408U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1476U);
    t5 = *((char **)t1);
    t4 = *((unsigned char *)t5);
    t14 = (t3 == t4);
    if (t14 != 0)
        goto LAB54;

LAB56:    xsi_set_current_line(206, ng0);
    t1 = (t0 + 2292U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB63;

LAB65:
LAB64:    xsi_set_current_line(216, ng0);

LAB66:    t1 = (t0 + 1816U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0453171477) + 944U);
    t5 = *((char **)t1);
    t9 = *((int *)t5);
    t10 = (t9 - 1);
    t26 = (t10 - 66);
    t11 = (t26 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t4 = *((unsigned char *)t1);
    t14 = (t4 == (unsigned char)2);
    if (t14 == 1)
        goto LAB70;

LAB71:    t3 = (unsigned char)0;

LAB72:    if (t3 != 0)
        goto LAB67;

LAB69:
LAB55:    xsi_set_current_line(225, ng0);
    t1 = (t0 + 2020U);
    t2 = *((char **)t1);
    t1 = (t0 + 2088U);
    t5 = *((char **)t1);
    t3 = 1;
    if (8U == 8U)
        goto LAB76;

LAB77:    t3 = 0;

LAB78:    if (t3 != 0)
        goto LAB73;

LAB75:
LAB74:    xsi_set_current_line(230, ng0);
    t1 = (t0 + 1952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2020U);
    t5 = *((char **)t1);
    t6 = ((IEEE_P_2592010699) + 2332);
    t7 = (t0 + 6412U);
    t1 = xsi_base_array_concat(t1, t19, t6, (char)99, t3, (char)97, t5, t7, (char)101);
    t8 = (t0 + 1816U);
    t15 = *((char **)t8);
    t8 = ((WORK_P_0453171477) + 944U);
    t16 = *((char **)t8);
    t9 = *((int *)t16);
    t10 = (t9 - 2);
    t11 = (66 - t10);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t8 = (t15 + t13);
    t18 = ((IEEE_P_2592010699) + 2332);
    t20 = (t35 + 0U);
    t22 = (t20 + 0U);
    *((int *)t22) = 64;
    t22 = (t20 + 4U);
    *((int *)t22) = 0;
    t22 = (t20 + 8U);
    *((int *)t22) = -1;
    t26 = (0 - 64);
    t24 = (t26 * -1);
    t24 = (t24 + 1);
    t22 = (t20 + 12U);
    *((unsigned int *)t22) = t24;
    t17 = xsi_base_array_concat(t17, t21, t18, (char)97, t1, t19, (char)97, t8, t35, (char)101);
    t22 = (t0 + 1884U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    t24 = (1U + 8U);
    t31 = (t24 + 65U);
    memcpy(t22, t17, t31);
    xsi_set_current_line(235, ng0);
    t1 = (t0 + 1884U);
    t2 = *((char **)t1);
    t1 = (t0 + 3192);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(237, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB82;

LAB84:
LAB83:    t1 = (t0 + 3112);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 3156);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(108, ng0);
    t15 = (t0 + 592U);
    t16 = *((char **)t15);
    t15 = ((WORK_P_0453171477) + 740U);
    t17 = *((char **)t15);
    t9 = *((int *)t17);
    t11 = (31 - t9);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t15 = (t16 + t13);
    t20 = ((IEEE_P_2592010699) + 2332);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 22;
    t23 = (t22 + 4U);
    *((int *)t23) = 0;
    t23 = (t22 + 8U);
    *((int *)t23) = -1;
    t10 = (0 - 22);
    t24 = (t10 * -1);
    t24 = (t24 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t24;
    t18 = xsi_base_array_concat(t18, t19, t20, (char)99, (unsigned char)3, (char)97, t15, t21, (char)101);
    t23 = (t0 + 1680U);
    t25 = *((char **)t23);
    t23 = (t25 + 0);
    t24 = (1U + 23U);
    memcpy(t23, t18, t24);
    goto LAB6;

LAB8:    t6 = (t0 + 1544U);
    t7 = *((char **)t6);
    t6 = (t0 + 2156U);
    t8 = *((char **)t6);
    t6 = ((IEEE_P_2592010699) + 2332);
    t14 = xsi_vhdl_greater(t6, t7, 8U, t8, 32U);
    t3 = t14;
    goto LAB10;

LAB11:    xsi_set_current_line(111, ng0);
    t15 = (t0 + 684U);
    t16 = *((char **)t15);
    t15 = ((WORK_P_0453171477) + 740U);
    t17 = *((char **)t15);
    t9 = *((int *)t17);
    t11 = (31 - t9);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t15 = (t16 + t13);
    t20 = ((IEEE_P_2592010699) + 2332);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 22;
    t23 = (t22 + 4U);
    *((int *)t23) = 0;
    t23 = (t22 + 8U);
    *((int *)t23) = -1;
    t10 = (0 - 22);
    t24 = (t10 * -1);
    t24 = (t24 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t24;
    t18 = xsi_base_array_concat(t18, t19, t20, (char)99, (unsigned char)3, (char)97, t15, t21, (char)101);
    t23 = (t0 + 1748U);
    t25 = *((char **)t23);
    t23 = (t25 + 0);
    t24 = (1U + 23U);
    memcpy(t23, t18, t24);
    goto LAB12;

LAB14:    t6 = (t0 + 1612U);
    t7 = *((char **)t6);
    t6 = (t0 + 2156U);
    t8 = *((char **)t6);
    t6 = ((IEEE_P_2592010699) + 2332);
    t14 = xsi_vhdl_greater(t6, t7, 8U, t8, 32U);
    t3 = t14;
    goto LAB16;

LAB17:    xsi_set_current_line(125, ng0);
    t6 = (t0 + 2224U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 2292U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 1544U);
    t2 = *((char **)t1);
    t1 = (t0 + 6316U);
    t5 = (t0 + 1612U);
    t6 = *((char **)t5);
    t5 = (t0 + 6332U);
    t7 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t19, t2, t1, t6, t5);
    t9 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t19);
    t8 = (t0 + 2360U);
    t15 = *((char **)t8);
    t8 = (t15 + 0);
    *((int *)t8) = t9;
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 2360U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t10 = (t9 - 1);
    t1 = (t0 + 6844);
    *((int *)t1) = 0;
    t5 = (t0 + 6848);
    *((int *)t5) = t10;
    t26 = 0;
    t27 = t10;

LAB20:    if (t26 <= t27)
        goto LAB21;

LAB23:    goto LAB18;

LAB21:    xsi_set_current_line(131, ng0);
    t6 = (t0 + 1748U);
    t7 = *((char **)t6);
    t6 = ((WORK_P_0453171477) + 944U);
    t8 = *((char **)t6);
    t28 = *((int *)t8);
    t11 = (66 - t28);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t6 = (t7 + t13);
    t16 = ((IEEE_P_2592010699) + 2332);
    t17 = (t21 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 66;
    t18 = (t17 + 4U);
    *((int *)t18) = 1;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t29 = (1 - 66);
    t24 = (t29 * -1);
    t24 = (t24 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t24;
    t15 = xsi_base_array_concat(t15, t19, t16, (char)99, (unsigned char)2, (char)97, t6, t21, (char)101);
    t18 = (t0 + 1748U);
    t20 = *((char **)t18);
    t18 = (t20 + 0);
    t24 = (1U + 66U);
    memcpy(t18, t15, t24);

LAB22:    t1 = (t0 + 6844);
    t26 = *((int *)t1);
    t2 = (t0 + 6848);
    t27 = *((int *)t2);
    if (t26 == t27)
        goto LAB23;

LAB24:    t9 = (t26 + 1);
    t26 = t9;
    t5 = (t0 + 6844);
    *((int *)t5) = t26;
    goto LAB20;

LAB26:    xsi_set_current_line(142, ng0);
    t6 = (t0 + 1680U);
    t7 = *((char **)t6);
    t6 = ((WORK_P_0453171477) + 944U);
    t8 = *((char **)t6);
    t28 = *((int *)t8);
    t11 = (66 - t28);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t6 = (t7 + t13);
    t16 = ((IEEE_P_2592010699) + 2332);
    t17 = (t21 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 66;
    t18 = (t17 + 4U);
    *((int *)t18) = 1;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t29 = (1 - 66);
    t24 = (t29 * -1);
    t24 = (t24 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t24;
    t15 = xsi_base_array_concat(t15, t19, t16, (char)99, (unsigned char)2, (char)97, t6, t21, (char)101);
    t18 = (t0 + 1680U);
    t20 = *((char **)t18);
    t18 = (t20 + 0);
    t24 = (1U + 66U);
    memcpy(t18, t15, t24);

LAB27:    t1 = (t0 + 6852);
    t26 = *((int *)t1);
    t2 = (t0 + 6856);
    t27 = *((int *)t2);
    if (t26 == t27)
        goto LAB28;

LAB29:    t9 = (t26 + 1);
    t26 = t9;
    t5 = (t0 + 6852);
    *((int *)t5) = t26;
    goto LAB25;

LAB30:    xsi_set_current_line(149, ng0);
    t7 = (t0 + 1680U);
    t8 = *((char **)t7);
    t7 = (t0 + 1748U);
    t15 = *((char **)t7);
    t7 = ((IEEE_P_2592010699) + 2332);
    t4 = xsi_vhdl_greater(t7, t8, 67U, t15, 67U);
    if (t4 != 0)
        goto LAB39;

LAB41:    xsi_set_current_line(152, ng0);
    t1 = (t0 + 2292U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;

LAB40:    goto LAB31;

LAB33:    t11 = 0;

LAB36:    if (t11 < 8U)
        goto LAB37;
    else
        goto LAB35;

LAB37:    t1 = (t2 + t11);
    t6 = (t5 + t11);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB34;

LAB38:    t11 = (t11 + 1);
    goto LAB36;

LAB39:    xsi_set_current_line(150, ng0);
    t16 = (t0 + 2292U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    *((unsigned char *)t16) = (unsigned char)3;
    goto LAB40;

LAB42:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 1544U);
    t5 = *((char **)t1);
    t1 = (t0 + 2020U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    memcpy(t1, t5, 8U);
    goto LAB43;

LAB45:    xsi_set_current_line(169, ng0);
    t1 = (t0 + 1476U);
    t5 = *((char **)t1);
    t14 = *((unsigned char *)t5);
    t30 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t14);
    t1 = (t0 + 1476U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((unsigned char *)t1) = t30;
    goto LAB46;

LAB48:    xsi_set_current_line(173, ng0);
    t1 = (t0 + 1408U);
    t6 = *((char **)t1);
    t30 = *((unsigned char *)t6);
    t1 = (t0 + 1952U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    *((unsigned char *)t1) = t30;
    goto LAB49;

LAB51:    xsi_set_current_line(176, ng0);
    t1 = (t0 + 1408U);
    t5 = *((char **)t1);
    t14 = *((unsigned char *)t5);
    t1 = (t0 + 1952U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((unsigned char *)t1) = t14;
    goto LAB52;

LAB54:    xsi_set_current_line(196, ng0);
    t1 = (t0 + 1680U);
    t6 = *((char **)t1);
    t1 = (t0 + 6348U);
    t7 = (t0 + 1748U);
    t8 = *((char **)t7);
    t7 = (t0 + 6364U);
    t15 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t19, t6, t1, t8, t7);
    t16 = (t0 + 1816U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    t18 = (t19 + 12U);
    t11 = *((unsigned int *)t18);
    t12 = (1U * t11);
    memcpy(t16, t15, t12);
    xsi_set_current_line(198, ng0);
    t1 = (t0 + 1816U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0453171477) + 944U);
    t5 = *((char **)t1);
    t9 = *((int *)t5);
    t10 = (t9 - 66);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB57;

LAB59:
LAB58:    goto LAB55;

LAB57:    xsi_set_current_line(199, ng0);
    t6 = (t0 + 2020U);
    t7 = *((char **)t6);
    t6 = (t0 + 2088U);
    t8 = *((char **)t6);
    t6 = ((IEEE_P_2592010699) + 2332);
    t14 = xsi_vhdl_lessthan(t6, t7, 8U, t8, 8U);
    if (t14 != 0)
        goto LAB60;

LAB62:
LAB61:    goto LAB58;

LAB60:    xsi_set_current_line(200, ng0);
    t15 = (t0 + 2020U);
    t16 = *((char **)t15);
    t15 = (t0 + 6412U);
    t17 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t19, t16, t15, 1);
    t18 = (t0 + 2020U);
    t20 = *((char **)t18);
    t18 = (t20 + 0);
    t22 = (t19 + 12U);
    t24 = *((unsigned int *)t22);
    t31 = (1U * t24);
    memcpy(t18, t17, t31);
    xsi_set_current_line(201, ng0);
    t1 = (t0 + 1816U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0453171477) + 944U);
    t5 = *((char **)t1);
    t9 = *((int *)t5);
    t11 = (66 - t9);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t7 = ((IEEE_P_2592010699) + 2332);
    t8 = (t21 + 0U);
    t15 = (t8 + 0U);
    *((int *)t15) = 66;
    t15 = (t8 + 4U);
    *((int *)t15) = 1;
    t15 = (t8 + 8U);
    *((int *)t15) = -1;
    t10 = (1 - 66);
    t24 = (t10 * -1);
    t24 = (t24 + 1);
    t15 = (t8 + 12U);
    *((unsigned int *)t15) = t24;
    t6 = xsi_base_array_concat(t6, t19, t7, (char)99, (unsigned char)3, (char)97, t1, t21, (char)101);
    t15 = (t0 + 1816U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    t24 = (1U + 66U);
    memcpy(t15, t6, t24);
    goto LAB61;

LAB63:    xsi_set_current_line(208, ng0);
    t1 = (t0 + 1748U);
    t5 = *((char **)t1);
    t1 = (t0 + 6364U);
    t6 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t19, t5, t1);
    t7 = (t0 + 1748U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    t15 = (t19 + 12U);
    t11 = *((unsigned int *)t15);
    t12 = (1U * t11);
    memcpy(t7, t6, t12);
    xsi_set_current_line(209, ng0);
    t1 = (t0 + 1748U);
    t2 = *((char **)t1);
    t1 = (t0 + 6364U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t19, t2, t1, 1);
    t6 = (t0 + 1748U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t8 = (t19 + 12U);
    t11 = *((unsigned int *)t8);
    t12 = (1U * t11);
    memcpy(t6, t5, t12);
    xsi_set_current_line(210, ng0);
    t1 = (t0 + 1680U);
    t2 = *((char **)t1);
    t1 = (t0 + 6348U);
    t5 = (t0 + 1748U);
    t6 = *((char **)t5);
    t5 = (t0 + 6364U);
    t7 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t21, t2, t1, t6, t5);
    t8 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t19, t7, t21, 1);
    t15 = (t0 + 1816U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    t17 = (t19 + 12U);
    t11 = *((unsigned int *)t17);
    t12 = (1U * t11);
    memcpy(t15, t8, t12);
    goto LAB64;

LAB67:    xsi_set_current_line(217, ng0);
    t18 = (t0 + 2020U);
    t20 = *((char **)t18);
    t18 = (t0 + 6412U);
    t22 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t21, t20, t18, 1);
    t23 = (t0 + 2020U);
    t25 = *((char **)t23);
    t23 = (t25 + 0);
    t32 = (t21 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (1U * t33);
    memcpy(t23, t22, t34);
    xsi_set_current_line(218, ng0);
    t1 = (t0 + 1816U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0453171477) + 944U);
    t5 = *((char **)t1);
    t9 = *((int *)t5);
    t10 = (t9 - 1);
    t11 = (66 - t10);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t7 = ((IEEE_P_2592010699) + 2332);
    t8 = (t21 + 0U);
    t15 = (t8 + 0U);
    *((int *)t15) = 65;
    t15 = (t8 + 4U);
    *((int *)t15) = 0;
    t15 = (t8 + 8U);
    *((int *)t15) = -1;
    t26 = (0 - 65);
    t24 = (t26 * -1);
    t24 = (t24 + 1);
    t15 = (t8 + 12U);
    *((unsigned int *)t15) = t24;
    t6 = xsi_base_array_concat(t6, t19, t7, (char)97, t1, t21, (char)99, (unsigned char)2, (char)101);
    t15 = (t0 + 1816U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    t24 = (66U + 1U);
    memcpy(t15, t6, t24);
    goto LAB66;

LAB68:;
LAB70:    t6 = (t0 + 2020U);
    t7 = *((char **)t6);
    t6 = (t0 + 2088U);
    t8 = *((char **)t6);
    t6 = (t0 + 6428U);
    t15 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t19, t8, t6);
    t16 = (t19 + 12U);
    t24 = *((unsigned int *)t16);
    t31 = (1U * t24);
    t17 = ((IEEE_P_2592010699) + 2332);
    t30 = xsi_vhdl_greater(t17, t7, 8U, t15, t31);
    t3 = t30;
    goto LAB72;

LAB73:    xsi_set_current_line(226, ng0);
    t7 = xsi_get_transient_memory(67U);
    memset(t7, 0, 67U);
    t8 = t7;
    memset(t8, (unsigned char)2, 67U);
    t15 = (t0 + 1816U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    memcpy(t15, t7, 67U);
    goto LAB74;

LAB76:    t11 = 0;

LAB79:    if (t11 < 8U)
        goto LAB80;
    else
        goto LAB78;

LAB80:    t1 = (t2 + t11);
    t6 = (t5 + t11);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB77;

LAB81:    t11 = (t11 + 1);
    goto LAB79;

LAB82:    xsi_set_current_line(238, ng0);
    t1 = (t0 + 3156);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB83;

}


extern void work_a_0136107771_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0136107771_3212880686_p_0};
	xsi_register_didat("work_a_0136107771_3212880686", "isim/FloatPointALU_isim_beh.exe.sim/work/a_0136107771_3212880686.didat");
	xsi_register_executes(pe);
}
