/* identical to func_001A32C8 (matched), with its names changed by decompdecomp */
extern u8 D_00444A6C[];
extern u64 func_002F81C0(u64, u64) __attribute__((const));
s32 func_00302FD8(void) {
    u8 *r = *(u8 **)(D_00444A6C + 0x3A14);
    u64 v = func_002F81C0(*(u64 *)(r + 0xA8), 0x5851F42D4C957F2DULL) + 1;
    *(u64 *)(r + 0xA8) = v;
    return (s32)((v >> 32) & 0x7FFFFFFF);
}
