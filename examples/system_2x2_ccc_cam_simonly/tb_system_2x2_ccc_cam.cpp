#include "obj_dir/Vtb_system_2x2_ccc_cam__Syms.h"
#include "obj_dir/Vtb_system_2x2_ccc_cam__Dpi.h"

#include <VerilatedToplevel.h>
#include <VerilatedControl.h>

#include <ctime>
#include <cstdlib>

using namespace simutilVerilator;

VERILATED_TOPLEVEL(tb_system_2x2_ccc_cam,clk, rst)

int main(int argc, char *argv[])
{
    tb_system_2x2_ccc_cam ct("TOP");

    VerilatedControl &simctrl = VerilatedControl::instance();
    simctrl.init(ct, argc, argv);

    simctrl.addMemory("TOP.tb_system_2x2_ccc_cam.u_system.gen_ct[0].u_ct.u_ram.sp_ram.gen_sram_sp_impl.u_impl");
    simctrl.addMemory("TOP.tb_system_2x2_ccc_cam.u_system.gen_ct[1].u_ct.u_ram.sp_ram.gen_sram_sp_impl.u_impl");
    simctrl.addMemory("TOP.tb_system_2x2_ccc_cam.u_system.gen_ct[2].u_ct.u_ram.sp_ram.gen_sram_sp_impl.u_impl");
    simctrl.setMemoryFuncs(do_readmemh, do_readmemh_file);
    simctrl.run();

    return 0;
}
