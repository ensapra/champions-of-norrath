s32 func_002D6140(s32);
s32 func_002D70D0(void *);
s32 func_002D8468(void *);
extern s32 D_00446090[];
extern s32 D_004460B4[];
extern u8 D_00447250[];
extern char D_0047BB58[];

s32 func_002E2ED8(s32 a)
{
    if (a == 0) {
        if (D_00446090[0] > 0)
            func_002D70D0(D_0047BB58);
        while (D_004460B4[0] != 0 || func_002D8468(D_00447250) != 0)
            func_002D6140(4000);
        return 0;
    }
    if (D_004460B4[0] != 0 || func_002D8468(D_00447250) != 0)
        return 1;
    return 0;
}

typedef void (*NoRetFn)(void) __attribute__((noreturn));
extern NoRetFn D_00448188[];

void func_002FEE88(void)
{
    D_00448188[0]();
}

typedef struct {
    u8 pad0[8];
    s32 v8;
    s32 vC;
    u8 pad10[0x28 - 0x10];
    s32 v28;
} S2FE;

typedef struct {
    u8 pad0[4];
    s16 h4;
} T2FE;

s32 func_002FE0D0(s32, s32, s32, void *);

s32 func_002FEF20(S2FE *a, s32 (*fn)(void), T2FE *b)
{
    if (b != 0 && b->h4 != 4)
        return 0;
    if (fn == (s32 (*)(void))-1)
        return 1;
    return func_002FE0D0(fn(), a->vC, a->v28, &a->v8) != 0;
}

typedef struct Node2FE {
    void *fn;
    s16 h4;
    s16 h6;
    s32 v8;
    s32 vC;
    s32 v10;
    s32 v14;
    struct Node2FE *next;
    s32 pad1c;
    s64 d20;
    s32 v28;
} Node2FE;

Node2FE *func_002FA4A8(s32);
Node2FE **func_002FA108(void);

void func_002FEF80(s32 a0, s32 a1, s32 a2)
{
    Node2FE *n;
    Node2FE **list;

    n = func_002FA4A8(0x30);
    n->vC = a1;
    n->v10 = a2;
    n->v28 = a0;
    n->h4 = 4;
    n->h6 = 1;
    n->v8 = a0;
    n->fn = func_002FEF20;
    n->d20 = 0;
    n->v14 = 0;
    list = func_002FA108();
    n->next = *list;
    *list = n;
}
