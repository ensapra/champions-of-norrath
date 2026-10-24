typedef struct { void *f0; s32 f4; s32 f8; s32 fC; } Ent_001B;
extern s32 D_004C3F9C[];
extern s32 D_004C3FA8[];
extern Ent_001B D_0110AD00[];
s32 func_001B1538(s32);
s32 func_001B1668(void);
s32 func_001B1568(void);
Ent_001B *func_001B1038(void);
s32 func_001B29F0(s32, s32);
s32 WaitSema(s32);
s32 SignalSema(s32);

s32 func_001B3138(s32 a0)
{
    s32 r;
    Ent_001B *e;
    s32 sema;

    func_001B1538(9);
    if (D_004C3F9C[0] == 0)
        func_001B1668();
    func_001B1568();
    e = func_001B1038();
    if (e == NULL)
        return -0x13;
    r = func_001B29F0(a0, 9);
    if (r < 0) {
        WaitSema(D_004C3FA8[0]);
        e->f4 = 0;
        sema = D_004C3FA8[0];
    } else {
        WaitSema(D_004C3FA8[0]);
        sema = D_004C3FA8[0];
        e->f0 = (void *)r;
        r = e - D_0110AD00;
    }
    SignalSema(sema);
    return r;
}
