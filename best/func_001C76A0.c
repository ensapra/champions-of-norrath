u8 D_00486EA0[1];
u8 D_004879F0[1];
extern s32 D_007D06E8[];
extern s32 D_007D06F8[];
extern s32 D_007D0708[];
void func_002D0C90(s32);
void func_001C76A0(s32 a, s32 b, s32 c, s32 d) {
    if (func_001353A8(a)) {
        func_002D0C90(a);
        D_00486EA0[a] = 1;
        D_007D06E8[a] = b;
        D_007D06F8[a] = c;
        D_007D0708[a] = d;
        D_004879F0[a] = 0;
    }
}
