extern char D_008D73B0[], D_008D7400[];
extern void func_00180D78(void *, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, s32, s32, s32, s32, s32);
void func_002A8E68(s32 a, s32 b) {
    if (b == 0xFFFF && a == 1) {
        func_00180D78(D_008D73B0, 0x16, 0x15, 6, 0xC8, 0x14, 0x13, 6, 100.0f, -3.0f, 0.0f, 0, a, 0, 4, 0);
        if (a == 1) {
            func_00180D78(D_008D7400, 0x32, 0x32, 0x3C, 0xFF, 0, 0, 0, 50.0f, 50.0f, 0.0f, 0xFF, a, 2, 6, 0);
        }
    }
}
