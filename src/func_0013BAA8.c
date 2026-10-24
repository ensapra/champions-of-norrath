extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern s32 func_001671F8(void *);
extern s32 func_001C2378(s32, s32, s32);
extern void func_001B1B68(void *, s32);
extern void func_001BDF08(s32, s32);
s32 D_00484538;

static void get_buf(void *arg0, s32 id, char *buf) {
    void *s;
    func_00138758(arg0, id, &s);
    func_00138900(buf, s);
}

s32 func_0013AEA8(void *arg0, s32 *arg1) {
    char b0[0xA0];
    char b1[0xA0];
    s32 t1;

    get_buf(arg0, arg1[1], b0);
    get_buf(arg0, arg1[2], b1);
    t1 = func_001671F8(b0);
    func_001C2378(-1, t1, func_001671F8(b1));
    return 0;
}

void func_0013BAA8(void *arg0, s32 *arg1) {
    char buf[0xA0];
    void *tmp;
    func_00138758(arg0, arg1[1], &tmp);
    func_00138900(buf, tmp);
    func_001B1B68(buf, 0);
}

s32 func_0013BAE0(void *arg0, s32 *arg1) {
    s32 i;
    for (i = 0; i < D_00484538; i++) {
        func_001BDF08(i, arg1[1]);
    }
    return 0;
}

extern char D_00408600[];

s32 func_0013BB40(void *arg0, s32 *arg1) {
    s32 n = D_00484538;
    s32 i;
    for (i = 0; i < n; i++) {
        *(s32 *)(D_00408600 + i * 0x5DB0 + 0xE8) += arg1[1] / n;
    }
    return 0;
}
