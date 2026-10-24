typedef struct{s32 size;s32 count;u8 *rd;u8 *wr;u8 data[1];}Ring;
void func_001AE898(Ring *r){ r->count++; r->wr++; if (r->wr == r->data + r->size) r->wr = r->data; }
typedef struct Node { struct Node *next; s32 b; s32 (*fn)(s32, s32); s32 arg; } Node;
extern u8 func_01109848[];
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
s32 func_001B5C80();
void func_001B5CD8();
void func_001B6FE8(s32);
s32 func_001B7B18(u32 h) {
    Node *n = (Node *)((h >> 8) << 4);
    s32 t = func_001B5C80();
    if ((s32)h < 0 || ((h ^ n->b) & 0xFF) != 0) {
        if (t != 0) func_001B5CD8();
        return 0x80008002;
    }
    {
        Node **head = (Node **)(func_01109848 + 0x4038);
        Node *old;
        func_001B6FE8(n->b);
        old = *head;
        *head = n;
        n->next = old;
        n->b = 0;
    }
    if (t != 0) func_001B5CD8();
    return 0;
}
extern u8 jtbl_004C006C[];
s32 func_001B7D98(s32 h) {
    u32 idx; u32 max; s32 *tab;
    if (h < 0) {
        idx = h & 0x7FFFFFFF;
        tab = (s32 *)(func_01109848 + 0x4040);
        max = 0x20;
    } else {
        idx = h;
        tab = *(s32 **)(jtbl_004C006C + 0x4F04);
        max = ((u32 *)jtbl_004C006C)[0x4F08 / 4];
    }
    if (idx >= max) return -0x69;
    tab[idx * 4] = 0;
    return 0;
}
