extern s32 sceSifGetReg_2(s32);
extern void func_002D5560(void);
extern void func_002DF7B0(s32, s32);

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

extern s32 SignalSema_2(s32);
extern s32 PollSema_2(s32);
extern s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, void *, s32);
extern void func_002E0DE0(void);
extern s32 D_00446070[];
extern s32 D_00446074[];
extern s32 D_008E6B40[];
extern s32 D_008E6BC0[];
extern s32 D_008E8100[];

s32 func_002E1DC0(s32 arg0) {
    s32 *p = D_008E6B40;
    s32 r;

    if (p[9] == 0) {
        return -100;
    }
    if (PollSema_2(D_00446074[0]) < 0) {
        return -200;
    }
    D_008E6BC0[0] = arg0;
    r = func_002D8270(p, 10, 1, D_008E6BC0, 0x30, D_008E8100, 4, func_002E0DE0, 0);
    if (r == 0) {
        D_00446070[0] = 10;
    } else {
        SignalSema_2(D_00446074[0]);
    }
    return r;
}

extern s32 iSignalSema_2(s32);
extern s32 D_00446078[];
extern u8 D_008E7100[];
extern s32 func_00304CFC(u32);
extern void func_00301FFC(void *, void *, u32);

void func_002E1A00(s32 arg0) {
    u8 *buf = (u8 *)arg0;
    u32 src;
    u32 len;
    if (buf != 0) {
        src = (u32)D_008E7100 | 0x20000000;
        len = func_00304CFC(src);
        if (len >= 0x400) {
            len = 0x3FF;
        } else {
            len = func_00304CFC(src);
        }
        func_00301FFC(buf, (void *)((u32)D_008E7100 | 0x20000000), len);
        buf[len] = 0;
    }
    iSignalSema_2(D_00446078[0]);
}
