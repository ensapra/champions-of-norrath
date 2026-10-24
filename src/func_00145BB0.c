extern void func_0010B378(s32, void *, s64);
extern void func_0013BBD0(void);
extern void func_0011AD68(s32);
extern void func_00138990(s32);
extern void func_0014D328(s32, s32);
extern u8 func_001B9FD8[];
extern u8 func_001C6788[];
extern s32 D_010D44A0[];
extern s32 D_010D44B0[];
extern s32 D_010D44C0[];
extern s32 D_010D44D0[];
extern s32 D_010D44D4[];
extern s32 D_010D44E8[];

void func_00145C08(s64 a, s64 b) {
    s64 i = (s64)(b << 32) >> 32;
    D_010D44E8[0] = (s32)i;
    func_0010B378(D_010D44C0[i], func_001B9FD8 + 0x1738, i);
    func_0013BBD0();
}

void func_00145BB0(void) {
    func_0011AD68(*(s32 *)(func_001C6788 + 0x100));
    D_010D44A0[0] = 0;
    func_00138990(D_010D44B0[0]);
    func_0014D328(D_010D44D0[0], 0xFF);
    func_0014D328(D_010D44D4[0], 0xFF);
}
