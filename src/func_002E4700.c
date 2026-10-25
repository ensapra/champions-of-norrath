/* identical to func_001B0110 (matched), with its names changed by decompdecomp */
typedef struct { s32 gen; void *items; s32 n; } Pool;
typedef struct { u8 pad[0x10]; s32 flags; void *self; s32 gen; u8 pad2[0x24]; } Item;
extern void func_002DD640(void);
extern void func_002DD698(void);

Item *func_002E4700(Pool *p) {
    s32 i;
    Item *it;
    s32 g, v;
    func_002DD640();
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
            func_002DD698();
            return it;
        }
    }
    func_002DD698();
    return 0;
}
