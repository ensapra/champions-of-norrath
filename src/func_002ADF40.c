typedef struct { f32 x, y, z; } Vec3_2ADF40;
typedef struct { char pad[0x10]; Vec3_2ADF40 pos; } Ent_2ADF40;
typedef struct { s16 delta; s16 pad; s32 (*fn)(void *, s32, s32); } VtEnt_2ADF40;
typedef struct { char pad[0x60]; VtEnt_2ADF40 *vt; } Owner_2ADF40;
typedef struct {
    s8 id;
    s32 unk4;
    Owner_2ADF40 *owner;
    Ent_2ADF40 *ent;
    u32 rnd;
    void *vt;
    s32 unk18;
    s32 unk1C;
    f32 unk20;
    s32 unk24;
} Spell_2ADF40;
extern char D_0044E670[];
extern char D_00452300[];
extern char D_00478E48[];
extern char D_004863E8[];
u32 D_00483E5C;
void *func_00165DC0(char *, char *);
void func_0024D308(void *, Ent_2ADF40 *, f32);
void *func_001441B8(s32);
void func_001E6910(void *, Vec3_2ADF40, s32, s32, s32, s32);
s32 func_00180260(void);

Spell_2ADF40 *func_002ADF40(Spell_2ADF40 *s, s8 id, Ent_2ADF40 *ent, Owner_2ADF40 *owner)
{
    void *p;
    VtEnt_2ADF40 *e;
    Vec3_2ADF40 unused;
    Vec3_2ADF40 pos;

    s->id = id;
    s->vt = D_0044E670;
    s->ent = ent;
    s->owner = owner;
    s->unk4 = 0;
    D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
    s->rnd = D_00483E5C >> 16;
    s->vt = D_00452300;
    func_0024D308(func_00165DC0(D_004863E8, D_00478E48), s->ent, 1.0f);
    p = func_001441B8(0x5C);
    if (p) {
        pos = s->ent->pos;
        func_001E6910(p, pos, 0x5A, 0x56, 0x7E, 0xFA);
    }
    s->unk1C = 0;
    s->unk18 = 0;
    e = &s->owner->vt[11];
    s->unk20 = e->fn((char *)s->owner + e->delta, 1, s->id);
    s->unk24 = func_00180260();
}
