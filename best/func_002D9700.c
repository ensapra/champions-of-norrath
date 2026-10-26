typedef struct { s32 sema; s32 *p; s32 f8; s32 fC; s32 f10; s32 f14; s32 f18; } Req;
typedef struct { s32 f0; s32 f4; } Ent;
extern Req D_008E04C0;
extern char D_008E1100[];
extern char D_008E19C0[];
extern char D_008E1BC0[];
extern s32 D_00444970[];
extern s32 D_004449F4[];
extern s32 D_00444A04[];
extern Ent *func_002D8A80(void);
extern void func_002D8EF8(s32);
extern void func_002D8F28(void);
extern s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_002D9700(s32 a0, s32 arg1, s32 arg2) {
    s32 sp30;
    s32 sp[8];
    Ent *e;
    s32 flags, sema, i, r;
    char *buf;
    e = func_002D8A80();
    func_002D8EF8(4);
    if (D_004449F4[0] == 0) {
        func_002D8F28();
        return -1;
    }
    if (e == 0 || (flags = e->f4) == 0) {
        func_002D8F28();
        return -9;
    }
    D_008E04C0.f10 = arg1;
    D_008E04C0.fC = e->f0;
    D_008E04C0.f14 = arg2;
    D_008E04C0.f18 = ((char *)e - D_008E19C0) >> 4;
    sp[1] = 1;
    sp[2] = 0;
    sp[5] = 0;
    sema = CreateSema_2(sp, 1);
    D_008E04C0.f8 = 4;
    D_008E04C0.p = &sp30;
    D_008E04C0.sema = sema;
    if (flags & 0x8000) {
        WaitSema_2(D_00444A04[0]);
        if (D_00444970[0] == -1) {
            D_00444970[0] = D_008E04C0.sema;
            D_008E04C0.sema = -D_008E04C0.sema;
        } else {
            for (i = 1; i < 0x20; i++) {
                if (D_00444970[i] == -1) {
                    D_00444970[i] = D_008E04C0.sema;
                    D_008E04C0.sema = -D_008E04C0.sema;
                    break;
                }
            }
        }
        SignalSema_2(D_00444A04[0]);
        buf = D_008E1100;
    } else {
        buf = D_008E1100;
    }
    if (func_002D8270(D_008E1BC0, 4, 0, &D_008E04C0, 0x1C, buf, 4, 0, 0) < 0) {
        DeleteSema_2(sema);
        func_002D8F28();
        return -0xB;
    }
    r = *(s32 *)((u32)buf | 0x20000000);
    func_002D8F28();
    if (r == 0) {
        DeleteSema_2(sema);
        return -0xB;
    }
    if (flags & 0x8000) {
        DeleteSema_2(sema);
        return 0;
    }
    WaitSema_2(sema);
    DeleteSema_2(sema);
    return sp30;
}
