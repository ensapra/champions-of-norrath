extern u8 jtbl_004C006C[];
s32 func_001B5C80(void);
void func_001B5CD8(void);

u64 func_001B6E10(void) {
    s32 lock = func_001B5C80();
    volatile u32 *t = (volatile u32 *)0x10001000;
    u64 low = t[0];
    u32 mode = t[4];
    u64 hi = *(u64 *)(jtbl_004C006C + 0x4EE4);
    u32 sh;
    if (mode & 0x800) {
        low = t[0];
        hi++;
    }
    mode &= 3;
    sh = mode ? 2 : 0;
    low = (low | (hi << 16)) << (sh << mode);
    if (lock) {
        func_001B5CD8();
    }
    return low;
}
