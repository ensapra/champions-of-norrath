extern s32 D_001BAC88[];
extern s32 D_001BAC98[];
extern s32 D_001BAC9C[];
extern u8 D_010C1C00[], D_010C1C80[], D_010C1D00[], D_010C1D80[];
void func_001058A8(s32, s32, void *, s32, s32, s32, f32);
void func_00105FD0(void) {
    func_001058A8(D_001BAC88[0], D_001BAC98[0], D_010C1C00, 0, 0, 0, 1.0f);
    func_001058A8(D_001BAC98[0], D_001BAC88[0], D_010C1C80, 0, 0, 0, 1.0f);
    func_001058A8(D_001BAC98[0], D_001BAC9C[0], D_010C1D00, 0, 0, 0, 1.0f);
    func_001058A8(D_001BAC9C[0], D_001BAC98[0], D_010C1D80, 0, 0, 0, 1.0f);
}
