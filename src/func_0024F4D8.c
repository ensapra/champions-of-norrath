typedef struct { s32 a, b, c; s8 lv; u8 pad[3]; } Rec;
s32 D_0048594C;
extern Rec D_007D9280[];

void func_0024F540(s8 v)
{
    s32 n = D_0048594C;
    if (n > 0) {
        Rec *p = D_007D9280;
        do {
            if (p->lv < v) p->lv = v;
            p++;
        } while (--n != 0);
    }
}

s32 func_002E0478(s32, s32, s32, s32);

s64 func_0024F4D8(void)
{
    func_002E0478(1, 0x8010, 0x980, 0);
    func_002E0478(1, 0x8010, 0xA80, 0);
    func_002E0478(1, 0x8010, 0x981, 0);
    return func_002E0478(1, 0x8010, 0xA81, 0);
}

typedef struct { s32 a, b, c, d; } Q;
extern s8 D_007DD290[];
extern u8 D_007DD7E0[];
extern Q D_007DD840[];
extern u8 D_007DD880[];
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_0024F3B0(s32 a)
{
    if (D_007DD290[a * 0x1C4] == 0) return 0;
    func_002D8270(D_007DD7E0, 0x50, 0, D_007DD880, 0, D_007DD840, 0x40, 0, 0);
    return D_007DD840[a].d;
}
