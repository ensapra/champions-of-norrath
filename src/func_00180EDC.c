s32 func_001AFB98(s32,s32,s32,s32,s32,s32,s32);
s64 func_001AFD10(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5){ return func_001AFB98(a0,1,a1,a2,a3,a4,a5); }

s32 func_00180EDC(s32 c) {
    if ((u32)(c - '0') < 10) return c - '0';
    c |= 0x20;
    if ((u32)(c - 'a') < 6) return c - 'a' + 10;
    return 0;
}

typedef int u128 __attribute__((mode(TI)));
void func_00180E34(u128 *dst, u128 *src, s32 n) {
    s32 q = n / 4;
    s32 r = n - q * 4;
    while (r--) {
        *dst++ = *src++;
    }
    while (q--) {
        u128 a, b, c, d;
        a = *src++;
        b = *src++;
        c = *src++;
        d = *src++;
        *dst++ = a;
        *dst++ = b;
        *dst++ = c;
        *dst++ = d;
    }
}

void *D_00480430;
s32 func_00180CF4(void) {
    u8 *p = D_00480430;
    s32 *q = *(s32 **)(p + 0x564);
    return *(s32 *)(p + 0x560) - ((u32)(q[0] - q[1]) >> 4) - 1;
}
