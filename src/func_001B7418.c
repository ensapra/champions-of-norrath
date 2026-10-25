extern u8 jtbl_004C006C[];
extern s32 func_001B5C80(void);
extern void func_001B5CD8(void);
extern s32 func_001B71E8(s32);

typedef struct Node { struct Node *next; struct Node *prev; s32 id; s32 flags; u64 start; u64 spent; u64 delay; } Node;
Node *func_001B6AE8(Node *p) {
    Node *prev = p->prev;
    Node *next = p->next;
    if (prev != 0)
        prev->next = next;
    else
        *(Node **)(jtbl_004C006C + 0x4EFC) = next;
    if (next != 0)
        next->prev = p->prev;
    p->prev = 0;
    return next;
}

s32 func_001B72B0(s32 arg0) {
    s32 lock = func_001B5C80();
    s32 r = func_001B71E8(arg0);
    if (lock)
        func_001B5CD8();
    return r;
}

typedef struct { u8 pad[8]; s32 id; s32 flags; s64 a; s64 b; } Ent;
s64 func_001B73D0(s32 h) {
    Ent *e = (Ent *)(((u32)h >> 10) << 6);
    if (h < 0 || (h & 0x3FF) != e->id) return -1;
    if (e->flags & 1) return e->a - e->b;
    return 0;
}

s64 func_001B7418(s32 arg0) {
    s32 lock = func_001B5C80();
    s64 r = func_001B73D0(arg0);
    if (lock)
        func_001B5CD8();
    return r;
}
