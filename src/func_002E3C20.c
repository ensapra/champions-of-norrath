extern s32 sceSifGetReg_2(s32);
extern void func_002D5560(void);
extern void func_002DF7B0(s32, s32);
extern s32 D_008DEBC0[];
extern s32 D_004460AC[];
extern u8 D_00447280[];
extern u8 D_00447C00[];
extern s32 func_002E2FE8(s32);
extern s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, void *, void *);
extern s32 SignalSema_2(s32);

s32 func_002DD4E0(void) {
    s32 val = sceSifGetReg_2(4);
    if (val & 0x40000) {
        func_002D5560();
        func_002DF7B0(1, 1);
        func_002DF7B0(0, 1);
        return 1;
    }
    return 0;
}

s32 func_002D7160(s32 i) {
    return D_008DEBC0[i];
}

s32 func_002D7178(s32 i, s32 v) {
    D_008DEBC0[i] = v;
    return v;
}

s32 func_002E3C20(void) {
    s32 r;

    if (func_002E2FE8(3) == 0) {
        return -1;
    }
    if (func_002D8270(D_00447C00, 4, 0, 0, 0, D_00447280, 4, 0, 0) < 0) {
        SignalSema_2(D_004460AC[0]);
        return -1;
    }
    r = *(s32 *)((u32)D_00447280 | 0x20000000);
    SignalSema_2(D_004460AC[0]);
    return r;
}
