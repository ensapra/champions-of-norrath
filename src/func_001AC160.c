typedef struct { s32 id; u8 pad[0x1C]; } Ent20;
typedef struct {
    u8 pad0[0x24];
    s32 *p24;
    u8 pad28[0x124 - 0x28];
    s8 n;
    u8 pad125[3];
    Ent20 ent[1];
} Obj1AC;
s32 func_00165DC0(s32);

s32 func_001AC160(Obj1AC *a) {
    s32 key = func_00165DC0(*a->p24);
    s32 i;
    for (i = 0; i < a->n; i++) {
        if (a->ent[i].id == key) return 1;
    }
    return 0;
}
