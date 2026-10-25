s32 func_001354A8(s32);
void func_002CC4A8(void);
extern s8 D_00483829;
extern s8 D_00483B11;
extern s32 D_00483F30;
extern s32 D_00486608;
extern s32 D_0048660C;
extern s32 D_00486610;
extern s32 D_00486614;
extern f32 D_00486630;
extern f32 D_00486634;
extern f32 D_00486638;
extern s32 D_00486640;

void func_002CCC70(void) {
    if (D_00483829 == 0) return;
    if (D_00483F30 != 0) return;
    D_0048660C = (s32)(D_00486634 * 65536.0f) * 0x7FFF / 0x20000;
    D_00486608 = (s32)(D_00486630 * 4.0f * 65536.0f) * 25 / 65536;
    D_00486610 = (s32)(D_00486638 * 4.0f * 65536.0f);
    if (D_00486640 != 0) {
        D_00486614 |= 1 << func_001354A8(0);
    } else {
        D_00486614 &= ~(1 << func_001354A8(0));
    }
    D_00483B11 = 1;
    func_002CC4A8();
    D_00483B11 = 0;
}
