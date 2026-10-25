typedef struct { f32 x, y, z; } Vec3_2AE;
typedef struct { char pad[0x10]; Vec3_2AE pos; char pad2[0x3C0 - 0x1C]; s32 f3c0; } Ent_2AE;
typedef struct { s16 delta; s16 pad; s32 (*fn)(void *, s32, s32); } VtEnt_2AE;
typedef struct { char pad[0x60]; VtEnt_2AE *vt; } Owner_2AE;
typedef struct {
    s8 id;
    s32 unk4;
    Owner_2AE *owner;
    Ent_2AE *ent;
    u32 rnd;
    void *vt;
    Ent_2AE *unk18;
    s32 unk1C;
    f32 unk20;
    s32 unk24;
} Spell_2AE;
extern char D_0044E670[];
extern char D_00452450[];
extern char D_00478F28[];
extern char D_00486418[];
extern char D_004086B0[];
u32 D_00483E5C;
f32 D_00482C60;
f32 D_00482C64;
void *func_00165DC0(char *, char *);
void func_0024D308(void *, Ent_2AE *, f32);
void *func_001441B8(s32);
void func_001E6910(void *, Vec3_2AE, s32, s32, s32, s32);
s32 func_00180260(void);

Spell_2AE *func_002AE9D8(Spell_2AE *s, s8 id, Ent_2AE *ent, Owner_2AE *owner)
{
    void *p;
    VtEnt_2AE *e;
    Vec3_2AE unused;
    Vec3_2AE pos;

    s->id = id;
    s->vt = D_0044E670;
    s->owner = owner;
    s->unk4 = 0;
    s->ent = ent;
    D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
    s->vt = D_00452450;
    s->rnd = D_00483E5C >> 16;
    func_0024D308(func_00165DC0(D_00486418, D_00478F28), s->ent, 1.0f);
    s->unk18 = ent;
    p = func_001441B8(0x5C);
    if (p) {
        pos = s->ent->pos;
        func_001E6910(p, pos, 0x5A, 0xFA, 0xC8, 0x64);
    }
    s->unk24 = func_00180260();
    s->unk1C = 0;
    e = &s->owner->vt[11];
    s->unk20 = *(f32 *)(D_004086B0 + s->unk18->f3c0 * 0x5DB0) * D_00482C60 * ((f32)e->fn((char *)s->owner + e->delta, 0, s->id) * D_00482C64);
}
