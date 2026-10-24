typedef struct {
    char pad00[0xC8];
    s32 fC8;
    char padCC[0x4B8];
    void *f584;
} W;

void *func_0014D29C(W *);
void func_0014F288(void *, s32);
void func_001517DC(void *, W *, s32 *);

void func_0014DA30(W *w) {
    s32 msg[4];
    void *r = func_0014D29C(w);
    func_0014F288(r, w->fC8);
    w->fC8 = 0;
    msg[0] = 0x11;
    func_001517DC(w->f584, w, msg);
}
