extern s32 sceSifGetReg_2(s32);
extern void func_002D5560(void);
extern void func_002DF7B0(s32, s32);

s32 func_002DD4E0(void) {
    if (!(sceSifGetReg_2(4) & 0x40000)) {
        return 0;
    }
    func_002D5560();
    func_002DF7B0(1, 1);
    func_002DF7B0(0, 1);
    return 1;
}

extern s32 D_00447C48[];
extern void func_002D7178(s32, s32);
extern void func_002D7508(s32);
extern void func_002DF758(s32);

void func_002E46A8(s32 arg0) {
    if (arg0 == 1) {
        D_00447C48[0] = 0;
        func_002D7178(1, 0);
    }
}

void func_002E46D0(void) {
    D_00447C48[0] = 0;
    func_002D7508(0x80000018);
    func_002DF758(0x80000014);
}

extern s32 func_002E4910(s32, s32, s32, s32, s32, s32);

s64 func_002E48E8(s32 a0, s32 a1, s32 a2) {
    return func_002E4910(a0, a1, a2, 0x800, 0x2000, 0x20);
}
