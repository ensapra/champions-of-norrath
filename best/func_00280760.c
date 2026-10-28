extern s8 D_008D5B48[], D_00437052[];
s32 func_00280760(s32 i, s32 d) {
    s32 m;
    if (d == 0) { D_008D5B48[i] = 0; return 0; }
    m = D_00437052[i * 636] - 1;
    if (d > 0) {
        if (D_008D5B48[i] < m) {
            D_008D5B48[i] += d;
            return 1;
        }
    }
    if (d < 0) {
        if (D_008D5B48[i] <= 0) return 0;
        D_008D5B48[i] += d;
        return 1;
    }
    return 0;
}
