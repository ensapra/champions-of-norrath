extern u8 D_003642D0[];
extern void *D_004804D0;
s32 func_0019BC38(u32 a) {
    s32 r = 1;
    if (a < 0xB) {
        r = D_003642D0[0];
        if (r == 0) {
            void *p = D_004804D0;
            p = *(void **)((u8 *)p + 0x6C);
            ((void (*)(s32))p)(0x8001);
        }
        r = 0;
    }
    return r;
}
