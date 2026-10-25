extern char D_008D6CD0[], D_008D6D20[];
extern f32 D_004828A0, D_004828A4;
extern void func_00180D78(void *, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, s32, s32, s32, s32, s32);
void func_0029ADB0(s32 a, s32 b) {
    if (b == 0xFFFF && a == 1) {
        func_00180D78(D_008D6CD0, 0x88, 0xC6, 0x6B, 0x62, 0x36, 0x76, 0x21, 50.0f, D_004828A0, D_004828A4, 0x22, a, a, 8, 0);
        if (a == 1) {
            func_00180D78(D_008D6D20, 0xA3, 0x7F, 0x5C, 0x87, 0x3B, 7, 3, 10.0f, 2.0f, 5.0f, 0x3A, 2, a, 6, 0);
        }
    }
}
