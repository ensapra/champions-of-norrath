extern s32 D_004844A4;
void func_001CE218(void *, void *, s32, s32, s32, s32, void *, s32, f32, f32);
void func_0022FEE8(char *o, char *r) {
    s16 l[38];
    char *p, *q;
    s16 *a, *b, t;
    s32 i, k, n;
    if ((*(s32 *)(r + 0xC) & 0x40) && *(s8 *)(o + 0x8A) != 2 && *(s8 *)(o + 0x8A) != 3) {
        if (D_004844A4 % 12 == 0) {
            p = (char *)l;
            q = p + 8;
            for (i = 3; i >= 0; i--) ((s16 *)p)[0x12 + i * 4] = -1;
            p[0x21] = -1;
            p[0x20] = -1;
            for (i = 3, k = 0x10; i >= 0; i--, k += 2) { *(s16 *)(p + k) = 0; *(s16 *)(q + k) = 0; }
            n = 0;
            a = (s16 *)(p + 0x24);
            b = (s16 *)(p + 0x2A);
            for (;;) {
                t = *a;
                if (t == -1 || (n++, t == 0x15)) {
                    *a = 0x15; *b = 0; b[-2] = 1; b[-1] = 1;
                    break;
                }
                b += 4; a += 4;
                if (n >= 4) break;
            }
            func_001CE218(r, o, 0x989680, 0, 0, 0x100C040, p, 0, 0.0f, 0.0f);
        }
    }
}
