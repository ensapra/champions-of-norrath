typedef struct { char pad[0x18]; void *cur; s32 f1c; } Arg;
typedef struct { s32 a, b, c, d, e; } Cfg;
typedef struct Sub { s32 p0, p4; } Sub;
typedef struct Node { s32 p0, p4, p8; Sub *pC; } Node;
s32 func_00176318(void *, s32);
s32 func_00176B78(void *, s32, s32, s32);
s32 func_00178A30(void *, s32 *, void *);
s32 func_00178C50(void *, s32, s32);
void func_00178CE8(void *);
void func_00178D78(s32);
void func_00179158(s32);
void *func_00179280(s32, s32);

s32 func_00176E00(Arg *arg0, s32 arg1) {
    Cfg cfg;
    s32 sp20;
    s32 r;
    s32 v16, v19;
    Node *n;
    Sub *m;
    cfg.a = 1;
    cfg.b = 1;
    cfg.c = 3;
    cfg.e = 1;
    switch (arg1) {
    case 1:
        r = func_00178A30(arg0, &sp20, &cfg);
        if (r != 0) return r;
        n = func_00179280(0x10, 0x10);
        if (n == 0) return 1;
        n->p4 = 0;
        n->p0 = 0;
        r = func_00176318(n, sp20 + 0x10);
        if (r != 0) return r;
        cfg.e = 2;
        v19 = func_00178A30(arg0, &sp20, &cfg) ? 0 : sp20 + 0x10;
        cfg.c = 2;
        cfg.e = 1;
        v16 = func_00178A30(arg0, &sp20, &cfg) ? 0 : sp20 + 0x10;
        m = func_00179280(0x10, 0x10);
        n->pC = m;
        if (m == 0) return 1;
        r = func_00178C50(m, arg0->f1c, 0);
        if (r != 0) return r;
        r = func_00176B78(n, 0, v16, v19);
        if (r != 0) return r;
        arg0->cur = n;
        break;
    case 2:
        break;
    case 3:
        n = arg0->cur;
        if (n == 0) return 2;
        func_00178D78(n->p8);
        break;
    case 4:
        n = arg0->cur;
        if (n == 0) return 2;
        func_00178CE8(n->pC);
        func_00179158(n->p4 & 0xFFFFFFF);
        func_00179158((s32)n->pC & 0xFFFFFFF);
        func_00179158((s32)n & 0xFFFFFFF);
        arg0->cur = 0;
        break;
    }
    return 0;
}
