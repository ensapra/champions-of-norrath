extern s32 D_00445D08;
extern s32 func_002DFFC0;

s32 func_002DFAF0(s32 arg0, s32 arg1) {
    s32 *temp_3;
    s32 temp_16;
    u32 temp_4;

    temp_4 = arg0 - 1;
    if (temp_4 >= 0xDU) {
        return 0xFFFFFFFF;
    }
    // Compute table entry address: D_00445D08 + arg0 * 4
    temp_3 = (s32 *)((s32)&D_00445D08 + arg0 * 4);
    temp_16 = *temp_3;
    *temp_3 = arg1;
    if (temp_4 < 3U) {
        SetVTLBRefillHandler_2(arg0, &func_002DFFC0 + 0x240, arg0);
    } else {
        SetVCommonHandler_2(arg0, &func_002DFFC0 + 0x240, arg0);
    }
    return temp_16;
}
