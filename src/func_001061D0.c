extern void func_001B6328(s32);
void func_001001C8(void) { func_001B6328(0); }

void func_00106170(u8 *p, u8 v) {
    p[0xF] = v;
    p[3] = v;
    p[7] = v;
    p[0xB] = v;
}

extern s32 D_001BAC98[];
extern s32 D_001BAC88[];
extern u8 D_010C1E00[];
extern void func_001058A8(s32, s32, void *, s32, s32, s32, f32);
void func_00106188(void) {
    func_001058A8(D_001BAC98[0], D_001BAC88[0], D_010C1E00, 0x163, 0xE6, 0, 0.3f);
}

extern void func_00174DA8(s32);
extern void func_00174EB0(void);
extern void func_00105AA0(s32, s32, void *);
void func_001061D0(s32 a) {
    s32 *p = D_001BAC98;
    func_00174DA8(*p);
    func_00174EB0();
    func_00105AA0(*p, a, D_010C1E00);
}
