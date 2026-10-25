typedef struct Col { u8 r, g, b, a; } Col;
typedef struct Ent { Col c; s32 v; } Ent;
typedef struct Obj {
    char pad[0xA84];
    s32 base;
    Ent ent[1];
} Obj;
struct V { char pad[0x50]; s32 (*f50)(Ent *); };
struct V *D_00480488;
Col func_001996C0(Obj *, s32, s32);

void func_001994A8(Obj *o, s32 start, s32 n) {
    s32 i, j;
    for (i = start; i < start + n; i++) {
        for (j = 0; j < 16; j++) {
            Ent *e = &o->ent[(i - o->base) * 16 + j];
            e->c = func_001996C0(o, j, i);
            e->v = D_00480488->f50(e);
        }
    }
}
