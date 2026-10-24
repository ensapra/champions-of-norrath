extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern s32 func_001671F8(void *);
extern s32 func_001C2378(s32, s32, s32);
extern void func_001C1A60(void *, void *);
extern void *func_00143A58(void *);
extern void func_001D3AB0(void *, s32);

s32 func_0013AEA8(void *arg0, s32 *arg1) {
    struct { char b0[0xA0]; char b1[0xA0]; void *s; } l;
    s32 t1;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.b0, l.s);
    func_00138758(arg0, arg1[2], &l.s);
    func_00138900(l.b1, l.s);
    t1 = func_001671F8(l.b0);
    func_001C2378(-1, t1, func_001671F8(l.b1));
    return 0;
}

s32 func_0013AF40(void *arg0, s32 *arg1) {
    struct { char b0[0xA0]; char b1[0xA0]; void *s; } l;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.b0, l.s);
    func_00138758(arg0, arg1[2], &l.s);
    func_00138900(l.b1, l.s);
    func_001C1A60(l.b0, l.b1);
    return 0;
}

s32 func_0013AD90(void *arg0, s32 *arg1) {
    void *s;
    char buf[0xA0];
    void *p;

    func_00138758(arg0, arg1[1], &s);
    func_00138900(buf, s);
    p = func_00143A58(buf);
    if (p != NULL) {
        return (s32)(*(f32 *)((u8 *)p + 0x90C) * 128.0f);
    }
    return 0;
}

s32 func_0013B038(void *arg0, s32 *arg1) {
    void *s;
    char buf[0xA0];

    func_00138758(arg0, arg1[1], &s);
    func_00138900(buf, s);
    func_001D3AB0(buf, arg1[2]);
    return 0;
}
