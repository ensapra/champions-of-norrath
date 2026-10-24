extern void func_001B6328(s32);
void func_001001C8(void) {
    func_001B6328(0);
}
extern s32 D_010C1EB8[];
extern s32 D_010C1EBC[];
extern s32 D_010C1EC0[];
extern s32 D_010C1EC4[];
void func_0010CBC8(s32, s32, s32, s32);
s32 func_001167E0(void);
void func_0010CC08(void) {
    if (func_001167E0() == 2) {
        func_0010CBC8(D_010C1EC4[0], D_010C1EB8[0], D_010C1EBC[0], D_010C1EC0[0]);
    }
}
extern s32 D_010C21D0[];
void func_0010CC58(s32 a0) {
    D_010C21D0[0] = a0;
}
extern s32 D_001BD868[];
extern s32 D_001BD86C[];
void func_0010CC90(s32);
void func_0010CC68(void) {
    D_001BD868[0] = 0;
    D_001BD86C[0] = 0;
    func_0010CC90(0);
}
