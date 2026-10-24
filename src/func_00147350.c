extern void func_0013FFF8(void);
extern void func_00114948(s32, s32, s32, s32, void *, s32);
extern s32 func_0011BA18(s32);
extern void func_0010A0D0(s32);
extern void func_0011D9E0(void);
extern void func_0011DA20(s32, s32);
extern s32 func_0013B698(void *);
extern s32 D_001C688C[];
extern s32 D_001C68A4[];
extern s32 D_010D44F4[];
extern s32 D_001BB6C4[];
extern u8 D_004CB208[];
extern u8 D_004CB220[];

void func_00147350(void) {
    D_001C68A4[0] = 0;
    func_0013FFF8();
    D_010D44F4[0] = 3;
}

void func_00147290(s32 a) {
    if (D_001C688C[0] == 0) {
        func_0011D9E0();
        return;
    }
    if (a < 0) return;
    if (a < 2) {
        if (func_0013B698(D_004CB208) == 0) {
            func_0011DA20(3, 0);
        } else if (func_0013B698(D_004CB220) == 0) {
            func_0011DA20(3, 0);
        } else {
            func_0011DA20(3, 0);
        }
    } else if (a == 2) {
        func_0010A0D0(0);
    }
}

void func_00147250(void) {
    func_00114948(1, 0x1F4, 0xFA, func_0011BA18(0x78), (void *)func_00147290, D_001BB6C4[0]);
}
