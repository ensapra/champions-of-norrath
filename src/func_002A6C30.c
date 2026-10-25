extern u8 D_008D72C0[80];
extern u8 D_008D7310[80];
void func_00180D78(void *, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, s32, s32, s32, s32, s32);
void func_002A6C30(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            func_00180D78(D_008D72C0, 0x96, 0x96, 0x96, 0x96, 0x69, 0x69, 0xFD, 7.0f, 0.0f, 0.0f, 0, 3, 0, 8, 0);
        }
        {
            f32 x = 30.0f, y = 0.0f, z = -4.5f;
            if (arg0 == 1)
                func_00180D78(D_008D7310, 0, 0, 0xFF, 0xBE, 0x96, 0x96, 0xFF, x, y, z, 0, 2, 2, 8, 0);
        }
    }
}
