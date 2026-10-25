typedef struct { s32 d[150]; } Item;
typedef struct { Item *items; s32 cap; s32 pad; s32 count; } Queue;
void func_0013BD40(Queue *);

void ovl_ntgui2_func_0013BE30(Queue *q, Item *it) {
    s32 n = q->count;
    if (n >= q->cap) {
        func_0013BD40(q);
        n = q->count;
    }
    q->items[n] = *it;
    q->count = n + 1;
}
