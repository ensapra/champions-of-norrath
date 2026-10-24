extern "C" {
s32 func_00113618(s32, f32, void *, s32);
bool func_002FD2E0(s32, s32);
s32 func_00316358(void);
}

s64 func_002470C8(s32 a, u8 *b, s32 c, f32 d)
{
    if (b) {
        s32 x = (*(s32 (**)(void))(*(u8 **)(b + 0x48) + 4))();
        bool r = !func_002FD2E0(x, func_00316358());
        if (r)
            return func_00113618(a, d, b, c);
    }
}
