extern s32 D_010EE080[];

s32 func_0017EAB8(s32 arg0, u32 arg1) {
    if (arg0 >= D_010EE080[0]) return -0xB;
    if (arg1 >= 2U) return -0xC;
    *(s32 *)(D_010EE080[1] + arg0 * 0x38 + 4) = (s32)arg1;
    return 0;
}
