typedef struct { u64 d[0x28]; } Blk;
typedef struct W {
    char p0[0x5DC];
    s32 x5DC;
    char p1[0x40990 - 0x5E0];
    Blk a;
    Blk b;
} W;
extern s32 D_0048041C;
void func_0016FEAC(void *, s32);
void func_00170584(void *, ...);
s32 func_00170894(s32, s32, s32, s32);

#define A(o) (*(s32 *)((char *)w + 0x40990 + (o)))
void func_00153D78(W *w) {
    u32 i;
    char *p = (char *)w + 0x409A0;
    char *q = (char *)w + 0x40990;
    func_0016FEAC(p, 0x11);
    func_00170584((char *)w + 0x409B0, 0xC7, 0xAE, 1, 0xAF, 6, 0xB0, 0, 0xB1, 0, 0xB2, 0, 0xB4, 0, 0xB5, 0, 0);
    func_00170584((char *)w + 0x409C0, 0x88, 0x6E, 0, 0x6F, 0, 0x70, 0, 0x71, 0xFF, 0x72, 0, 0x73, 0xFF, 0);
    func_00170584((char *)w + 0x409D0, 0xC2, 0x63, 0, 0x64, 1, 0x65, 0, 0x66, 1, 0x67, 0x80, 0);
    func_00170584((char *)w + 0x409E0, 0x49, 0x9A, 0, 0);
    func_00170584((char *)w + 0x409F0, 0, 0x9B, 5, 0x9C, 1, 0x9D, 0, 0x9E, 0, 0x9F, w->x5DC, 0xA0, 0, 0xA1, 1, 0xA2, D_0048041C, 0x67, 0, 0);
    for (i = 0; i < 6; i++) {
        func_00170584(p + 0x60, 1, 0);
        func_00170584(p + 0x70, 5, 0);
        p += 0x20;
    }
    *(s32 *)(q + 4) = 0;
    *(s32 *)q = 0x10000012;
    A(8) = 0;
    A(12) = func_00170894(0x50, 0, 0x12, 0);
    *(s32 *)(q + 0x130) = 0x60000000;
    *(s32 *)(q + 0x134) = 0;
    *(s32 *)(q + 0x138) = 0;
    *(s32 *)(q + 0x13C) = 0;
    w->b = w->a;
}
