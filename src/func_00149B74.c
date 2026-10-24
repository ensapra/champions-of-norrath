void func_00149B74(void *obj) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0x160);
    ((void (*)(void *))p)(obj);
}

void func_00149B50(void *obj) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0x15C);
    ((void (*)(void *))p)(obj);
}

void func_00149B2C(void *obj) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0x158);
    ((void (*)(void *))p)(obj);
}

typedef struct Block {
    struct Block *next;
    s32 f4;
    volatile s32 id;
    s32 flags;
    s32 f10;
    s32 f14;
    s64 f18;
    s32 f20;
    s32 f24;
    s32 f28;
} Block;

typedef struct {
    s32 f0;
    s32 f4;
    s32 state;
    volatile s32 seq;
    s32 nused;
    Block *free;
    s32 f18;
    s32 cur;
} Pool;

extern Pool D_004C4F50[];

s32 func_001B6E90(void) {
    Pool *p = D_004C4F50;
    Block *b = p->free;
    if (b == NULL) {
        return 0x80008005;
    }
    p->nused++;
    p->free = b->next;
    b->f28 = 0;
    b->flags = 0;
    b->f18 = 0;
    p->seq++;
    b->id = ((p->seq << 1) & 0x3FE) | 1;
    return ((s32)b << 4) | b->id;
}
