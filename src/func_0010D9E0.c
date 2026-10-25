extern s32 D_010C21F0[];
void func_0014D270(s32);

void func_0010D9E0(void) {
    s32 *p = D_010C21F0;
    s32 n = 1;
    do {
        s32 v = *p;
        p++;
        if (v != 0)
            func_0014D270(v);
        n--;
    } while (n >= 0);
}
