s32 func_002E4E48(s32, s32, s32 *, s32, s32);

s32 func_002E5F70(s32 a0, s32 *a1, s32 *a2, s32 n, s32 type) {
    s32 i;
    if (func_002E4E48(a0, type, a1, 0, n * 4 + 4) < 0) return -0x21E;
    for (i = 0; i < n; i++) a2[i] = a1[i + 1];
    return *a1;
}
