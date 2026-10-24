typedef struct NodeDF3 {
    struct NodeDF3 *next;
    volatile s32 id;
    s32 a;
    s32 b;
} NodeDF3;

extern NodeDF3 *D_008E4540;
s32 func_002DE850(void);
void func_002DEAA8(s32);
void func_002DEEE8(s32, s32, void *, void *);
void func_002DF258(void);

static inline NodeDF3 *alloc_node(void)
{
    NodeDF3 *n = D_008E4540;
    if (n != NULL) {
        D_008E4540 = n->next;
    }
    return n;
}

static inline void free_node(NodeDF3 *n)
{
    n->next = D_008E4540;
    D_008E4540 = n;
    n->id = 0;
}

s32 func_002DF3E8(s32 arg0, s32 arg1, s32 arg2)
{
    NodeDF3 *n;
    s32 id;

    if (arg1 == 0) {
        return 0x80000016;
    }
    n = alloc_node();
    if (n == NULL) {
        return 0x80008005;
    }
    id = func_002DE850();
    if (id < 0) {
        free_node(n);
        return id;
    }
    n->a = arg1;
    n->b = arg2;
    n->id = id;
    func_002DEEE8(id, arg0, func_002DF258, n);
    func_002DEAA8(id);
    return ((s32)n << 4) | (id & 0xFE) | 1;
}
