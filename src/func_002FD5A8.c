s32 func_002FD2E0(s32, s32);

s32 func_002FD5A8(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 *a7) {
    s32 r;
    if (a4 == a6) {
        if (func_002FD2E0(a0, a5)) {
            a7[2] = a2;
            return 0;
        }
    }
    r = func_002FD2E0(a0, a3);
    if (r) {
        a7[0] = a4;
        a7[1] = a2;
        a7[3] = 1;
        return 0;
    }
    return r;
}
