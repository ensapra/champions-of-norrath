typedef struct Ent { s32 w0, w1, w2, w3, state, w5, w6; } Ent;
typedef struct Row { Ent e[4]; } Row;
extern Row D_008DD8D0[];
s32 func_002D4330(s32, s32);

s32 func_002D4498(s32 a, s32 b) {
    if (D_008DD8D0[a].e[b].state == 0) return 0;
    return func_002D4330(a, b) == 0x3FFFF;
}
