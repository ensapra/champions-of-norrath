extern u8 D_008D69B0[80];
extern u8 D_008D6A00[80];
void func_00180D78(void *, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, s32, s32, s32, s32, s32);
void func_00296668(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            func_00180D78(D_008D69B0, 0x6E, 0x64, 0x17, 0x64, 0x4E, 0x42, 0x1E, 50.0f, 60.0f, 0.0f, 5, 2, 0, 2, 0);
        }
        {
            f32 x = 25.0f, y = 20.0f, z = 0.0f;
            if (arg0 == 1)
                func_00180D78(D_008D6A00, 0xC, 0xC, 0, 0x4E, 8, 0x28, 0x10, x, y, z, 5, 3, 0, 8, 0);
        }
    }
}
