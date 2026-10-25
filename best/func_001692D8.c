typedef struct { f32 x, y, z; } V3_1692D8;
typedef struct { u64 *cur; u64 *last; } G_1692D8;
typedef struct {
    char pad[0x12]; s8 b12; char pad2[0x13]; s8 b26; char pad3; s32 tab[1];
} O_1692D8;

void func_00159410(void *, f32, f32, f32, f32, f32, f32, f32);
void func_00156348(void *, s32, void *);
void func_001628E0(void *, s32);
void func_00168C08(void *, void *, void *, void *, s32);
void func_0015EB80(u64 *, s32, s32, s32, s32);
u64 *D_004844C8;
f32 D_0047FFB8;
f32 D_0047FFBC;
f32 D_0048419C;

void func_001692D8(O_1692D8 *o, s32 a1, s32 a2, V3_1692D8 *v, s32 a4, s32 a5) {
    V3_1692D8 tmp;
    u8 mat[0x40];
    G_1692D8 g;
    G_1692D8 *gp = &g;
    u64 w0, w1, *old, *head, *t;
    s32 s, i, prev, cv, b, idx;
    s32 *p;
    u8 *base;
    s64 mask;

    tmp = *v;
    gp->cur = D_004844C8;
    func_00159410(mat, 1.0f, D_0047FFB8, D_0048419C, 1.0f, D_0047FFBC, 18.0f, 1800.0f);
    func_00156348(mat, a4, mat);
    func_00168C08(gp, mat, &tmp, o, 0);
    if (a5 == 0) {
        g.last = gp->cur;
        w0 = 0x10000000;
        w1 = 0x1400001E;
    } else {
        func_001628E0(gp, a5);
        g.last = gp->cur;
        w0 = 0x10000000;
        w1 = 0x1400000C;
    }
    t = gp->cur;
    t[0] = w0;
    t[1] = w1;
    gp->cur = t + 2;
    s = o->b26 - 1;
    b = o->b12;
    base = (u8 *)o->tab;
    idx = 0;
    if (s < idx) idx = s;
    mask = ~(1LL << b);
    p = (s32 *)(base + idx * (b * 4 + 4));
    prev = *p;
    i = 0;
    if (b >= 0) {
        do {
            if ((((s32)mask) ^ 1) & 1) {
                cv = *p;
                if (prev != cv) {
                    t = gp->cur;
                    gp->cur = t + 2;
                    t[0] = (u64)(cv - prev) >> 4 | ((u64)prev << 32) | 0x30000000;
                    t[1] = 0;
                    gp->last = t;
                }
                prev = p[1];
            }
            mask >>= 1;
            i++;
            p++;
        } while (b >= i);
    }
    head = g.last;
    if (((*head >> 28) & 7) != 1) {
        g.last = 0;
        t = gp->cur;
        t[0] = 0x60000000;
        t[1] = 0;
        gp->cur = t + 2;
    } else {
        *head = (*head & 0x8FFFFFFF) | 0x60000000;
    }
    old = D_004844C8;
    D_004844C8 = gp->cur;
    func_0015EB80(old, a2, a1, 0, 0);
}
