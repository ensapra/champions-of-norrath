typedef struct { s32 first; s16 count; char pad[0x16]; } Row17D;
typedef struct { char pad[0x24]; u32 flags; char pad2[0x14]; } Ent17D;
typedef struct { char pad[0x24]; Ent17D *ents; char pad2[0x2C]; Row17D *rows; } Obj17D;

void func_0017D450(Obj17D *p, s32 index, s32 enable) {
    s32 i;
    Ent17D *e;
    if (index < 0) return;
    for (i = 0; i < p->rows[index].count; i++) {
        e = &p->ents[p->rows[index].first + i];
        if (enable) e->flags |= 0x100;
        else e->flags &= ~0x100;
    }
}
