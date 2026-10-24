extern "C" {
s32 func_00113618(s32, void *, s32, f32);
bool func_002FD2E0(s32, s32);
s32 func_00316358(void);
s32 func_001119D8(void);
}

s64 func_002470C8(s32 a, u8 *b, s32 c, f32 d)
{
    if (b) {
        s32 x = (*(s32 (**)(void))(*(u8 **)(b + 0x48) + 4))();
        bool r = !func_002FD2E0(x, func_00316358());
        if (r)
            return func_00113618(a, b, c, d);
    }
}

s32 func_00247288(u8 *src, u8 *dst)
{
    u8 *base = dst;
    dst += func_001119D8();
    *(s32 *)dst = *(s8 *)(src + 0x55); dst += 4;
    *(s32 *)dst = *(s32 *)(src + 0x450); dst += 4;
    *(s32 *)dst = *(s32 *)(src + 0x3C0); dst += 4;
    *(s32 *)dst = *(s32 *)(src + 0xD0); dst += 4;
    *dst = (*(u64 *)(src + 0xA0) & 0xC00000) != 0; dst += 1;
    return dst - base;
}
