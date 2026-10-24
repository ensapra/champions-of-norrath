s32 D_0048090C;
extern u8 D_00366310[];
s32 TerminateThread(s32);
void DeleteThread(s32);
void func_0019C158(void *);

s32 func_0019B038(void)
{
    TerminateThread(D_0048090C);
    DeleteThread(D_0048090C);
    D_0048090C = -1;
    func_0019C158(D_00366310);
    func_0019C158(D_00366310 + 0x824);
    return 0;
}
