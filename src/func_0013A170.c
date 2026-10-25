typedef struct { s32 d[300]; } Item;
typedef struct { Item *items; s32 cap; s32 pad; s32 count; } Queue;
void func_001395E8(Queue *);

void func_0013A170(Queue *q, s32 pos, Queue *src)
{
    s32 n = src->count;
    s32 end = pos + n;
    s32 i;
    while (q->cap < end) {
        func_001395E8(q);
    }
    for (i = 0; i < n; i++) {
        q->items[pos + i] = src->items[i];
    }
    q->count = end;
}
