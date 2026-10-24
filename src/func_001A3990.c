s32 Deci2Call(s32, u32 *);
s32 func_001B7EE0(s32 s) {
    u32 args[1];
    args[0] = s;
    return Deci2Call(2, args);
}

extern s32 *func_001A1CF0(void *, s32);
s32 func_001A3990(u8 *s) {
    s32 *b;
    s32 i;
    if (*(s32 **)(s + 0x1D4) == 0) {
        b = func_001A1CF0(s, 0x80);
        *(s32 **)(s + 0x1D4) = b;
        if (b == 0)
            return -1;
        for (i = 31; i >= 0; i--)
            b[i] = 0;
    }
    return 0;
}

extern u8 jtbl_004C006C[];
extern u64 func_001708F0(u64, u64);
s32 func_001A32C8(void) {
    u8 *r = *(u8 **)(jtbl_004C006C + 0x3A14);
    u64 v = func_001708F0(*(u64 *)(r + 0xA8), 0x5851F42D4C957F2DULL) + 1;
    *(u64 *)(r + 0xA8) = v;
    return (s32)((v >> 32) & 0x7FFFFFFF);
}
