void func_001050A8(s32 *p, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 s0, s32 s8) {
    s32 i;
    p[0] = a1;
    p[1] = a2;
    p[2] = a3;
    p[3] = a4;
    p[4] = a5;
    p[5] = 0;
    p[0xD] = a6 << 4;
    p[0xE] = a7 << 4;
    p[0xF] = s0 << 4;
    p[0x10] = s8 << 4;
    for (i = 4; i >= 0; i--) p[0x11 + i] = 0;
    for (i = 9; i >= 0; i--) p[0x20 + i] = 0;
    p[0x2A] = 0;
    p[0x2B] = 0;
    p[0x2C] = 0;
}
