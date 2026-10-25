typedef struct E50 { s8 n; u8 pad[0x49]; s16 k; u8 pad2[4]; } E50;
E50 *func_0024F6C8(void);
s32 func_003044FC(s32, E50 *);
s8 D_004844B4;
E50 *func_0024A120(s32 arg0) {
    E50 *b = func_0024F6C8();
    E50 *p;
    s32 i, x, y;
    if (b == 0) return 0;
    x = -1;
    y = -1;
    i = 0;
    if (b->n != 0) {
        p = b;
        do {
            if (func_003044FC(arg0, p) == 0) {
                if (p->k == 0) y = i;
                if (p->k == D_004844B4) x = i;
            }
            p++;
            i++;
        } while (p->n != 0);
    }
    if (x < 0 && y < 0) return 0;
    x = (x < 0) ? y : x;
    return &b[x];
}
