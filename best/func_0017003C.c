s32 D_0048041C;
void func_001704AC(void);
void func_001704BC(s32, s32);
void func_00170530(s32);
void func_00170544(s32, s32);
void func_00170568(s32, s32);

void func_0017003C(s32 a, s32 n, ...) {
    char *ap;
    char *q;
    s32 v;
    func_001704AC();
    func_00170544(a, 1);
    func_00170530(a);
    func_00170568(a, 1);
    ap = (char *)__builtin_next_arg(n) - (8 - 2) * 8;
    if (n > 0) {
    loop:
        q = ap;
        ap += 8;
        v = *(s32 *)q;
        if (v & 0x80) {
            v = (v & ~0x80) + D_0048041C;
        }
        n--;
        func_001704BC(a, v);
        if (n != 0) goto loop;
    }
}
