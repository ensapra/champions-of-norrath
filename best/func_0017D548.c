extern u8 func_01000000[];
extern u8 jtbl_004C006C[];
extern u8 func_001D1C80[];
extern s32 func_001AFF48(s32);
extern s32 func_001B06E0(void *, u32, s32);
extern void func_001AF710(void *);
extern void FlushCache(s32);
s32 ovl_ntgui2_func_0017D410(void) {
    s32 i;
    func_001AFF48(0);
    for (;;) {
        if (func_001B06E0(func_01000000 + 0xECF80, 0x80000701, 0) < 0) {
            func_001AF710(jtbl_004C006C + 0xC644);
            return -1;
        }
        i = 10000;
        do { i--; } while (i != -1);
        if (*(s32 *)(func_01000000 + 0xECFA4) != 0) break;
    }
    *(s32 *)(func_001D1C80 + 0x3F8) = 0;
    *(s32 *)(func_001D1C80 + 0x3FC) = 0;
    FlushCache(0);
    return 0;
}

s32 func_0017D548(s32 a) {
    s32 old = *(s32 *)(func_001D1C80 + 0x3F8);
    *(s32 *)(func_001D1C80 + 0x3F8) = a;
    *(s32 *)(func_001D1C80 + 0x3FC) = 0;
    return old;
}
