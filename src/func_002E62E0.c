s32 func_002E6148(s32,s32,s32*,s32,s32);
s32 func_002E61E0(s32,s32,s32*,s32,s32);
s32 func_002E62E0(s32 a0, s32 a1, s32 *a2, s32 a3, s32 a4, s32 a5){ if (a5 & 2) return func_002E6148(a0,a1,a2,a3,a4); return func_002E61E0(a0,a1,a2,a3,a4); }

extern s64 D_00447F50;
extern s32 func_002F8F60(s64, s32, s32);
s64 func_002E7810(void) {
    return func_002F8F60((D_00447F50 << 16) | (*(volatile u32 *)0x10000000 & 0xFFFF), 0x240, 0x10000000);
}
