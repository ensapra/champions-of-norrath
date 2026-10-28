extern s32 func_00304CFC(s8 *);
extern s32 *D_006D8FA0[0x2000];

void func_001670C8(s8 *s) {
    s32 len, i, h;
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
        h &= 0x1FFF;
        while (D_006D8FA0[h] != 0)
            h = (h + 1) & 0x1FFF;
        D_006D8FA0[h] = (s32 *)s;
        s = (s8 *)((s32)(s + len + 2) & -2);
        p = (s16 *)s;
        if (*p != 0) {
            p++;
            while (*p != 0)
                p++;
        }
        s = (s8 *)(p + 1);
    }
}
