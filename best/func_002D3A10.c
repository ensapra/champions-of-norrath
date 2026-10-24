typedef struct { u8 pad[0x58]; s32 v58; } Q;
typedef struct { s32 p; s32 x1, x2, x3; s32 a, b, c; } Ent;
typedef struct { Ent e[4]; } Grp;
extern Grp D_008DD8D0[];
Q *func_002D39B0(s32, s32);

s32 func_002D3A10(s32 a, s32 b) {
    if (D_008DD8D0[a].e[b].a == 0) return 0;
    return func_002D39B0(a, b)->v58;
}
