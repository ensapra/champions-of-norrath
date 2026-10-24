typedef struct { s32 a, b; } Pair;
void func_001969C8(Pair *);

void func_00196E00(s32 a, s32 b)
{
    Pair p = {a, b};
    func_001969C8(&p);
}

typedef struct {
    u8 pad0[4];
    u16 v;
    u8 pad6[0x2A];
} Sub30;

typedef struct {
    Sub30 sub[8];
    u8 pad[0x18C - 0x180];
    u8 flags;
    u8 pad2[0x198 - 0x18D];
} Ent198;

typedef struct {
    u8 pad0[0x52];
    u8 idx;
    u8 pad53[0x68 - 0x53];
    u32 count;
    u8 pad6C[0x78 - 0x6C];
    Ent198 *ents;
} Mgr;

extern u8 jtbl_004C006C[];
void func_001A1568(void *, s32, void *);

void func_00196C30(Mgr *m)
{
    u32 i;

    if (m == NULL) {
        func_001A1568(jtbl_004C006C + 0xEC4C, 0x7DC, jtbl_004C006C + 0xED04);
    }
    for (i = 0; i < m->count; i++) {
        m->ents[i].flags &= ~2;
    }
}

void func_00196B88(Mgr *m)
{
    s32 idx = m->idx & 0x7F;
    u32 i;

    if (m == NULL) {
        func_001A1568(jtbl_004C006C + 0xEC4C, 0x7C1, jtbl_004C006C + 0xED04);
    }
    for (i = 0; i < m->count; i++) {
        Ent198 *e = &m->ents[i];
        if (e->sub[idx].v == 0 && !(e->flags & 0x10)) {
            e->flags &= ~4;
        }
    }
}
