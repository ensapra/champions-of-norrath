typedef int u128 __attribute__((mode(TI)));
void *func_00301FFC(void *dst, void *src, u32 n) {
    u8 *d = (u8 *)dst;
    u8 *s = (u8 *)src;
    if (n >= 32 && !(((u32)s | (u32)d) & 0xF)) {
        while (n >= 32) {
            *(u128 *)d = *(u128 *)s;
            s += 16; d += 16;
            *(u128 *)d = *(u128 *)s;
            s += 16; d += 16;
            n -= 32;
        }
        while (n >= 8) {
            *(u64 *)d = *(u64 *)s;
            s += 8; d += 8;
            n -= 8;
        }
    }
    while (n-- != 0) {
        *d++ = *s++;
    }
    return dst;
}
