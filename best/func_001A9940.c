typedef struct Item {
    s32 f0, f4, f8;
    s16 used;
    s16 fE;
    s32 f10, f14, f18;
    s32 pad1C[5];
    s32 f30, f34;
    s32 pad38[3];
    s32 f44, f48;
    s32 pad4C[2];
    void *owner;
} Item;

typedef struct Chunk {
    struct Chunk *next;
    s32 count;
    Item *items;
} Chunk;

typedef struct Ctx {
    s32 err;
    s32 pad4[13];
    s32 f38;
    s32 pad3C[103];
    Chunk chunks;
} Ctx;

Chunk *func_001A98C8(Ctx *, s32);
void func_001A9A78(Ctx *);

Item *func_001A9940(Ctx *c) {
    Chunk *ch;
    Item *it;
    s32 i;

    if (c->f38 == 0) {
        func_001A9A78(c);
    }
    ch = &c->chunks;
    for (;;) {
        i = ch->count;
        it = ch->items;
        while (--i >= 0) {
            if (it->used == 0) {
                goto found;
            }
            it++;
        }
        if (ch->next == 0) {
            ch->next = func_001A98C8(c, 4);
            if (ch->next == 0) {
                c->err = 0xC;
                return 0;
            }
        }
        ch = ch->next;
    }
found:
    it->used = 1;
    it->fE = -1;
    it->owner = c;
    it->f0 = 0;
    it->f8 = 0;
    it->f4 = 0;
    it->f10 = 0;
    it->f14 = 0;
    it->f18 = 0;
    it->f30 = 0;
    it->f34 = 0;
    it->f44 = 0;
    it->f48 = 0;
    return it;
}
