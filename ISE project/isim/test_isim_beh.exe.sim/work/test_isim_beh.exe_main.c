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
    work_m_00000000003377286051_1644195879_init();
    work_m_00000000003049119126_1067694360_init();
    work_m_00000000001463664820_3405346048_init();
    work_m_00000000000932177789_1798315638_init();
    work_m_00000000000932177789_2180454821_init();
    work_m_00000000003832832085_2761705081_init();
    work_m_00000000003626198855_1621107508_init();
    work_m_00000000002188959807_2725559894_init();
    work_m_00000000001133198574_3306220893_init();
    xilinxcorelib_ver_m_00000000001433703432_0866099935_init();
    work_m_00000000002748013710_3948396053_init();
    work_m_00000000002881852369_1458520610_init();
    work_m_00000000002226302911_1985558087_init();
    work_m_00000000002013452923_2073120511_init();


    xsi_register_tops("work_m_00000000002226302911_1985558087");
    xsi_register_tops("work_m_00000000002013452923_2073120511");


    return xsi_run_simulation(argc, argv);

}
