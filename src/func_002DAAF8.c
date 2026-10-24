typedef struct { void *f0; s32 f4; s32 f8; s32 fC; } Ent_002D;
extern s32 D_004449F4[];
extern s32 D_00444A00[];
extern Ent_002D D_008E19C0[];
s32 func_002D8EF8(s32);
s32 func_002D9028(void);
s32 func_002D8F28(void);
Ent_002D *func_002D89F8(void);
s32 func_002DA3B0(s32, s32);
s32 WaitSema_2(s32);
s32 SignalSema_2(s32);

s32 func_002DAAF8(s32 a0)
{
    s32 r;
    Ent_002D *e;
    s32 sema;

    func_002D8EF8(9);
    if (D_004449F4[0] == 0)
        func_002D9028();
    func_002D8F28();
    e = func_002D89F8();
    if (e == NULL)
        return -0x13;
    r = func_002DA3B0(a0, 9);
    if (r < 0) {
        WaitSema_2(D_00444A00[0]);
        e->f4 = 0;
        sema = D_00444A00[0];
    } else {
        WaitSema_2(D_00444A00[0]);
        sema = D_00444A00[0];
        e->f0 = (void *)r;
        r = e - D_008E19C0;
    }
    SignalSema_2(sema);
    return r;
}
