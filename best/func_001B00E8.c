typedef struct { s32 size; s32 count; u8 *rd; u8 *wr; u8 data[1]; } Ring;
void func_001AE898(Ring *r){ r->count++; r->wr++; if(r->wr==r->data+r->size) r->wr=r->data; }

extern void func_001AFA68(void);
extern s32 jtbl_004C006C[];
void func_001B00E8(void) {
    func_001AFA68();
    *(s32 *)((u8 *)jtbl_004C006C + 0x3EA8) = 0;
}

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
            if (g == 1) { g = 1; p->gen = p->gen + 1; }
            it->self = it;
            it->gen = g;
            func_001B5CD8();
            return it;
        }
    }
    func_001B5CD8();
    return 0;
}

void func_001B01B8(Item *it) {
    it->gen = 0;
    it->flags &= 0xFFFFFFFE;
}
