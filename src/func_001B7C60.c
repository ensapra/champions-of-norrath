extern void func_001A2660(void *, s32, s32);
extern s32 func_001B5C80(void);
extern void func_001B5CD8(void);
extern s32 D_004C4F70[];
extern s32 D_004C4F74[];
s32 func_001B7C60(s32 a, s32 b) {
    s32 old;
    s32 r = func_001B5C80();
    old = D_004C4F70[0];
    D_004C4F70[0] = a;
    D_004C4F74[0] = b;
    func_001A2660((void *)a, 0, b * 16);
    if (r != 0) func_001B5CD8();
    return old;
}
