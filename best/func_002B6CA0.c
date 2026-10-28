typedef struct { s16 adj; s16 pad; s32 (*fn)(void *, s32, s32); } VEnt;
typedef struct { f32 x, y, z; } V3;
extern u8 D_0044E670[];
extern u8 D_00452C30[];
extern char D_004864C0[];
extern char D_00479590[];
extern const f32 D_00482E4C;
extern const f32 D_00482E50;
extern const f32 D_00482E54;
s32 D_00483E5C;
s32 func_0015E948(void);
u32 func_001589F8(f32, f32, f32);
void *func_00165DC0(char *, char *);
s32 func_001828D8(f32, s32, s32, s32, s32, s32, s32, s32);
f32 func_002F16B8(f32, f32);
void func_0024D4F8(f32, void *, void *);
#define F(T, o) (*(T *)((u8 *)this + (o)))
#define Q(T, o) (*(T *)((u8 *)q + (o)))
#define VCALL(obj, n, a) (((VEnt *)(*(u8 **)((u8 *)(obj) + 0x60) + 0x58))->fn((u8 *)(obj) + ((VEnt *)(*(u8 **)((u8 *)(obj) + 0x60) + 0x58))->adj, n, a))

void func_002B6CA0(void *this, s32 a, u8 *b, u8 *c) {
    u32 col1, col2, col3, x;
    s32 i, j, k, n, off, r, g, bl, r2, g2, b2, neg;
    f32 f;
    s32 *q = (s32 *)this + 1;
    neg = -100000;
    *q = 0;
    F(s8, 0) = a;
    x = D_00483E5C * 0x19660D + 0x3C6EF35F;
    F(u8 *, 0xC) = b;
    D_00483E5C = x;
    *(u8 * volatile *)&F(u8 *, 0x14) = D_0044E670;
    F(u8 *, 8) = c;
    F(u32, 0x10) = x >> 16;
    F(u8 *, 0x14) = D_00452C30;
    f = (f32)func_0015E948() * (1.0f / 65536.0f);
    col1 = func_001589F8(f, D_00482E4C, 1.0f);
    r = col1 & 0xFF; g = (col1 >> 8) & 0xFF; bl = (col1 >> 16) & 0xFF;
    F(s32, 0x1C) = func_001828D8(2.0f, 1, 200, 5, r, g, bl, 0x80);
    f += 0.5f;
    col2 = func_001589F8(func_002F16B8(f, 1.0f), D_00482E50, 1.0f);
    col3 = func_001589F8(func_002F16B8(f, 1.0f), D_00482E54, 1.0f);
    r2 = col2 & 0xFF; g2 = (col2 >> 8) & 0xFF; b2 = (col2 >> 16) & 0xFF;
    F(s32, 0x20) = func_001828D8(2.0f, 1, 100, 5, r2, g2, b2, 0x80);
    F(s32, 0x24) = func_001828D8(2.0f, 1, 100, 5, col3 & 0xFF, (col3 >> 8) & 0xFF, (col3 >> 16) & 0xFF, 0x80);
    F(s8, 0x19) = 0;
    F(s8, 0x1A) = 0;
    off = 0x350;
    for (j = 4; j >= 0; j--) {
        Q(s32, off) = neg;
        F(s32, off) = func_001828D8(2.0f, 6, 4000, 5, r, g, bl, 0x20);
        off += 8;
    }
    n = VCALL(F(u8 *, 8), 1, F(s8, 0));
    F(f32, 0x348) = F(f32, 0x34C) = (f32)(n * 2);
    n = VCALL(F(u8 *, 8), 3, F(s8, 0));
    F(f32, 0x344) = (f32)(n * 3);
    for (k = 5; k >= 0; k--) F(f32, 0x32C + (5 - k) * 4) = F(f32, 0x344);
    F(s32, 0x378) = col1;
    F(s32, 0x37C) = func_001828D8(2.0f, 1, 300, 5, r, g, bl, 0x80);
    n = VCALL(F(u8 *, 8), 2, F(s8, 0));
    F(s32, 0xB8) = n;
    if (n >= 7) F(s32, 0xB8) = 6;
    for (i = 0; i < F(s32, 0xB8); i++) {
        F(s32, 0xBC + i * 4) = func_001828D8(2.0f, 1, 100, 5, r, g, bl, 0x80);
        Q(s32, 0xD0 + i * 4) = func_001828D8(2.0f, 1, 100, 5, r2, g2, b2, 0x80);
    }
    {
        V3 tmp = *(V3 *)(F(u8 *, 0xC) + 0x10);
        void *o = func_00165DC0(D_004864C0, D_00479590);
        func_0024D4F8(1.0f, o, &tmp);
    }
}
