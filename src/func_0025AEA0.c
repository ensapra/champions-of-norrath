typedef struct { s32 a; s32 b; } Ent;
extern s32 D_0042E220[];
extern Ent *D_0042E238[];
extern s32 D_00485AA8;
s32 func_00304CFC(s32);
s32 func_00304F60(s32, s32, s32);

s32 func_0025AEA0(s32 arg0) {
    s32 i, j;
    for (i = 0; i < D_00485AA8; i++) {
        for (j = 0; j < D_0042E220[i]; j++) {
            if (func_00304F60(D_0042E238[i][j].a, arg0, func_00304CFC(D_0042E238[i][j].a)) == 0) goto done;
        }
    }
done:
    return i != D_00485AA8 ? i : -1;
}
