typedef struct { s32 a; s32 b; } Ent;
extern s32 D_0042E220[];
extern Ent *D_0042E238[];
extern s32 D_00485AA8;
s32 func_003044FC(s32, s32);

s32 func_0025B148(s32 arg0) {
    s32 i, j;
    for (i = 0; i < D_00485AA8; i++) {
        for (j = 0; j < D_0042E220[i]; j++) {
            if (func_003044FC(D_0042E238[i][j].a, arg0) == 0) return D_0042E238[i][j].b;
        }
    }
    return -1;
}
