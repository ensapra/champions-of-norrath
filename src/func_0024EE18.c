s32 func_0024A430(s32, s32, s32, s32, s32);
s32 func_0024F688(void);
s32 func_0024F6C8(void);
s64 func_0024EFC8(s32 arg0, s32 arg1, s32 arg2) {
    s32 t = func_0024F6C8();
    if (t != 0) {
        return func_0024A430(t, func_0024F688(), arg0, arg1, arg2);
    }
}
u8 *func_0024A120(s32);
s32 func_0024A660(s32, s32, s32, s32, s32, s32, s32, s32);
s64 func_0024EF40(s32 arg0, s32 arg1, s32 arg2) {
    u8 *p = func_0024A120(arg1);
    if (p != NULL && *(s32 *)(p + 0x90) != *(s32 *)(p + 0x40)) {
        return func_0024A660(arg0, func_0024F688(), arg2, *(s32 *)(p + 0x40),
            *(s32 *)(p + 0x90) - *(s32 *)(p + 0x40), *(s32 *)(p + 0x44),
            *(s16 *)(p + 0x48), *(s32 *)(p + 0x4C));
    }
}
s32 func_0024ADB8(s32);
s32 func_0024F5B8(s32, f32);
extern f32 D_00485934;
extern f32 D_0048593C;
s64 func_0024EE18(void) {
    if (func_0024ADB8(0) & 0x20) {
        return func_0024F5B8(0, D_0048593C * D_00485934 * 0.46875f);
    }
}
