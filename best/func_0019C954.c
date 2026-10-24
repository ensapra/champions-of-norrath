extern u8 *D_004804D0;
s32 func_0019CA00(s32, s32, s32);
s32 func_0019C954(s32 a, u32 b, u32 c, u32 d) {
    u16 e = d;
    u8 bb = b, cc = c;
    if (e == 0x45) {
        void *p = D_004804D0;
        p = *(void **)((u8 *)p + 0x6C);
        return ((s32 (*)(s32))p)(-1);
    }
    if (a == 0) return func_0019CA00(bb, cc, e);
}
