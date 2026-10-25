extern s32 D_010CD3A4[];
extern s32 D_010CD380[];
extern s32 D_010CD398[];
extern s32 D_001C4E24[];
s32 func_0011BA18(s32);
s32 func_00110770(s32,s32,s32,s32);
void func_0011E420(s32,s32);
void func_0011CEF0(s32,s32,s32);

void func_0012D378(void) {
    s32 x = D_010CD3A4[0];
    if (x >= 0) {
        if (x < 7) {
            s32 r = func_00110770(func_0011BA18(0x12D), 0, 0, 0);
            D_001C4E24[0] = -1;
            D_010CD380[0] = r;
            D_010CD398[0] = 0;
        }
    }
    func_0011E420(0, 0);
    func_0011CEF0(D_010CD380[0], D_010CD3A4[0], 20);
}
