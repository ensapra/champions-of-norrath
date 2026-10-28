s32 D_00485E1C;
extern s32 D_00435B68[];
s32 *func_00268798(void) {
    s32 n, i, j, found;
    s32 *p, *q, *c, *start;
    D_00435B68[D_00485E1C++] = 0;
    n = D_00485E1C;
    for (p = D_00435B68 + n - 2; p >= D_00435B68; p--) {
        if (*p == 0) break;
    }
    start = p + 1;
    i = 0;
    j = 0;
    found = 0;
    while (i < n) {
        q = start + j;
        j++;
        if (*q == 0 && D_00435B68[i] == 0 && q != &D_00435B68[i]) {
            found = 1;
            for (p = &D_00435B68[i] - 1; p >= D_00435B68; p--) {
                if (*p == 0) break;
            }
            start = p + 1;
            break;
        }
        if (*q != D_00435B68[i]) j = 0;
        i++;
    }
    if (found) {
        p = start;
        while (*p) {
            n--;
            p++;
            D_00485E1C = n;
        }
        D_00485E1C = n - 1;
    }
    return start;
}
