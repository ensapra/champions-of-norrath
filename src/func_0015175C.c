void func_0015175C(s32 *arg0, s32 arg1) {
    s32 *p = arg0;
    s32 n = arg1 - 1;
    if (arg1 != 0) {
        do {
            n -= 1;
            *p = 0;
            p += 1;
        } while (n != -1);
    }
}

s32 func_0015171C(s32);

void func_00151788(s32 *arg0, s32 arg1) {
    s32 *p = arg0;
    s32 n = arg1 - 1;
    if (arg1 != 0) {
        do {
            s32 t = *p;
            n -= 1;
            if (t != 0) {
                func_0015171C(t);
                *p = 0;
            }
            p += 1;
        } while (n != -1);
    }
}

u8 *func_001515B8(u8 *arg0, u8 *arg1) {
    u8 *end = arg0 + 0x840;
    u8 *p;

    if (arg1 == NULL) {
        p = *(u8 **)(arg0 + 0x84C);
        for (;;) {
            if (*(s32 *)p != 0)
                return p;
            p = *(u8 **)(p + 0xC);
            if (p == end)
                return NULL;
        }
    }
    p = *(u8 **)(arg1 + 0xC);
    while (p != NULL) {
        if (p == end)
            return NULL;
        if (*(s32 *)p != 0)
            return p;
        p = *(u8 **)(p + 0xC);
    }
    return NULL;
}

void *func_001521A0(void *, s32);

void func_00151964(u8 *g) {
    u8 *r = func_001521A0(g, 1);
    if (r != 0) {
        *(s32 *)(r + 0x10) = 1;
        *(s32 *)(r + 0x14) = *(s32 *)(g + 0xFD4);
        *(s32 *)(r + 0x18) = *(s32 *)(g + 0xFD8);
        *(s32 *)(r + 0x1C) = *(s32 *)(g + 0xFDC);
    }
}
