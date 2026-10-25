void func_0014CE60(s32, s32, s32);
void func_00154698(s32, s32);
typedef struct { char p0[0x870]; s32 *f870; char p1[4]; s32 f878; s32 *f87C; s32 f880; s32 f884; char p2[8]; s32 f890; char p3[4]; s32 f898; s32 f89C; s32 f8A0; } A;
void func_0014A6BC(A *a) {
    s32 x = a->f884, q, r, n;
    u32 u;
    if (x >= 0) {
        q = x >> 8;
        r = (q << 8) - x;
    } else {
        s32 nx = -x;
        q = -((0x100 - x) >> 8);
        r = (nx - ((nx / 256) << 8)) - 0x100;
    }
    r = (r * (a->f8A0 + a->f89C)) >> 8;
    if (a->f880 != q) a->f890 = 1;
    for (u = 0; u < (u32)(a->f898 + 1); u++) {
        n = q + u;
        if (a->f890) {
            s32 v = 0;
            if (n >= 0 && n < a->f878) v = a->f870[n];
            func_00154698(a->f87C[u], v);
        }
        func_0014CE60(a->f87C[u], 0, u * (a->f8A0 + a->f89C) + r);
    }
    a->f880 = q;
    a->f890 = 0;
}
