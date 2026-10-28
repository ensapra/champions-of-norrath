typedef struct { u8 pad[0x24]; s32 f24; } Hd;
typedef struct { s32 f0; s32 f4; s32 f8; s32 fC; s32 f10; s32 f14; s32 f18; s32 f1C; u8 data[16]; } Pk;
extern Hd D_010EB640;
extern Pk D_010EB6C0;
extern u8 D_010ECC00[];
extern s32 D_001D0480[];
extern s32 D_001D0484[];
s32 PollSema(s32);
s32 SignalSema(s32);
void FlushCache(s32);
void func_0017A088(void);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, void *, s32);

s32 func_0017A6D0(s32 a, u8 *src, s32 size) {
    s32 r;
    u32 al, v;
    u32 i;
    if (D_010EB640.f24 == 0) return -100;
    if (PollSema(D_001D0484[0]) < 0) return -200;
    D_010EB6C0.f0 = a;
    if (size <= 0x10) {
        D_010EB6C0.f14 = size;
        D_010EB6C0.fC = 0;
        D_010EB6C0.f18 = 0;
    } else {
        al = ((u32)src - 1) & ~0xF;
        v = al - ((u32)src - 0x10);
        D_010EB6C0.f14 = v;
        D_010EB6C0.fC = size - v;
        D_010EB6C0.f18 = (s32)src + v;
    }
    if (D_010EB6C0.f14) {
        i = 0;
        do {
            D_010EB6C0.data[i] = src[i];
            i++;
        } while (i < D_010EB6C0.f14);
    }
    FlushCache(0);
    r = func_001B08B0(&D_010EB640, 6, 1, &D_010EB6C0, 0x30, D_010ECC00, 4, (void *)func_0017A088, 0);
    if (r == 0) {
        D_001D0480[0] = 6;
        return r;
    }
    SignalSema(D_001D0484[0]);
    return r;
}
