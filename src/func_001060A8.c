extern s32 D_001BAC98;
extern s32 D_001BAC9C;
extern u8 D_010C1C00[], D_010C1C80[], D_010C1D00[], D_010C1D80[];
void func_00105AA0(s32, s32, void *);

void func_001060A8(s32 a0, s32 n) {
    func_00105AA0(a0, D_001BAC98, D_010C1C00);
    if (n > 0) {
        do {
            n--;
            func_00105AA0(D_001BAC98, D_001BAC9C, D_010C1D00);
            func_00105AA0(D_001BAC9C, D_001BAC98, D_010C1D80);
        } while (n != 0);
    }
    func_00105AA0(D_001BAC98, a0, D_010C1C80);
}
