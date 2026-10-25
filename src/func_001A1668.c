void *func_001A1668(void *key, char *base, u32 n, u32 size, s32 (*cmp)(void *, void *)) {
    u32 lo = 0;
    u32 hi = n;
    u32 mid;
    char *p;
    s32 r;

    if (n == 0 || size == 0)
        return 0;
    while (lo < hi) {
        mid = (lo + hi) >> 1;
        p = base + mid * size;
        r = cmp(key, p);
        if (r < 0)
            hi = mid;
        else if (r > 0)
            lo = mid + 1;
        else
            return p;
    }
    return 0;
}
