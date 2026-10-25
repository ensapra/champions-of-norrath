typedef struct { s32 gen; void *items; s32 n; } Pool;
typedef struct { u8 pad[0x10]; s32 flags; void *self; s32 gen; } Item;
extern void func_001B5C80(void);
extern void func_001B5CD8(void);

Item *func_001B0110(Pool *p) {
    Item *it;
    s32 i;
    s32 g;
    func_001B5C80();
    it = (Item *)p->items;
    for (i = 0; i < p->n; i++, it++) {
        if (!(it->flags & 1)) {
            it->flags = (i << 16) | 5;
            g = p->gen + 1;
            p->gen = g;
            if (g == 1) {
                p->gen = g + 1;
                g = 1;
            }
            it->self = it;
            it->gen = g;
            func_001B5CD8();
            return it;
        }
    }
    func_001B5CD8();
    return 0;
}

extern u8 jtbl_004C006C[];
extern u8 D_0110B000[];
extern s32 D_0110B040[];
extern s32 D_0110B080[];
s32 func_001B08B0(void *, s32, s32, s32 *, s32, s32 *, s32, s32, s32);

u32 func_001B4B40(s32 a) {
    if (*(s32 *)(jtbl_004C006C + 0x3F48) < 0)
        return 0;
    D_0110B080[0] = a;
    if (func_001B08B0(D_0110B000, 8, 0, D_0110B080, 4, D_0110B040, 4, 0, 0) < 0)
        return -1;
    return D_0110B040[0];
}

u32 func_001B4BC0(s32 a) {
    if (*(s32 *)(jtbl_004C006C + 0x3F48) < 0)
        return 0;
    D_0110B080[0] = a;
    if (func_001B08B0(D_0110B000, 9, 0, D_0110B080, 4, D_0110B040, 4, 0, 0) < 0)
        return -1;
    return D_0110B040[0];
}

extern u8 D_0110B3E8[];
void func_001A2660(void *, s32, s32);

s32 func_001B4DD0(void) {
    *(s32 *)(jtbl_004C006C + 0x3F4C) = -1;
    func_001A2660(D_0110B3E8, 0, 4);
    return 0;
}
