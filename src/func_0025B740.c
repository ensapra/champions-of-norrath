typedef struct { s32 a; s32 b; } Ent;
extern s32 D_0042E220[];
extern Ent *D_0042E238[];
extern s32 D_00486C68;
s32 func_00304CFC(s32);
s32 func_00304F60(s32, s32, s32);

s32 func_0025B740(s32 arg0) {
    s32 i;
    if (D_00486C68 == -1) return -1;
    for (i = 0; i < D_0042E220[D_00486C68]; i++) {
        if (func_00304F60(D_0042E238[D_00486C68][i].a, arg0, func_00304CFC(D_0042E238[D_00486C68][i].a)) == 0) return i;
    }
    return -1;
}
