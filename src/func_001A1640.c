volatile void func_001001C8(s32);
void func_001A3BF0(s32);
s64 func_001A4BB8(s32, s32, s32);

void func_001A1550(void)
{
    func_001A3BF0(6);
    func_001001C8(1);
}

s32 func_001A1640(s32 a)
{
    return func_001A4BB8(a, 0, 10);
}
