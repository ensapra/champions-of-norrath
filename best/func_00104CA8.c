s32 D_010B4780[4];
s32 D_010B47C0[4];
s32 func_001B08B0(s32, s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00104CA8(s32 flags, s32 color) {
    s32 n = (flags & 0x8000) ? 0x40 : 0;

    if (flags & 0x1000) {
        func_001B08B0((s32)D_010B47C0, flags, 0, color, 0x40, (s32)D_010B4780, n, 0, 0);
    } else {
        D_010B4780[0] = color;
        func_001B08B0((s32)D_010B47C0, flags, 0, (s32)D_010B4780, 0x10, (s32)D_010B4780, n, 0, 0);
    }
    return D_010B4780[0];
}
