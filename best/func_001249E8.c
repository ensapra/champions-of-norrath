extern s32 D_010C78C0[], D_010C7DAC[], D_010C78F0[], D_010C78F4[];
extern u8 D_010C78C4[];
extern u8 D_010C78F8[];
extern u8 D_010C7B50[];
extern s32 D_010C7DA8[];
s32 func_001107E8(s32, void *, s32, void *, void *);
s32 func_0011BA18(s32);
void func_0011E420(s32, s32);
void func_0011CEF0(s32, s32, s32);

void func_001249E8(void)
{
    s32 x = D_010C7DAC[0];
    if (x >= 0) {
        if (x < 7) {
            u8 b;
            D_010C78C0[0] = func_001107E8(func_0011BA18(0xDB), D_010C78C4, 3, D_010C78F0, D_010C78F4);
            D_010C7DA8[0] = 0;
            b = *(u8 *)0x4CA0B0;
            D_010C7B50[0] = b;
            D_010C78F8[0] = b;
        }
    }
    func_0011E420(D_010C78F0[0], D_010C78F4[0]);
    func_0011CEF0(D_010C78C0[0], D_010C7DAC[0], 8);
}
