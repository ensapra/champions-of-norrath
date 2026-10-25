typedef struct {
    s32 state;
    u8 pad[0x10C];
} G_Ent;

typedef struct {
    u8 pad0[0x40];
    s32 count;
    u8 pad44[0x38];
    s32 unk7C;
    s32 unk80;
    s32 unk84;
    u8 pad88[0x1C];
    G_Ent ent[1];
} G_State;

typedef struct {
    u8 data[0xC];
    u16 type;
    u16 pad;
} Item;

typedef struct {
    u16 flags;
    u16 count;
    Item items[1];
} Hdr;

extern G_State D_008EBDD8;
s32 func_002E7C10(void *, s32, s32);

s32 func_002E6738(s32 id, Hdr *h, s32 *out) {
    s32 n = 0;
    s32 r;
    s32 i;

    id--;
    if (D_008EBDD8.count < id || id < 0 || h == NULL || out == NULL)
        return 0x80000004;
    *out = 0;
    switch ((&D_008EBDD8.ent[0] + id)->state) {
    case 4:
        r = 1;
        break;
    case 1:
    case 2:
        r = 0x8000000F;
        break;
    case 6:
        r = 0x80000006;
        break;
    default:
        r = 0x80000000;
        break;
    }
    if (r != 1)
        return r;
    if (h->flags & 0x8000)
        return 0x8000000E;
    for (i = 0; i < h->count; i++) {
        switch (h->items[i].type) {
        case 1:
        case 3:
            if (n >= 5)
                return 0x8000000D;
            out[n + 1] = func_002E7C10(&h->items[i], D_008EBDD8.unk7C, D_008EBDD8.unk84);
            n++;
            break;
        case 2:
            break;
        }
    }
    *out = n;
    return 0;
}
