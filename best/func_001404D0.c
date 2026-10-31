/* identical to func_0019B704 (matched), with its names changed by decompdecomp */
/* identical to func_0024EB90 (matched), with its names changed by decompdecomp */

extern u8 D_00366B34[];
void *func_001B0AA8(void *);
void func_001404D0(void) { func_001B0AA8(D_00366B34); }

extern char D_00474630[];
void *func_0024A1F0(s32);
s32 func_0024A660(void *, char *, s32, s32, s32, s32, s16, s32);
void func_0024EBC0(void *a0, s32 a1, s32 a2) {
    s32 *p = func_0024A1F0(a1);
    if (p != 0) {
        s32 start = p[0x40 / 4];
        s32 end = p[0x90 / 4];
        if (end != start)
            func_0024A660(a0, D_00474630, a2, start, end - start,
                p[0x44 / 4], *(s16 *)((char *)p + 0x48), p[0x4C / 4]);
    }
}

s8 *func_0024F6C8(void);
s8 *func_0024EC38(s32 arg0) {
    s8 *base = func_0024F6C8();
    s32 i;
    if (base == 0) return 0;
    if (arg0 < 0) return base + arg0 * 0x50;
    i = 0;
    while (base[i * 0x50] != 0) {
        i++;
        if (arg0 < i) return base + arg0 * 0x50;
    }
    return 0;
}

s32 func_003021B0(void *, s32, s32);
extern u8 D_007DD290[];
void func_0024F0A8(s32 arg0) {
    u8 *p = D_007DD290 + arg0 * 0x1C4;
    s32 i = 0;
    if (*(s32 *)(p + 0x1C0) > 0) {
        u8 *q = p + 0x40;
        do {
            q += 0x30;
            func_003021B0(q - 0x30, 0, 0x30);
            i++;
        } while (i < *(s32 *)(p + 0x1C0));
    }
    *(s32 *)(p + 0x24) = 0;
    *(s32 *)(p + 0x1C0) = 0;
}
