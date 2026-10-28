typedef struct { u8 pad0[0x10]; s32 f10; u8 pad1[0xc]; } Ent;
extern u8 D_008DD8D0[];
u8 *func_002D39B0(s32, s32);
u8 func_002D3E88(s32 a, s32 b, s32 c, s32 d) {
    u8 *p;
    if (*(s32 *)(D_008DD8D0 + a * 0x70 + b * 0x1C + 0x10) != 0) {
        p = func_002D39B0(a, a);
        if (p[0x72] == 1 && p[0x64] >= 2) {
            if (c == -1) return p[0x6B];
            if (c < p[0x6B]) {
                switch (d) {
                case -1: return p[c * 4 + 0x40];
                case 0: return p[c * 4 + 0x41];
                case 1: return p[c * 4 + 0x42];
                case 2: return p[c * 4 + 0x43];
                }
            }
        }
    }
    return 0;
}
