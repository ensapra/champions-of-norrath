typedef struct { char pad[0x8C]; u32 (*f)(char *, f32); } Vt;
typedef struct { char pad[0x3098]; s32 total; s32 start; char pad2[0x31A4 - 0x30A0]; char str[0x100]; } Big;
extern Big D_003642D0;
extern Vt *D_004804D0;
extern s32 func_001A444C(char *);

u32 func_0019B8E0(f32 a, f32 b) {
    s32 start = D_003642D0.start;
    s32 n = func_001A444C(D_003642D0.str);
    char *p = &D_003642D0.str[1] + n;
    s32 i, k;
    u32 best = 0, v;
    if (start > 0) {
        k = start;
        do {
            p = p + func_001A444C(p) + 2;
        } while (--k != 0);
    }
    i = 0;
    if (start < D_003642D0.total) {
        do {
            u8 c;
            v = D_004804D0->f(p, a);
            p = p + func_001A444C(p);
            c = p[1];
            p += 2;
            if (c < n)
                v += D_004804D0->f(D_003642D0.str + c, b);
            i++;
            if (best < v) best = v;
        } while (i < 10 && start + i < D_003642D0.total);
    }
    return best;
}
