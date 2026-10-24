/* identical to func_002E2CB0 (matched), with its names changed by decompdecomp */
void func_0017BED8(s32, s32, s32);
void func_0017C1F0(s32 a, s32 b)
{
    volatile void *dummy;
    func_0017BED8(a, b, 0);
    dummy = (void *)0;
    (void)dummy;
}

s32 func_002D6140(s32);
s32 func_002D70D0(void *);
s32 func_002D8468(void *);
extern s32 D_00446090[];
extern s32 D_004460B4[];
extern u8 D_00447250[];
extern char D_0047BB58[];
extern u8 D_00447C00[];
extern char D_0047BB68[];

s32 func_002E2ED8(s32 a)
{
    if (a == 0) {
        if (D_00446090[0] > 0) {
            func_002D70D0(D_0047BB58);
        }
        while (D_004460B4[0] != 0 || func_002D8468(D_00447250) != 0) {
            func_002D6140(4000);
        }
        return 0;
    }
    if (D_004460B4[0] != 0 || func_002D8468(D_00447250) != 0) {
        return 1;
    }
    return 0;
}

s32 func_002E2F78(s32 a)
{
    if (a == 0) {
        if (D_00446090[0] > 0) {
            func_002D70D0(D_0047BB68);
        }
        while (func_002D8468(D_00447C00) != 0) {
            func_002D6140(4000);
        }
        return 0;
    }
    return func_002D8468(D_00447C00);
}

s32 func_002DD640(void);
void func_002DD698(void);
void func_002E28C8(void);
extern s32 D_004460A4[];
extern s32 D_004460C0[];
s32 func_002D7490(s32, void *, s32);

s32 func_002E2920(void)
{
    s32 r;
    D_004460A4[0] = 1;
    r = func_002DD640();
    func_002D7490(0x80000012, func_002E28C8, 0);
    if (r) {
        func_002DD698();
    }
    D_004460A4[0] = 0;
    D_004460C0[0] = 1;
    return 1;
}
