extern s32 func_00138758(void *arg0, s32 arg1, void **arg2);
extern void func_00138900(void *arg0, void *arg1);
extern void func_00140678(void *arg0, void **arg1, s32 arg2);
extern s32 func_001441B8(s32 arg0);
extern void func_00155F08(s32 arg0, void *arg1, void *arg2);

struct Rec {
    char b[0xA0];
    void *s;
    u8 pad1[0xC];
    void *o;
    u8 pad2[0x7FC];
};

s32 func_0013A250(void *arg0, s32 *arg1) {
    struct Rec r0, r1;
    void *a = NULL;
    void *b = NULL;
    s32 t;

    func_00138758(arg0, arg1[1], &r0.s);
    func_00138900(r0.b, r0.s);
    func_00140678(r0.b, &r0.o, 0x200);
    func_00138758(arg0, arg1[2], &r1.s);
    func_00138900(r1.b, r1.s);
    func_00140678(r1.b, &r1.o, 0x200);
    if (r0.o != NULL) {
        a = (*(u32 *)((u8 *)r0.o + 0xC) & 0x20) ? r0.o : NULL;
    }
    if (r1.o != NULL) {
        b = (*(u32 *)((u8 *)r1.o + 0xC) & 0x20) ? r1.o : NULL;
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
