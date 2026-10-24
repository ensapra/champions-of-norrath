extern void func_0010B378(s32, void *, ...);
extern s32 func_001167E0(void);
extern void func_0013BBD0(void);
extern s32 func_00129B30(s32);
extern s32 D_010CB038[];
extern s32 D_010CB040[];
extern s32 D_001C4D74[];
extern s32 D_001BB6C4[];
extern s32 D_001BB6B4[];
extern u8 D_001BB720[];

s64 func_00129DD8(s32 a, s64 b) {
    s32 i = b;
    if (func_001167E0() == 2) {
        D_001C4D74[0] = i;
        D_001BB6C4[0] = D_010CB040[i];
        func_0010B378(D_010CB038[i], D_001BB720, D_001BB6C4[0]);
        func_0013BBD0();
        if (D_001BB6B4[0] != 0)
            return func_00129B30(i);
    }
}
