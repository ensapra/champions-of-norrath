extern s32 D_004C4F70[];
extern s32 D_004C4F74[];
extern u8 D_0110D888[];
void func_001A2660(void *, s32, s32);
void func_001B7C38(void) {
    D_004C4F70[0] = 0;
    D_004C4F74[0] = 0;
    func_001A2660(D_0110D888, 0, 0x200);
}

extern s32 D_004C3FDC[];
extern void *D_01106FF0[];
s32 SignalSema(s32);
s32 WaitSema(s32);
s64 func_001A0768(s32 a0, s32 *o) {
    o[3] = a0;
    o[2] = a0;
    o[1] = 0;
    o[0] = 0;
    o[4] = 0;
    WaitSema(D_004C3FDC[0]);
    *(void **)&o[5] = D_01106FF0[0];
    D_01106FF0[0] = o;
    return SignalSema(D_004C3FDC[0]);
}

s64 func_001A06D0(s32 a0, s32 *o) {
    o[2] = a0;
    o[1] = 0;
    o[0] = 0;
    o[3] = 0;
    o[4] = 0;
    WaitSema(D_004C3FDC[0]);
    *(void **)&o[5] = D_01106FF0[0];
    D_01106FF0[0] = o;
    return SignalSema(D_004C3FDC[0]);
}

extern s32 D_01106FE8[];
extern s32 func_0019FEC8(void);
void func_0019FF88(void) {
    s32 *p = D_01106FE8;
    if (*p == 0) {
        *p = 1;
        func_0019FEC8();
    }
}
