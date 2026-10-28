typedef struct { s32 sema; s32 *res; s32 n; u8 a[0x400]; u8 b[0x400]; } Req;
typedef struct { s32 attr; s32 init; s32 max; s32 x[5]; } SemaParam;
extern Req D_008E04C0;
extern u8 D_008E1100[];
extern u8 D_008E1BC0[];
extern s32 D_004449F4[];
extern s32 CreateSema_2(void *);
extern s32 DeleteSema_2(s32);
extern s32 WaitSema_2(s32);
extern s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern void func_002D8EF8(s32);
extern void func_002D8F28(void);
extern void func_002D9028(void);

s32 func_002DBD08(u8 *p1, u8 *p2) {
    Req *r = &D_008E04C0;
    SemaParam sp;
    s32 res[4];
    s32 sema, i, v;
    u8 c;
    func_002D8EF8(0x11);
    if (D_004449F4[0] == 0) func_002D9028();
    for (i = 0; i < 0x400; i++) {
        c = p1[i];
        r->a[i] = c;
        if (c == 0) break;
    }
    if (i == 0x400) r->a[0x3FF] = 0;
    for (i = 0; i < 0x400; i++) {
        c = p2[i];
        r->b[i] = c;
        if (c == 0) break;
    }
    if (i == 0x400) r->b[0x3FF] = 0;
    sp.init = 1;
    sp.max = 0;
    sp.x[2] = 0;
    sema = CreateSema_2(&sp);
    r->res = res;
    r->sema = sema;
    r->n = 4;
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
    return res[0];
}
