extern s8 jtbl_004C006C[];
u8 *func_001884C8(u8 *p, s32 *size) {
    u16 len = *(u16 *)(p + 0xC);
    s32 off = jtbl_004C006C[0xE194 + p[0x11]];
    u8 *q;
    if (len == off) {
        if (size) *size = 0;
        return NULL;
    }
    q = p + off;
    if (size) {
        if (*(s32 *)q != 0x745865) *size = len - off;
        else *size = *(s32 *)(q + 4);
    }
    return q;
}

u8 *func_00188490(u8 *p, s32 *out) {
    u8 *r = NULL;
    if (p[0x11] < 2) r = p + 0x30;
    if (out) *out = jtbl_004C006C[0xE18C + p[0x11]];
    return r;
}
