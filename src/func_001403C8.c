typedef struct Req {
    char pad0[0xC];
    s32 fC;
    char pad10[0xC];
    s32 f1C;
    void *f20;
    s32 f24, f28, f2C, f30, f34;
    char pad38[4];
    struct Req *next;
    struct ReqQ *q;
} Req;
typedef struct ReqQ {
    s32 id;
    s32 busy;
    char pad8[4];
    Req *head;
    s32 tail;
} ReqQ;
typedef struct {
    char pad0[0x10];
    s32 f10;
    void *f14;
    char pad18[4];
    s32 f1C, f20, f24, f28, f2C, f30;
    Req *req;
} ReqSrc;
void func_001AE5D0(s32, Req *, ReqQ *);
void func_001B0820(ReqSrc *s) {
    Req *r = s->req;
    ReqQ *q = r->q;
    if (q->head == 0)
        q->head = r;
    else
        ((Req *)q->tail)->next = r;
    q->tail = (s32)r;
    r->f20 = s->f14;
    r->f1C = s->f1C;
    r->f24 = s->f20;
    r->fC = s->f24;
    r->f28 = s->f28;
    r->f2C = s->f2C;
    r->f30 = s->f30;
    r->f34 = s->f10;
    if (q->id >= 0 && q->busy == 0)
        func_001AE5D0(q->id, r, q);
}

extern u8 func_01000000[];
void func_001B0AA8(void *);

void func_001403D8(void) {
    func_001B0AA8(func_01000000 + 0xD12E8);
}

void func_001403C8(void) {
    *(s32 *)(func_01000000 + 0xD2340) = -1;
}

void func_001403B8(void) {
    *(s32 *)(func_01000000 + 0xD1340) = 0;
}
