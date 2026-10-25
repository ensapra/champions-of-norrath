f32 func_0015A070(s32);
f32 func_0015A100(s32);
s32 func_00160830(void *, void *, void *, s32, f32);
f32 D_004804E8;

s32 func_001A7C28(u8 *a, f32 f) {
    s32 r;
    f32 s, c, x, y;
    u8 t = a[0x320];
    u8 *pos = a + 0x10;
    if (*(s32 *)(a + 0xC) & 0x200000) pos = 0;
    if ((u32)(t - 1) < 0x3C) {
        r = func_00160830(a + 0x120, pos, a + 0xB4, 0, f * (f32)(0x3C - (s8)t) * D_004804E8);
    } else {
        r = func_00160830(a + 0x120, pos, a + 0xB4, 0, f);
    }
    s = func_0015A070(*(s16 *)(a + 0x38) - 0x4000);
    c = func_0015A100(*(s16 *)(a + 0x38) - 0x4000);
    x = -*(f32 *)(a + 0xB4);
    y = *(f32 *)(a + 0xB8);
    *(f32 *)(a + 0xB4) = x * s + y * c;
    *(f32 *)(a + 0xB8) = x * c - y * s;
    return r;
}
