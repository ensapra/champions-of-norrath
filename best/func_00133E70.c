extern u8 jtbl_004C006C[];
extern s32 D_010CDB30[];
extern s32 D_010CDB34[];
extern s32 D_010CDB7C[];
extern s32 D_010CDB80[];
extern u8 D_010CDB88[];
extern u8 D_010CDDE0[];
extern u8 D_010CE038[];
extern s32 D_010CE290[];
extern s32 D_010CE2A8[];
extern s32 func_001107E8(s32, void *, s32, void *, void *);
extern s32 func_0011BA18(s32);
extern void func_0011E420(s32, s32);
extern void func_0011CEF0(s32, s32, s32);

void func_00133E70(s32 arg0, s32 arg1) {
    s32 d = D_010CE2A8[0];
    if (d >= 0) {
        if (d < 7) {
            s32 r = func_001107E8(func_0011BA18(0xC0), D_010CDB34, 3, D_010CDB7C, D_010CDB80);
            u8 b = jtbl_004C006C[0xACD4];
            D_010CE038[0] = b;
            D_010CDB30[0] = r;
            D_010CE290[0] = 0;
            D_010CDB88[0] = b;
            D_010CDDE0[0] = b;
        }
    }
    func_0011E420(D_010CDB7C[0], D_010CDB80[0]);
    func_0011CEF0(D_010CDB30[0], D_010CE2A8[0], 5);
}
