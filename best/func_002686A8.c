extern char D_00435F68[];
s32 D_00485E20;
char *func_00304640(char *, char *);
s32 func_00304CFC(char *);
char *func_002686A8(char *s) {
    s32 found = 0;
    s32 i = 0;
    s32 j = 0;
    char *r;
    while (i < D_00485E20) {
        if (s[j] == 0) {
            if (D_00435F68[i] == 0) {
                i -= func_00304CFC(s);
                found = 1;
                break;
            }
        }
        if (s[j++] != D_00435F68[i]) {
            j = 0;
            i++;
            continue;
        }
        i++;
    }
    if (found) return D_00435F68 + i;
    func_00304640(D_00485E20 + D_00435F68, s);
    r = D_00435F68 + D_00485E20;
    D_00485E20 = D_00485E20 + func_00304CFC(s) + 1;
    return r;
}
