extern s32 D_010D44A0[];
extern s32 D_010D44A4[];
extern s32 D_010D44A8[];
extern s32 D_010D44B0[];
extern s32 D_010D44C0[];
extern s32 D_010D44D0[];
extern s32 D_010D44D4[];
void func_001459C0(void);
void func_00106DF8(s32);
void func_0010CC08(void);

void func_00145618(void) {
    func_001459C0();
    func_00106DF8(1);
    func_0010CC08();
    D_010D44A0[0] = 2;
}

void func_001451D0(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        D_010D44B0[i] = 0;
        D_010D44C0[i] = 0;
    }
    D_010D44D0[0] = 0;
    D_010D44D4[0] = 0;
    D_010D44A8[0] = 0;
    D_010D44A4[0] = 0;
}

void func_001451C0(void) {
    D_010D44A0[0] = 2;
}
