typedef struct {
    s32 mode;
    char pad4[0x44];
    s32 f48, f4C, f50, f54, f58;
    char pad5C[0x3C];
    s32 f98, f9C, fA0, fA4, fA8, fAC, fB0, fB4, fB8, fBC;
} G;
extern void func_00104EF0(void);
extern void func_00106C08(void);
extern void func_00109090(s32, s32);
extern void func_0010CC68(void);
extern void func_00110870(void);
extern void func_00118098(void);
extern s32 func_0011B908(s32, s32);
extern void func_0011BA30(void);
extern void func_0011C4A0(s32, s32);
extern void func_0013B5D8(void);
extern void func_0013B5F8(void *, s32);
extern void func_0013B658(void *, s32);
extern void func_0013B820(void);
extern void func_0013BA90(void);
extern void func_00144F38(s32, s32);
extern void func_00152A38(void);
extern void func_00171C40(s32, s32);
extern void func_00172188(s32);
extern s32 ovl_ntgui2_func_0017DDB0(void);
extern u8 func_001B9FD8[];
extern u8 func_001C3838[];
extern s32 D_010C4CF8[];
extern u8 D_004C8F10[], D_004C8F20[], D_004C8F30[], D_004C8F40[], D_004C8F50[], D_004C8F60[], D_004C8F70[], D_004C8F80[], D_004C8F90[], D_004C8FA0[];
#define g (*(G *)(func_001C3838 + 0x158))
#define flags D_010C4CF8[0]

void func_0011BD20(void) {
    s32 a, r;
    if (g.mode == 1) func_00172188(4);
    else func_00172188(2);
    func_00171C40(func_0011B908(0x10, 0x88000), 0x88000);
    func_00152A38();
    func_0011C4A0(g.f4C, flags & 8);
    func_00144F38(0, g.f48);
    func_0013B820();
    func_0010CC68();
    func_0013BA90();
    func_00104EF0();
    func_00106C08();
    func_0013B5D8();
    if (g.f98) func_0013B5F8(D_004C8F10, g.f98);
    if (g.f9C) func_0013B5F8(D_004C8F20, g.f9C);
    func_0013B658(D_004C8F30, g.fA0);
    func_0013B658(D_004C8F40, g.fA4);
    func_0013B658(D_004C8F50, g.fA8);
    func_0013B658(D_004C8F60, g.fAC);
    func_0013B658(D_004C8F70, g.fB0);
    func_0013B658(D_004C8F80, g.fB4);
    func_0013B658(D_004C8F90, g.fB8);
    func_0013B658(D_004C8FA0, g.fBC);
    func_00118098();
    func_0011BA30();
    a = g.f58;
    *(s32 *)(func_001B9FD8 + 0x16DC) = (flags >> 5) & 1;
    if (flags & 0x400) r = ovl_ntgui2_func_0017DDB0();
    else r = g.f54;
    func_00109090(r, a);
    func_00110870();
}
