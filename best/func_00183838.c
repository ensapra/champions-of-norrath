s32 func_00183838(s32 *a, s32 *b, s32 n) {
    s32 i = 0;
    for (;;) {
        s32 x, y, j;
        if (!(i < n)) return 0;
        x = a[i];
        y = b[i];
        j = i + 1;
        if (x != y) return j;
        i = j;
        if (x == 0) return 0;
    }
}
