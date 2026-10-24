typedef struct { char pad[0x68]; s32 f68; } G;
extern G D_008EBDD8;
s32 func_002E7740(s32 *p) {
    if (!p) return 0x80000004;
    {
        G *g = &D_008EBDD8;
        *p = g->f68;
        g->f68 = 0;
    }
    return 0;
}
