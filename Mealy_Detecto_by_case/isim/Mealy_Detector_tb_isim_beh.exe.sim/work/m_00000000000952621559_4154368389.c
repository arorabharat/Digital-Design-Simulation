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
static const char *ng0 = "C:/Users/bharat arora/Documents/GitHub/Xlinx/Mealy_Detecto_by_case/Mealy_Detetor_by_case.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {0, 0};
static int ng6[] = {1, 0};



static void Always_8_0(char *t0)
{
    char t4[8];
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

LAB0:    t1 = (t0 + 3552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = (t0 + 4368);
    *((int *)t2) = 1;
    t3 = (t0 + 3584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9, ng0);
    t5 = (t0 + 1912U);
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
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2472);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 2);

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
    t30 = (t0 + 2472);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 2);
    goto LAB13;

}

static void Always_14_1(char *t0)
{
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 4384);
    *((int *)t2) = 1;
    t3 = (t0 + 3832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);
    t4 = (t0 + 2472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(16, ng0);
    t11 = (t0 + 1592U);
    t12 = *((char **)t11);
    memset(t10, 0, 8);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t11) != 0)
        goto LAB17;

LAB18:    t19 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB19;

LAB20:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t19) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t10) > 0)
        goto LAB25;

LAB26:    memcpy(t9, t28, 8);

LAB27:    t29 = (t0 + 2632);
    xsi_vlogvar_assign_value(t29, t9, 0, 0, 2);
    goto LAB14;

LAB8:    xsi_set_current_line(17, ng0);
    t3 = (t0 + 1592U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t3) != 0)
        goto LAB30;

LAB31:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB32;

LAB33:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t7) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t10) > 0)
        goto LAB38;

LAB39:    memcpy(t9, t12, 8);

LAB40:    t18 = (t0 + 2632);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 2);
    goto LAB14;

LAB10:    xsi_set_current_line(18, ng0);
    t3 = (t0 + 1592U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t3) != 0)
        goto LAB43;

LAB44:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB45;

LAB46:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t7) > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t10) > 0)
        goto LAB51;

LAB52:    memcpy(t9, t12, 8);

LAB53:    t18 = (t0 + 2632);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 2);
    goto LAB14;

LAB12:    xsi_set_current_line(19, ng0);
    t3 = (t0 + 1592U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t3) != 0)
        goto LAB56;

LAB57:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB58;

LAB59:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t7) > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t10) > 0)
        goto LAB64;

LAB65:    memcpy(t9, t12, 8);

LAB66:    t18 = (t0 + 2632);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 2);
    goto LAB14;

LAB15:    *((unsigned int *)t10) = 1;
    goto LAB18;

LAB17:    t18 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB19:    t23 = ((char*)((ng2)));
    goto LAB20;

LAB21:    t28 = ((char*)((ng1)));
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t9, 2, t23, 2, t28, 2);
    goto LAB27;

LAB25:    memcpy(t9, t23, 8);
    goto LAB27;

LAB28:    *((unsigned int *)t10) = 1;
    goto LAB31;

LAB30:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB31;

LAB32:    t11 = ((char*)((ng3)));
    goto LAB33;

LAB34:    t12 = ((char*)((ng1)));
    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t9, 2, t11, 2, t12, 2);
    goto LAB40;

LAB38:    memcpy(t9, t11, 8);
    goto LAB40;

LAB41:    *((unsigned int *)t10) = 1;
    goto LAB44;

LAB43:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB44;

LAB45:    t11 = ((char*)((ng4)));
    goto LAB46;

LAB47:    t12 = ((char*)((ng1)));
    goto LAB48;

LAB49:    xsi_vlog_unsigned_bit_combine(t9, 2, t11, 2, t12, 2);
    goto LAB53;

LAB51:    memcpy(t9, t11, 8);
    goto LAB53;

LAB54:    *((unsigned int *)t10) = 1;
    goto LAB57;

LAB56:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB57;

LAB58:    t11 = ((char*)((ng4)));
    goto LAB59;

LAB60:    t12 = ((char*)((ng1)));
    goto LAB61;

LAB62:    xsi_vlog_unsigned_bit_combine(t9, 2, t11, 2, t12, 2);
    goto LAB66;

LAB64:    memcpy(t9, t11, 8);
    goto LAB66;

}

static void Always_22_2(char *t0)
{
    char t11[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    int t26;

LAB0:    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 4400);
    *((int *)t2) = 1;
    t3 = (t0 + 4080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);
    t4 = (t0 + 2472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng3)));
    t26 = xsi_vlog_unsigned_case_compare(t6, 2, t3, 2);
    if (t26 == 1)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(24, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2312);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    goto LAB14;

LAB8:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 1592U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t3) != 0)
        goto LAB17;

LAB18:    t7 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t7);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB19;

LAB20:    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t7);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t7) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t12) > 0)
        goto LAB25;

LAB26:    memcpy(t11, t10, 8);

LAB27:    t25 = (t0 + 2312);
    xsi_vlogvar_assign_value(t25, t11, 0, 0, 1);
    goto LAB14;

LAB10:    goto LAB8;

LAB12:    goto LAB8;

LAB15:    *((unsigned int *)t12) = 1;
    goto LAB18;

LAB17:    t5 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB18;

LAB19:    t9 = ((char*)((ng5)));
    goto LAB20;

LAB21:    t10 = ((char*)((ng6)));
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t11, 32, t9, 32, t10, 32);
    goto LAB27;

LAB25:    memcpy(t11, t9, 8);
    goto LAB27;

}


extern void work_m_00000000000952621559_4154368389_init()
{
	static char *pe[] = {(void *)Always_8_0,(void *)Always_14_1,(void *)Always_22_2};
	xsi_register_didat("work_m_00000000000952621559_4154368389", "isim/Mealy_Detector_tb_isim_beh.exe.sim/work/m_00000000000952621559_4154368389.didat");
	xsi_register_executes(pe);
}
