typedef struct { s32 sema; s32 *res; s32 n; char str[0x400]; } Req;
typedef struct { s32 a, init, max, d, e, f, g, h; } SemaParam;
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

s32 func_002DA3B0(u8 *arg0, s32 arg1) {
    SemaParam sp;
    s32 result;
    s32 i;
    s32 sema;
    s32 v;
    char c;
    Req *d = D_008E04C0;
    func_002D8EF8(arg1);
    if (D_004449F4[0] == 0) {
        func_002D9028();
    }
    i = 0;
    c = d->str[0] = arg0[0];
    if (c != 0) {
        while (++i < 0x400) {
            c = d->str[i] = arg0[i];
            if (c == 0) break;
        }
    }
    if (i == 0x400) {
        d->str[0x3ff] = 0;
        i = 0x3ff;
    }
    sp.max = 0;
    sp.init = 1;
    sp.f = 0;
    sema = CreateSema_2(&sp);
    d->res = &result;
    d->sema = sema;
    d->n = 4;
    if (func_002D8270(D_008E1BC0, arg1, 0, D_008E04C0, i + 0xD, D_008E1100, 4, 0, 0) < 0) {
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
