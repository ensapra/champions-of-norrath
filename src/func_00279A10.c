extern s32 D_00485EA8;
extern s32 D_008D57A8[];
void func_00279C60(s32, s32);
void func_00279A10(s32 arg) {
    s32 i, j, cnt;
    cnt = D_00485EA8;
    for (i = 0; i < cnt; i++) {
        if (D_008D57A8[i] == arg) {
            s32 m, n;
            if (arg) func_00279C60(arg, 3);
            m = D_00485EA8;
            n = m;
            for (j = i + 1; j < n; j++) {
                D_008D57A8[j - 1] = D_008D57A8[j];
                n = m;
            }
            break;
        }
    }
    D_00485EA8--;
}
