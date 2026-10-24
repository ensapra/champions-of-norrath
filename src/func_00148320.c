extern void func_0013BBA8(void);
extern void func_001460E8(s32);
extern s32 func_0011BA18(s32);
extern void func_00114948(s32, s32, s32, s32, void *, s32);
extern void func_001481F8(void);
extern s32 D_001BB6C4[];
extern s32 D_001C68D4[];

void func_00148320(s32 a, s64 b) {
    s32 v = b;
    D_001C68D4[0] = v;
    func_0013BBA8();
    switch (v) {
    case 0:
        func_001460E8(0);
        return;
    case 1:
        func_00114948(0, 0x1F4, 0xFA, func_0011BA18(0x81), (void *)func_001481F8, D_001BB6C4[0]);
        return;
    }
}
