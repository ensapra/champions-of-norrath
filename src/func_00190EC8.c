typedef struct Ent { s32 w0, w1, w2, w3, state, w5, w6; } Ent;
typedef struct Row { Ent e[4]; } Row;
extern Row D_010F4610[];
s32 func_00190D60(s32, s32);

s32 func_00190EC8(s32 a, s32 b) {
    if (D_010F4610[a].e[b].state == 0) return 0;
    return func_00190D60(a, b) == 0x3FFFF;
}
