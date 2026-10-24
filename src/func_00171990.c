typedef struct {
    s32 count;
    void (*fn[1])(void);
} FnTab00171920;
extern FnTab00171920 D_001CE210[];

void func_00171990(void)
{
    s32 i;
    for (i = 0; i < D_001CE210[0].count; i++) {
        D_001CE210[0].fn[i]();
    }
}

typedef struct { u16 type; } Ev151;
s32 func_00151FE0(Ev151 *e) {
    u16 t = e->type;
    if (t < 5 && t >= 2)
        return 1;
    return 0;
}

s32 func_00151FA4(Ev151 *e) {
    u16 t = e->type;
    if (t != 0 && (t < 12 || (t < 16 && t >= 14)))
        return 1;
    return 0;
}

typedef struct { u8 data[0x28]; } Item151;
typedef struct {
    Item151 items[100];
    s32 head;
    s32 tail;
    s32 count;
} Queue151;
Item151 *func_00151F54(Queue151 *q) {
    Item151 *it = NULL;
    if (q->count != 0) {
        s32 h = q->head;
        q->count--;
        it = &q->items[h];
        q->head = (h + 1) % 100;
    }
    return it;
}
