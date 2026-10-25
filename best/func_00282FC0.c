typedef struct { s32 a, b, c; } V12;
extern char D_008D5FE0[];
volatile f32 D_004823B4;
s32 D_00484F68;
void func_00157668(void *, void *, s16);
s32 func_00169848(s32, s32, void *, s32, s32);
void func_0016AE78(s32, s32, s32, void *, void *, s32, s32, s32, s32);
void func_001815C8(void *, s32, s32, s32, s32, s32, s32, s32, f32, f32);

void func_00282FC0(char *self) {
    s32 p = (s32)(self + 0xD8);
    V12 *src = (V12 *)(self + 0x10);
    char buf[0x40];
    V12 a, b;
    s32 r;
    *(s8 *)(self + 0xD0) = 1;
    a = *src;
    func_00157668(buf, &a, *(s16 *)(self + 0x38));
    r = func_00169848(*(s32 *)(self + 0x15C), 0, buf, *(s8 *)(self + 0x4D) ? p : 0, 0);
    b = *src;
    func_0016AE78(*(s32 *)(self + 0x15C), *(s32 *)(self + 0x160), 0, &b, buf, *(s8 *)(self + 0x4D) ? p : 0, -1, r, 0);
    if (*(s8 *)(self + 0x4E))
        func_001815C8(D_008D5FE0, 0x64, 0x64, 0xBC, 0x40, D_00484F68, 0, 2, 20.0f, D_004823B4);
}
