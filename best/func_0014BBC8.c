typedef struct { f32 x, y, z; } V3;
typedef struct { u64 q[9]; } B48;
typedef struct { u32 w[12]; } B30;
typedef struct { s32 a, b, c, d; } Ent;
extern Ent D_0031F540[];
extern u8 D_0044CEF8[], D_0044D018[];
extern char D_004623A0[];
s32 func_00108498(void *);
void func_001411F0(void *, V3 *, s32, s32);
void func_00143630(void *);
void func_00143830(void *);
s32 func_00165DC0(void *, void *);
void func_00304640(void *, s32);
void *memcpy(void *, const void *, unsigned);
#define U(T, off) (*(T *)(o + (off)))
void func_0014BBC8(u8 *o, V3 pos, B48 *src, B30 *blk) {
    s32 a, b;
    u8 *t;
    int i;
    V3 tmp = pos;
    a = D_0031F540[func_00108498(src)].a;
    b = D_0031F540[func_00108498(src)].b;
    func_001411F0(o, &tmp, 0, 0);
    U(u8 *, 0x48) = D_0044D018;
    U(s32, 0xC) |= 0x1809;
    func_00143630(o);
    U(f32, 0x1C) = 4.0f;
    U(u16, 0x140) = 1;
    *(B30 *)(o + 0x110) = *blk;
    memcpy(o + 0x54, D_004623A0, 13);
    func_00304640(o + 0x64, a);
    func_00304640(o + 0xA4, b);
    U(s32, 0x4C) = func_00165DC0(o + 0x54, o + 0x64);
    U(s32, 0x50) = func_00165DC0(o + 0x54, o + 0xA4);
    U(s64, 0xE8) = -1;
    if (U(u16, 0x140) & 2) {
        func_00143830(o);
        U(s32, 0xC) |= 0x4000;
    }
    if (U(u16, 0x140) & 4) {
        U(s32, 0xC) |= 0x1000;
    }
    t = o + 0x148;
    U(u8 *, 0x48) = D_0044CEF8;
    for (i = 3; i >= 0; i--) *(s16 *)(o + 0x184 - (3 - i) * 8) = -1;
    t[0x21] = -1;
    t[0x20] = -1;
    for (i = 0; i < 4; i++) {
        *(s16 *)(t + 0x10 + i * 2) = 0;
        *(s16 *)(t + 0x18 + i * 2) = 0;
    }
    *(B48 *)t = *src;
    U(s32, 0xC) = (U(s32, 0xC) | 0x102000) & ~0x1800;
    if (U(u64, 0x150) & ((u64)0x8000 << 24)) U(s32, 0xC) &= ~0x3000;
    func_00143630(o);
}
