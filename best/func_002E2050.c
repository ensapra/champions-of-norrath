extern s32 D_00446070;
extern s32 D_00446074;
extern char D_008E6B40[];
extern char D_008E6BA0[];
extern char D_008E6BF0[];
extern char D_008E8100[];
s32 PollSema_2(s32);
s32 SignalSema_2(s32);
void FlushCache_2(s32);
void func_002E0DE0(void);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, void *, s32);
void func_00305118(void *, char *, s32);

s32 func_002E2050(s32 arg0, s32 arg1, char *arg2, char *arg3) {
    s32 r;
    s32 *p;
    char *q;
    char *g = D_008E6B40;
    if (*(s32 *)(g + 0x24) == 0) {
        return -0x64;
    }
    if (PollSema_2(D_00446074) < 0) {
        return -0xC8;
    }
    if (arg2 == NULL || *arg2 == 0 || arg3 == NULL) {
        SignalSema_2(D_00446074);
        return -0xD2;
    }
    p = (s32 *)D_008E6BF0;
    p[0] = arg0;
    p[1] = arg1;
    p[2] = 0x10;
    func_00305118(D_008E6BF0 + 0x14, arg2, 0x3FF);
    D_008E6BF0[0x413] = 0;
    func_00305118(D_008E6BA0, arg3, 0x20);
    q = D_008E6BA0 - 0x20;
    q[0x3F] = 0;
    p[4] = (s32)q;
    FlushCache_2(0);
    r = func_002D8270(g, 0xE, 1, D_008E6BF0, 0x414, D_008E8100, 4, (void *)func_002E0DE0, 0);
    if (r == 0) {
        D_00446070 = 0x13;
    } else {
        SignalSema_2(D_00446074);
    }
    return r;
}
