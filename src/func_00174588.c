extern s32 D_010E4920[];
s32 func_00174388(s32, s32, s16, s16, s16, s16, s16, s16);

s32 func_00174588(s32 a, s16 b, s16 c, s16 d, s16 e, s16 f, s16 g) {
    s32 i = 0;
    if (D_010E4920[0] == 1) {
        for (;;) {
            if (i >= 0x20) return -1;
            i++;
            if (D_010E4920[i] != 1) break;
        }
    }
    return func_00174388(i, a, b, c, d, e, f, g);
}
