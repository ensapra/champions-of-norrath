extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern void func_00140678(void *, void *, s32);
extern s32 func_001671F8(void *);
extern s32 func_001C2378(s32, s32, s32);

typedef struct { s32 a, b, c; } V12;

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

s32 func_00139730(void *arg0, s32 *arg1) {
    struct { char buf[0xA0]; void *s; s32 pad[3]; u32 list[0x200]; } l;
    u32 *list;
    u32 *p;
    u8 *obj;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.buf, l.s);
    list = l.list;
    func_00140678(l.buf, list, 0x200);
    if (*list != 0) {
        p = list;
        do {
            obj = (u8 *)*p;
            p++;
            if (*(u32 *)(obj + 0xC) & 0x20) {
                *(u64 *)(obj + 0xA0) &= ~0x8000000;
                *(V12 *)(obj + 0x308) = *(V12 *)(obj + 0x10);
            }
        } while (*(volatile u32 *)p != 0);
    }
    return 0;
}

s32 func_001397E0(void *arg0, s32 *arg1) {
    struct { char buf[0xA0]; void *s; s32 pad[3]; u32 list[0x200]; } l;
    u32 *list;
    u32 *p;
    u8 *obj;
    u32 f;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.buf, l.s);
    list = l.list;
    func_00140678(l.buf, list, 0x200);
    if (*list != 0) {
        p = list;
        do {
            obj = (u8 *)*p;
            p++;
            f = *(u32 *)(obj + 0xC);
            if (f & 0x20) {
                *(u32 *)(obj + 0xC) = f | 0x1000000;
                *(u64 *)(obj + 0xA0) |= 0x4000000;
            }
        } while (*(volatile u32 *)p != 0);
    }
    return 0;
}

s32 func_00139880(void *arg0, s32 *arg1) {
    struct { char buf[0xA0]; void *s; s32 pad[3]; u32 list[0x200]; } l;
    u32 *list;
    u32 *p;
    u8 *obj;
    u32 f;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.buf, l.s);
    list = l.list;
    func_00140678(l.buf, list, 0x200);
    if (*list != 0) {
        p = list;
        do {
            obj = (u8 *)*p;
            p++;
            f = *(u32 *)(obj + 0xC);
            if (f & 0x20) {
                *(u32 *)(obj + 0xC) = f & ~0x1000000;
                *(u64 *)(obj + 0xA0) &= ~0x4000000;
            }
        } while (*(volatile u32 *)p != 0);
    }
    return 0;
}
