extern u8 jtbl_004C006C[];
extern u8 jtbl_00503023[];
void func_001001C8(s32) __attribute__((noreturn));
void func_001A3BF0(s32);
s32 func_001A1770(s32, void *, s32, s32, s32);
s64 func_001A4BB8(s32, s32);
void func_001A2720(s32);
void func_001A27A0(s32);
void func_001A9C28(s32, s32);
void func_001A1550(void);

void func_001A1550(void)
{
    func_001A3BF0(6);
    func_001001C8(1);
}

void func_001A1568(s32 a, s32 b, s32 c)
{
    s32 *p = *(s32 **)(jtbl_004C006C + 0x3A14);
    func_001A1770(p[3], jtbl_00503023 + 0x372D, c, a, b);
    func_001A1550();
}

s32 func_001A1640(void)
{
    return func_001A4BB8(0, 10);
}

void func_001A1A50(s32 a)
{
    s32 *p = (s32 *)(jtbl_004C006C + 0x3A14);
    func_001A2720(*p);
    func_001A9C28(*p, a);
    func_001A27A0(*p);
}
