typedef struct { s32 sema; void *res; s32 n; s32 c; s32 a1; u8 data[0x400]; s32 a4; s32 a5; u32 len; } Req;
typedef struct { s32 attr; s32 init; s32 max; s32 x[5]; } SemaParam;
extern Req D_008E04C0;
extern u8 D_008E1100[], D_008E1BC0[];
extern s32 D_004449F4[];
extern s32 *func_002D8A80(void);
extern s32 func_002D8EF8(s32);
extern s32 func_002D9028(void);
extern s32 func_002D8F28(void);
extern void *func_00301FFC(void *, void *, u32);
extern s32 CreateSema_2(void *);
extern s32 DeleteSema_2(s32);
extern s32 WaitSema_2(s32);
extern s32 func_002D7858(void *, s32);
extern s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_002DA1D0(s32 z, s32 a1, void *a2, u32 a3, s32 a4, u32 a5) {
    SemaParam sem;
    s32 res[4];
    s32 *p;
    s32 sema, ret, v;
    Req *r = &D_008E04C0;
    p = func_002D8A80();
    func_002D8EF8(0x1A);
    if (!D_004449F4[0]) func_002D9028();
    if (!p || !p[1]) {
        func_002D8F28();
        return -9;
    }
    if (a3 >= 0x401 || a5 >= 0x401) {
        func_002D8F28();
        return -0x16;
    }
    if (!a2) r->len = 0;
    else func_00301FFC(r->data, a2, a3);
    r->c = *p;
    r->a1 = a1;
    r = &D_008E04C0;
    r->len = a3;
    sem.init = 1;
    sem.max = 0;
    sem.x[3] = 0;
    sema = CreateSema_2(&sem);
    r->a5 = a5;
    r->res = res;
    r->n = 4;
    r->a4 = a4;
    r->sema = sema;
    func_002D7858(r, 0x420);
    ret = func_002D8270(D_008E1BC0, 0x1A, 0, r, 0x420, D_008E1100, 4, 0, 0);
    if (ret < 0) {
        DeleteSema_2(sema);
        func_002D8F28();
        return -0xB;
    }
    v = *(s32 *)((u32)D_008E1100 | 0x20000000);
    func_002D8F28();
    if (!v) {
        DeleteSema_2(sema);
        return -0xB;
    }
    WaitSema_2(sema);
    DeleteSema_2(sema);
    return res[0];
}
