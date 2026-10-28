typedef struct { f32 x, y, z; } V3_5898;
typedef struct { char pad[0x10]; V3_5898 pos; } Ent_5898;
typedef struct {
    char pad0[8];
    s8 b8, b9;
    s16 sA, sC, sE, s10, s12, s14, s16, s18;
    char pad1[2];
    f32 f1C, f20, f24, f28, f2C;
} Sub_5898;
typedef struct {
    s8 id;
    s32 unk4;
    void *owner;
    Ent_5898 *ent;
    u32 rnd;
    void *vt;
    Sub_5898 sub0;
    char pad[0x48 - 0x18 - sizeof(Sub_5898)];
    V3_5898 pos;
    s32 unk54;
} Spell_5898;
extern char D_0044E670[];
extern char D_00452AE0[];
extern char D_00479468[];
extern char D_004864A0[];
u32 D_00483E5C;
f32 D_00482E1C;
void ovl_ntgui2_func_0013D230(void *);
void *func_00165DC0(char *, char *);
s32 func_0024D4F8(void *, V3_5898 *, Ent_5898 *, f32);
void func_0024C5F8(s32);

void func_002B5898(Spell_5898 *s, s8 id, Ent_5898 *ent, void *owner)
{
    V3_5898 a;
    V3_5898 unused;
    V3_5898 c;
    Sub_5898 *p = &s->sub0;
    void *h;
    f32 one = 1.0f;
    f32 z = 0.0f;
    f32 inv;
    s32 r;

    s->id = id;
    inv = one / z;
    s->owner = owner;
    s->ent = ent;
    s->vt = D_0044E670;
    s->unk4 = 0;
    D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
    s->rnd = D_00483E5C >> 16;
    s->vt = D_00452AE0;
    p->b9 = 0;
    a = ent->pos;
    s->pos = a;
    p->sC = 0x7D;
    p->sA = 0xFF;
    p->s14 = 0x7D;
    p->s12 = 0xFF;
    p->f28 = inv;
    p->f2C = D_00482E1C;
    p->f1C = z;
    p->f24 = z;
    p->f20 = inv;
    p->s18 = 0x42;
    p->s10 = 0x42;
    p->sE = 0;
    p->s16 = 0;
    p->b8 = 0;
    ovl_ntgui2_func_0013D230(p);
    h = func_00165DC0(D_004864A0, D_00479468);
    c = s->ent->pos;
    r = func_0024D4F8(h, &c, s->ent, one);
    s->unk54 = r;
    func_0024C5F8(r);
}
