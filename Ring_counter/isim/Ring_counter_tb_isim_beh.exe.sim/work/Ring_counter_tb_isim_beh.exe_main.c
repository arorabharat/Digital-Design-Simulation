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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000678152157_1989334135_init();
    work_m_00000000003146585756_3879582996_init();
    work_m_00000000001142819682_0226477056_init();
    work_m_00000000003863078743_3652670317_init();
    work_m_00000000001959801386_0451858272_init();
    work_m_00000000002013452923_2073120511_init();


    xsi_register_tops("work_m_00000000001959801386_0451858272");
    xsi_register_tops("work_m_00000000002013452923_2073120511");


    return xsi_run_simulation(argc, argv);

}
