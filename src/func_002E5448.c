s32 func_002E4E48(s32, s32, void *, s32, s32);
s32 func_002E4F58(s32, s32, void *, s32, s32);

s32 func_002E5448(s32 sock, s32 *p, s32 arg2, s32 arg3, s32 arg4, s32 *arg5, s32 arg6) {
    p[0] = arg2;
    if (arg5 != 0) {
        p[1] = *arg5;
    } else {
        p[1] = 0;
    }
    p[2] = arg4;
    p[3] = arg6;
    s32 r = func_002E4E48(sock, 4, p, 0x10, arg4 + 8);
    if (r >= 0) r = p[0]; else return -0x21E;
    if (r < 0) return r;
    if (arg5 != 0) *arg5 = p[1];
    r = func_002E4F58(sock, arg3, p, 2, p[0]);
    if (r >= 0) r = p[0];
    return r;
}
