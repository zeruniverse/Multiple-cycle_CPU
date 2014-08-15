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

/* This file is designed for use with ISim build 0xcb73ee62 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/3120101980/multi/muti_cpu/alu.v";
static unsigned int ng1[] = {8U, 8U};
static unsigned int ng2[] = {12U, 8U};
static unsigned int ng3[] = {9U, 8U};
static unsigned int ng4[] = {13U, 8U};
static unsigned int ng5[] = {10U, 8U};
static unsigned int ng6[] = {14U, 8U};
static unsigned int ng7[] = {0U, 0U};
static unsigned int ng8[] = {11U, 8U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {15U, 0U};



static int sp_cal(char *t1, char *t2)
{
    char t14[8];
    char t45[8];
    char t46[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t0 = 1;
    xsi_set_current_line(31, ng0);
    t3 = (t1 + 1728);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);

LAB2:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_xcompare(t5, 4, t6, 4);
    if (t7 == 1)
        goto LAB3;

LAB4:    t3 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_xcompare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB5;

LAB6:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_xcompare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB7;

LAB8:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_xcompare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB9;

LAB10:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_xcompare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB11;

LAB12:    t3 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_xcompare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB13;

LAB14:    t3 = ((char*)((ng8)));
    t7 = xsi_vlog_unsigned_case_xcompare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB15;

LAB16:    t3 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_xcompare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB17;

LAB18:    t3 = ((char*)((ng10)));
    t7 = xsi_vlog_unsigned_case_xcompare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB19;

LAB20:
LAB21:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_set_current_line(32, ng0);
    t8 = (t1 + 1544);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    t11 = (t1 + 1636);
    t12 = (t11 + 36U);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t10, 32, t13, 32);
    t15 = (t1 + 1452);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 32);
    goto LAB21;

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t1 + 1544);
    t6 = (t4 + 36U);
    t8 = *((char **)t6);
    t9 = (t1 + 1636);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t8, 32, t11, 32);
    t12 = (t1 + 1452);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 32);
    goto LAB21;

LAB7:    xsi_set_current_line(34, ng0);
    t4 = (t1 + 1544);
    t6 = (t4 + 36U);
    t8 = *((char **)t6);
    t9 = (t1 + 1636);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t11);
    t18 = (t16 & t17);
    *((unsigned int *)t14) = t18;
    t12 = (t8 + 4);
    t13 = (t11 + 4);
    t15 = (t14 + 4);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t13);
    t21 = (t19 | t20);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t15);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB22;

LAB23:
LAB24:    t44 = (t1 + 1452);
    xsi_vlogvar_assign_value(t44, t14, 0, 0, 32);
    goto LAB21;

LAB9:    xsi_set_current_line(35, ng0);
    t4 = (t1 + 1544);
    t6 = (t4 + 36U);
    t8 = *((char **)t6);
    t9 = (t1 + 1636);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t11);
    t18 = (t16 | t17);
    *((unsigned int *)t14) = t18;
    t12 = (t8 + 4);
    t13 = (t11 + 4);
    t15 = (t14 + 4);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t13);
    t21 = (t19 | t20);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t15);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB25;

LAB26:
LAB27:    t44 = (t1 + 1452);
    xsi_vlogvar_assign_value(t44, t14, 0, 0, 32);
    goto LAB21;

LAB11:    xsi_set_current_line(36, ng0);
    t4 = (t1 + 1544);
    t6 = (t4 + 36U);
    t8 = *((char **)t6);
    t9 = (t1 + 1636);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t11);
    t18 = (t16 ^ t17);
    *((unsigned int *)t14) = t18;
    t12 = (t8 + 4);
    t13 = (t11 + 4);
    t15 = (t14 + 4);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t13);
    t21 = (t19 | t20);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t15);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB28;

LAB29:
LAB30:    t26 = (t1 + 1452);
    xsi_vlogvar_assign_value(t26, t14, 0, 0, 32);
    goto LAB21;

LAB13:    xsi_set_current_line(37, ng0);
    t4 = ((char*)((ng7)));
    t6 = (t1 + 1636);
    t8 = (t6 + 36U);
    t9 = *((char **)t8);
    memset(t45, 0, 8);
    t10 = (t45 + 4);
    t11 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 0);
    *((unsigned int *)t45) = t17;
    t18 = *((unsigned int *)t11);
    t19 = (t18 >> 0);
    *((unsigned int *)t10) = t19;
    t20 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t20 & 65535U);
    t21 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t21 & 65535U);
    xsi_vlogtype_concat(t14, 32, 32, 2U, t45, 16, t4, 16);
    t12 = (t1 + 1452);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 32);
    goto LAB21;

LAB15:    xsi_set_current_line(38, ng0);
    t4 = (t1 + 1636);
    t6 = (t4 + 36U);
    t8 = *((char **)t6);
    t9 = (t1 + 1544);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    memset(t14, 0, 8);
    t12 = (t14 + 4);
    t13 = (t11 + 4);
    t16 = *((unsigned int *)t11);
    t17 = (t16 >> 0);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 0);
    *((unsigned int *)t12) = t19;
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t20 & 31U);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t21 & 31U);
    memset(t45, 0, 8);
    xsi_vlog_unsigned_lshift(t45, 32, t8, 32, t14, 5);
    t15 = (t1 + 1452);
    xsi_vlogvar_assign_value(t15, t45, 0, 0, 32);
    goto LAB21;

LAB17:    xsi_set_current_line(39, ng0);
    t4 = (t1 + 1636);
    t6 = (t4 + 36U);
    t8 = *((char **)t6);
    t9 = (t1 + 1544);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    memset(t14, 0, 8);
    t12 = (t14 + 4);
    t13 = (t11 + 4);
    t16 = *((unsigned int *)t11);
    t17 = (t16 >> 0);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 0);
    *((unsigned int *)t12) = t19;
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t20 & 31U);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t21 & 31U);
    memset(t45, 0, 8);
    xsi_vlog_unsigned_rshift(t45, 32, t8, 32, t14, 5);
    t15 = (t1 + 1452);
    xsi_vlogvar_assign_value(t15, t45, 0, 0, 32);
    goto LAB21;

LAB19:    xsi_set_current_line(40, ng0);
    t4 = (t1 + 1636);
    t6 = (t4 + 36U);
    t8 = *((char **)t6);
    t9 = (t1 + 1544);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    memset(t45, 0, 8);
    t12 = (t45 + 4);
    t13 = (t11 + 4);
    t16 = *((unsigned int *)t11);
    t17 = (t16 >> 0);
    *((unsigned int *)t45) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 0);
    *((unsigned int *)t12) = t19;
    t20 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t20 & 31U);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t21 & 31U);
    memset(t46, 0, 8);
    xsi_vlog_signed_arith_rshift(t46, 32, t8, 32, t45, 5);
    t15 = (t1 + 1452);
    xsi_vlogvar_assign_value(t15, t46, 0, 0, 32);
    goto LAB21;

LAB22:    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t24 | t25);
    t26 = (t8 + 4);
    t27 = (t11 + 4);
    t28 = *((unsigned int *)t8);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t31 = (~(t30));
    t32 = *((unsigned int *)t11);
    t33 = (~(t32));
    t34 = *((unsigned int *)t27);
    t35 = (~(t34));
    t36 = (t29 & t31);
    t37 = (t33 & t35);
    t38 = (~(t36));
    t39 = (~(t37));
    t40 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t40 & t38);
    t41 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t41 & t39);
    t42 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t42 & t38);
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & t39);
    goto LAB24;

LAB25:    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t24 | t25);
    t26 = (t8 + 4);
    t27 = (t11 + 4);
    t28 = *((unsigned int *)t26);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t36 = (t30 & t29);
    t31 = *((unsigned int *)t27);
    t32 = (~(t31));
    t33 = *((unsigned int *)t11);
    t37 = (t33 & t32);
    t34 = (~(t36));
    t35 = (~(t37));
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t34);
    t39 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t39 & t35);
    goto LAB27;

LAB28:    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t24 | t25);
    goto LAB30;

}

static void Cont_26_0(char *t0)
{
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 2252U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 856U);
    t3 = *((char **)t2);
    t2 = (t0 + 948U);
    t4 = *((char **)t2);
    t2 = (t0 + 1040U);
    t5 = *((char **)t2);
    t2 = (t0 + 2152);
    t6 = (t0 + 484);
    t7 = xsi_create_subprogram_invocation(t2, 0, t0, t6, 0, 0);
    t8 = (t0 + 1544);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 32);
    t9 = (t0 + 1636);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 32);
    t10 = (t0 + 1728);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 4);

LAB4:    t11 = (t0 + 2204);
    t12 = *((char **)t11);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t15 = (t14 + 148U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);
    if (t19 != 0)
        goto LAB6;

LAB5:    t12 = (t0 + 2204);
    t20 = *((char **)t12);
    t12 = (t0 + 1452);
    t21 = (t12 + 36U);
    t22 = *((char **)t21);
    memcpy(t23, t22, 8);
    t24 = (t0 + 484);
    t25 = (t0 + 2152);
    t26 = 0;
    xsi_delete_subprogram_invocation(t24, t20, t0, t25, t26);
    t27 = (t0 + 2644);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    t30 = (t29 + 40U);
    t31 = *((char **)t30);
    memcpy(t31, t23, 8);
    xsi_driver_vfirst_trans(t27, 0, 31);
    t32 = (t0 + 2592);
    *((int *)t32) = 1;

LAB1:    return;
LAB6:    t11 = (t0 + 2252U);
    *((char **)t11) = &&LAB4;
    goto LAB1;

}

static void Cont_27_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 2396U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1132U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 4294967295U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t0 + 2680);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memset(t15, 0, 8);
    t16 = 1U;
    t17 = t16;
    t18 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t16 = (t16 & t19);
    t20 = *((unsigned int *)t18);
    t17 = (t17 & t20);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 | t16);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 | t17);
    xsi_driver_vfirst_trans(t11, 0, 0);
    t24 = (t0 + 2600);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}


extern void work_m_00000000002188959807_2725559894_init()
{
	static char *pe[] = {(void *)Cont_26_0,(void *)Cont_27_1};
	static char *se[] = {(void *)sp_cal};
	xsi_register_didat("work_m_00000000002188959807_2725559894", "isim/test_isim_beh.exe.sim/work/m_00000000002188959807_2725559894.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
