/* identical to func_001B3A90 (matched), with its names changed by decompdecomp */
extern u8 jtbl_004C006C[];
extern u8 D_0110B000[];
void SignalSema(s32);
s32 func_002DA3B0(s32, s32);
s32 func_001B06E0(void *, u32, s32);

void func_001B1568(void) { SignalSema(*(s32 *)(jtbl_004C006C + 0x3F38)); }

s64 func_002DB450(s32 a) { return func_002DA3B0(a, 0x12); }

s64 func_001B3EB8(s32 a) { return func_002DA3B0(a, 0x15); }

s32 func_001B46F0(void) {
    s32 i;
    u8 *p;
    while (1) {
        p = D_0110B000;
        if (func_001B06E0(p, 0x80000003, 0) < 0) return -1;
        if (*(s32 *)(p + 0x24) != 0) break;
        i = 0x100000;
        do { i--; } while (i != -1);
    }
    *(s32 *)(jtbl_004C006C + 0x3F48) = 0;
    return 0;
}
