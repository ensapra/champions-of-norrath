typedef struct { u8 cmd; u8 arg; } Ent;
typedef struct { u32 idx; u32 pad; Ent e[0x200]; } Q;
extern int WaitSema_2(int);
extern void WakeupThread_2(int);
extern void RotateThreadReadyQueue_2(int);
extern void SuspendThread_2(int);
extern void func_002D7098(const char *);
extern int D_008DE0C0;
extern char D_0047B660[];

void func_002D5DE0(Q *q) {
    while (1) {
        u32 i;
        WaitSema_2(D_008DE0C0);
        i = q->idx & 0x1FF;
        q->idx = i + 1;
        switch (q->e[i].cmd) {
        case 0: WakeupThread_2(q->e[i].arg); break;
        case 1: RotateThreadReadyQueue_2(q->e[i].arg); break;
        case 2: SuspendThread_2(q->e[i].arg); break;
        default: func_002D7098(D_0047B660); break;
        }
    }
}
