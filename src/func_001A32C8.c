extern u8 jtbl_004C006C[];
extern u64 func_001708F0(u64, u64) __attribute__((const));
s32 func_001A32C8(void) {
    u8 *r = *(u8 **)(jtbl_004C006C + 0x3A14);
    u64 v = func_001708F0(*(u64 *)(r + 0xA8), 0x5851F42D4C957F2DULL) + 1;
    *(u64 *)(r + 0xA8) = v;
    return (s32)((v >> 32) & 0x7FFFFFFF);
}
