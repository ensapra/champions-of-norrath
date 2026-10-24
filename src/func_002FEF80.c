typedef void (*NoRetFn)(void) __attribute__((noreturn));
extern NoRetFn D_00448188[];

void func_002FEE88(void)
{
    D_00448188[0]();
}

void func_002FEF20();

typedef struct Node2FE {
    void *fn;
    s16 h4;
    s16 h6;
    s32 v8;
    s32 vC;
    s32 v10;
    s32 v14;
    struct Node2FE *next;
    unsigned pad1c;
    s64 d20;
    s32 v28;
} Node2FE;

Node2FE *func_002FA4A8(s32);
Node2FE **func_002FA108(void);

void func_002FEF80(s32 a0, s32 a1, s32 a2)
{
    register Node2FE *n;
    Node2FE **list;

    n = func_002FA4A8((unsigned short)0x30);
    n->vC = a1;
    n->v10 = a2;
    n->v8 = a0;
    n->v28 = a0;
    n->h4 = 4;
    n->fn = func_002FEF20;
    n->h6 = 1;
    n->d20 = 0;
    n->v14 = 0;
    list = func_002FA108();
    n->next = *list;
    *list = n;
}
