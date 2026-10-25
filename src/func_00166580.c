typedef struct { s32 key; s32 a; s32 b; } Entry;

s32 func_003044FC(s32, s32);

s32 *func_00166580(u16 *arg0, s32 key) {
    u8 *base = (u8 *)arg0 + 4;
    s32 lo = 0;
    s32 hi = *arg0 - 1;
    s32 top = hi;
    s32 mid;
    s32 r;
    for (;;) {
        r = 1;
        mid = (lo + hi) >> 1;
        if (mid >= 0) {
            if (mid > top)
                r = -1;
            else
                r = func_003044FC(key, ((Entry *)(base + mid * 12))->key);
        }
        if (r == 0)
            return (s32 *)(base + mid * 12);
        if (lo < hi) {
            if (r > 0)
                lo = mid + 1;
            else
                hi = mid - 1;
        } else {
            return 0;
        }
    }
}
