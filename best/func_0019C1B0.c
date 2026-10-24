void DeleteSema(s32);
s32 WaitSema(s32);
void SignalSema(s32);

typedef struct {
    s32 x0;
    s32 x4;
    s32 x8;
    s32 xC;
    s32 sema;
    s32 sema2;
    s32 sema3;
} Q0019C;

void func_0019C158(volatile Q0019C *q)
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

void func_0019C1B0(volatile Q0019C *q)
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
