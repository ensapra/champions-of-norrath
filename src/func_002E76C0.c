typedef struct {
    char p0[0x60]; volatile s32 f60;
    char p1[0x70 - 0x64]; volatile u64 f70;
    volatile u32 f78;
} G;
extern G D_008EBDD8;
extern s32 D_008EBE38[];
s32 func_002E76C0(u32 a, u32 b) {
    if (a == 0 || b == 0) {
        D_008EBE38[0] = 0;
        return 0;
    }
    if (b < 0x14) b = 0x14;
    if (a < 0x64) a = 0x64;
    if (b > 0x7D0) b = 0x7D0;
    if (a > 0xBB8) a = 0xBB8;
    {
        G *g = &D_008EBDD8;
        g->f78 = a;
        g->f60 = 1;
        g->f70 = b;
    }
    return 0;
}
