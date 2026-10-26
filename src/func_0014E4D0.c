typedef struct {
    char pad00[0x50];
    void *f50;
    char pad54[0x484];
    s32 f4D8;
    char pad4DC[0xD0];
    s32 f5AC;
    s32 f5B0;
} W;
void func_0014EE68(W *);
void func_0014D444(void *, void *);
void func_00152618(void *);
void func_0014E4D0(W *w, s32 a, s32 b) {
    if (a == w->f5AC && b == w->f5B0) return;
    if (a < 0) a = 0;
    if (b < 0) b = 0;
    w->f5AC = a;
    w->f5B0 = b;
    w->f4D8 = b;
    func_0014EE68(w);
    if (w->f50) func_0014D444(w->f50, w);
    func_00152618(w);
}
