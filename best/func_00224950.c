void func_00180D78(void *, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, s32, s32, s32, s32, s32);
f32 D_00481744;
extern u8 D_007D7950[];
extern u8 D_007D79A0[];
extern u8 D_007D79F0[];

void func_00224950(s32 arg0, s32 arg1) {
    s32 b = arg0, c = arg0;
    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            func_00180D78(D_007D7950, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, 0, 8.0f, 3.0f, -5.0f, 0, 2, arg0, 0, 0);
        }
        if (b == 1) {
            func_00180D78(D_007D79A0, 0x64, 0x2C, 0, 0x17, -0x4D, -0x36, 0, 26.0f, 21.0f, D_00481744, 0, 2, 0, 5, 0);
        }
        if (c == 1) {
            func_00180D78(D_007D79F0, 0x82, 0x82, 0x82, 0, 0x64, 0x64, 0x64, 5.0f, 5.0f, 1.0f, 0xCD, 3, arg0, 4, 0);
        }
    }
}
