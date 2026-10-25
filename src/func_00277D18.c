typedef struct { u8 p0[0x3C0]; s32 tbl[4]; s32 n; } O;
s32 func_00277D18(O *o, s32 v) {
    s32 i;
    for (i = 0; i < o->n; i++) {
        if (o->tbl[i] == v) return 1;
    }
    return 0;
}
