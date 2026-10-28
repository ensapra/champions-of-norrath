extern s32 D_010C4CF0[];
extern s32 (*D_010C4CDC[])(s32);

s32 func_0011B9A8(s32 a0) {
    D_010C4CF0[0]++;
    return D_010C4CDC[0](a0);
}
