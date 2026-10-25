extern s32 func_00138758(void *, s32, void **);
extern s32 func_00138900(void *, void *);
extern void func_001B1D78(s32, void *, s32 *, s32 *);
extern void func_001AE290(s32, s32, s32, s32);
extern s32 D_00484538;

s32 func_00139AD0(void *arg0, s32 *arg1) {
    struct { char buf[0xA0]; void *s; s32 a; s32 b; } l;
    s32 i;

    l.a = -1;
    l.b = 0;
    func_00138758(arg0, arg1[2], &l.s);
    func_00138900(l.buf, l.s);
    if (arg1[1] == -1) {
        for (i = 0; i < D_00484538; i++) {
            func_001B1D78(i, l.buf, &l.a, &l.b);
            if (l.a != -1) {
                func_001AE290(i, l.a, l.b, 0);
            }
        }
    } else {
        func_001B1D78(arg1[1], l.buf, &l.a, &l.b);
        if (l.a != -1) {
            func_001AE290(arg1[1], l.a, l.b, 0);
        }
    }
    return 0;
}
