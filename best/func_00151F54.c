typedef struct { u16 type; } Ev151;
s32 func_00151FE0(Ev151 *e) {
    switch (e->type) {
    case 2 ... 4:
        return 1;
    }
    return 0;
}

s32 func_00151FA4(Ev151 *e) {
    switch (e->type) {
    case 1 ... 11:
    case 14:
    case 15:
        return 1;
    }
    return 0;
}

typedef struct { u8 data[0x28]; } Item151;
typedef struct {
    Item151 items[101];
    s32 head;
    s32 tail;
    s32 count;
} Queue151;
Item151 *func_00151F54(Queue151 *q) {
    Item151 *it;
    if (q->count == 0)
        return NULL;
    it = &q->items[q->head];
    q->head = (q->head + 1) % 100;
    q->count--;
    return it;
}
