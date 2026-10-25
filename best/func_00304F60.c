s32 func_00304F60(const char *a, const char *b, u32 n) {
    while (n != 0) {
        u8 x = *a;
        u8 y = *b;
        if (x != y) return (s32)x - (s32)y;
        if (x == 0) return 0;
        ++a; ++b; --n;
    }
    return 0;
}
