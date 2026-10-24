extern s32 D_010CE610[];
extern s32 D_010CE640[];
extern s32 D_010CE6C0[];
extern s32 D_010CE6C4[];
extern s32 D_010CE6C8[];
extern s32 D_010CE6CC[];
extern s32 D_010CE700[];
extern void func_0011B968(s32);
extern void func_0013DA98(void *, s32, s32);

void func_0013CEF0(void) {
    func_0011B968(D_010CE610[0]);
    func_0011B968(D_010CE640[0]);
}

void func_0013CF20(void) {
    D_010CE6C0[0] = 0;
    D_010CE6C4[0] = 0;
    D_010CE6C8[0] = 0;
    D_010CE6CC[0] = 0;
    func_0013DA98(D_010CE700, 0, 0);
}
