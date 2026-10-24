typedef struct {
    s32 n;
    u8 *p1;
    u8 *p2;
} Pair;

s32 func_001774D0(Pair *o, u8 *a, u8 *b) {
    if (a == NULL || b == NULL) {
        return 6;
    }
    o->n = *(s32 *)(a + 0xC);
    o->p1 = a + 0x10;
    o->p2 = b + 0x10;
    return 0;
}

typedef struct {
    u8 pad[0x34];
    s32 id;
    u8 pad38[8];
} Ent40;

typedef struct {
    s32 n;
    u8 *ents;
} EntList;

void func_00177218(EntList *, s32);

void func_00177450(EntList *l) {
    s32 i;
    for (i = 0; i < l->n; i++) {
        if (((Ent40 *)(l->ents + (i << 6)))->id == -1) {
            func_00177218(l, i);
        }
    }
}

typedef struct { u8 b[0x40]; } Blk40;
extern s32 D_001D03C0[];
extern s32 D_001D0370[];
extern u8 D_001D03D0[];
extern Blk40 D_010EB0F0[];
s32 func_00192560();
s32 func_00192708();

s64 func_00177188(void *arg) {
    s32 *cnt = D_001D03C0;
    s32 n = *cnt - 1;
    *cnt = n;
    if (D_001D0370[0] >= 0) {
        func_00192560(arg, &D_010EB0F0[n], D_001D0370[0]);
        if (*cnt == 0) {
            return func_00192708(D_001D03D0, arg);
        } else {
            return func_00192560(D_001D03D0, arg);
        }
    }
}
