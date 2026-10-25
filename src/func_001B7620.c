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

extern s64 func_001B8FF0(s64, s64);

void func_001B76A0(s64 t, s32 *sec, s32 *usec) {
    s32 s;
    s64 rem;
    s = (s32)func_001B8FF0(t, 0x8CA0000);
    if (sec) *sec = s;
    if (usec) {
        rem = t - (u64)(u32)s * 0x8CA0000;
        *usec = (s32)func_001B8FF0(rem * 1000000, 0x8CA0000);
    }
}

s64 func_001B7748(u32 a, u32 b) {
    s64 x, y;
    x = (u64)a * 0x8CA0000;
    y = (u64)b * 0x8CA0000;
    return x + func_001B8FF0(y, 1000000);
}
