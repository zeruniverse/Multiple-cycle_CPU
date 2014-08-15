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
static const char *ng0 = "E:/3120101980/multi/muti_cpu/regfile.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {1, 0};



static void Cont_28_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 2180U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1564);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1564);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 876U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 2724);
    t14 = (t12 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 2664);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_29_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 2324U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1564);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1564);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 968U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 2760);
    t14 = (t12 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 2672);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_30_2(char *t0)
{
    char t4[8];
    char t31[8];
    char t32[8];
    char t60[8];
    char t61[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    int t43;
    char *t44;
    int t45;
    int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;

LAB0:    t1 = (t0 + 2468U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2680);
    *((int *)t2) = 1;
    t3 = (t0 + 2496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t5 = (t0 + 784U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB25;

LAB26:
LAB27:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(32, ng0);
    xsi_set_current_line(32, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 1656);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 6);

LAB15:    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB17;

LAB16:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB18;

LAB19:    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB21;

LAB22:    goto LAB14;

LAB17:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB19;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB19;

LAB21:    xsi_set_current_line(32, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 1564);
    t33 = (t0 + 1564);
    t34 = (t33 + 44U);
    t35 = *((char **)t34);
    t36 = (t0 + 1564);
    t37 = (t36 + 40U);
    t38 = *((char **)t37);
    t39 = (t0 + 1656);
    t40 = (t39 + 36U);
    t41 = *((char **)t40);
    xsi_vlog_generic_convert_array_indices(t31, t32, t35, t38, 2, 1, t41, 6, 2);
    t42 = (t31 + 4);
    t15 = *((unsigned int *)t42);
    t43 = (!(t15));
    t44 = (t32 + 4);
    t16 = *((unsigned int *)t44);
    t45 = (!(t16));
    t46 = (t43 && t45);
    if (t46 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 6, t6, 32);
    t12 = (t0 + 1656);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 6);
    goto LAB15;

LAB23:    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t32);
    t47 = (t17 - t18);
    t48 = (t47 + 1);
    xsi_vlogvar_assign_value(t30, t29, 0, *((unsigned int *)t32), t48);
    goto LAB24;

LAB25:    xsi_set_current_line(33, ng0);
    t5 = (t0 + 1060U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t12 = (t6 + 4);
    t13 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t13);
    t25 = (t22 | t24);
    t26 = (~(t25));
    t27 = (t21 & t26);
    if (t27 != 0)
        goto LAB31;

LAB28:    if (t25 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t32) = 1;

LAB31:    memset(t31, 0, 8);
    t23 = (t32 + 4);
    t28 = *((unsigned int *)t23);
    t49 = (~(t28));
    t50 = *((unsigned int *)t32);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t23) != 0)
        goto LAB34;

LAB35:    t30 = (t31 + 4);
    t53 = *((unsigned int *)t31);
    t54 = *((unsigned int *)t30);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB36;

LAB37:    t56 = *((unsigned int *)t31);
    t57 = (~(t56));
    t58 = *((unsigned int *)t30);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t30) > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t31) > 0)
        goto LAB42;

LAB43:    memcpy(t4, t35, 8);

LAB44:    t34 = (t0 + 1564);
    t36 = (t0 + 1564);
    t37 = (t36 + 44U);
    t38 = *((char **)t37);
    t39 = (t0 + 1564);
    t40 = (t39 + 40U);
    t41 = *((char **)t40);
    t42 = (t0 + 1060U);
    t44 = *((char **)t42);
    xsi_vlog_generic_convert_array_indices(t60, t61, t38, t41, 2, 1, t44, 5, 2);
    t42 = (t60 + 4);
    t62 = *((unsigned int *)t42);
    t43 = (!(t62));
    t63 = (t61 + 4);
    t64 = *((unsigned int *)t63);
    t45 = (!(t64));
    t46 = (t43 && t45);
    if (t46 == 1)
        goto LAB45;

LAB46:    goto LAB27;

LAB30:    t14 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t31) = 1;
    goto LAB35;

LAB34:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB35;

LAB36:    t33 = ((char*)((ng1)));
    goto LAB37;

LAB38:    t34 = (t0 + 1152U);
    t35 = *((char **)t34);
    goto LAB39;

LAB40:    xsi_vlog_unsigned_bit_combine(t4, 32, t33, 32, t35, 32);
    goto LAB44;

LAB42:    memcpy(t4, t33, 8);
    goto LAB44;

LAB45:    t65 = *((unsigned int *)t60);
    t66 = *((unsigned int *)t61);
    t47 = (t65 - t66);
    t48 = (t47 + 1);
    xsi_vlogvar_assign_value(t34, t4, 0, *((unsigned int *)t61), t48);
    goto LAB46;

}


extern void work_m_00000000003626198855_1621107508_init()
{
	static char *pe[] = {(void *)Cont_28_0,(void *)Cont_29_1,(void *)Always_30_2};
	xsi_register_didat("work_m_00000000003626198855_1621107508", "isim/test_isim_beh.exe.sim/work/m_00000000003626198855_1621107508.didat");
	xsi_register_executes(pe);
}
