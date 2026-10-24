extern s32 func_001B5660(s32, s32, s32, s32 *);

s32 func_00104138(s32 a, s32 b, s32 c) {
    s32 st;
    s32 r = func_001B5660(a, b, c, &st);
    if (r < 0) return r;
    return st == 1 ? 0xF0000000 : r;
}

extern u8 D_0104D290[];

s32 func_00104348(s32 i) {
    return (s32)(D_0104D290 + (i << 12));
}
