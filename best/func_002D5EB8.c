typedef struct { int attr; void *entry; void *stack; int size; void *gp; int prio; int pad[6]; } TP;
typedef struct { int attr; int max; int init; int opt; int pad[4]; } SP;
extern int CreateSema_2(SP *);
extern int CreateThread_2(TP *);
extern void DeleteSema_2(int);
extern int GetThreadId_2(void);
extern void StartThread_2(int, void *);
extern void ChangeThreadPriority_2(int, int);
extern void func_002D5DE0(void *);
extern int D_00444958;
extern char D_004879F0[];
extern char D_008DDCC0[];
extern int D_008DE0C0;
extern int D_008DE0C8[];

int func_002D5EB8(void) {
    TP t;
    SP s;
    if (D_00444958 > 0) return -1;
    s.init = 0;
    s.max = 0xFF;
    D_008DE0C0 = CreateSema_2(&s);
    if (D_008DE0C0 < 0) return -1;
    t.entry = func_002D5DE0;
    t.stack = D_008DDCC0;
    t.size = 0x400;
    t.gp = D_004879F0;
    t.prio = 0;
    D_00444958 = CreateThread_2(&t);
    if (D_00444958 < 0) {
        DeleteSema_2(D_008DE0C0);
        return -1;
    }
    D_008DE0C8[0] = 0;
    D_008DE0C8[1] = 0;
    StartThread_2(D_00444958, D_008DE0C8);
    ChangeThreadPriority_2(GetThreadId_2(), 1);
    return D_00444958;
}
