typedef struct Block {
    struct Block *next;
    s32 f4;
    volatile s32 id;
    s32 flags;
} Block;
typedef struct {
    s32 f0, f4, state, seq, nused;
    Block *free;
    s32 f18, cur;
} Pool;
extern Pool D_004459A8[];
void func_002DE4A8(Block *);

s32 func_002DE908(u32 id)
{
    Block *b = (Block *)((id >> 10) << 6);
    Pool *p;
    if ((s32)id < 0 || (id & 0x3FF) != b->id)
        return 0x80008002;
    p = D_004459A8;
    if (p->cur == id)
        return 0x80000010;
    if (b->flags & 2)
        func_002DE4A8(b);
    b->id = 0;
    b->flags = 0;
    b->next = p->free;
    p->free = b;
    p->nused--;
    return 0;
}
