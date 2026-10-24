extern u8 func_001CE218[];
extern s32 D_001D0224[];
extern u8 D_010EA1E0[];
void func_0018F4F8(void *, s16, s16, s16);

void func_001755A8(s32 a0, s32 a1, s32 a2, s16 a3, s16 a4, s16 a5) {
    s32 *g = (s32 *)(func_001CE218 + 0x2010);
    if (g[0] == 1) {
        s32 o;
        g[10] = D_001D0224[0];
        if (!(a2 & 1)) o = a1 * 5; else o = a0 * 5;
        func_0018F4F8(*(u8 **)(D_010EA1E0 + o * 8) + 0x20, a3, a4, a5);
    } else {
        g[10] = 0;
    }
}
