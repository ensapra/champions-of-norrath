extern s32 D_010CE2A8[], D_010CDB30[], D_010CDB7C[], D_010CDB80[], D_010CE290[];
extern u8 D_010CDB34[], D_010CDB88[], D_010CDDE0[], D_010CE038[];
s32 func_0011BA18(s32);
s32 func_001107E8(s32, void*, s32, void*, void*);
void func_0011E420(s32, s32);
void func_0011CEF0(s32, s32, s32);

void func_00133E70(void) {
    s32 x = D_010CE2A8[0];
    if (x >= 0) {
        if (x < 7) {
            u8 b;
            D_010CDB30[0] = func_001107E8(func_0011BA18(0xC0), D_010CDB34, 3, D_010CDB7C, D_010CDB80);
            D_010CE290[0] = 0;
            b = *(u8 *)0x4CAD40;
            D_010CE038[0] = b;
            D_010CDB88[0] = b;
            D_010CDDE0[0] = b;
        }
    }
    func_0011E420(D_010CDB7C[0], D_010CDB80[0]);
    func_0011CEF0(D_010CDB30[0], D_010CE2A8[0], 5);
}
