extern s64 D_00447F50[];
extern s32 func_002F8F60(s64, s32);
s64 func_002E7810(void) {
    return func_002F8F60((D_00447F50[0] << 16) | (*(volatile u32 *)0x10000000 & 0xFFFF), 0x240);
}
