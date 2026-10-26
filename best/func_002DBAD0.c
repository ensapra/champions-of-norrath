typedef struct { s32 sema; s32 *p; s32 f8; char name[0x400 + 4]; s32 f80C; s32 f810; s32 f814; s32 f818; } Req;
extern Req D_008E04C0;
extern char D_008E1100[];
extern char D_008E1BC0[];
extern s32 D_004449F4[];
extern void func_002D7858(void *, s32);
extern void func_002D8EF8(s32);
extern void func_002D8F28(void);
extern void func_002D9028(void);
extern s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_002DBAD0(u8 *name, s32 a1, u8 *data, u32 len, s32 a4, u32 a5) {
    s32 sp[8];
    s32 sp30;
    s32 i, sema, r;
    u8 *src;
    func_002D8EF8(0x17);
    if (D_004449F4[0] == 0) {
        func_002D9028();
    }
    i = 0;
    ((u8 *)&D_008E04C0)[0xC] = name[0];
    if (name[0] != 0) {
        for (i = 1; i < 0x400; i++) {
            ((u8 *)&D_008E04C0)[0xC + i] = name[i];
            if (name[i] == 0) break;
        }
    }
    if (i == 0x400) {
        ((u8 *)&D_008E04C0)[0x40B] = 0;
    }
    if (len > 0x400 || a5 > 0x400) {
        func_002D8F28();
        return -0x16;
    }
    for (i = 0; i < len; i++) {
        ((u8 *)&D_008E04C0)[0x40C + i] = data[i];
    }
    D_008E04C0.f810 = len;
    D_008E04C0.f80C = a1;
    sp[1] = 1;
    sp[2] = 0;
    sp[5] = 0;
    sema = CreateSema_2(sp, 1);
    D_008E04C0.f818 = a5;
    D_008E04C0.p = &sp30;
    D_008E04C0.f8 = 4;
    D_008E04C0.f814 = a4;
    D_008E04C0.sema = sema;
    func_002D7858(&D_008E04C0, 0x81C);
    if (func_002D8270(D_008E1BC0, 0x17, 0, &D_008E04C0, 0x81C, D_008E1100, 4, 0, 0) < 0) {
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
    return sp30;
}
