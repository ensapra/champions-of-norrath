extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern void func_00140678(void *, void *, s32);
extern void func_00112BA0(void *, s32);
extern s8 D_00486840;

void func_0013B760(void *arg0) {
    u32 val = *(u32 *)((char *)arg0 + 0xC);
    if (val & 0x40) return;
    if ((val & 0x28) == 0x20) {
        D_00486840 = 0;
    }
}

typedef struct { s16 delta; s16 pad; void (*fn)(void *, s32); } VtEntry;

s32 func_0013B7B8(void *arg0, s32 *arg1) {
    struct { char buf[0xA0]; void *s; s32 pad[3]; u32 list[0x200]; } l;
    u32 *list;
    s32 i;

    i = 0;
    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.buf, l.s);
    list = l.list;
    func_00140678(l.buf, list, 0x200);
    while (list[i] != 0) {
        u8 *obj = (u8 *)list[i++];
        VtEntry *e = (VtEntry *)(*(u8 **)(obj + 0x48) + 8);
        e->fn(obj + e->delta, 3);
    }
    return 0;
}

s32 func_0013B868(void *arg0, s32 *arg1) {
    struct { char buf[0xA0]; void *s; s32 pad[3]; u32 list[0x200]; } l;
    u32 *p;
    u8 *obj;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.buf, l.s);
    p = l.list;
    func_00140678(l.buf, p, 0x200);
    while (*p != 0) {
        obj = (u8 *)*p;
        p++;
        if (*(u32 *)(obj + 0xC) & 0x20) {
            *(u64 *)(obj + 0xA0) |= 0x800000;
            func_00112BA0(obj, -1);
        }
    }
    return 0;
}
