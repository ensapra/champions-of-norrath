typedef struct {
    s32 slot;
    char pad4[0x18 - 4];
    s32 state;
} Sub34;
typedef struct {
    char pad0[0x34];
    Sub34 sub;
    char pad50[0x74 - 0x50];
} Ent74b;
typedef struct { char pad[0x5DB0]; } Slot5DB0;
extern Ent74b D_00427288[];
extern Slot5DB0 D_00408600[];
void ovl_ntgui2_func_001B3200(Slot5DB0 *s, Ent74b *e);
void func_001B33D0(Slot5DB0 *s, Ent74b *e);
void func_001B6730(s32 id, s32 slot, Ent74b *e, s32 a, s32 b, s32 c);

void func_001AC8A8(s32 id) {
    Ent74b *e = &D_00427288[id];
    Sub34 *sub = &e->sub;
    Slot5DB0 *s = &D_00408600[sub->slot];
    if (e->sub.state != 2) {
        ovl_ntgui2_func_001B3200(s, e);
        func_001B33D0(s, e);
        if (e->sub.state != 2) {
            return;
        }
    }
    func_001B6730(id, sub->slot, e, -2, 1, 0);
}
