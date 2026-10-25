extern "C" {
struct Vec3 { f32 x, y, z; };
struct Unit { char pad[0xC]; s32 flags; char pad2[0xAC - 0x10]; s8 unkAC; char pad3[0x36C - 0xAD]; f32 unk36C; };
struct Ent { char pad[0x10]; Vec3 pos; char pad2[0x38 - 0x1C]; s16 unk38; };
struct Node { Node *next; char pad[8]; Unit *unit; };
struct VtEnt { s16 delta; s16 pad; s32 (*fn)(void *, s32, s32); };
struct HRef { VtEnt *p; HRef() { p = 0; } };
struct Owner { char pad[0x60]; VtEnt *vt; };
struct Spell {
    s8 id;
    s32 unk4;
    Owner *owner;
    Ent *ent;
    u32 rnd;
    VtEnt *vt;
    HRef list;
    s32 unk1C[(0x6C - 0x1C) / 4];
    s32 unk6C;
    s16 unk70;
    int unk74;
};
extern VtEnt D_0044E670[];
extern VtEnt D_00450FE0[];
extern char D_00477EB8[];
extern char D_004861E8[];
u32 D_00483E5C;
s32 D_004844A4;
extern const f32 D_00482808;
void *func_00165DC0(char *, char *);
void func_0024D308(void *, Ent *, f32);
s32 func_0010B1C8(Unit *);
void func_001535D0(Vec3, s32, HRef *, s32, f32, f32);
s32 func_00180260(void);
void func_00194300(HRef *);
void func_00194390(HRef *, Unit *, Unit *);

Spell *func_00298E10(Spell *s, s32 id, Ent *ent, Owner *owner)
{
    VtEnt *e;
    s32 n;
    s32 cnt;
    Node *p;
    Unit *u;
    HRef *l;

    cnt = 0;
    s->id = id;
    s->owner = owner;
    s->vt = D_0044E670;
    s->unk4 = 0;
    s->ent = ent;
    D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
    s->vt = D_00450FE0;
    l = &s->list;
    l->p = 0;
    register HRef h;
    s->rnd = D_00483E5C >> 16;
    e = &s->owner->vt[11];
    s->unk6C = D_004844A4;
    s->unk70 = 0;
    n = e->fn((char *)s->owner + e->delta, 0, s->id);
    s->unk74 = 0;
    func_0024D308(func_00165DC0(D_004861E8, D_00477EB8), s->ent, 1.0f);
    Vec3 pos = s->ent->pos;
    func_001535D0(pos, s->ent->unk38, &h, 0, D_00482808, 120.0f);
    for (p = (Node *)h.p; p != 0 && cnt < n; p = p->next) {
        u = p->unit;
        if (!(u->flags & 0x1000000) && func_0010B1C8(u) == 0 && u->unkAC == 0x10 && u->unk36C <= 0.0f) {
            func_00194390(l, u, u);
            s->unk1C[cnt++] = func_00180260();
        }
    }
    func_00194300(&h);
}
}
