typedef struct {
    char pad0[0xE4];
    s32 (*toY)(s32);
    s32 (*toX)(s32);
} Conv;
extern Conv *D_00480488;

typedef struct {
    s32 x, y;
    char pad8[4];
    u16 w, h;
} Rect10;

typedef struct {
    char pad0[0x180];
    u16 rect;
    char pad182[0x18C - 0x182];
    s32 flags;
    char pad190[0x198 - 0x190];
} Item198;

typedef struct {
    char pad0[0x68];
    u32 count;
    Rect10 *rects;
    char pad70[0x78 - 0x70];
    Item198 *items;
} ItemList;

s32 func_001966E8(ItemList *o, s32 *pt) {
    s32 x = D_00480488->toX(pt[0]);
    s32 y = D_00480488->toY(pt[1]);
    u32 i;
    for (i = 0; i < o->count; i++) {
        Item198 *it = &o->items[i];
        Rect10 *r = &o->rects[it->rect];
        if (x >= r->x && y >= r->y && x < r->x + r->w && y < r->y + r->h && !(it->flags & 0x34)) {
            return i;
        }
    }
    return -1;
}
