typedef struct { s32 size; s32 count; u8 *rd; u8 *wr; u8 data[1]; } Ring;
void func_001AE898(Ring *r) {
    r->count++;
    r->wr++;
    if (r->wr == r->data + r->size)
        r->wr = r->data;
}

extern void func_001B5C80(void);
extern void func_001B5CD8(void);
typedef struct Req { u8 pad[0x3C]; struct Req *next; } Req;
typedef struct { s32 id; s32 busy; s32 f8; Req *head; } ReqQ;
Req *func_001B0D78(ReqQ *q) {
    Req *r;
    func_001B5C80();
    r = q->head;
    if (r == 0) {
        q->busy = 0;
    } else {
        q->busy = 1;
        q->head = r->next;
    }
    func_001B5CD8();
    return r;
}

s32 SleepThread(void);
void func_001B0DD0(Req *);
void func_001B0F98(ReqQ *q) {
    Req *r;
    for (;;) {
        while ((r = func_001B0D78(q)) != 0)
            func_001B0DD0(r);
        SleepThread();
    }
}

typedef struct { s32 currentCount, maxCount, initCount, numWaitThreads; u32 attr, option; } SemaP;
s32 CreateSema(SemaP *);
extern s32 D_004C3FA8[];
extern s32 D_004C3FAC[];
void func_001B0FD8(void) {
    SemaP p;
    if (D_004C3FA8[0] == -1) {
        p.option = 0;
        p.initCount = 1;
        p.maxCount = 1;
        D_004C3FA8[0] = CreateSema(&p);
        D_004C3FAC[0] = CreateSema(&p);
    }
}
