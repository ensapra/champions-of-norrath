extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern s32 func_001671F8(void *);
extern s32 func_001C2378(s32, s32, s32);
extern void *func_00143A58(void *);
extern void func_00191EF8(void *, s32, s32, s32, f32);
extern void func_001C7EB8(void *, s32, s32, s32);

typedef struct { s32 a, b, c; } V12;

s32 func_0013AEA8(void *arg0, s32 *arg1) {
    struct { char b0[0xA0]; char b1[0xA0]; void *s; } l;
    s32 t2;
    s32 t1;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.b0, l.s);
    func_00138758(arg0, arg1[2], &l.s);
    func_00138900(l.b1, l.s);
    t1 = func_001671F8(l.b0);
    t2 = func_001671F8(l.b1);
    func_001C2378(-1, t1, t2);
    return 0;
}

s32 func_0013B400(void *arg0, s32 *arg1) {
    void *s;
    char buf[0xA0];
    V12 v;
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
    if (p != NULL && (*(s32 *)(p + 0xC) & 0x20)) {
        return (s32)*(f32 *)(p + 0x230);
    }
    return 0;
}

s32 func_0013A880(void *arg0, s32 *arg1) {
    struct { char b0[0xA0]; char b1[0xA0]; void *s; } l;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.b1, l.s);
    func_00138758(arg0, arg1[2], &l.s);
    func_00138900(l.b0, l.s);
    func_001C7EB8(l.b1, func_001671F8(l.b0), arg1[3], arg1[4]);
    return 0;
}
