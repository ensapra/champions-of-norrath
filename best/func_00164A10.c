typedef struct { s32 key; s32 a; s32 b; } Entry;
s32 func_003044FC(s32, s32);
s32 func_00304CFC(s32);
s32 func_00304F60(s32, s32, s32);
Entry *func_00164A10(u16 *arg0, s32 key) {
    u8 *base = (u8 *)arg0 + 4;
    s32 count = *arg0;
    s32 lo = 0;
    s32 hi = count - 1;
    s32 top = hi;
    s32 mid;
    s32 r;
    Entry *p;
    s32 len;
    for (;;) {
        r = 1;
        mid = (lo + hi) >> 1;
        if (mid >= 0) {
            if (mid > top)
                r = -1;
            else
                r = func_003044FC(key, ((Entry *)(base + mid * 12))->key);
        }
        if (lo < hi) goto upd;
        len = func_00304CFC(key);
        p = (Entry *)(lo * 12 + (s32)base);
        if (func_00304F60(key, p->key, len) == 0)
            return p;
        if (lo + 1 < count) {
            len = func_00304CFC(key);
            p++;
            if (func_00304F60(key, p->key, len) == 0)
                return p;
        }
        return 0;
    upd:
        if (r > 0) lo = mid + 1;
        else hi = mid - 1;
    }
}
