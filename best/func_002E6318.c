void func_002D2B50(void *);

void func_002D3130(void *p) {
    func_002D2B50(p);
    *(s32 *)((char *)p + 0x20) = 0;
    *(s32 *)p = (((*(s32 *)p & ~0xC) | 4) & ~1) | 0x100;
}

s32 func_002E4E48(s32, s32, s32 *, s32, s32);

s32 func_002E6318(s32 a0, s32 *buf, s32 *out1, s32 *out2) {
    if (func_002E4E48(a0, 0x23, buf, 0, 0xC) < 0) {
        return -0x21E;
    }
    if (out1 != NULL) {
        *out1 = buf[1];
    }
    if (out2 != NULL) {
        *out2 = buf[2];
    }
    return buf[0];
}

u32 func_002E6390(u32 x) {
    return ((x >> 8) & 0xFF) | ((x << 8) & 0xFF00);
}

u32 func_002E63A8(u32 x) {
    return (x >> 24) | ((x >> 8) & 0xFF00) | ((x & 0xFF00) << 8) | (x << 24);
}
