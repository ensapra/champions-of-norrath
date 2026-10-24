s32 func_002E4E48(s32, s32, void *, s32, s32);
s32 func_002E4F58(s32, s32, void *, s32, s32);

s32 func_002E5510(s32 a0, s32 *p, s32 a2, s32 a3, s32 a4, s32 *a5, s32 a6, s32 *a7, s32 sp0) {
    s32 r;
    p[0] = a2;
    if (a5 != 0) p[1] = *a5; else p[1] = 0;
    p[2] = a4;
    p[3] = sp0;
    if (func_002E4E48(a0, 0xD, p, 0x10, a4 + 0x1C) < 0) return -0x21E;
    r = p[0];
    if (r >= 0) {
        if (a5) *a5 = p[1];
        r = func_002E4F58(a0, a6, p, 2, 0x10);
        if (r >= 0) {
            if (a7) *a7 = p[6];
            r = func_002E4F58(a0, a3, p, 7, p[0]);
            if (r >= 0) r = p[0];
        }
    }
    return r;
}
