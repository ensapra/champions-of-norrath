void func_0014D18C();

void func_0014D15C(void *a, s32 *p) {
    func_0014D18C();
    *p = *p >> 4;
}

void func_0011B9E0(void *);

typedef struct {
    char pad[0x870];
    void **f870;
    char pad874[4];
    s32 f878;
    s32 f87C;
    char pad880[4];
    s32 f884;
    s32 f888;
    s32 f88C;
    s32 f890;
} W;

void func_00149EEC(W *w) {
    s32 i;
    for (i = 0; i < w->f878; i++)
        func_0011B9E0(w->f870[i]);
    if (w->f870) func_0011B9E0(w->f870);
    func_0011B9E0((void *)w->f87C);
}

extern void (*D_001C77A4)(W *);
void func_0014A6BC(W *);

void func_00149F60(W *w) {
    s32 old, d, ad, n;
    D_001C77A4(w);
    if (w->f88C == 0) return;
    old = w->f884;
    d = w->f888 - old;
    n = w->f878;
    ad = d < 0 ? -d : d;
    ad >>= 8;
    if ((n >> 1) < ad) w->f884 = old + (d >> 1);
    if ((n >> 2) < ad) w->f884 = w->f884 + (d >> 2);
    w->f884 = w->f884 + (d >> 3);
    if (w->f890 == 0 && old == w->f884) {
        w->f88C = 0;
        return;
    }
    func_0014A6BC(w);
}
