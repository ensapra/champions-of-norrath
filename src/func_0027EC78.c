extern s8 D_008D5B38[];
extern s8 D_00437048[];
s32 func_0027EC78(s32 i, s32 n) {
    s8 *p;
    s32 low, high;
    if (n == 0) { D_008D5B38[i] = 0; return 0; }
    low = 0;
    p = D_00437048 + i * 0x27c;
    high = p[9] - 1;
    if (p[2] != 0) { high = p[9] - 2; low = -1; }
    if (n > 0) {
        if (D_008D5B38[i] < high) { D_008D5B38[i] += n; return 1; }
    }
    if (n >= 0) return 0;
    {
        if (low < D_008D5B38[i]) { D_008D5B38[i] += n; return 1; }
    }
    return 0;
}
