typedef struct { s32 count, max, init, wait, opt, attr; } SemaP;
typedef struct Node {
    s32 w0, w4, w8, wC, w10; struct Node *self; s32 nx; s32 pad; s32 tok; s32 owner0, a, b, c, d;
} Node;
typedef struct Ctx {
    struct Node *node; s32 id; s32 sema2; s32 w0C; s32 a1; s32 w14, w18, w1C, w20; s32 res; s32 sema; s32 w2C; s32 a3; s32 a4; s32 a5;
} Ctx;
extern char D_0047BDE8[];
extern u8 D_008E8C00[];
extern void func_002D70D0(char *);
extern s32 CreateSema_2(SemaP *);
extern s32 DeleteSema_2(s32);
extern s32 WaitSema_2(s32);
extern u8 *func_002E4700(u8 *);
extern s32 func_002D7690(s32, void *, s32, s32, s32, s32);
extern void func_002E47A8(void *);

s32 func_002E4910(Ctx *c, s32 a1, s32 mode, s32 a3, s32 a4, s32 a5) {
    SemaP sp;
    s32 id, s;
    s32 *n;
    if (mode != 0) {
        func_002D70D0(D_0047BDE8);
        return -1;
    }
    sp.attr = 0;
    sp.init = 1;
    sp.max = 1;
    id = CreateSema_2(&sp);
    c->sema = id;
    if (id < 0) {
        return -3;
    }
    WaitSema_2(id);
    c->a1 = a1;
    c->res = 0;
    c->a3 = a3;
    c->a4 = a4;
    c->a5 = a5;
    n = (s32 *)func_002E4700(D_008E8C00);
    if (n == 0) {
        DeleteSema_2(c->sema);
        return -1;
    }
    c->node = (Node *)n;
    c->id = n[6];
    n[8] = a1;
    n[9] = a3;
    n[10] = a4;
    n[11] = a5;
    n[5] = (s32)n;
    n[7] = (s32)c;
    sp.max = 1;
    sp.init = 0;
    sp.attr = 0;
    s = CreateSema_2(&sp);
    c->sema2 = s;
    if (s < 0) {
        func_002E47A8(n);
        DeleteSema_2(c->sema);
        return -3;
    }
    if (func_002D7690(0x80000019, n, 0x40, 0, 0, 0) == 0) {
        func_002E47A8(n);
        DeleteSema_2(s);
        DeleteSema_2(c->sema);
        return -2;
    }
    WaitSema_2(s);
    DeleteSema_2(s);
    if (c->res == 0) {
        DeleteSema_2(c->sema);
    }
    return 0;
}
