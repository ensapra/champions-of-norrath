extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern void *func_001671F8(void *);
extern void *func_00143A58(void *);
typedef struct { s32 x, y, z; } V3i;
extern void func_001C7E18(V3i *, void *);

s32 func_0013A7D0(void *arg0, s32 *arg1) {
    struct { char b0[0xA0]; char b1[0xA0]; void *s; } l;
    V3i unused;
    V3i v;
    V3i *pv;
    u8 *p;
    void *q;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.b0, l.s);
    func_00138758(arg0, arg1[2], &l.s);
    func_00138900(l.b1, l.s);
    p = (u8 *)func_00143A58(l.b0);
    q = func_001671F8(l.b1);
    pv = &v;
    *pv = *(V3i *)(p + 0x10);
    func_001C7E18(pv, q);
    return 0;
}
