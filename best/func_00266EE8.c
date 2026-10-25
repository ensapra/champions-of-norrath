char *D_00485C54;
s32 D_00485C78, D_00485C7C;
extern char D_0034B701[];
extern unsigned char D_0047E1F1[];
extern char D_0034B660[];
s32 func_003044FC(char *, s32);
s32 func_002FF990(void *, s8);

void func_00266EE8(void) {
    char *base = D_00485C54;
    char *p = base;
    s32 i = 0;
    s32 off;
    if (*(s8 *)(p + 0x310) != 0) {
        off = 0x300;
        do {
            s8 t = *(s8 *)(p + off + 0x10);
            if (t == 1) {
                if (func_003044FC(D_0034B701, *(s32 *)(base + off + 0x14)) != 0) {
                    base = D_00485C54;
                    i++;
                    goto next;
                }
                base = D_00485C54;
                p = base + off;
            } else {
                p = base + off;
                if (t >= 2 && t != 2) {
                    if (t == 3) {
                        if (D_0047E1F1[D_0034B660[0xA1]] & 4) {
                            s32 m;
                            m = func_002FF990(&D_0034B660[0xA1], D_0034B660[0xA1]);
                            base = D_00485C54;
                            i++;
                            if (m % *(s16 *)(base + off + 0x14) != *(s16 *)(base + off + 0x16)) goto next;
                            p = base + off;
                        } else {
                            i++;
                            goto next;
                        }
                    }
                }
            }
            D_00485C7C = *(s32 *)(p + 0x1C);
            D_00485C78 = *(s32 *)(p + 0x18);
            return;
        next:
            off += 0x10;
            if (i >= 8) return;
            p = D_00485C54;
            base = p;
        } while (*(s8 *)(p + off + 0x10) != 0);
    }
}
