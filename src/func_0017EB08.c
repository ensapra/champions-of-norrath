extern s32 D_010EE080[];

s32 func_0017EB08(s32 arg0, u32 arg1) {
    if (arg0 >= D_010EE080[0]) return -0xB;
    if (arg1 >= 3U) return -0xC;
    *(s32 *)(D_010EE080[1] + arg0 * 0x38 + 8) = (s32)arg1;
    return 0;
}
