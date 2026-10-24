extern s32 D_00485EA8;
extern s32 D_008D57A8[];
void func_00279C60(s32, s32);
void func_00279A10(s32 arg) {
    s32 i, n, j, cnt, m;
    n = D_00485EA8;
    cnt = n;
    for (i = 0; i < cnt; i++) {
        if (D_008D57A8[i] == arg) {
            if (arg) func_00279C60(arg, 3);
            n = D_00485EA8;
            m = n;
            for (j = i + 1; j < n; j++) {
                D_008D57A8[j - 1] = D_008D57A8[j];
                n = m;
            }
            break;
        }
    }
    D_00485EA8 = n - 1;
}
