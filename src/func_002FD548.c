s32 func_003044FC(s32, s32);
s32 func_002FD2E0(s32 *a, s32 *b) {
    s32 r = 0;
    if (b == a || func_003044FC(*a, *b) == 0)
        r = 1;
    return r;
}

s32 func_002FD548(s32 a0, s32 a1, s32 a2, s32 a3, s32 *a4) {
    if (func_002FD2E0((s32 *)a0, (s32 *)a2)) {
        a4[0] = a3;
        a4[2] = 8;
        a4[1] = a1;
        return (a1 & 6) == 4;
    }
    return 0;
}
