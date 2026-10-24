extern s32 func_001B5640(s32, s32, s32);

s32 func_001040CC(s32 a, s32 b, s32 c) {
    s32 r;
    do {
        r = func_001B5640(a, b, c);
    } while (r < 0);
    return r;
}

extern s32 func_001B5660(s32, s32, s32, s32 *);

s32 func_00104138(s32 a, s32 b, s32 c) {
    s32 st;
    s32 r = func_001B5660(a, b, c, &st);
    if (r >= 0) {
        if (st == 1) r = 0xF0000000;
    }
    return r;
}

extern u8 D_0104D290[][0x1000];

void *func_00104348(s32 i) {
    return D_0104D290[i];
}
