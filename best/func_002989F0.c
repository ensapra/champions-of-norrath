extern const f32 D_004827F4;
extern u8 D_008D6B90[];
void func_00180D78(u8 *a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7,
                   f32 f0, f32 f1, f32 f2, s32 a8, s32 a9, s32 a10, s32 a11, s32 a12);
void func_002989F0(s32 arg0, s32 arg1) {
    f32 c = D_004827F4;
    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            func_00180D78(D_008D6B90, 0x118, 0xBA, 0x38, 0x7D, 0xF, 0x13, 0xD3,
                          70.0f, 2.0f, c, 0x3F, 3, arg0, 9, 0);
        }
    }
}
