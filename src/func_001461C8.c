extern s32 D_001C6890[];
extern s32 D_001C68A0[];
extern s32 D_001C689C[];
extern u8 *D_001C682C[];
extern s32 D_001C6834[];
s32 func_001A4174();
void func_00146538();
void func_00146270();

void func_001461C8(s32 arg0) {
    s32 n;
    if (func_001A4174(D_001C682C[0] + D_001C689C[0] * 524 + 0xC, arg0) == 0) {
        D_001C6890[0] = 1;
        func_00146538();
        return;
    }
    n = D_001C68A0[0] + 1;
    D_001C68A0[0] = n;
    if (n < D_001C6834[0]) {
        func_00146270(n);
        return;
    }
    D_001C6890[0] = 2;
    func_00146538();
}
