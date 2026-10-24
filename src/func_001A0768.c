extern s32 D_004C3FDC[];
extern void *D_01106FF0[];
s32 SignalSema(s32);
s32 WaitSema(s32);
s64 func_001A0768(s32 a0, s32 *o) {
    o[2] = a0;
    o[3] = a0;
    o[1] = 0;
    o[0] = 0;
    o[4] = 0;
    WaitSema(D_004C3FDC[0]);
    *(void **)&o[5] = D_01106FF0[0];
    D_01106FF0[0] = o;
    return SignalSema(D_004C3FDC[0]);
}
