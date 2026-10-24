extern s32 D_00447C34[];
extern u8 D_008E83D8[];
extern s32 func_002E4458(s32, s32, s32, s32, void *);

s64 func_002E4148(s32 a) {
    return func_002E4458(a, 0, 0, 9, D_008E83D8);
}

s64 func_002E4178(s32 a) {
    return func_002E4458(a, 0, 0, 4, D_008E83D8);
}

s64 func_002E41A8(void) {
    D_00447C34[0] = 0;
    return func_002E4458(0, 0, 0, 3, D_008E83D8);
}
