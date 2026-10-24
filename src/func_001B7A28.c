typedef struct Node7A28 {
    struct Node7A28 *next;
    volatile s32 id;
    s32 a;
    s32 b;
} Node7A28;

extern Node7A28 *D_0110D880;
s32 func_001B6E90(void);
void func_001B70E8(s32);
void func_001B7528(s32, s32, void *, void *);
void func_001B7898(void);

static inline Node7A28 *alloc_node(void)
{
    Node7A28 *n = D_0110D880;
    if (n != NULL) {
        D_0110D880 = n->next;
    }
    return n;
}

static inline void free_node(Node7A28 *n)
{
    n->next = D_0110D880;
    D_0110D880 = n;
    n->id = 0;
}

s32 func_001B7A28(s32 arg0, s32 arg1, s32 arg2)
{
    Node7A28 *n;
    s32 id;

    if (arg1 == 0) {
        return 0x80000016;
    }
    n = alloc_node();
    if (n == NULL) {
        return 0x80008005;
    }
    id = func_001B6E90();
    if (id < 0) {
        free_node(n);
        return id;
    }
    n->a = arg1;
    n->b = arg2;
    n->id = id;
    func_001B7528(id, arg0, func_001B7898, n);
    func_001B70E8(id);
    return ((s32)n << 4) | (id & 0xFE) | 1;
}
