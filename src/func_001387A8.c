typedef struct {
    u8 *x0;
    u8 pad4[0x10];
    s32 x14;
    s32 x18;
    s32 x1C;
} S_138758;

s32 func_00138758(S_138758 *o, s32 n, void **out) {
    u8 *base = o->x0;
    if (n >= o->x14 && n < o->x18) {
        return 5;
    }
    if (n >= o->x1C) {
        return 5;
    }
    *out = base + (*(s32 *)(base + 0x10) + n);
    return 0;
}

s32 func_001387A8(S_138758 *o, s32 n, s32 *out, void **out2) {
    u8 *base;
    s32 old;
    s32 cur;
    void *p;
    n *= 4;
    old = o->x14;
    base = o->x0;
    if ((u32)(o->x18 - old - n) < 0x40) {
        return 0x10;
    }
    *out = old;
    cur = o->x14;
    p = base + (*(s32 *)(base + 0x10) + cur);
    o->x14 = cur + n;
    *out2 = p;
    return 0;
}

typedef struct {
    u8 pad[0x3C];
    s32 x3C[4];
    s32 x4C[4];
} S_138478;

s32 func_00138478(S_138478 *o, s32 key, s32 *out) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (o->x3C[i] == key) {
            break;
        }
    }
    if (i >= 4) {
        return 0x17;
    }
    *out = o->x4C[i];
    return 0;
}
