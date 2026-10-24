u32 func_00177670(u32 x, u32 *a, u32 n) {
    u32 i;
    u32 ret = 0;
    for (i = 0; i < n; i++) {
        if (x >= a[i] && x <= a[i + 1]) {
            ret = i;
            break;
        }
    }
    return ret;
}
