extern s32 D_010CE380[], D_001C53FC[], D_010CE350[], D_010CE378[], D_010CE37C[];
extern u8 D_010CE358[];
s32 func_0011BA18(s32);
s32 func_001107E8(s32, void*, s32, s32, void*);
void func_0011E420(s32, s32);
void func_0011CEF0(s32, s32, s32);

void func_001363D0(void) {
    s32 x = D_010CE380[0];
    if (x >= 0) {
        if (x < 7) {
            s32 h = func_001107E8(func_0011BA18(0x111), D_010CE358, 2, 0, D_010CE378);
            D_010CE350[0] = h;
            D_010CE37C[0] = 0;
            D_001C53FC[0] = -1;
        }
    }
    func_0011E420(0, D_010CE378[0]);
    func_0011CEF0(D_010CE350[0], D_010CE380[0], 0xF);
}
