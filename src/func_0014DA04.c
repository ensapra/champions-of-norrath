typedef struct {
    char pad[0x580];
    void *f580;
} W;
void func_001517DC(void *, W *, s32 *);

void func_0014DA04(W *w) {
    s32 msg[4];
    msg[0] = 0x10;
    func_001517DC(w->f580, w, msg);
}
