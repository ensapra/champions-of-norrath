extern void func_0010B378(s32, void *, ...);
extern void func_0013BBD0(void);
extern void func_00147F88(s32);
extern s32 D_010D4500[];
extern s32 D_010D4508[];
extern s32 D_001BB6C4[];
extern s32 D_001BB6B4[];
extern u8 D_001BB720[];

void func_00148178(s32 a, s64 b)
{
    s32 i = b;
    D_001BB6C4[0] = D_010D4508[i];
    func_0010B378(D_010D4500[i], D_001BB720);
    func_0013BBD0();
    if (D_001BB6B4[0] != 0)
        func_00147F88(i);
}
