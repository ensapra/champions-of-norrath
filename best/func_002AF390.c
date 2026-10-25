typedef struct { f32 x, y, z; } V3_F390;
typedef struct { char pad[0x10]; V3_F390 pos; } Ent_F390;
typedef struct {
    char pad0[8];
    s8 b8, b9;
    s16 sA, sC, sE, s10, s12, s14, s16, s18;
    char pad1[2];
    f32 f1C, f20, f24, f28, f2C;
} Sub_F390;
typedef struct {
    s8 id;
    s32 unk4;
    void *owner;
    Ent_F390 *ent;
    u32 rnd;
    void *vt;
    Sub_F390 sub0;
    char pad[0x48 - 0x18 - sizeof(Sub_F390)];
    V3_F390 pos;
    s32 unk54;
} Spell_F390;
extern char D_0044E670[];
extern char D_00452510[];
extern char D_00478FA8[];
extern char D_00486430[];
u32 D_00483E5C;
f32 D_00482C8C;
void ovl_ntgui2_func_0013D230(void *);
void *func_00165DC0(char *, char *);
s32 func_0024D4F8(void *, V3_F390 *, Ent_F390 *, f32);

void func_002AF390(Spell_F390 *s, s8 id, Ent_F390 *ent, void *owner)
{
    V3_F390 v;
    V3_F390 off;
    V3_F390 unused;
    V3_F390 c;
    Sub_F390 *p;
    void *h;

    s->id = id;
    off.x = 0.0f;
    off.y = 0.0f;
    off.z = 60.0f;
    v.x = ent->pos.x + off.x;
    v.y = ent->pos.y;
    v.z = ent->pos.z + off.z;
    s->owner = owner;
    s->vt = D_0044E670;
    s->ent = ent;
    s->unk4 = 0;
    D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
    s->rnd = D_00483E5C >> 16;
    s->vt = D_00452510;
    p = &s->sub0;
    p->b9 = 0;
    s->pos = v;
    p->f24 = 156.0f;
    p->f28 = D_00482C8C;
    p->f2C = 0.0f;
    p->s12 = 0x4D;
    p->s14 = 0x4C;
    p->f1C = 156.0f;
    p->f20 = D_00482C8C;
    p->sA = 0x4D;
    p->sC = 0x4C;
    p->sE = 0xBB;
    p->s10 = 0;
    p->s16 = 0xBB;
    p->s18 = 0;
    p->b8 = 0;
    ovl_ntgui2_func_0013D230(p);
    h = func_00165DC0(D_00486430, D_00478FA8);
    c = s->ent->pos;
    s->unk54 = func_0024D4F8(h, &c, s->ent, 1.0f);
}
