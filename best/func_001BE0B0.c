typedef struct {
    char name[0x20];
    s16 id;
    s16 pad22;
    u8 active;
    u8 type;
    u8 pad26[0x42];
} Slot;

typedef struct {
    u8 pad0[0x55D8];
    Slot slots[15];
    u8 pad[0x5DB0 - 0x55D8 - 15 * 0x68];
} PlayerData;

typedef struct {
    u8 pad0[8];
    s32 kind;
} SlotDef;

extern SlotDef *D_0034B440[];
extern PlayerData D_00408600[];
extern char D_00468F00[];
void *func_003021B0(void *, s32, u32);
s32 func_001AC260(s32, s32);
void func_001AC2C0(s32, s32, s32);

void func_001BE0B0(s32 id, s32 player) {
    PlayerData *p;
    Slot *s;
    Slot *q;
    s32 i;
    s32 idx;
    s32 r;
    s32 min;

    p = &D_00408600[player];
    idx = -1;
    if (D_0034B440[id]->kind == 3)
        return;
    for (i = 0; i < 15; i++) {
        if (p->slots[i].id == -1) {
            idx = i;
            break;
        }
    }
    q = p->slots;
    for (i = 0; i < 15; i++, q++) {
        if (q->id == id)
            idx = -1;
    }
    if (idx == -1)
        return;
    s = &D_00408600[player].slots[idx];
    min = 1;
    func_003021B0(s, 0, sizeof(Slot));
    *(s64 *)s->name = *(s64 *)D_00468F00;
    s->name[8] = D_00468F00[8];
    s->id = id;
    s->active = 1;
    s->type = D_0034B440[id]->kind;
    r = func_001AC260(player, id);
    func_001AC2C0(player, id, r < min ? min : r);
}
