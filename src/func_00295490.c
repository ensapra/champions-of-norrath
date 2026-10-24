typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P12;
s32 func_001441B8(s32);
void func_00294308(s32, void *, s32, void *, s32);
s32 func_00295490(s32 a, s32 b, void *c, volatile P12 *d) {
    volatile P12 copy = *d;
    s32 r;
    *(volatile s16 *)((u8 *)c + 0x98) = -100;
    *(volatile s16 *)((u8 *)c + 0x94) = -100;
    *(volatile s16 *)((u8 *)c + 0x96) = -100;
    *(volatile s16 *)((u8 *)c + 0x9A) = 0;
    r = func_001441B8(0x30);
    if (r) func_00294308(r, (void *)&copy, b, c, a);
    return r;
}

typedef struct { u8 *p; s32 pad; s32 n; s32 pad2[3]; s32 lim; } File;
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
        c = 10;
    }
    return func_00309250(c, f);
}
