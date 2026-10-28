extern s32 func_00138758(void *arg0, s32 arg1, void **arg2);
extern void func_00138900(void *arg0, void *arg1);
extern void func_00140678(void *arg0, void **arg1, s32 arg2);
extern s32 func_001441B8(s32 arg0);
extern void func_00155F08(s32 arg0, void *arg1, void *arg2);

s32 func_0013A250(void *arg0, s32 *arg1) {
    struct {
        char b0[0xA0];
        void *s0;
        u8 pad0[0xC];
        void *o0;
        u8 pad1[0x7FC];
        char b1[0xA0];
        void *s1;
        u8 pad2[0xC];
        void *o1;
        u8 pad3[0x7FC];
    } l;
    void *a = NULL;
    void *b = NULL;
    s32 t;

    func_00138758(arg0, arg1[1], &l.s0);
    func_00138900(l.b0, l.s0);
    func_00140678(l.b0, &l.o0, 0x200);
    func_00138758(arg0, arg1[2], &l.s1);
    func_00138900(l.b1, l.s1);
    func_00140678(l.b1, &l.o1, 0x200);
    if (l.o0 != NULL) {
        a = (*(u32 *)((u8 *)l.o0 + 0xC) & 0x20) ? l.o0 : NULL;
    }
    if (l.o1 != NULL) {
        b = (*(u32 *)((u8 *)l.o1 + 0xC) & 0x20) ? l.o1 : NULL;
    }
    if (a != NULL) {
        if (b != NULL) {
            t = func_001441B8(0x5C);
            if (t != 0) {
                func_00155F08(t, a, b);
            }
        }
    }
    return 0;
}
