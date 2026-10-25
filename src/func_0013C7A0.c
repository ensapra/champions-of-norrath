typedef struct { s32 d[150]; } Item;
typedef struct { Item *items; s32 cap; s32 pad; s32 count; } Queue;
void func_0013BD40(Queue *);

void func_0013C7A0(Queue *q, Queue *src)
{
    s32 n = src->count;
    s32 c;
    s32 i;
    while (q->cap < q->count + n) {
        func_0013BD40(q);
    }
    c = q->count;
    for (i = 0; i < n; i++) {
        q->items[c + i] = src->items[i];
    }
    q->count = c + n;
}
