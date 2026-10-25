typedef struct N { struct N *next; volatile s32 id; s32 a; s32 b; } N;
extern N *D_0110D880;
s32 func_001B5C80();
void func_001B5CD8();
s32 func_001B6F00();
void func_001B7198(s32);
void func_001B7620(s32, s32, void *, void *);
void func_001B7898();

static inline N *alloc_node(void) {
    N *n = D_0110D880;
    if (n != NULL) {
        D_0110D880 = n->next;
    }
    return n;
}

s32 func_001B78F8(s32 arg0, s32 arg1, s32 arg2) {
    N *n;
    s32 id, ints;
    if (arg1 == 0) return 0x80000016;
    ints = func_001B5C80();
    n = alloc_node();
    if (n == NULL) {
        if (ints != 0) func_001B5CD8();
        return 0x80008005;
    }
    id = func_001B6F00();
    if (id < 0) {
        n->next = D_0110D880;
        D_0110D880 = n;
        n->id = 0;
        if (ints != 0) func_001B5CD8();
        return id;
    }
    n->a = arg1;
    n->b = arg2;
    n->id = id;
    func_001B7620(id, arg0, func_001B7898, n);
    func_001B7198(id);
    if (ints != 0) func_001B5CD8();
    return ((s32)n << 4) | (id & 0xFE) | 1;
}
