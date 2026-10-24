extern s32 func_00138758(void *, s32, void **);
extern s32 func_00138900(void *, void *);
extern s32 func_001671F8(void *);
extern void func_001C2378(s32, s32, s32);
extern char *func_00304640(char *, const char *);

typedef struct { s32 val; char name[0x14]; } Entry18;
typedef struct {
    u8 pad0[0x20];
    s16 n20;
    s16 pad22;
    s32 off24;
    u8 pad28[0x10];
    s16 n38;
    s16 pad3A;
    s32 off3C;
} Tbl;

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

s32 func_001383A0(Tbl **arg0, s32 arg1, char *arg2) {
    Tbl *p = *arg0;
    if (arg1 < p->n20) {
        func_00304640(arg2, ((Entry18 *)((u8 *)p + p->off24))[arg1].name);
        return 0;
    }
    return 0x14;
}

s32 func_001383F0(Tbl **arg0, s32 *arg1) {
    *arg1 = (*arg0)->n38;
    return 0;
}

s32 func_00138408(Tbl **arg0, s32 arg1, char *arg2, s32 *arg3) {
    Tbl *p = *arg0;
    Entry18 *e;
    if (arg1 < p->n38) {
        e = &((Entry18 *)((u8 *)p + p->off3C))[arg1];
        func_00304640(arg2, e->name);
        *arg3 = e->val;
        return 0;
    }
    return 0x14;
}
