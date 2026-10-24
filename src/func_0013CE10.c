extern s32 D_010CFA20[];
extern s32 D_010CFA24[];
extern s32 D_010CE5F8[];
extern u8 D_010CE668[];
extern u8 D_0050A1C0[];
void func_001A2660(void *, s32, s32);
s32 func_0011B908(s32, s32);
s32 CreateThread(void *);
void StartThread(s32, s32);
void ExitDeleteThread(void);

void func_0013D2A0(void) {
    D_010CFA20[0] = 0;
    D_010CFA24[0] = 0;
}

void func_0013CE10(u8 *a) {
    void (*f)(s32) = *(void (**)(s32))(a + 8);
    if (f != 0)
        f(D_010CE5F8[0]);
    ExitDeleteThread();
}

void func_0013CE38(s32 arg) {
    s32 *t = (s32 *)D_010CE668;
    s32 stk;
    func_001A2660(t, 0, 0x30);
    t[1] = (s32)func_0013CE10;
    stk = func_0011B908(0x10, 0x2000);
    t[3] = 0x2000;
    t[4] = (s32)(D_0050A1C0 + 0x5830);
    t[5] = 0xA;
    t[2] = stk;
    StartThread(CreateThread(t), arg);
}
