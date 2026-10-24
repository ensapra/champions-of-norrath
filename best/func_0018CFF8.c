s32 func_0018C1F0(u8 *p, s32 c);
s64 func_0018CFF8(u8 *p, s32 a, s32 b, s32 c) {
    *(s32 *)(p + 0x388) = a;
    *(s32 *)(p + 0x36C) = 1;
    *(s32 *)(p + 0x384) = b;
    *(s32 *)(p + 0x2C4) = 1;
    *(s32 *)(p + 0x2C0) = 0;
    return func_0018C1F0(p, c);
}
