typedef struct { s32 a; void (*fn)(void *); s32 stk; s32 ssize; void *sp; s32 prio; s32 pad[6]; } Th;
extern Th D_010CE668;
extern u8 D_0050A1C0[];
void *func_001A2660(void *, s32, s32);
s32 func_0011B908(s32, s32);
s32 CreateThread(void *);
void StartThread(s32, s32);
void func_0013CE10(void *);

void func_0013CE38(s32 arg) {
    Th *t = &D_010CE668;
    s32 stk;
    func_001A2660(t, 0, 0x30);
    t->fn = func_0013CE10;
    stk = func_0011B908(0x10, 0x2000);
    t->ssize = 0x2000;
    t->sp = D_0050A1C0 + 0x5830;
    t->prio = 0xA;
    t->stk = stk;
    StartThread(CreateThread(t), arg);
}
