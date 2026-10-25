typedef struct { s32 pad[9]; s32 ready; } Ctl;
typedef struct { s32 ret; s32 flg; s32 p[2]; } Ent;
typedef struct { void *a; void *b; } Pair;
typedef struct { char b[4]; } W4;
typedef union { W4 w; s32 v; } U4;
extern s32 D_004449F4[], D_004449F8[];
extern s32 D_00444A00[];
extern Pair D_008E0480[];
extern char D_008E1100[];
extern char D_008E1140[];
extern Ent D_008E19C0[];
extern Ctl D_008E1BC0;
extern W4 D_008E1BE8[];
extern char D_008E1C00[];
extern s32 D_008E1C40[];
extern void func_002D8AF0(void);
extern void func_002D8FE0(void);
extern void SignalSema_2(s32);
extern void WaitSema_2(s32);
extern void func_002D7490(u32, void *, void *);
extern void func_002D7908(s32);
extern s32 func_002D80A0(void *, u32, s32);
extern s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern void func_002D8998(void);
extern s32 func_002DD640(void);
extern void func_002DD698(void);
s32 func_002D9028(void)
{
    U4 t;
    s32 ok;
    s32 i;
    Ent *p;
    s32 *q = D_008E1C40;
    func_002D7908(0);
    D_008E1C40[0] = 0;
    q[1] = 0;
    ok = func_002DD640();
    func_002D7490(0x80000011, func_002D8AF0, D_008E1C00);
    func_002D7490(0x80000013, func_002D8FE0, q);
    if (ok) func_002DD698();
    while (1) {
        if (func_002D80A0(&D_008E1BC0, 0x80000001, 0) < 0) return -1;
        if (D_008E1BC0.ready) break;
        for (i = 0x100000; i != -1; i--) ;
    }
    func_002D8998();
    WaitSema_2(D_00444A00[0]);
    for (p = D_008E19C0; p < D_008E19C0 + 0x20; p++) p->flg = 0;
    SignalSema_2(D_00444A00[0]);
    D_008E0480[0].a = D_008E1140;
    D_008E0480[0].b = D_008E1140 + 0x440;
    if (func_002D8270(&D_008E1BC0, 0xFF, 0, D_008E0480, 8, D_008E1100, 8, 0, 0) < 0)
        return 0xFFFEFFFF;
    D_008E1BE8[0] = *(W4 *)((u32)D_008E1100 | 0x20000000);
    t.w = *(W4 *)((u32)(D_008E1100 + 4) | 0x20000000);
    D_004449F8[0] = t.v == 2;
    D_004449F4[0] = 1;
    return 0;
}
