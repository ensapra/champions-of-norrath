extern s32 D_001D0500;
extern s32 D_010ECC48;
extern void *D_010ECC4C;
extern s32 D_010ECC50;
extern u8 _gp[];
void func_0017BE60(void);
s32 func_001B5C80(void);
void func_001B5CD8(void);

s32 func_0017BD88(s32 a0, s32 a1)
{
    s32 old;
    s32 r;

    if (D_001D0500 < 0) {
        func_0017BE60();
    }
    r = func_001B5C80();
    old = D_010ECC48;
    D_010ECC50 = a1;
    D_010ECC48 = a0;
    D_010ECC4C = _gp;
    if (r) {
        func_001B5CD8();
    }
    return old;
}
