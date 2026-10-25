extern s32 func_00304CFC(s8 *);
extern s32 *D_006D8FA0[0x2000];

void func_001670C8(s8 *s) {
    s32 len, i, h, idx;
    s16 *p;

    while (*s != 0) {
        len = func_00304CFC(s);
        h = 0;
        for (i = 0; i < len; i++) {
            h += s[i];
            h = h + (h << 10);
            h ^= h >> 6;
        }
        h = h + (h << 3);
        h ^= h >> 11;
        idx = h & 0x1FFF;
        if (D_006D8FA0[idx] != 0) {
            do {
                idx = (idx + 1) & 0x1FFF;
            } while (D_006D8FA0[idx] != 0);
        }
        D_006D8FA0[idx] = (s32 *)s;
        p = (s16 *)(((s32)(s + len) + 2) & ~1);
        if (*p != 0) {
            do {
                p++;
            } while (*p != 0);
        }
        s = (s8 *)(p + 1);
    }
}
