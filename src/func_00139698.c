extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern void func_00140678(void *, void *, s32);
extern void func_00143630(void *);

s32 func_00139698(void *arg0, s32 *arg1) {
    struct { char buf[0xA0]; void *s; s32 pad[3]; u8 *list[0x200]; } l;
    u8 **p;
    u8 *obj;
    s32 mask;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.buf, l.s);
    p = l.list;
    func_00140678(l.buf, p, 0x200);
    if (*(u8 * volatile *)p != 0) {
        mask = ~8;
        do {
            func_00143630(*p);
            obj = *p;
            p++;
            if (*(u32 *)(obj + 0xC) & 0x20) {
                obj[0x23A] &= mask;
            }
        } while (*(u8 * volatile *)p != 0);
    }
    return 0;
}
