extern s32 D_010C7624[], D_010C6EC0[], D_010C6F0C[], D_010C6F10[], D_010C7620[], D_010C6EC4[];
extern u8 D_010C6F18[];
extern u8 D_004C93B0[];
extern s32 D_001C4664[];
s32 func_001107E8(s32,void*,s32,void*,void*);
s32 func_0011BA18(s32);void func_0011E420(s32,s32);void func_0011CEF0(s32,s32,s32);
void func_00122710(void){
    s32 x = D_010C7624[0];
    if (x >= 0) {
        if (x < 7) {
            s32 i;
            u8 *p;
            D_010C6EC0[0] = func_001107E8(func_0011BA18(0xE2), D_010C6EC4, 3, D_010C6F0C, D_010C6F10);
            D_010C7620[0] = 0;
            D_001C4664[0] = 0;
            p = D_010C6F18;
            for (i = 2; i >= 0; i--) {
                *p = D_004C93B0[0];
                p += 0x258;
            }
        }
    }
    func_0011E420(D_010C6F0C[0], D_010C6F10[0]);
    func_0011CEF0(D_010C6EC0[0], D_010C7624[0], 9);
}
