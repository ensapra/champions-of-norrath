typedef struct { s32 f0; char p4[8]; s32 fC; char p10[4]; u32 f14; u8 *f18; char p1c[4]; u8 data[16]; } Req;
typedef struct { char p[0x24]; s32 f24; } Srv;
extern Srv D_008E6B40;
extern Req D_008E6BC0;
extern char D_008E8100[];
extern s32 D_00446070[];
extern s32 D_00446074[];
s32 PollSema_2(s32);
void SignalSema_2(s32);
void FlushCache_2(s32);
void func_002E0DE0(void);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, void *, s32);

s32 func_002E1428(s32 arg0, u8 *arg1, s32 arg2) {
    u32 i;
    s32 r, d;
    if (D_008E6B40.f24 == 0) return -0x64;
    if (PollSema_2(D_00446074[0]) < 0) return -0xC8;
    D_008E6BC0.f0 = arg0;
    if (arg2 < 0x11) {
        D_008E6BC0.f14 = arg2;
        D_008E6BC0.f18 = 0;
        D_008E6BC0.fC = 0;
    } else {
        d = (u8 *)((u32)(arg1 - 1) & ~0xF) - (arg1 - 0x10);
        D_008E6BC0.f18 = arg1 + d;
        D_008E6BC0.fC = arg2 - d;
        D_008E6BC0.f14 = d;
    }
    for (i = 0; i < D_008E6BC0.f14; i++)
        D_008E6BC0.data[i] = arg1[i];
    FlushCache_2(0);
    r = func_002D8270(&D_008E6B40, 6, 1, &D_008E6BC0, 0x30, D_008E8100, 4, func_002E0DE0, 0);
    if (r == 0) D_00446070[0] = 6;
    else SignalSema_2(D_00446074[0]);
    return r;
}
