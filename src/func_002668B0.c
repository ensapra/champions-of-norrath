void *func_003021B0(void *, s32, s32);
void func_00263088(u8 *, u8 *);
void func_00266950(u8 *arg0) {
    u8 *q;
    s8 *p;
    s32 i;
    p = (s8 *)(arg0 + 0xE34BC);
    q = arg0 + 0x181C;
    for (i = 0x1F; i >= 0; i--) {
        s8 c = *p;
        p++;
        if (c) {
            func_00263088(q, arg0);
        }
        q += 0x70E4;
    }
}

void func_002668B0(u8 *p) {
    func_003021B0(p, 0, 0x1000);
    func_003021B0(p + 0x1000, 0, 0x800);
    *(s32 *)(p + 0x180C) = 0;
    *(s32 *)(p + 0x1810) = 1;
    *(s8 *)(p + 0x1814) = -1;
    *(s32 *)(p + 0x1808) = 0;
    *(s32 *)(p + 0x1804) = 0;
    *(s32 *)(p + 0x1800) = 0;
    func_003021B0(p + 0xE349C, 0, 0x20);
    func_003021B0(p + 0xE34BC, 0, 0x20);
    *(s32 *)(p + 0xE34DC) = 0;
    *(u8 **)(p + 0x1818) = p + 0x181C;
}

u8 func_00266660(u8 *p, s32 a, s32 x, s32 y) {
    if (x >= *(s32 *)(p + 0x1800) && x < *(s32 *)(p + 0x1804)
        && y >= *(s32 *)(p + 0x1808) && y < *(s32 *)(p + 0x180C)) {
        s32 xx = x + 0x40;
        s32 yy = y + 0x40;
        return p[0x1000 + ((a * 32 + xx % 32) * 32 + yy % 32)];
    }
    return 0;
}
