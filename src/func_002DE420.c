/* identical to func_001B6A60 (matched), with its names changed by decompdecomp */
extern u8 D_00440AC4[];
typedef struct Node { struct Node *next, *prev; s32 id, flags; u64 start, spent, delay; } Node;
typedef struct Pool { u8 pad[24]; Node *head; } Pool;

void func_002DE420(Node *p) {
    Node *prev = 0;
    Node *cur;
    u64 time = p->delay + p->start - p->spent;
    for (cur = ((Pool *)(D_00440AC4 + 0x4EE4))->head; cur != 0; prev = cur, cur = cur->next) {
        if (time < cur->delay + cur->start - cur->spent) break;
    }
    p->prev = prev;
    p->next = cur;
    if (cur) cur->prev = p;
    if (prev) prev->next = p;
    else ((Pool *)(D_00440AC4 + 0x4EE4))->head = p;
}
