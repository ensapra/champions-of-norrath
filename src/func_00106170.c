void func_00106170(u8 *p, s32 v) {
    p[3] = v;
    p[7] = v;
    p[0xB] = v;
    p[0xF] = v;
}

extern s32 D_001BAC98[];
extern s32 D_001BAC88[];
extern u8 D_010C1E00[];
extern void func_001058A8(s32, s32, void *, s32, s32, s32, f32);
typedef union { s32 i; f32 f; } IF;
void func_00106188(void) {
    IF u;
    u.i = 0x3E999999;
    func_001058A8(D_001BAC98[0], D_001BAC88[0], D_010C1E00, 0x163, 0xE6, 0, u.f);
}
