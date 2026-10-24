/* identical to func_001AAB70 (matched), with its names changed by decompdecomp */
typedef struct { s32 size; s32 count; u8 *rd; u8 *wr; u8 data[1]; } Ring;
void func_001AE898(Ring *r) {
    r->count++;
    r->wr++;
    if (r->wr == r->data + r->size)
        r->wr = r->data;
}

typedef struct Bigint {
    struct Bigint *next;
    s32 k, maxwds, sign, wds;
    u32 x[1];
} Bigint;

s32 func_001AB150(Bigint *a, Bigint *b) {
    u32 *xa, *xa0, *xb, *xb0;
    s32 i, j;
    i = a->wds;
    j = b->wds;
    if (i -= j)
        return i;
    xa0 = a->x;
    xa = xa0 + j;
    xb0 = b->x;
    xb = xb0 + j;
    for (;;) {
        if (*--xa != *--xb)
            return *xa < *xb ? -1 : 1;
        if (xa <= xa0)
            break;
    }
    return 0;
}

Bigint *func_001AA860(void *ptr, s32 k);
Bigint *func_001AACB0(void *ptr, s32 i) {
    Bigint *b = func_001AA860(ptr, 1);
    b->x[0] = i;
    b->wds = 1;
    return b;
}

s32 func_0030B708(u32 x) {
    s32 k = 0;
    if (!(x & 0xffff0000)) {
        k = 16;
        x <<= 16;
    }
    if (!(x & 0xff000000)) {
        k += 8;
        x <<= 8;
    }
    if (!(x & 0xf0000000)) {
        k += 4;
        x <<= 4;
    }
    if (!(x & 0xc0000000)) {
        k += 2;
        x <<= 2;
    }
    if (!(x & 0x80000000)) {
        k++;
        if (!(x & 0x40000000))
            return 32;
    }
    return k;
}
