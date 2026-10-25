extern char jtbl_004C006C[];
s32 func_0018E0C0(u64 *arg0) {
    u32 i = 0;
    u32 a;
    if (*(volatile u32 *)0x1000A000 & 0x100) {
        do {
            if (i++ > 0x1000000) {
                func_001AF710(jtbl_004C006C + 0xE53C);
                return -1;
            }
        } while (*(volatile u32 *)0x1000A000 & 0x100);
    }
    *(volatile u32 *)0x1000A020 = (s32)(*arg0 & 0x7FFF) + 1;
    a = (u32)arg0;
    if ((a & 0x70000000) == 0x70000000)
        *(volatile u32 *)0x1000A010 = (a & 0x0FFFFFFF) | 0x80000000;
    else
        *(volatile u32 *)0x1000A010 = a & 0x0FFFFFFF;
    *(volatile u32 *)0x1000A000 = 0x101;
    return 0;
}
