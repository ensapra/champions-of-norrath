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

s32 func_001383A0(Tbl **arg0, s32 arg1, char *arg2) {
    Tbl *p = *arg0;
    s32 ret = 0x14;
    if (arg1 < p->n20) {
        func_00304640(arg2, ((Entry18 *)((u8 *)p + p->off24))[arg1].name);
        ret = 0;
    }
    return ret;
}

s32 func_00138408(Tbl **arg0, s32 arg1, char *arg2, s32 *arg3) {
    Tbl *p = *arg0;
    Entry18 *e;
    s32 ret = 0x14;
    if (arg1 < p->n38) {
        e = &((Entry18 *)((u8 *)p + p->off3C))[arg1];
        func_00304640(arg2, e->name);
        *arg3 = e->val;
        ret = 0;
    }
    return ret;
}
