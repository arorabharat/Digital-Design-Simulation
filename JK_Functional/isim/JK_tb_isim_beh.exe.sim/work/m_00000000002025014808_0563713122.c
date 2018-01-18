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

/* This file is designed for use with ISim build 0x7dea747 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/bharat arora/Documents/GitHub/Xlinx/JK_Functional/JK_Functional.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {3U, 0U};



static void Always_8_0(char *t0)
{
    char t4[8];
    char t32[8];
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
    int t31;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9, ng0);
    t5 = (t0 + 1528U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB10;

LAB9:    t21 = *((unsigned int *)t4);
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
        goto LAB11;

LAB12:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t5, 1, t3, 1);

LAB14:    t2 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t31 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t31 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t31 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng6)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t31 == 1)
        goto LAB21;

LAB22:
LAB23:
LAB13:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB10:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB9;

LAB11:    xsi_set_current_line(10, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    goto LAB13;

LAB15:    xsi_set_current_line(13, ng0);
    t6 = (t0 + 1928);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 1, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(14, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(15, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB23;

LAB21:    xsi_set_current_line(16, ng0);
    t3 = (t0 + 1928);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t32, 0, 8);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB27;

LAB25:    if (*((unsigned int *)t12) == 0)
        goto LAB24;

LAB26:    t13 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t13) = 1;

LAB27:    t14 = (t32 + 4);
    t23 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t32) = t16;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB29;

LAB28:    t21 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t21 & 1U);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 1U);
    t29 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t29, t32, 0, 0, 1, 0LL);
    goto LAB23;

LAB24:    *((unsigned int *)t32) = 1;
    goto LAB27;

LAB29:    t17 = *((unsigned int *)t32);
    t18 = *((unsigned int *)t23);
    *((unsigned int *)t32) = (t17 | t18);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t23);
    *((unsigned int *)t14) = (t19 | t20);
    goto LAB28;

}


extern void work_m_00000000002025014808_0563713122_init()
{
	static char *pe[] = {(void *)Always_8_0};
	xsi_register_didat("work_m_00000000002025014808_0563713122", "isim/JK_tb_isim_beh.exe.sim/work/m_00000000002025014808_0563713122.didat");
	xsi_register_executes(pe);
}
