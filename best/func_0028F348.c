extern f32 D_0048265C;
extern f32 D_00482660;
extern char D_008D63C0[];
extern char D_008D6410[];
extern char D_008D6460[];
void func_00180D78(void *, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, s32, s32, s32, s32, s32);

void func_0028F348(s32 a, s32 b) {
    s32 i;
    if (b != 0xFFFF) return;
    for (i = 1; i == a; i++) {
        if (i == 1) {
            func_00180D78(D_008D63C0, 0x12C, 0xC8, 0x30, 0x58, 0xF4, 0x38, 4, 26.0f, 11.0f, D_0048265C, 0x1A, a, a, 0, 0);
        }
        func_00180D78(D_008D6410, 0x88, 0x83, 0x5C, 0x88, 0x187, 0x2E, 0x43, 25.0f, 5.0f, 0.5f, 0, a, a, 9, 0);
        break;
    }
}
