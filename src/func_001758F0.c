typedef struct { char pad[0x18]; void *cur; s32 f1c; } Arg;
typedef struct { s32 a, b, c, d, e; } Cfg;
typedef struct Sub { s32 p0, p4; } Sub;
typedef struct Node { s32 p0, p4; Sub *p8; s32 *pC; } Node;
extern u8 D_001B9C20[];
extern u8 D_001B9F20[];
s32 func_00175850(void *, s32, void *, s32, s32);
s32 func_00178A30(void *, s32 *, void *);
s32 func_00178C50(void *, s32, s32);
void func_00178CE8(void *);
s32 func_00178D20(void *);
void func_00178D78(s32);
void func_00179158(s32);
void *func_00179280(s32, s32);

s32 func_001758F0(Arg *arg0, s32 arg1) {
    Cfg cfg;
    s32 sp20;
    s32 r;
    Node *n;
    Sub *m;
    switch (arg1) {
    case 1:
        cfg.a = arg1;
        cfg.b = arg1;
        cfg.c = arg1;
        cfg.e = arg1;
        r = func_00178A30(arg0, &sp20, &cfg);
        if (r != 0) return r;
        n = func_00179280(0x10, 0x10);
        if (n == 0) return 1;
        m = func_00179280(0x10, 0x10);
        n->p8 = m;
        if (m == 0) return 1;
        r = func_00178C50(m, arg0->f1c, 0);
        if (r != 0) return r;
        n->p8->p4 = func_00175850(n, n->p8->p4, D_001B9C20, 0, sp20 + 0x10);
        if (func_00178D20(n->p8) < 0) return 10;
        arg0->cur = n;
        break;
    case 2:
        n = arg0->cur;
        if (n == 0) return 2;
        switch (arg0->f1c) {
        case 0: n->pC[0] = 0x50000000; n->pC[1] = (s32)D_001B9C20; n->pC[2] = 0; n->pC[3] = 0; break;
        case 1: n->pC[0] = 0x50000000; n->pC[1] = (s32)D_001B9F20; n->pC[2] = 0; n->pC[3] = 0; break;
        default: return 0;
        }
        break;
    case 3:
        n = arg0->cur;
        if (n == 0) return 2;
        func_00178D78(n->p0);
        break;
    case 4:
        n = arg0->cur;
        if (n == 0) return 2;
        func_00178CE8((void *)n->p8);
        func_00179158((s32)n->p8 & 0xFFFFFFF);
        func_00179158((s32)n & 0xFFFFFFF);
        arg0->cur = 0;
        break;
    }
    return 0;
}
