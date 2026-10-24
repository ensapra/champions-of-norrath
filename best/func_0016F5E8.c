typedef struct DmaEnt { struct Pkt *obj; struct DmaEnt *next; } DmaEnt;
typedef struct Pkt { u8 pad[0x14]; u32 addr; u8 pad2[4]; s32 time; } Pkt;
s32 D_004840AC;
s32 D_004844A8;
u32 D_00486974;
extern DmaEnt D_006E5E80[];
void func_00301FFC(void *, void *, s32);

void func_0016F5E8(Pkt *pkt, s32 *end, DmaEnt ***tail, u32 **tag, s32 last) {
    DmaEnt *p;
    Pkt *e;
    s32 sz, n, rem;
    u32 *q;

    pkt->time = D_004844A8;
    if (D_006E5E80[D_004840AC].obj != NULL) {
        s32 lim = D_004844A8 - 3;
        while ((e = D_006E5E80[D_004840AC].obj) != NULL && lim < e->time) {
            s32 i = D_004840AC + 1;
            if (i >= 0x500) i = 0;
            D_004840AC = i;
        }
    }
    e = D_006E5E80[D_004840AC].obj;
    if (e != NULL) {
        p = &D_006E5E80[(s32)(e->addr - D_00486974) >> 12];
        e->addr = 0;
        while (p != NULL) {
            p->obj = NULL;
            p = p->next;
        }
    }
    n = *end;
    *(vu32 *)0x1000E010 = 0x100;
    sz = n - 0x70000000;
    (void)*(vu32 *)0x1000E010;
    *(vu32 *)0x1000D010 = D_00486974 + (D_004840AC << 12) + 0x10;
    if (sz > 0xFF0) sz = 0xFF0;
    (void)*(vu32 *)0x1000D010;
    *(vu32 *)0x1000D080 = 0x70000000;
    (void)*(vu32 *)0x1000D080;
    *(vu32 *)0x1000D020 = (sz + 15) >> 4;
    (void)*(vu32 *)0x1000D020;
    D_006E5E80[D_004840AC].obj = pkt;
    *(vu32 *)0x1000D000 = 0x100;
    (void)*(vu32 *)0x1000D000;
    while (!(*(vu32 *)0x1000E010 & 0x100)) {
    }
    rem = n - sz - 0x70000000;
    if (rem > 0) func_00301FFC((void *)0x70000000, (void *)(0x70000000 + sz), rem);
    *end = n - sz;
    if (*tail != NULL) **tail = &D_006E5E80[D_004840AC];
    **tag = D_00486974 + (D_004840AC << 12);
    *tail = &D_006E5E80[D_004840AC].next;
    q = (u32 *)((D_00486974 + (D_004840AC << 12)) | 0x20000000);
    q[0] = (sz >> 4) | ((last && !rem) ? 0x60000000 : 0x20000000);
    *tag = q + 1;
    {
        s32 i = D_004840AC + 1;
        if (i >= 0x500) i = 0;
        D_004840AC = i;
    }
}
