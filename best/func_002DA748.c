typedef struct {
    s32 sema; s32 *res; s32 f8;
    char a[0x400];
    char b[0x400];
    char d[0x400];
    s32 len;
} Big;

extern s32 D_004449F4[];
extern Big D_008E04C0;
extern char D_008E1100[];
extern char D_008E1BC0[];

extern s32 CreateSema_2(void *);
extern void DeleteSema_2(s32);
extern void WaitSema_2(s32);
extern void func_002D7858(void *, s32);
extern s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern void func_002D8EF8(s32);
extern void func_002D8F28(void);
extern void func_002D9028(void);

s32 func_002DA748(u8 *s0, u8 *s1, u8 *data, s32 n) {
    s32 sp[6];
    s32 res;
    Big *p = &D_008E04C0;
    s32 i, sema, r, ok;

    func_002D8EF8(0xE);
    if (D_004449F4[0] == 0) func_002D9028();
    for (i = 0; i < 0x400; i++)
        if ((p->a[i] = s0[i]) == 0) break;
    ok = n < 0x401;
    if (i == 0x400) p->a[0x3FF] = 0;
    if (s1 != 0) {
        for (i = 0; i < 0x400; i++)
            if ((p->b[i] = s1[i]) == 0) break;
        if (i == 0x400) p->b[0x3FF] = 0;
    } else {
        p->b[0] = 0;
    }
    if (!ok) {
        func_002D8F28();
        return -7;
    }
    for (i = 0; i < n; i++) p->d[i] = data[i];
    p->len = n;
    sp[1] = 1;
    sp[2] = 0;
    sp[5] = 0;
    sema = CreateSema_2(sp);
    D_008E04C0.res = &res;
    D_008E04C0.f8 = 4;
    D_008E04C0.sema = sema;
    func_002D7858(&D_008E04C0, 0xC10);
    if (func_002D8270(D_008E1BC0, 0xE, 0, &D_008E04C0, 0xC10, D_008E1100, 4, 0, 0) < 0) {
        DeleteSema_2(sema);
        func_002D8F28();
        return -0xB;
    }
    r = *(s32 *)((u32)D_008E1100 | 0x20000000);
    func_002D8F28();
    if (r == 0) {
        DeleteSema_2(sema);
        return -0xB;
    }
    WaitSema_2(sema);
    DeleteSema_2(sema);
    return res;
}
