u8 *func_001515B8(u8 *arg0, u8 *p) {
    if (p != 0) {
        p = *(u8 **)(p + 0xC);
    } else {
        p = *(u8 **)(arg0 + 0x84C);
        for (;;) {
            if (*(s32 *)p != 0)
                return p;
            p = *(u8 **)(p + 0xC);
            if (p == arg0 + 0x840)
                return 0;
        }
    }
    while (p != 0) {
        if (p == arg0 + 0x840)
            return 0;
        if (*(s32 *)p != 0)
            return p;
        p = *(u8 **)(p + 0xC);
    }
    return 0;
}

s32 func_001521A0(void *, s32);

void func_00151964(u8 *g) {
    s32 r = func_001521A0(g, 1);
    if (r != 0) {
        *(s32 *)(r + 0x10) = 1;
        *(s32 *)(r + 0x14) = *(s32 *)(g + 0xFD4);
        *(s32 *)(r + 0x18) = *(s32 *)(g + 0xFD8);
        *(s32 *)(r + 0x1C) = *(s32 *)(g + 0xFDC);
    }
}
