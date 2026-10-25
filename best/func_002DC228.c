extern u8 D_00444A0C[];
extern u8 D_008E1CC0[];
extern s32 D_008E1D00[];
extern s32 D_008E1D40[];
s32 func_002D8270(void *, s32, s32, s32 *, s32, s32 *, s32, s32, s32);

s32 func_002DC228(s32 a) {
    if (*(s32 *)D_00444A0C < 0)
        return 0;
    D_008E1D40[0] = a;
    if (func_002D8270(D_008E1CC0, 2, 0, D_008E1D40, 4, D_008E1D00, 4, 0, 0) < 0)
        return -1;
    return D_008E1D00[0];
}
