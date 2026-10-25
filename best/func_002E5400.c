s32 func_002E4E48(s32, s32, s32 *, s32, s32);

s32 func_002E5400(s32 a0, s32 *a1, s32 a2, s32 a3) {
    a1[0] = a2;
    a1[1] = a3;
    if (func_002E4E48(a0, 3, a1, 8, 4) < 0) {
        return -0x21E;
    }
    return *a1;
}
