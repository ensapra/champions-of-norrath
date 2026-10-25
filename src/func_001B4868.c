extern u8 jtbl_004C006C[];
extern u8 D_0110B000[];
extern s32 D_0110B040[];
extern s32 D_0110B080[];
s32 func_001B08B0(void *, s32, s32, s32 *, s32, s32 *, s32, s32, s32);

s32 func_001B4868(s32 a) {
    if (*(s32 *)(jtbl_004C006C + 0x3F48) < 0)
        return 0;
    D_0110B080[0] = a;
    if (func_001B08B0(D_0110B000, 2, 0, D_0110B080, 4, D_0110B040, 4, 0, 0) < 0)
        return -1;
    return D_0110B040[0];
}
