typedef struct { s32 sema; s32 *res; s32 n; s32 flags; s32 arg; u8 name[0x400]; s32 idx; } Req;
typedef struct { s32 ret; s32 flg; } Ent;
extern s32 D_004449F4[];
extern s32 D_00444A00;
extern Req D_008E04C0[];
extern char D_008E1100[];
extern Ent D_008E19C0[];
extern char D_008E1BC0[];
extern s32 CreateSema_2(void *);
extern void DeleteSema_2(s32);
extern void SignalSema_2(s32);
extern void WaitSema_2(s32);
extern s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern Ent *func_002D89F8(void);
extern void func_002D8EF8(s32);
extern void func_002D8F28(void);
extern void func_002D9028(void);
extern s32 func_002D9230(void);
s32 func_002D92F8(u8 *name, s32 flags, ...)
{
    s32 sp10[6];
    s32 sp30;
    Ent *e;
    Req *q = D_008E04C0;
    s32 i, sema, idx;
    s32 *ap;
    func_002D8EF8(0);
    if (D_004449F4[0] == 0) func_002D9028();
    if (func_002D9230()) {
        func_002D8F28();
        return -0x10004;
    }
    e = func_002D89F8();
    if (e == 0) {
        func_002D8F28();
        return -0x13;
    }
    for (i = 0; i < 0x400; i++) {
        q->name[i] = name[i];
        if (name[i] == 0) break;
    }
    if (i == 0x400) q->name[0x3FF] = 0;
    idx = e - D_008E19C0;
    q->flags = flags & 0x7FFFFFFF;
    ap = (s32 *)__builtin_next_arg(flags);
    q->arg = *ap;
    sp10[1] = 1;
    q->idx = idx;
    sp10[2] = 0;
    sp10[5] = 0;
    sema = CreateSema_2(sp10);
    q->res = &sp30;
    q->sema = sema;
    q->n = 4;
    if (func_002D8270(D_008E1BC0, 0, 0, D_008E04C0, 0, D_008E1100, 0x418, 4, 0) < 0) {
        DeleteSema_2(sema);
        func_002D8F28();
        return -0xB;
    }
    i = *(s32 *)((u32)D_008E1100 | 0x20000000);
    func_002D8F28();
    if (i == 0) {
        DeleteSema_2(sema);
        return -0xB;
    }
    WaitSema_2(sema);
    DeleteSema_2(sema);
    if (sp30 < 0) {
        WaitSema_2(D_00444A00);
        e->flg = 0;
        SignalSema_2(D_00444A00);
        return sp30;
    }
    i = idx;
    WaitSema_2(D_00444A00);
    e->flg |= flags;
    e->ret = sp30;
    SignalSema_2(D_00444A00);
    return i;
}
