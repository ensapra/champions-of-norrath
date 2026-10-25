extern s32 D_001C68A4[];
extern s32 D_010D44F0[];
extern s32 D_010D44F4[];
extern u8 D_001C5500[];
extern u8 D_004CB130[];
s32 func_00140020(void);
void func_001403B8(void);
s32 func_001404D0(void);
s32 func_001404F0(void);
void func_00140E68(void *, s32, void *);
s32 func_00147380(void) {
    switch (D_001C68A4[0]) {
    case 0:
        if (func_00140020() == 0) {
            if (func_001404D0() == 0) {
                if (D_010D44F4[0] > 0) {
                    D_010D44F4[0] = D_010D44F4[0] - 1;
                } else {
                    func_001403B8();
                    func_00140E68(D_001C5500, 0, D_004CB130);
                    D_001C68A4[0] = 1;
                }
            }
        }
        return 0;
    case 1:
        if (func_001404D0() == 0) {
            D_010D44F0[0] = func_001404F0();
            return 1;
        }
        return 0;
    default:
        return 0;
    }
}
