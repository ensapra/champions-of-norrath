u64 func_001707D0(u8 *src, s32 key, __builtin_va_list ap) {
    u64 acc = 0;
    s32 off = -1;
    while (key != 0) {
        if (off == -1 || src[off] != key) {
            u8 *p = src + 2;
            u8 n = src[1];
            for (off = 0; off < n * 3; off += 3, p += 3) {
                if (*p == key) break;
            }
            if (off == src[1] * 3) return 0;
        }
        acc |= (u64)__builtin_va_arg(ap, u32) << src[off + 3];
        off += 3;
        key = __builtin_va_arg(ap, s32);
    }
    return acc;
}
