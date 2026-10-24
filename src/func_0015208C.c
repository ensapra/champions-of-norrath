typedef struct Ev152 {
    s16 type;
    s16 pad2;
    s32 x4;
    s64 x8;
    s32 x10;
    s32 x14;
    s32 x18;
    s32 x1C;
    s32 x20;
} Ev152;

typedef struct { s32 gen; u8 *items; s32 n; } Pool;
typedef struct { u8 pad[0x10]; u32 flags; void *self; s32 gen; } Item;
extern void func_001B5C80(void);
extern void func_001B5CD8(void);
Item *func_001B0110(Pool *p) {
    Item *it;
    s32 i;
    func_001B5C80();
    it = (Item *)p->items;
    for (i = 0; i < p->n; i++, it = (Item *)((u8 *)it + 0x40)) {
        if (!(it->flags & 1)) {
            s32 g;
            it->flags = (i << 16) | 5;
            g = p->gen + 1;
            p->gen = g;
            if (g == 1) { g++; p->gen = g; g = 1; }
            it->self = it;
            it->gen = g;
            func_001B5CD8();
            return it;
        }
    }
    func_001B5CD8();
    return 0;
}

void func_0015208C(s32 a0, Ev152 *e, s64 a2, s32 a3, s32 a4) {
    e->type = 5;
    e->x8 = a2;
    e->x14 = a3;
    e->x18 = a4;
    e->x1C = 0;
    e->x20 = 1;
}

s32 func_00152040(Ev152 *e) {
    if ((u16)e->type == 0x11 && e->x14 >= 4 && e->x14 < 6) return 1;
    return 0;
}

s32 func_00152008(Ev152 *e) {
    if ((u16)e->type == 0x11 && e->x14 >= 0 && e->x14 < 4) return 1;
    return 0;
}
