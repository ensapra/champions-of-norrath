typedef struct { s32 gen; void *items; s32 n; } Pool;
typedef struct { u8 pad[0x10]; s32 flags; void *self; s32 gen; u8 pad2[0x24]; } Item;
extern s32 func_001B5C80(void);
extern void func_001B5CD8(void);

Item *func_001B0110(Pool *p) {
    Item *it;
    s32 i;
    s32 g, v;
    func_001B5C80();
    it = (Item *)p->items;
    for (i = 0; i < p->n; i++, it++) {
        if (!(it->flags & 1)) {
            it->flags = (i << 16) | 5;
            g = p->gen + 1;
            p->gen = g;
            if (g == 1) {
                p->gen = g + 1;
                v = 1;
            } else {
                v = g;
            }
            it->self = it;
            it->gen = v;
            func_001B5CD8();
            return it;
        }
    }
    func_001B5CD8();
    return 0;
}

typedef struct { u8 pad[8]; s32 id; s32 flags; s64 a; s64 b; } Ent;
extern s64 func_001B6DC0(void);

s64 func_001B7468(s32 h) {
    Ent *e;
    s64 r;
    e = (Ent *)(((u32)h >> 10) << 6);
    if (h < 0 || (h & 0x3FF) != e->id) return -1;
    r = e->b;
    if (e->flags & 1) {
        r += func_001B6DC0() - e->a;
    }
    return r;
}

extern s64 func_001B7468(s32);

s64 func_001B74D8(s32 h) {
    s32 locked;
    s64 r;
    locked = func_001B5C80();
    r = func_001B7468(h);
    if (locked != 0) {
        func_001B5CD8();
    }
    return r;
}

extern s64 func_001B7528(s32, s32, s32, s32);

s64 func_001B7620(s32 a, s32 b, s32 c, s32 d) {
    s32 locked;
    s64 r;
    locked = func_001B5C80();
    r = func_001B7528(a, b, c, d);
    if (locked != 0) {
        func_001B5CD8();
    }
    return r;
}
