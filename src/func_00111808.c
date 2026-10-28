typedef struct { s32 d[305]; } Item;
typedef struct { Item *items; s32 cap; s32 pad; s32 count; } Queue;
void func_00110EF0(Queue *);

void func_00111808(Queue *q, Queue *src)
{
    s32 n = src->count;
    s32 i;
    while (q->cap < q->count + n) {
        func_00110EF0(q);
    }
    i = 0;
    if (n > 0) {
        do {
            q->items[q->count + i] = src->items[i];
            i++;
        } while (i < n);
    }
    q->count += n;
}
