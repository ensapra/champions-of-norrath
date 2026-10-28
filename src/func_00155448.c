extern s32 func_00143C38(s32);

s32 func_00155448(void *src, u8 *dst) {
    u8 *orig_dst = dst;
    s32 val = func_00143C38(*(s32 *)((char *)src + 0x4C));
    s32 next = *(s32 *)((char *)src + 0x50);
    *(s32 *)dst = val;
    dst += 4;

    val = func_00143C38(next);
    next = *(s32 *)((char *)src + 0x54);
    *(s32 *)dst = val;
    dst += 4;

    val = func_00143C38(next);
    *(s32 *)dst = val;
    dst += 4;

    {
        f32 f1 = *(f32 *)((char *)src + 0x20);
        f32 f0 = *(f32 *)((char *)src + 0x1C);
        *(s32 *)dst = *(s32 *)((char *)src + 0xC);
        dst += 4;
        *(s16 *)dst = (s16)f1;
        dst += 2;
        *(s16 *)dst = (s16)f0;
        dst += 2;
    }

    return dst - orig_dst;
}
