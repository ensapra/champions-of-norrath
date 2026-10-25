typedef struct { u8 a, b, c, d; u16 e, f, g, h; u32 i, j; } Cfg;
extern u8 D_0047B3B0[], D_0047B3C0[], D_0047B3D0[];
extern Cfg D_008DD830;
#define R0 (*(volatile u32 *)0x1000E000)
#define R1 (*(volatile u32 *)0x1000E020)
#define R2 (*(volatile u32 *)0x1000E030)
#define R3 (*(volatile u32 *)0x1000E050)
#define R4 (*(volatile u32 *)0x1000E040)

s32 func_002D2DB0(Cfg *p) {
    u32 v, t;
    v = R0; t = R1; t = R2; t = R3; t = R4;
    if (p->a >= 10) return -1;
    if (p->b >= 10) return -2;
    if (p->c >= 10) return -3;
    if (p->d >= 7) return -4;
    v = (v & ~0x30) | (D_0047B3B0[p->a] << 4);
    v = (v & ~0xC0) | (D_0047B3C0[p->b] << 6);
    v = (v & ~0xC) | (D_0047B3D0[p->c] << 2);
    if (p->d) {
        v |= 2;
        v = (v & ~0x300) | ((p->d - 1) << 8);
    } else {
        v &= ~2;
    }
    R0 = v;
    R1 = (p->e << 16) | p->f;
    R2 = (p->h << 16) | p->g;
    R3 = p->i;
    R4 = p->j;
    D_008DD830 = *p;
    return 0;
}
