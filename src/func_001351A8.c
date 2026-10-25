extern s32 D_010CE310[], D_010CE2E0[], D_010CE2F4[], D_010CE2F8[];
extern u8 D_010CE2E4[];
s32 func_0011BA18(s32);
s32 func_001107E8(s32, void *, s32, void *, s32);
void func_0011E420(s32, s32);
void func_0011CEF0(s32, s32, s32);

void func_001351A8(void) {
    s32 x = D_010CE310[0];
    if (x >= 0) {
        if (x < 7) {
            D_010CE2E0[0] = func_001107E8(func_0011BA18(0xD7), D_010CE2E4, 1, D_010CE2F4, 0);
            D_010CE2F8[0] = 0;
        }
    }
    func_0011E420(D_010CE2F4[0], 0);
    func_0011CEF0(D_010CE2E0[0], D_010CE310[0], 7);
}
