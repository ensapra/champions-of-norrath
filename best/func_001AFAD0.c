extern s32 D_01107D58[];
void func_001AFAD0(s32 index, s32 a, s32 b) {
    s32 n;
    s32 *p;
    if (index < 0) {
        n = (index & 0x7fffffff) * 12;
        p = (s32 *)((char *)D_01107D58[3] + n);
        p[1] = b;
        p[0] = a;
        p = (s32 *)((char *)D_01107D58[3] + n);
    } else {
        n = index * 12;
        p = (s32 *)((char *)D_01107D58[5] + n);
        p[1] = b;
        p[0] = a;
        p = (s32 *)((char *)D_01107D58[5] + n);
    }
    p[2] = (s32)__builtin_return_address(0);
}
