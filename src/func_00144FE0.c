s32 func_001B5C80();
s32 func_001B5CD8();
s64 func_001B7528(s64, s64, s64, s64);
s64 func_001B7620(s64 a, s64 b, s64 c, s64 d)
{
    s32 t = func_001B5C80();
    s64 r = func_001B7528(a, b, c, d);
    if (t != 0)
        func_001B5CD8();
    return r;
}

extern u32 D_010D4490[];
u32 func_00144FF0(void) { return D_010D4490[0] & 4; }
u32 func_00144FE0(void) { return D_010D4490[0] & 2; }
u32 func_00144FD0(void) { return D_010D4490[0] & 1; }
