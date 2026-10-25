extern char D_008D78B0[], D_008D7900[];
extern void func_00180D78(void *, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, s32, s32, s32, s32, s32);
void func_002B0FC8(s32 a, s32 b) {
    if (b == 0xFFFF && a == 1) {
        func_00180D78(D_008D78B0, 0x56, 0x7E, 0xFA, 0xFF, 4, 0x3F, 0x69, 20.0f, 0.0f, 1.0f, 0xFF, 0, 2, 0xF, 0);
        if (a == 1) {
            func_00180D78(D_008D7900, 0xC8, 0xC8, 0xC8, 0x32, 0xFF, 0, 0, 36.0f, -1.0f, 0.0f, 0, a, a, 6, 0);
        }
    }
}
