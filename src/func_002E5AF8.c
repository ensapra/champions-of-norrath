s32 func_002E4E48(s32, s32, s32 *, s32, s32);

s32 func_002E5AF8(s32 a0, s32 *a1, s32 a2) {
    *a1 = a2;
    if (func_002E4E48(a0, 0xC, a1, 4, 4) < 0) {
        return -0x21E;
    }
    return *a1;
}
