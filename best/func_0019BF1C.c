typedef struct { s32 a; s32 b; s32 flag; s32 c; s32 cnt; } G;
extern G D_003642D0;
extern u8 *D_004804D0;
void func_001A2660(s32, s32, s32);
s32 func_001A24AC(s32, s32, s32);
void func_0019BFD8(s32);
G *func_0019C00C(s32 a) {
    G *g = &D_003642D0;
    if (a == 1) g->flag = 0;
    else g->flag = 1;
    return g;
}
void func_0019BF9C(s32 *out) {
    *out = 0;
    D_003642D0.cnt = 0;
    D_003642D0.c = 0;
    func_001A2660(*(s32 *)(D_004804D0 + 0x54), 0, *(s32 *)(D_004804D0 + 0x58) * 4);
}
void func_0019BF1C(s32 i) {
    G *g = &D_003642D0;
    s32 n = g->cnt - i;
    if (n > 0) {
        func_001A24AC(*(s32 *)(D_004804D0 + 0x54) + i * 4, *(s32 *)(D_004804D0 + 0x54) + (i + 1) * 4, (n - 1) * 4);
        g->cnt--;
        func_0019BFD8(1);
        return;
    }
    func_0019BFD8(0x13);
}
