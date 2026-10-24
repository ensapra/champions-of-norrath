void func_00263088(u8 *, u8 *);
void func_00266950(u8 *arg0) {
    u8 *q;
    s8 *p;
    s32 i;
    q = arg0 + 0x181C;
    p = (s8 *)(arg0 + 0xE34BC);
    for (i = 0x1F; i >= 0; i--) {
        s8 c = *p;
        p++;
        if (c) {
            func_00263088(q, arg0);
        }
        q += 0x70E4;
    }
}

u8 func_00266660(u8 *p, s32 a, s32 x, s32 y) {
    if (x >= *(s32 *)(p + 0x1800) && x < *(s32 *)(p + 0x1804)
        && y >= *(s32 *)(p + 0x1808) && y < *(s32 *)(p + 0x180C)) {
        s32 xx = x + 0x40;
        s32 yy = y + 0x40;
        return ((u8 (*)[32][32])(p + 0x1000))[a][xx % 32][yy % 32];
    }
    return 0;
}
