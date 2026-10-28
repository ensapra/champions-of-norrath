extern s32 D_00483EF4;
extern s32 D_004868E4;
typedef struct { s32 a, b, c, d; } E;
extern E D_00604200[];
extern E *D_00614200[];
void func_002DD640();
void func_0015ED18(s32);
s32 func_002DD698();
s64 func_0015FAF0(void) {
    s32 i;
    D_004868E4 = 0;
    D_00483EF4 ^= 1;
    for (i = 0; i < 8; i++) {
        E *e = &D_00604200[(D_00483EF4 << 11) + D_004868E4++];
        D_00614200[D_00483EF4 * 8 + i] = e;
        e->d = 0;
    }
    func_002DD640();
    func_0015ED18(-1);
    return func_002DD698();
}
