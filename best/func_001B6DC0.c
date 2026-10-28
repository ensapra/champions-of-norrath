extern u8 jtbl_004C006C[];
u64 func_001B6DC0(void) {
    volatile u32 *mm = (volatile u32 *)0x10001000;
    u64 low = mm[0];
    u32 c = mm[4];
    u64 hi = *(volatile u64 *)(jtbl_004C006C + 0x4EE4);
    if (c & 0x800) { low = mm[0]; hi++; }
    c &= 3;
    u64 sh = c ? 2U : 0U;
    return (low | (hi << 16)) << (sh << c);
}
