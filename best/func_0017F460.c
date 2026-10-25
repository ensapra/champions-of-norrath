typedef struct { s32 f0; s32 f4; s32 f8; char pad[0x2C]; } E;
extern E *D_010EE084;
s16 func_0017F5B0(s32, s32, s32, u16);
s32 func_0017F460(s32 idx, u8 b1, u8 b2, s32 n, u16 *src, u16 *dst) {
    E *e = D_010EE084 + idx;
    s32 i, r = 0;
    switch (e->f4) {
    case 0:
        i = 0;
        if (n > 0 && src[0] != 0) {
            do {
                dst[i] = src[i];
                i++;
                if (i >= n) break;
            } while (src[i] != 0);
        }
        r = i;
        break;
    case 1:
        i = 0;
        if (n > 0 && src[0] != 0) {
            do {
                dst[i] = func_0017F5B0(e->f8, b1, b2, src[i]);
                i++;
                if (i >= n) break;
            } while (src[i] != 0);
        }
        r = i;
        break;
    }
    return r;
}
