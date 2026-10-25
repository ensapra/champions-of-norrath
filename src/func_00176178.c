typedef struct { char pad[0x18]; void *cur; s32 f1c; } Arg;
typedef struct { s32 a, b, c, d, e; } Cfg;
typedef struct Sub { s32 p0, p4; } Sub;
typedef struct Node { s32 p0, p4, p8; Sub *pC; } Node;
void func_00175C28(void);
void func_00175C38(void);
s32 func_00175C48(void *, s32);
s32 func_00175FB0(void *, s32);
s32 func_00178A30(void *, s32 *, void *);
s32 func_00178C50(void *, s32, s32);
void func_00178CE8(void *);
s32 func_00178D20(void *);
void func_00178D78(s32);
void func_00179158(s32);
void *func_00179280(s32, s32);

s32 func_00176178(Arg *arg0, s32 arg1) {
    Cfg cfg;
    s32 sp20;
    s32 r;
    Node *n;
    Sub *m;
    cfg.a = 1;
    cfg.b = 1;
    cfg.c = 2;
    cfg.e = 1;
    switch (arg1) {
    case 1:
        r = func_00178A30(arg0, &sp20, &cfg);
        if (r != 0) return r;
        func_00175C38();
        func_00175C28();
        n = func_00179280(0x10, 0x10);
        if (n == 0) return 1;
        r = func_00175C48(n, sp20 + 0x10);
        if (r != 0) return r;
        m = func_00179280(0x10, 0x10);
        n->pC = m;
        if (m == 0) return 1;
        r = func_00178C50(m, arg0->f1c, 0);
        if (r != 0) return r;
        n->pC->p4 = func_00175FB0(n, n->pC->p4);
        if (func_00178D20(n->pC) < 0) return 10;
        arg0->cur = n;
        return 0;
    case 3:
        n = arg0->cur;
        if (n == 0) return 2;
        if (n->p8 == 0) return 0;
        func_00178D78(n->p8);
        return 0;
    case 4:
        n = arg0->cur;
        if (n == 0) return 2;
        func_00178CE8(n->pC);
        func_00179158(n->p4 & 0xFFFFFFF);
        func_00179158((s32)n->pC & 0xFFFFFFF);
        func_00179158((s32)n & 0xFFFFFFF);
        arg0->cur = 0;
        return 0;
    }
    return 0;
}
