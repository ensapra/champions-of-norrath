s32 PollSema(s32);
s32 SignalSema(s32);
void func_001A4738(void *, s8 *, s32);
void func_001AFE98(s32, s32);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, void *, s32);
extern char func_0017A088[];
extern s32 D_001D0480[];
extern s32 D_001D0484[];
extern char D_010EB640[];
extern s32 D_010EB6F0[];
extern char D_010ECC00[];
s32 func_0017AB58(s32 a0, s32 a1, s8 *name, s32 a3, s32 a4, s32 a5) {
    s32 *req;
    s32 r;
    char *base = D_010EB640;
    if (*(s32*)(base + 0x24) == 0) return -100;
    if (PollSema(D_001D0484[0]) < 0) return -200;
    if (name == NULL || *name == 0) {
        SignalSema(D_001D0484[0]);
        return -210;
    }
    req = D_010EB6F0;
    req[0] = a0;
    req[1] = a1;
    req[2] = a3;
    req[3] = a4;
    req[4] = a5;
    func_001A4738(req + 5, name, 0x3FF);
    ((s8*)req)[0x413] = 0;
    if (a4 >= 0) func_001AFE98(a5, a4 << 6);
    r = func_001B08B0(base, 0xD, 1, req, 0x414, D_010ECC00, 4, func_0017A088, 0);
    if (r == 0) {
        D_001D0480[0] = 0xD;
    } else {
        SignalSema(D_001D0484[0]);
    }
    return r;
}
