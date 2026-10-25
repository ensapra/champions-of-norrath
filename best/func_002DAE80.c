typedef struct { s32 sema; s32 *res; s32 n; s32 arg; u8 str[0x400]; } Req;
typedef struct { s32 a, init, max, d, e, f, g, h; } SemaParam __attribute__((aligned(16)));
extern Req D_008E04C0[];
extern s32 D_008E1100[];
extern s32 D_008E1BC0[];
extern s32 D_004449F4[];
s32 CreateSema_2(void *);
void DeleteSema_2(s32);
void WaitSema_2(s32);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_002D8EF8(s32);
void func_002D8F28(void);
void func_002D9028(void);

s32 func_002DAE80(u8 *arg0, s32 arg1) {
    SemaParam sp;
    s32 result;
    s32 i;
    s32 sema;
    s32 v;
    Req *d = D_008E04C0;
    func_002D8EF8(0xC);
    if (D_004449F4[0] == 0) {
        func_002D9028();
    }
    d->str[0] = arg0[0];
    i = 0;
    if (arg0[0] != 0) {
        while (1) {
            i++;
            if (i >= 0x400) break;
            d->str[i] = arg0[i];
            if (arg0[i] == 0) break;
        }
    }
    if (i == 0x400) {
        d->str[0x3ff] = 0;
        i = 0x3ff;
    }
    d->arg = arg1;
    sp.init = 1;
    sp.max = 0;
    sp.h = 0;
    sema = CreateSema_2(&sp);
    d->res = &result;
    d->sema = sema;
    d->n = 4;
    result = 0;
    if (func_002D8270(D_008E1BC0, 0xC, 0, d, i + 0x11, D_008E1100, 4, 0, 0) < 0) {
        DeleteSema_2(sema);
        func_002D8F28();
        return -0xB;
    }
    v = *(s32 *)((s32)D_008E1100 | 0x20000000);
    func_002D8F28();
    if (v == 0) {
        DeleteSema_2(sema);
        return -0xB;
    }
    WaitSema_2(sema);
    DeleteSema_2(sema);
    return result;
}
