extern "C" {
struct V { f32 x, y, z; };
extern s32 D_00451220[];
extern char D_00478098[], D_00486248[];
extern f32 D_004828E8, D_004828EC, D_004828F0, D_004828F4;
extern s32 D_004844A4;
void func_001411F0(void *, void *, s32, s32);
void ovl_ntgui2_func_0013D230(void *);
void func_00194390(void *, void *, void *);
void func_0013EB60(void *);
void func_00143830(void *);
void *func_001441B8(s32);
s32 func_00165DC0(void *, void *);
void func_001E5278(void *, V *, s32, s32, V *, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_0024D308(s32, void *, f32);
void func_0024C5F8(s32);

struct VT { s16 off; s16 pad; s32 (*fn)(void *, s32, s32, void *); };

void func_0029BD40(char *t, s32 a1, char *a2, V *a3, char *a4) {
    char *p = t + 0x50;
    s32 *q = (s32 *)(t + 0x4C);
    V sp20, sp30;
    f32 z = 0.0f;
    f32 one;
    s32 r;
    sp20 = *a3;
    func_001411F0(t, &sp20, 0, 0);
    *(s32 **)(t + 0x48) = D_00451220;
    one = 1.0f / z;
    *q = 0;
    sp30 = sp20;
    *(u8 *)(p + 9) = 0;
    *(V *)(t + 0x80) = sp30;
    *(f32 *)(p + 0x2C) = D_004828E8;
    *(s16 *)(p + 0x12) = 0xFF;
    *(f32 *)(p + 0x28) = one;
    *(s16 *)(p + 0x14) = 0x80;
    *(s16 *)(p + 0x18) = -0x10;
    *(f32 *)(p + 0x1C) = z;
    *(f32 *)(p + 0x24) = z;
    *(f32 *)(p + 0x20) = one;
    *(s16 *)(p + 0xA) = 0xFF;
    *(s16 *)(p + 0xC) = 0x80;
    *(s16 *)(p + 0xE) = 0;
    *(s16 *)(p + 0x10) = -0x10;
    *(s16 *)(p + 0x16) = 0;
    *(u8 *)(p + 8) = 0;
    ovl_ntgui2_func_0013D230(p);
    *(s32 *)(t + 0xC) |= 0x421B;
    if (a2) func_00194390(q, a2, a2);
    *(s32 *)(t + 0x8C) = a1;
    *(V *)(t + 0x10) = sp20;
    *(char **)(t + 0x90) = a4;
    {
        VT *vt = (VT *)(*(char **)(a4 + 0x60) + 0x70);
        r = vt->fn(a4 + vt->off, 1, *(s32 *)(t + 0x8C), q);
    }
    *(s32 *)(t + 0x9C) = r * 12;
    if ((*(s32 *)(a2 + 0xC) & 0x60) != 0x20) {
        char *b = *(char **)(t + 0x90);
        VT *vt;
        s32 base;
        *(s32 *)(t + 0x98) = 0;
        vt = (VT *)(*(char **)(b + 0x60) + 0x70);
        r = vt->fn(b + vt->off, 2, *(s32 *)(t + 0x8C), q);
        base = D_004844A4;
        *(s32 *)(t + 0x94) = base + r * 60;
    } else {
        char *b;
        VT *vt;
        void *o;
        *(f32 *)(t + 0x98) = (f32)D_004844A4 + D_004828EC;
        o = func_001441B8(0xBC);
        if (o) {
            V s40, s50;
            s32 n = *(s32 *)(t + 0x9C);
            s50.x = z; s50.z = 12.0f; s50.y = z;
            s40.x = sp20.x + z; s40.y = sp20.y; s40.z = sp20.z + 12.0f;
            func_001E5278(o, &s40, 0, 1, &s40, 255.0f, 128.0f, 0, 100.0f, 255.0f, 128.0f, 0, 100.0f, (f32)n, (f32)(n * 2), D_004828F4, D_004828F0);
        }
        b = *(char **)(t + 0x90);
        vt = (VT *)(*(char **)(b + 0x60) + 0x70);
        r = vt->fn(b + vt->off, 2, *(s32 *)(t + 0x8C), q);
        *(s32 *)(t + 0x94) = *(s32 *)(t + 0x98) + r * 60;
    }
    *(s32 *)(t + 0xA0) = 0;
    func_0013EB60(p);
    func_00143830(t);
    r = func_0024D308(func_00165DC0(D_00486248, D_00478098), t, 1.0f);
    *(s32 *)(t + 0xA4) = r;
    func_0024C5F8(r);
}
}
