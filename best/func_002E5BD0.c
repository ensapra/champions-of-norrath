s32 func_002E4E48(s32, s32, s32 *, s32, s32);
s32 func_002E4F58(s32, s32, s32 *, s32, s32);
s32 func_002E5B40(s32 a0, s32 *p, s32 a2, s32 a3, s32 a4) {
    s32 r;
    p[1] = a4; p[0] = a3;
    if (func_002E4E48(a0, 0x11, p, 8, a3 + 4) < 0) return -0x21E;
    r = func_002E4F58(a0, a2, p, 1, a3);
    if (r >= 0) r = p[0];
    return r;
}
s32 func_002E5BD0(s32 a0, s32 *p) {
    if (func_002E4E48(a0, 0x10, p, 0, 4) < 0) return -0x21E;
    return *p;
}
s32 func_002E5C10(s32 a0, s32 *p, s32 v) {
    *p = v;
    if (func_002E4E48(a0, 0x32, p, 4, 4) < 0) return -0x21E;
    return *p;
}
