extern s32 D_001D0500;
extern s32 D_010ECC48;
extern s32 D_010ECC4C;
extern s32 D_010ECC50;
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
    D_010ECC4C = 0;
    if (r) {
        func_001B5CD8();
    }
    return old;
}

void func_0018D2F0(void *);

void func_0018AE08(void *a, s32 b, s32 c, s32 d)
{
    *(s32 *)((u8 *)a + 0x350) = c;
    *(s32 *)((u8 *)a + 0x358) = d;
    *(s32 *)((u8 *)a + 0x354) = b;
    func_0018D2F0(a);
}

void func_00192560(s32, s32);

void func_0018B080(s32 a, s32 b)
{
    func_00192560(b, a);
}

void func_0018B090(s32 a)
{
    ((void(*)(s32))func_00192560)(a + 0x2D0);
}
