extern char D_007E05E0[];
s32 func_0025AB70(s32 arg0, s32 arg1) {
    s32 i, j, k, m, n, off;
    char *base, *row, *e, *f, *g;
    s16 *p;
    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            base = D_007E05E0;
            for (i = 3; i != -1; i--) {
                row = base + 0x148;
                for (j = 2; j != -1; j--) {
                    f = row;
                    e = row + 4;
                    for (k = 0x3F; k != -1; k--) {
                        p = (s16 *)(e + 0x38);
                        for (m = 3; m >= 0; m--) {
                            *p = -1;
                            p -= 4;
                        }
                        *(s8 *)(e + 0x1C) = -1;
                        *(s8 *)(e + 0x1D) = -1;
                        g = f + 8;
                        off = 0x10;
                        for (n = 3; n >= 0; n--) {
                            *(s16 *)(f + off) = 0;
                            *(s16 *)(g + off) = 0;
                            off += 2;
                        }
                        e += 0x48;
                        f += 0x48;
                    }
                    row += 0x1208;
                }
                base += 0x5DB0;
            }
        }
    }
    return 0xFFFF;
}
