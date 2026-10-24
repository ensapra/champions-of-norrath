extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern void *func_00143A58(void *);
extern void func_00191EF8(void *, s32, s32, s32, f32);

typedef struct { s32 a, b, c; } V12;

s32 func_0013B400(void *arg0, s32 *arg1) {
    V12 v;
    void *s;
    char buf[0xA0];
    u8 *p;

    func_00138758(arg0, arg1[1], &s);
    func_00138900(buf, s);
    p = func_00143A58(buf);
    v = *(V12 *)(p + 0x10);
    func_00191EF8(&v, 0, 10, 2, (f32)arg1[3]);
    return 0;
}

s32 func_0013A918(void *arg0, s32 *arg1) {
    void *s;
    char buf[0xA0];
    u8 *p;

    func_00138758(arg0, arg1[1], &s);
    func_00138900(buf, s);
    p = func_00143A58(buf);
    if (p != NULL) {
        if (*(s32 *)(p + 0xC) & 0x20) {
            return (s32)*(f32 *)(p + 0x230);
        }
        return 0;
    }
    return 0;
}
