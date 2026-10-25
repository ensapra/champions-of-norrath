typedef struct { s32 sema; s32 *res; s32 n; s32 flags; s32 arg; } Req;
typedef struct { s32 ret; s32 flg; s32 p[2]; } Ent;
extern s32 D_004449F4[];
extern Req D_008E04C0[];
extern char D_008E1100[];
extern Ent D_008E19C0[];
extern char D_008E1BC0[];
extern s32 CreateSema_2(void *);
extern void DeleteSema_2(s32);
extern void WaitSema_2(s32);
extern s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern Ent *func_002D8A80(void);
extern void func_002D8EF8(s32);
extern void func_002D8F28(void);
s32 func_002D9580(void)
{
    s32 sp10[6];
    s32 out;
    Req *q = D_008E04C0;
    Ent *e;
    s32 sema, ok;
    e = func_002D8A80();
    func_002D8EF8(1);
    if (D_004449F4[0] == 0) {
        func_002D8F28();
        return -1;
    }
    if (e == 0 || e->flg == 0) {
        func_002D8F28();
        return -9;
    }
    q->flags = e->ret;
    q->arg = e - D_008E19C0;
    sp10[1] = 1;
    sp10[2] = 0;
    sp10[5] = 0;
    sema = CreateSema_2(sp10);
    D_008E04C0->sema = sema;
    q->res = &out;
    q->n = 4;
    if (func_002D8270(D_008E1BC0, 1, 0, q, 0x14, D_008E1100, 4, 0, 0) < 0) {
        DeleteSema_2(sema);
        func_002D8F28();
        return -0xB;
    }
    e->flg = 0;
    ok = *(s32 *)((u32)D_008E1100 | 0x20000000);
    func_002D8F28();
    if (ok == 0) {
        DeleteSema_2(sema);
        return -0xB;
    }
    WaitSema_2(sema);
    DeleteSema_2(sema);
    ok = out;
    if (ok > -1) ok = 0;
    return ok;
}
