extern f32 D_0037EE80[];
extern f32 D_0037EF00[];
s32 func_0026BE00(void *, s32, s32);
s32 func_0026C5D8(void *obj, u8 *p) {
    u8 *start = p;
    s32 i, j, k, a, b;
    s32 sv;
    f32 x, y, z, lo, t, va, vb, one;
    s8 *dest;
    u8 *q;
    p += 4;
    func_0026BE00(obj, 1, 0);
    D_0037EE80[0] = *(f32 *)(p - 4);
    dest = (s8 *)obj + 0x100;
    p += 4;
    D_0037EE80[1] = *(f32 *)(p - 4);
    p += 4;
    D_0037EE80[2] = *(f32 *)(p - 4);
    for (i = 0; i < 4; i++) {
        for (j = 3; j >= 0; j--) {
            p += 4;
            D_0037EF00[3 * i + (3 - j)] = *(f32 *)(p - 4);
        }
    }
    q = (u8 *)obj + 0xC;
    p += 2;
    sv = *(s16 *)(p - 2);
    p += 2;
    *(s16 *)((char *)obj + 0x68) = sv;
    sv = *(s16 *)(p - 2);
    p += 4;
    *(s16 *)((char *)obj + 0x6a) = sv;
    a = *(s32 *)(p - 4);
    p += 4;
    *(s32 *)((char *)obj + 0x54) = a;
    b = *(s32 *)(p - 4);
    p += 4;
    x = *(f32 *)(p - 4);
    p += 4;
    *(s32 *)((char *)obj + 0x58) = b;
    *(f32 *)((char *)obj + 0x90) = x;
    y = *(f32 *)(p - 4);
    p += 4;
    *(f32 *)((char *)obj + 0xd4) = y;
    z = *(f32 *)(p - 4);
    lo = *(f32 *)((char *)obj + 0xb0);
    one = 1.0f;
    t = one <? x;
    *(f32 *)((char *)obj + 0x8c) = z;
    *(f32 *)((char *)obj + 0xd8) = one - (z - lo) / (*(f32 *)((char *)obj + 0xb8) - lo);
    va = *(f32 *)(q + b * 4 + 0xb0);
    vb = *(f32 *)(q + a * 4 + 0xb0);
    *(f32 *)((char *)obj + 0xfc) = va + (vb - va) * t;
    for (k = 0; k < 96; k++) {
        s32 c;
        p++;
        c = *(s8 *)(p - 1);
        *dest++ = c;
    }
    return p - start;
}
