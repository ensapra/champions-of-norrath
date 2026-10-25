typedef struct { s32 sema; s32 *res; s32 n; u8 a[0x400]; u8 b[0x400]; } Req;
typedef struct { s32 f0, init, max, f3, f4, opt; } SemaParam;
extern Req D_008E04C0;
extern u8 D_008E1100[];
extern u8 D_008E1BC0[];
extern s32 D_004449F4;
s32 CreateSema_2(SemaParam *);
void DeleteSema_2(s32);
void WaitSema_2(s32);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_002D8EF8(s32);
void func_002D8F28(void);
void func_002D9028(void);

s32 func_002DBD08(u8 *p1, u8 *p2) {
    SemaParam sp;
    s32 res;
    s32 sema, i, v;
    func_002D8EF8(0x11);
    if (D_004449F4 == 0) func_002D9028();
    D_008E04C0.a[0] = p1[0];
    for (i = 0; D_008E04C0.a[i] != 0 && ++i < 0x400; ) {
        D_008E04C0.a[i] = p1[i];
    }
    if (i == 0x400) D_008E04C0.a[0x3FF] = 0;
    D_008E04C0.b[0] = p2[0];
    for (i = 0; D_008E04C0.b[i] != 0 && ++i < 0x400; ) {
        D_008E04C0.b[i] = p2[i];
    }
    if (i == 0x400) D_008E04C0.b[0x3FF] = 0;
    sp.max = 0;
    sp.init = 1;
    sp.opt = 0;
    sema = CreateSema_2(&sp);
    D_008E04C0.res = &res;
    D_008E04C0.sema = sema;
    D_008E04C0.n = 4;
    if (func_002D8270(D_008E1BC0, 0x18, 0, &D_008E04C0, 0x80C, D_008E1100, 4, 0, 0) < 0) {
        DeleteSema_2(sema);
        func_002D8F28();
        return -0xB;
    }
    v = *(s32 *)((u32)D_008E1100 | 0x20000000);
    func_002D8F28();
    if (v == 0) {
        DeleteSema_2(sema);
        return -0xB;
    }
    WaitSema_2(sema);
    DeleteSema_2(sema);
    return res;
}
