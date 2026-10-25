extern s32 D_010D453C[];
extern s32 D_010D4538[];
extern s32 D_010D4500[];
extern s32 D_010D44F8[];
extern s32 D_001C68D4[];
extern s32 D_001BB8FC[];
extern s32 D_001BAC84[];
u32 func_001460D8();
void func_0014D370(s32, s32);
void func_001050A8(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_00105190(void *);
void func_0011E420(s32, s32);
void func_0011CEF0(s32, s32, s32);

void func_001484D4(void) {
    s32 sp[48];
    s32 i;
    s32 *p;
    if (D_010D453C[0] >= 0) {
        if (D_010D453C[0] < 7) {
            s32 *q = D_010D4538;
            *q = func_001460D8() >> 31;
        } else if (D_010D453C[0] >= 14) {
        } else {
            if (D_001C68D4[0] == 1) {
                func_0014D370(D_001BB8FC[0], 1);
                func_001050A8(sp, D_001BB8FC[0], 11, 20, 20, 0, 0, 85, 180, 111);
                func_00105190(sp);
            }
            p = D_010D4500;
            for (i = 0; i < 2; i++, p++) {
                if ((i != 0 || D_010D4538[0] == 0) && (i != 1 || !(D_001BAC84[0] & 2))) {
                    func_001050A8(sp, *p, 11, 0, 10, 0, 16, 6, 336, 6);
                    func_00105190(sp);
                }
            }
        }
    }
    func_0011E420(0, 0);
    func_0011CEF0(D_010D44F8[0], D_010D453C[0], 23);
}
