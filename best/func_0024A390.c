extern f32 D_00485934;
extern f32 D_0048593C;
extern f32 D_0048200C;
extern u8 D_00474630[];
void func_0024F5B8(s32, s32, f32);
u8 *func_0024A1F0(s32);
void func_0024A660(s32, u8 *, s32, s32, s32, s32, s32, s32);

void func_0024A390(s32 arg0, s32 arg1) {
    u8 *skel;
    s32 flags;
    arg1 |= 2;
    flags = arg1 | 0x20;
    if (D_00485934 < D_0048200C) {
        return;
    }
    func_0024F5B8(0, arg1, D_0048593C * D_00485934 * 0.46875f);
    skel = func_0024A1F0(arg0);
    if (skel != 0) {
        s32 v90 = *(s32 *)(skel + 0x90);
        s32 v40 = *(s32 *)(skel + 0x40);
        if (v90 != v40) {
            func_0024A660(0, D_00474630, flags, v40, v90 - v40,
                          *(s32 *)(skel + 0x44), *(s16 *)(skel + 0x48), *(s32 *)(skel + 0x4C));
        }
    }
}
