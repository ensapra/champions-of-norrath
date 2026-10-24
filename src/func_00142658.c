extern s32 D_010D447C[];
extern s32 D_010D4480[];
void func_00142678(void);
void func_0014CE84(s32, s32 *, s32 *);
void func_00142658(void) {
    D_010D447C[0] = 0;
    func_00142678();
}
void ovl_ntgui2_func_00142498(s32 a, s32 b, u8 *c) {
    s32 x, y;
    D_010D447C[0] = 1;
    func_0014CE84(a, &x, &y);
    D_010D4480[0] = (*(s32 *)(c + 8) >> 4) - y;
}
