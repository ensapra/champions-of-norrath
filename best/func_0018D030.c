s32 func_0018D068(u8 *p, s32 a, s32 b);
s64 func_0018D030(u8 *p, s32 a, s32 b, s32 c) {
    *(s32 *)(p + 0x2C4) = 1;
    *(s32 *)(p + 0x2C0) = 0;
    *(s32 *)(p + 0x38C) = c;
    *(s32 *)(p + 0x36C) = 1;
    *(s32 *)(p + 0x390) = c;
    return func_0018D068(p, a, b);
}
