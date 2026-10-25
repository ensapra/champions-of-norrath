typedef struct { char pad[0x64]; s32 f64; } G;
extern G D_008EBDD8;
s32 func_002E73C8(s32 *p) {
    if (!p) return 0x80000004;
    {
        G *g = &D_008EBDD8;
        *p = g->f64;
        g->f64 = 0;
    }
    return 0;
}
