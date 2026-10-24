extern s32 D_00362CC0[];extern s32 D_00362CC4[];
void func_00186580(s32 a, s32 b, u64 c);
void func_001864F8(s32 a, s32 *p) {
    if (p) {
        s32 x = *D_00362CC0 + p[0];
        s32 y = *D_00362CC4 + p[1];
        s32 z = x + p[2];
        s32 w = y + p[3];
        func_00186580(a, 0x40, (u64)x | ((u64)z << 16) | ((u64)y << 32) | ((u64)w << 48));
    } else {
        func_00186580(a, 0x40, 0x01BF0000027F0000ULL);
    }
}
