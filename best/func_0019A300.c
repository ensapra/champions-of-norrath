extern u16 D_004804B8;
extern s32 D_004804BC;
extern s32 D_004804C0;
extern s32 D_004804C4;

u16 func_0019A300(u8 *a, s32 arg1) {
    s32 c;
    u16 key = arg1 & 0xFFFF;
    u16 ret = 0;
    if (key != 0) {
        if (key == D_004804B8) {
            if (D_004804C0 <= 0 || --D_004804C0 <= 0) {
                if (D_004804BC != 0) {
                    *(s32 *)(a + 0xFC) += 1;
                    if (*(s32 *)(a + 0xFC) >= 0xC9) *(s32 *)(a + 0xFC) = 0xC8;
                } else {
                    D_004804BC = 1;
                }
            }
        } else goto reset;
    } else {
reset:
        D_004804BC = 0;
        D_004804C0 = 30;
        *(s32 *)(a + 0xFC) = 0;
    }
    if (D_004804BC != 0) {
        if (--D_004804C4 <= 0) {
            c = *(s32 *)(a + 0xFC);
            if (c < 50) {
                D_004804C4 = 4;
                ret = key;
            } else if (c < 100) {
                D_004804C4 = 2;
                ret = key;
            } else if (c < 150) {
                goto one;
            } else {
                ret = key;
                if (c < 200) {
one:
                    ret = key;
                    D_004804C4 = 1;
                }
            }
        }
    }
    D_004804B8 = key;
    return ret;
}
