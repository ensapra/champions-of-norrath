void func_0011B9E0(void *);

typedef struct {
    char pad[0x870];
    void **f870;
    char pad874[4];
    s32 f878;
    s32 f87C;
} W;

void func_00149EEC(W *w) {
    s32 i = 0;
    if (w->f878 <= 0) goto done;
top:
    func_0011B9E0(w->f870[i]);
    i++;
    if (i < w->f878) goto top;
done:
    if (w->f870) func_0011B9E0(w->f870);
    func_0011B9E0((void *)w->f87C);
}
