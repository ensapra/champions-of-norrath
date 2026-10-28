s32 func_002E4E48(s32, s32, void *, s32, s32);
s32 func_002E4F58(s32, s32, void *, s32, s32);

s32 func_002E5B40(s32 sock, s32 *p, s32 a2, s32 a3, s32 a4) {
    p[1] = a4;
    p[0] = a3;
    if (func_002E4E48(sock, 0x11, p, 8, a3 + 4) < 0) {
        return -0x21E;
    }
    s32 r = func_002E4F58(sock, a2, p, 1, a3);
    if (r >= 0) {
        r = p[0];
    }
    return r;
}
