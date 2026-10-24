s32 func_002E6148(s32,s32,s32*,s32,s32);
s32 func_002E61E0(s32,s32,s32*,s32,s32);
s32 func_002E62E0(s32 a0, s32 a1, s32 *a2, s32 a3, s32 a4, s32 a5){ if (a5 & 2) return func_002E6148(a0,a1,a2,a3,a4); return func_002E61E0(a0,a1,a2,a3,a4); }

extern s64 D_00447F50;
extern s32 func_002F8F60(s32, s32, s32);
void func_002E7810(void) {
    func_002F8F60((D_00447F50 << 16) | (*(volatile u32 *)0x10000000 & 0xFFFF), 0x240, 0x10000000);
}

s32 AddIntcHandler_3(s32, void *, s32);
void func_002D5C28(s32, s32, s32);
extern s32 D_00447F58;
extern char func_002E7898[];
void func_002E7848(void) {
    D_00447F58 = AddIntcHandler_3(9, func_002E7898, 0);
    *(volatile s32 *)0x10000000 = 0;
    *(volatile s32 *)0x10000010 = 0x282;
    func_002D5C28(9, 0x282, 0x10000000);
}

extern u8 D_00447F60[];
s32 func_002E8D88(void *arg0) {
    u32 i;
    for (i=0; i<8; i++) {
        if (*(u16 *)((u8 *)arg0+4) == D_00447F60[i]) return 1;
    }
    return 0;
}
