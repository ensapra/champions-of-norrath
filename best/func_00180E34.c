typedef int u128 __attribute__((mode(TI)));
void func_00180E34(u128 *dst, u128 *src, s32 n) {
    s32 q = n / 4;
    s32 r = n - q * 4;
    s32 i;
    while (r--) {
        *dst++ = *src++;
    }
    i = q - 1;
    if (q) {
        do {
            u128 a, b, c, d;
            a = *src++;
            b = *src++;
            c = *src++;
            d = *src++;
            *dst++ = a;
            *dst++ = b;
            *dst++ = c;
            *dst++ = d;
        } while (i-- != 0);
    }
}
