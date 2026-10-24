typedef struct {
    char pad00[0x50];
    void *f50;
    char pad54[0x484];
    s32 f4D8;
    s32 f4DC;
    s32 f4E0;
    char pad4E4[0xC8];
    s32 f5AC;
    s32 f5B0;
} W;

void func_0014EE68(s32, s32);
void func_0014D444(void *, void *);
void func_00152618(void *);

void func_0014E574(W *w, s32 *a, s32 *b) {
    *a = w->f4DC;
    *b = w->f4E0;
}

void func_0014E54C(W *w, s32 *a, s32 *b) {
    *a = w->f5AC;
    *b = w->f5B0;
}

void func_0014E4D0(W *w, s32 a, s32 b) {
    if (a == w->f5AC && b == w->f5B0) return;
    if (a < 0) a = 0;
    if (b < 0) b = 0;
    w->f5AC = a;
    w->f4D8 = b;
    w->f5B0 = b;
    func_0014EE68(a, b);
    if (w->f50) func_0014D444(w->f50, w);
    func_00152618(w);
}
