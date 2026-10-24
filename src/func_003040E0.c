/* identical to func_001ABBA0 (matched), with its names changed by decompdecomp */
#define F(p,t,o) (*(t*)((char*)(p)+(o)))
s64 func_0030AF30(s32, s16, s32, s32);
s64 func_003040E0(void *a, s32 b, s32 c) {
    s64 r = func_0030AF30(F(a, s32, 0x54), F(a, s16, 14), b, c);
    if (r == -1) F(a, u16, 12) &= 0xEFFF;
    else { F(a, s32, 0x50) = r; F(a, u16, 12) |= 0x1000; }
    return r;
}
