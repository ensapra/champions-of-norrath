s32 func_001A2418(const void *m1, const void *m2, u32 n)
{
    const u8 *s1 = m1;
    const u8 *s2 = m2;

    if (n >= 16 && (((u32)s1 | (u32)s2) & 15) == 0) {
        do {
            const u64 *a1 = (const u64 *)s1;
            const u64 *a2 = (const u64 *)s2;
            if ((a1[0] ^ a2[0]) | (a1[1] ^ a2[1]))
                break;
            s1 += 16;
            s2 += 16;
            n -= 16;
        } while (n >= 16);
    }
    while (n--) {
        if (*s1 != *s2)
            return *s1 - *s2;
        s1++;
        s2++;
    }
    return 0;
}
