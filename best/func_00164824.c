void func_00164824(u8 *a, s32 *x, s32 *y, s32 v) {
    s32 *src = (s32 *)(a + 0xA10);
    if (*(s32 *)(a + 0x944) != 0) {
        u32 i;
        for (i = 0; i < 4; i++) {
            x[i] = v;
            y[i] = *src++;
        }
    } else {
        u32 j;
        for (j = 0; j < 4; j++) {
            y[j] = v;
            x[j] = *src++;
        }
    }
}
