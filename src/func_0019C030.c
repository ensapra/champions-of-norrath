s32 Deci2Call(s32, void *);
s32 WaitSema(s32);
s32 SignalSema(s32);
s32 DeleteSema(s32);

void func_001B8080(s32 a)
{
    Deci2Call(-9, &a);
}

typedef struct {
    s32 x0;
    s32 x4;
    s32 x8;
    s32 xC;
    s32 sema;
    s32 sema2;
    s32 sema3;
} Q0019C;

void func_0019C1B0(Q0019C *q)
{
    if (WaitSema(q->sema) < 0) {
        return;
    }
    q->xC = 0;
    q->x8 = 0;
    q->x0 = 0;
    q->x4 = 0;
    SignalSema(q->sema);
}

void func_0019C158(Q0019C *q)
{
    DeleteSema(q->sema);
    DeleteSema(q->sema2);
    DeleteSema(q->sema3);
    q->sema = -1;
    q->sema2 = -1;
    q->sema3 = -1;
    q->xC = 0;
    q->x8 = 0;
    q->x0 = 0;
    q->x4 = 0;
}

extern s32 D_003642D8[];

s32 func_0019C030(void)
{
    return D_003642D8[0] ? 2 : 1;
}
