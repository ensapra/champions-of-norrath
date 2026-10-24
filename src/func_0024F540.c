typedef struct { s32 a, b, c; s8 lv; u8 pad[3]; } Rec;
s32 D_0048594C;
extern Rec D_007D9280[];

void func_0024F540(s32 v)
{
    s32 n = D_0048594C;
    if (n > 0) {
        s32 i = n;
        Rec *p = D_007D9280;
        do {
            if (p->lv < v) p->lv = v;
            i--;
            p++;
        } while (i != 0);
    }
}

typedef struct { s32 a, b, c, d; } Q;
extern s8 D_007DD290[];
extern u8 D_007DD7E0[];
extern Q D_007DD840[];
extern u8 D_007DD880[];
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_0024F3B0(s32 a)
{
    Q *first;
    u8 *last;
    u8 *mid;
    if (!D_007DD290[a * 0x1C4]) return 0;
    first = D_007DD840;
    last = D_007DD880;
    mid = D_007DD7E0;
    func_002D8270(mid, 0x50, 0, last, 0, first, 0x40, 0, 0);
    return *(s32 *)((u8 *)first + a * 0x10 + 0xC);
}
