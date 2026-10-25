s32 func_00143C38(s32);
s32 func_00155448(u8 *src, u8 *dst) {
    volatile u8 *out = dst;
    volatile u8 *start = dst;
    *(volatile s32 *)out = func_00143C38(*(s32 *)(src + 0x4C)); out += 4;
    *(volatile s32 *)out = func_00143C38(*(s32 *)(src + 0x50)); out += 4;
    *(volatile s32 *)out = func_00143C38(*(s32 *)(src + 0x54)); out += 4;
    *(volatile s32 *)out = *(s32 *)(src + 0xC); out += 4;
    *(volatile s16 *)out = (s16)*(f32 *)(src + 0x20); out += 2;
    *(volatile s16 *)out = (s16)*(f32 *)(src + 0x1C); out += 2;
    return out - start;
}
