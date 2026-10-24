typedef struct Node { struct Node *next; s32 b; s32 (*fn)(s32, s32); s32 arg; } Node;
extern u8 func_01109848[];
extern u8 func_001C7330[];
extern void func_0014B558(void *, void *, s32);
s32 func_0014B9F0(void *, void *);

s32 func_001B7898(s32 a, s32 b, s32 c, Node *n) {
    s32 r = n->fn(((s32)n << 4) | (a & 0xFE) | 1, n->arg);
    if (r == 0) {
        Node **head = (Node **)(func_01109848 + 0x4038);
        Node *old = *head;
        r = -1;
        *head = n;
        n->next = old;
        n->b = 0;
    }
    return r;
}

void func_00157FE4(s32 a0, s64 a1) {
    s32 p = (s32)a1;
    *(s32 *)(p + 0x8A4) = 0;
}

s32 func_001568E4(u8 *o, u8 *b, u8 *c) {
    s32 r;
    s32 v;
    r = (*(s32 (**)(void))(func_001C7330 + 0x1C8))();
    if (func_0014B9F0(b + 0x8D0, c + 0x8D0) == 0) {
        v = *(s32 *)(b + 0x8D0);
        *(s32 *)(o + 0x98) = 2;
        r = 1;
        *(s32 *)(o + 0x8C0) = v;
        *(s32 *)(o + 0x8B0) = v;
        *(s32 *)(o + 0x8D0) = v;
        *(s8 *)(o + 0x8C3) = 0;
    }
    v = *(s32 *)(b + 0x8D4);
    if (v != *(s32 *)(c + 0x8D4)) {
        *(s32 *)(o + 0x8D4) = v;
        *(s32 *)(o + 0x98) = 2;
        r = 1;
    }
    return r;
}

void func_00156714(u8 *a) {
    func_0014B558(a, a + 0x120, 1);
}
