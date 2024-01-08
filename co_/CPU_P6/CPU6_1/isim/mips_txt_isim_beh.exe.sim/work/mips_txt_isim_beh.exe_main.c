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
    work_m_00000000000849070076_1733832700_init();
    work_m_00000000004094773956_2442841488_init();
    work_m_00000000002361674435_3125877111_init();
    work_m_00000000001665447944_1621229167_init();
    work_m_00000000000223577402_1579609468_init();
    work_m_00000000003104097249_1785967555_init();
    work_m_00000000003355226002_0757879789_init();
    work_m_00000000002822271423_0690399989_init();
    work_m_00000000001195546716_0143501659_init();
    work_m_00000000003713800726_0886308060_init();
    work_m_00000000004246447519_4111503280_init();
    work_m_00000000001669273157_3969024538_init();
    work_m_00000000002993858264_4140825114_init();
    work_m_00000000004205806039_2694143388_init();
    work_m_00000000001233156483_3543545313_init();
    work_m_00000000001794570522_0447213508_init();
    work_m_00000000002111836578_3164265372_init();
    work_m_00000000001371129323_0330668870_init();
    work_m_00000000002367287775_2684706110_init();
    work_m_00000000003612883459_0158890407_init();
    work_m_00000000002916065538_3877310806_init();
    work_m_00000000001292392995_1131260308_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001292392995_1131260308");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
