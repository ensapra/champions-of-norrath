extern u8 func_001C8098[];
void func_00163ED0(void)
{
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0x12C8);
    ((void (*)(void))p)();
}

extern void func_0014B558(void *, void *, s32);
void func_001638C0(u8 *a)
{
    func_0014B558(a, a + 0x140, 1);
}

extern s32 func_0016FB0C(void *);
s32 func_0016386C(u8 *a, s32 v)
{
    *(s32 *)(a + 0x948) = v;
    if (*(s32 *)(a + 0x94C) != 0)
        return 0;
    if (*(s32 *)(a + 0x944) == v)
        return 0;
    *(s32 *)(a + 0x944) = v;
    *(s32 *)(a + 0x94C) = 1;
    func_0016FB0C(a + 0x950);
    return 1;
}

void func_00164584(u8 *a, s32 *a1, s32 *a2, s32 *a3, s32 *a4, s32 *a5, s32 *a6)
{
    if (*(s32 *)(a + 0x944) == 0) {
        *a1 = *(s32 *)(a + 0x974) - *(s32 *)(a + 0x5A0);
        *a2 = *(s32 *)(a + 0x978) - *(s32 *)(a + 0x5A4);
        *a5 = *(s32 *)(a + 0x98C);
        *a3 = 0;
        *a4 = 0;
        *a6 = *(s32 *)(a + 0x988);
        return;
    }
    *a1 = 0;
    *a2 = 0;
    *a5 = *(s32 *)(a + 0x988);
    *a3 = *(s32 *)(a + 0x974) - *(s32 *)(a + 0x5A0);
    *a4 = *(s32 *)(a + 0x978) - *(s32 *)(a + 0x5A4);
    *a6 = *(s32 *)(a + 0x98C);
}
