typedef struct { u8 pad[0x10]; s32 state; u8 pad2[0xC]; } Ent;
typedef struct { Ent e[4]; } Row;
extern u8 D_008DD8D0[];
extern u8 D_008DD880[];
extern s32 D_008DDAC0[];
s32 func_002D43E8(s32, s32, s32);
s32 func_002D4330(s32);
s32 func_002D3C78(s32, s32, s32);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_002D44F8(s32 a, s32 b) {
    if (*(s32 *)(D_008DD8D0 + b * 0x1C + a * 0x70 + 0x10) == 0) return 0;
    return func_002D43E8(a, b, 0xFFF);
}

s32 func_002D4498(s32 a, s32 b) {
    if (*(s32 *)(D_008DD8D0 + b * 0x1C + a * 0x70 + 0x10) == 0) return 0;
    return func_002D4330(a) == 0x3FFFF;
}

s32 func_002D43E8(s32 a, s32 b, s32 c) {
    D_008DDAC0[3] = c;
    D_008DDAC0[0] = 10;
    D_008DDAC0[1] = a;
    D_008DDAC0[2] = b;
    if (func_002D8270(D_008DD880, 1, 0, D_008DDAC0, 0x80, D_008DDAC0, 0x80, 0, 0) < 0) return 0;
    if (D_008DDAC0[4] == 1) func_002D3C78(a, b, 2);
    return D_008DDAC0[4];
}
