extern void func_0016EC08(s32, s32, s32, s32, s32, s32);
extern s32 func_001671F8(char *);
extern void func_00190E20(void *, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_001C6788(s32, void *, s32, s32, s32, s32);
extern s32 func_0025BE78(s32, s32, s32);
extern char D_00475390[], D_004753A0[], D_004753B8[];
extern s32 D_00486C34, D_00486C90, D_00486CB0;
extern f32 D_00486CA0;

void func_00255ED0(void) {
    char buf[0x400];
    s32 h;
    func_0016EC08(0x77, 0x105, (s32)D_00486CA0 + 0x77, 0x10F, 6, ((s32)((f32)D_00486CB0 * 0.0078125f * 128.0f) << 24) | 0x276B7F);
    func_0016EC08(0x77, 0x103, 0x209, 0x111, 6, ((s32)((f32)D_00486CB0 * 0.0078125f * 64.0f) << 24) | 0x141414);
    if (D_00486C34 == 3) {
        h = func_001671F8(D_00475390);
        func_00190E20(buf, h, 137.0f, (f32)func_0025BE78(-1, -1, 0), 137.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    } else if (D_00486C90 != 0) {
        h = func_001671F8(D_004753A0);
        func_00190E20(buf, h, 137.0f, (f32)func_0025BE78(-1, -1, 0), 137.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    } else {
        h = func_001671F8(D_004753B8);
        func_00190E20(buf, h, 137.0f, (f32)func_0025BE78(-1, -1, 0), 137.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    }
    func_001C6788(0, buf, 0, D_00486CB0, 0, 0);
}
