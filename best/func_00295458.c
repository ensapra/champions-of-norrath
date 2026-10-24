extern f32 D_00482754;
typedef struct {
    char pad0[0xE];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C;
    char pad1[6];
    volatile f32 f24, f28, f2C;
} Obj3;
void func_00295458(Obj3 *a) {
    f32 x = 2.0f;
    f32 y = D_00482754;
    s16 one = 1;
    a->f18 = 10;
    a->f28 = y;
    a->f24 = x;
    a->f10 = one;
    a->f1A = 3;
    a->f0E = one;
}

typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P12;
typedef struct { u8 pad[0x94]; s16 f94, f96, f98, f9A; } Obj;
s32 func_001441B8(s32);
void func_00294308(s32, void *, s32, Obj *, s32);
s32 func_00295490(s32 a, s32 b, Obj *c, P12 *d) {
    P12 copy = *d;
    s32 r;
    c->f98 = -100;
    c->f94 = -100;
    c->f96 = -100;
    c->f9A = 0;
    r = func_001441B8(0x30);
    if (r) func_00294308(r, &copy, b, c, a);
    return r;
}

typedef struct { u8 *p; s32 n; s32 pad[4]; s32 lim; } File;
s32 func_00309250(s32, File *);
s32 func_00300450(s32 c, File *f) {
    s32 n = f->n - 1;
    f->n = n;
    if (n >= 0) {
        *f->p = c;
        return *f->p++;
    }
    if (n >= f->lim) {
        *f->p = c;
        if (*f->p != 10) return *f->p++;
    }
    return func_00309250(c, f);
}
