typedef struct { s32 sema; s32 *res; s32 f8; s32 fC; s32 f10; s32 f14; s32 f18; s32 f1C; } RpcPkt;

extern s32 D_00444970[];
extern s32 D_004449F4[];
extern s32 D_00444A04[];
extern RpcPkt D_008E04C0;
extern char D_008E1100[];
extern char D_008E19C0[];
extern char D_008E1BC0[];

extern s32 CreateSema_2(void *);
extern void DeleteSema_2(s32);
extern void SignalSema_2(s32);
extern void WaitSema_2(s32);
extern void func_002D7858(void *, s32);
extern s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 *func_002D8A80(void);
extern void func_002D8EF8(s32);
extern void func_002D8F28(void);

s32 func_002D9938(s32 unused, void *arg1, s32 arg2) {
    s32 sp[24];
    s32 *ent;
    u32 flags;
    s32 sema;
    s32 i;
    s32 r;

    ent = func_002D8A80();
    func_002D8EF8(2);
    if (D_004449F4[0] == 0) {
        func_002D8F28();
        return -1;
    }
    if (ent == 0 || (flags = ent[1]) == 0) {
        func_002D8F28();
        return -9;
    }
    D_008E04C0.fC = ent[0];
    sp[5] = 1;
    D_008E04C0.f1C = ((char *)ent - D_008E19C0) >> 4;
    D_008E04C0.f10 = (s32)arg1;
    D_008E04C0.f14 = arg2;
    sp[6] = 0;
    sp[9] = 0;
    sema = CreateSema_2(&sp[4]);
    D_008E04C0.f8 = 4;
    D_008E04C0.res = &sp[12];
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
    }
    if (!(flags & 0x20000000)) func_002D7858(arg1, arg2);
    func_002D7858(&D_008E04C0, 0x20);
    if (func_002D8270(D_008E1BC0, 2, 0, &D_008E04C0, 0x20, D_008E1100, 4, 0, 0) < 0) {
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
    if (flags & 0x8000) {
        DeleteSema_2(sema);
        return 0;
    }
    WaitSema_2(sema);
    DeleteSema_2(sema);
    return sp[12];
}
