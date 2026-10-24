/* identical to func_001A1A50 (matched), with its names changed by decompdecomp */
extern u8 D_00444A6C[];
extern u8 jtbl_00503023[];
void func_001001C8(s32) __attribute__((noreturn));
void func_001A3BF0(s32);
s32 func_001A1770(s32, void *, s32, s32, s32);
s64 func_001A4BB8(s32, s32);
void func_00302270(s32);
void func_003022F0(s32);
void func_00300608(s32, s32);
void func_001A1550(void);

void func_001A1550(void)
{
    func_001A3BF0(6);
    func_001001C8(1);
}

void func_001A1568(s32 a, s32 b, s32 c)
{
    s32 *p = *(s32 **)(D_00444A6C + 0x3A14);
    func_001A1770(p[3], jtbl_00503023 + 0x372D, c, a, b);
    func_001A1550();
}

s32 func_001A1640(void)
{
    return func_001A4BB8(0, 10);
}

void func_003015A0(s32 a)
{
    s32 *p = (s32 *)(D_00444A6C + 0x3A14);
    func_00302270(*p);
    func_00300608(*p, a);
    func_003022F0(*p);
}
