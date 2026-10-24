s32 func_002E4E48(s32, s32, s32 *, s32, s32);
s32 func_002E4F58(s32, s32, s32 *, s32, s32);
s32 func_002E58A8(s32 a0, s32 *p, s32 a2, s32 a3) {
    s32 r;
    *p = a3;
    if (func_002E4E48(a0, 8, p, 4, a3 * 4 + 4) < 0) return -0x21E;
    r = *p;
    if (r >= 0) {
        r = func_002E4F58(a0, a2, p, 1, r * 4);
        if (r >= 0) r = *p;
    }
    return r;
}
