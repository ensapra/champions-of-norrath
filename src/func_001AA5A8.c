extern u8 jtbl_004C006C[];
void func_001AA508(s32, s32, s32);

void func_001AA5A8(s32 arg0, s32 arg1)
{
    func_001AA508(*(s32 *)(jtbl_004C006C + 0x3A14), arg0, arg1);
}
