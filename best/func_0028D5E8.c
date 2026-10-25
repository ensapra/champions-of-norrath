typedef struct { f32 x, y; } V2;
typedef struct Node { struct Node *next; s32 p4, p8; struct Item *item; } Node;
typedef struct Item { s32 p0, p4, p8, flags; V2 pos; } Item;
typedef struct {
    u8 p0[0x50];
    Node *list;
    u8 p54[0x18A - 0x54];
    s8 b18A;
    s8 b18B;
    f32 range;
} Obj;
s32 func_00194390(void *, void *, void *);
s32 func_0028DA08(void *, void *);
extern f32 D_004825F4;
void func_0028D5E8(Obj *o, V2 *p) {
    Node *n;
    Item *item;
    Item *best;
    f32 bestD;
    f32 d;
    if (o->b18B == o->b18A) return;
    n = o->list;
    bestD = D_004825F4;
    best = 0;
    for (; n; n = n->next) {
        item = n->item;
        if (item && !(item->flags & 8)) {
            V2 *ip = &item->pos;
            f32 dx = ip->x - p->x;
            f32 dy = ip->y - p->y;
            d = dx * dx + dy * dy;
            if (d < o->range && d < bestD && !func_0028DA08(o, item)) {
                bestD = d;
                best = item;
            }
        }
    }
    if (best) {
        func_00194390((u8 *)o + 0x54, best, best);
        if (o->b18A) {
            o->b18B = o->b18B + 1;
            func_0028D5E8(o, &best->pos);
            func_0028D5E8(o, p);
        }
    }
}
