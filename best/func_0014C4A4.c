void func_0014B870(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4) {
    u8 *p = *(u8 **)(arg0 + 0x4C);
    p = *(u8 **)(p + 0x9C);
    ((void (*)(u8 *, s32 *, s32 *))p)(arg0, arg3, arg4);
    *arg3 = arg1 - *arg3;
    *arg4 = arg2 - *arg4;
}

s32 func_0014C400(s32 arg0) {
    u32 hi = arg0 >> 8;
    u32 lo = arg0 & 0xFF;
    if (hi - 0x81 < 0x1F) {
        hi -= 0x81;
    } else if (hi - 0xE0 < 0x10) {
        hi -= 0xC1;
    } else {
        return -1;
    }
    hi *= 2;
    if (lo - 0x40 < 0x3F) {
        lo -= 0x40;
    } else if (lo - 0x80 < 0x1F) {
        lo -= 0x41;
    } else if (lo - 0x9F < 0x5E) {
        lo -= 0x9F;
        hi += 1;
    } else {
        return -1;
    }
    return ((u64)hi << 8) + lo + 0x2121;
}

s32 func_0014C4A4(s32 a, s32 *out) {
    s32 v = func_0014C400(a);
    s32 row;
    s32 col;
    if (v == -1) {
        *out = 0;
        return -34;
    } else if (v >= 0x2121) {
        row = ((v >> 8) - 0x21) * 94L;
        col = (v & 0xFF) - 0x21;
        v = row + col;
        if (v < 0x582) {
            *out = 1;
        } else if (v < 0x1142) {
            *out = 2;
        } else {
            *out = 3;
        }
    }
    return v;
}

typedef struct {
    s16 x;
    s16 y;
    s32 pad4;
    u8 b8;
    u8 b9;
    u8 bA;
    u8 padB[5];
} S_0014AB48_Item;

s32 func_001A32C8(void);

void func_0014AB48(u8 *arg0) {
    S_0014AB48_Item *p;
    s32 i;
    *(s32 *)(arg0 + 0x920) = 1;
    p = *(S_0014AB48_Item **)(arg0 + 0x91C);
    for (i = 0; i < *(s32 *)(arg0 + 0x928); i++) {
        p->x = func_001A32C8() % *(s32 *)(arg0 + 0x5AC);
        p->y = func_001A32C8() % *(s32 *)(arg0 + 0x5B0);
        p->b8 = p->b9 = p->bA = 0;
        p++;
    }
    *(s32 *)(arg0 + 0x924) = 2;
}
