typedef struct Big { s32 pad0; s32 k; s32 maxwds; s32 sign; s32 wds; u32 x[1]; } Big;
Big *func_001AA860(s32, s32);
void func_001AA908(s32, Big *);

Big *func_001AAFF8(s32 ctx, Big *b, s32 n) {
    s32 i, k, k1, n1;
    u32 *x, *x1, *xe, z;
    Big *b1;
    n1 = n >> 5;
    k = b->k;
    i = b->maxwds;
    k1 = n1 + b->wds + 1;
    for (; i < k1; i <<= 1) k++;
    b1 = func_001AA860(ctx, k);
    x1 = b1->x;
    for (i = 0; i < n1; i++) *x1++ = 0;
    x = b->x;
    xe = x + b->wds;
    n &= 0x1f;
    if (n) {
        s32 k0 = 32 - n;
        z = 0;
        do {
            *x1++ = (*x << n) | z;
            z = *x++ >> k0;
        } while (x < xe);
        if ((*x1 = z) != 0) k1++;
    } else {
        do *x1++ = *x++;
        while (x < xe);
    }
    b1->wds = k1 - 1;
    func_001AA908(ctx, b);
    return b1;
}
