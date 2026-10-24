extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern s32 func_001671F8(void *);
extern s32 func_001C2378(s32, s32, s32);
extern void *func_00165DC0(void *, void *);
extern void *func_0024D308(void *, s32, f32);
extern void func_0024F9E0(void *);
extern void *func_00143A58(void *);

s32 func_0013AEA8(void *arg0, s32 *arg1) {
    struct { char b0[0xA0]; char b1[0xA0]; void *s; } l;
    register s32 t1;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.b0, l.s);
    func_00138758(arg0, arg1[2], &l.s);
    func_00138900(l.b1, l.s);
    t1 = func_001671F8(l.b0);
    func_001C2378(-1, t1, func_001671F8(l.b1));
    return 0;
}

s32 func_0013B180(void *arg0, s32 *arg1) {
    struct { char b0[0xA0]; char b1[0xA0]; void *s; } l;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.b0, l.s);
    func_00138758(arg0, arg1[2], &l.s);
    func_00138900(l.b1, l.s);
    func_0024F9E0(func_0024D308(func_00165DC0(l.b0, l.b1), 0, 1.0f));
    return 0;
}

s32 func_0013B380(void *arg0, s32 *arg1) {
    void *s;
    char buf[0xA0];

    func_00138758(arg0, arg1[1], &s);
    func_00138900(buf, s);
    *((u8 *)func_00143A58(buf) + 0x58) = 0;
    return 0;
}

s32 func_0013B3C0(void *arg0, s32 *arg1) {
    void *s;
    char buf[0xA0];

    func_00138758(arg0, arg1[1], &s);
    func_00138900(buf, s);
    return (*(u16 *)((u8 *)func_00143A58(buf) + 0x5A) >> 7) & 1;
}
