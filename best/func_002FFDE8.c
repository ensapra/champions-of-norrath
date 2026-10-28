extern s32 D_00448480[];

void func_003001A8(void *);
s32 func_00301088(s32, void *);

typedef struct S {
    s32 f00;
    s32 pad04;
    s32 f08;
    s16 f0C;
    s16 pad0E;
    s32 f10;
    s32 f14;
    s32 pad18;
    s32 f1C;
    s32 pad20;
    s32 (*f24)(s32, s32, s32);
    s32 pad28[4];
    s32 f38;
    s32 pad3C[6];
    struct S *f54;
} S;

s32 func_002FFDE8(S *a) {
    S *d;
    s32 sz, old, n, r;
    s16 fl;

    if (a == 0)
        return func_00301088(D_00448480[0], func_002FFDE8);

    d = a->f54;
    if (d == 0) {
        d = (S *)D_00448480[0];
        a->f54 = d;
    }
    if (d->f38 == 0)
        func_003001A8(d);

    fl = a->f0C;
    if (!(fl & 8))
        return 0;
    sz = a->f10;
    r = 0;
    if (sz == 0)
        return 0;
    old = a->f00;
    a->f00 = sz;
    n = old - sz;
    if (!(fl & 3))
        r = a->f14;
    a->f08 = r;
    while (n > 0) {
        r = a->f24(a->f1C, sz, n);
        if (r <= 0) {
            a->f0C |= 0x40;
            return -1;
        }
        n -= r;
        sz += r;
    }
    return 0;
}
