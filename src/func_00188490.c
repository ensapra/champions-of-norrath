extern s8 jtbl_004C006C[];
u8 *func_00188490(u8 *p, s32 *out) {
    u8 *r = NULL;
    if (p[0x11] >= 2) r = p + 0x30;
    if (out) *out = jtbl_004C006C[0xE18C + p[0x11]];
    return r;
}
