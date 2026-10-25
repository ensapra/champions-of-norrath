typedef struct { s32 d[305]; } Item;
typedef struct { Item *items; s32 cap; s32 pad; s32 count; } Queue;
typedef struct { Item *src; s32 p[2]; s32 n; } Src;
void func_00110EF0(Queue *);

void func_00111958(Queue *q, s32 at, Src *s) {
    s32 n = s->n;
    s32 end = at + n;
    s32 i;
    while (q->cap < end)
        func_00110EF0(q);
    for (i = 0; i < n; i++)
        q->items[at + i] = s->src[i];
    q->count = end;
}
