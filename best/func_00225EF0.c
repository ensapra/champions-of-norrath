extern void func_00180D78(void *, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, s32, s32, s32, s32, s32);
extern u8 D_007D7A40[80];
extern u8 D_007D7A90[80];

void func_00225EF0(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            func_00180D78(D_007D7A40, 0xCD, 0xCC, 0x63, 5, 0x81, 0x14, 0x4A, 19.0f, 32.0f, 1.35f, 4, arg0, arg0, 6, 0);
        }
        {
            f32 x = 10.0f, y = 15.0f, z = 0.5f;
            if (arg0 == 1)
                func_00180D78(D_007D7A90, 0xE3, 0xCC, 0x5F, 8, 0x64, 0x38, 0x1A, x, y, z, 6, 3, arg0, 0xB, 0);
        }
    }
}
