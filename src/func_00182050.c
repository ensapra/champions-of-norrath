typedef struct { u64 a, b, c, d, e; } __attribute__((packed)) V40;
extern char func_01000000[];
s32 func_0019B088(void *, s32, s32);
void func_001A2660(void *, s32, s32);
s32 func_00182050(V40 *src, s32 a, s32 b) {
    s32 x = a & 0xFF, y = b & 0xFFFF;
    if (src) {
        *(V40 *)(func_01000000 + 0xF0400) = *src;
        return func_0019B088(func_01000000 + 0xF0400, x, y);
    }
    func_001A2660(func_01000000 + 0xF0400, 0, 0x28);
    return func_0019B088(func_01000000 + 0xF0400, x, y);
}
