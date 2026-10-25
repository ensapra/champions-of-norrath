typedef struct { s32 f0, f4, f8, fC, f10, f14, f18; void *f1C; } Req;
typedef struct { char p[0x24]; s32 f24; } Srv;
extern Srv D_008E6B40;
extern Req D_008E6BC0;
extern char D_008E7040[];
extern char D_008E8100[];
extern s32 D_008E6B68, D_008E6B6C, D_008E6B70;
extern s32 D_00446070;
extern s32 D_00446074;
s32 PollSema_2(s32);
void SignalSema_2(s32);
void func_002D7858(void *, s32);
void func_002E1668(void);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, void *, void *);

s32 func_002E16C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 r;
    if (D_008E6B40.f24 == 0) return -0x64;
    if (PollSema_2(D_00446074) < 0) return -0xC8;
    D_008E6BC0.f4 = arg0;
    D_008E6BC0.f8 = arg1;
    D_008E6BC0.f1C = D_008E7040;
    if (arg2) D_008E6BC0.f14 = 1; else D_008E6BC0.f14 = 0;
    if (arg3) D_008E6BC0.f10 = 1; else D_008E6BC0.f10 = 0;
    if (arg4) D_008E6BC0.fC = 1; else D_008E6BC0.fC = 0;
    D_008E6B68 = arg2;
    D_008E6B6C = arg3;
    D_008E6B70 = arg4;
    func_002D7858(D_008E7040, 0xC0);
    r = func_002D8270(&D_008E6B40, 1, 1, &D_008E6BC0, 0x30, D_008E8100, 4, func_002E1668, D_008E7040);
    if (r == 0) D_00446070 = 1;
    else SignalSema_2(D_00446074);
    return r;
}
