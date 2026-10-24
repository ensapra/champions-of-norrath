extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern void func_00140678(void *, void *, s32);
extern void func_00143630(void *);
extern void func_00143558(void *);
extern s32 func_00303EB8(char *, const char *, ...);
extern void *func_00165B30(char *);
extern void *func_00166580(void *, char *);
extern void func_001D2578(void *, s32, s32, s32);
extern char D_00483A00[];
extern char D_00483A08[];
extern char D_0034B6B1[];

s32 func_00139698(void *arg0, s32 *arg1) {
    struct { char buf[0xA0]; void *s; s32 pad[3]; u8 *list[0x200]; } l;
    u8 **p;
    u8 *obj;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.buf, l.s);
    p = l.list;
    func_00140678(l.buf, p, 0x200);
    while (*p != 0) {
        func_00143630(*p);
        obj = *p;
        p++;
        if (*(u32 *)(obj + 0xC) & 0x20) {
            obj[0x23A] &= ~8;
        }
    }
    return 0;
}

s32 func_00139520(void *arg0, s32 *arg1) {
    struct { char buf[0xA0]; void *s; s32 pad[3]; u8 *list[0x200]; } l;
    u8 **p;
    u8 *obj;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.buf, l.s);
    p = l.list;
    func_00140678(l.buf, p, 0x200);
    for (;;) {
        if (*p == 0) break;
        func_00143558(*p);
        obj = *p;
        p++;
        if (*(u32 *)(obj + 0xC) & 0x20) {
            obj[0x23A] |= 8;
        }
    }
    return 0;
}

s32 func_00139020(void *arg0, s32 *arg1) {
    struct { char b0[0xA0]; char b1[0x80]; void *s; s32 pad[3]; char b2[0x50]; } l;
    u8 *p;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.b0, l.s);
    func_00303EB8(l.b1, D_00483A00, l.b0);
    func_00303EB8(l.b2, D_00483A08, D_0034B6B1);
    p = func_00166580(func_00165B30(l.b2), l.b1);
    func_001D2578(l.b0, *(s32 *)(p + 4), arg1[2], arg1[3]);
    return 0;
}
