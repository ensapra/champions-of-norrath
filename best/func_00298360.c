struct Vec3 { f32 x, y, z; };
struct HRef { void *p; HRef() { p = 0; } };
struct Cfg { char pad[0x60]; virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual s32 Get(s32 a, s32 b); };
struct Node { Node *next; s32 pad; s32 pad2; struct Ent *ent; };
struct Ent { char pad[0xC]; u32 flags; char pad2[0x36C - 0x10]; f32 life; };
struct Tgt { char pad[0x10]; Vec3 pos; char pad2[0x38 - 0x1C]; s16 id; };
struct Lst { s32 head; };
struct Obj {
    s8 kind; s32 f4; Cfg *cfg; Tgt *tgt; s32 f10; void *f14; Lst lst; s32 f1C; s32 arr[20]; s16 f70; s32 f74;
};
extern "C" {
extern char D_0044E670[], D_00450F20[], D_00477E08[], D_004861C0[];
f32 D_004827E4;
u32 D_00483E5C;
s32 D_004844A4;
s32 func_0010B1C8(void *);
void func_001535D0(Vec3 *, s16, HRef *, s32, f32, f32);
s32 func_00165DC0(char *, char *);
s32 func_00180260();
void func_00194300(HRef *);
void func_00194390(void *, void *, void *);
void func_0024D308(s32, Tgt *, f32);
void func_00298360(Obj *o, s32 k, Tgt *t, Cfg *c) {
    HRef h;
    Vec3 v;
    s32 n, i;
    s32 *out;
    Node *node;
    Lst *l = &o->lst;
    i = 0;
    o->kind = k;
    o->cfg = c;
    o->f14 = D_0044E670;
    o->f4 = 0;
    o->tgt = t;
    D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
    o->f14 = D_00450F20;
    l->head = 0;
    o->f10 = D_00483E5C >> 16;
    o->f1C = D_004844A4;
    n = c->Get(0, *(s8 *)o);
    o->f70 = 0;
    o->f74 = 0;
    func_0024D308(func_00165DC0(D_004861C0, D_00477E08), o->tgt, 1.0f);
    v = o->tgt->pos;
    func_001535D0(&v, o->tgt->id, &h, 0, D_004827E4, 139.0f);
    node = (Node *)h.p;
    if (node && n > 0) {
        out = &o->arr[0];
        do {
            Ent *e = node->ent;
            if (!(e->flags & 0x1000000) && func_0010B1C8(e) == 0 && e->life <= 0.0f) {
                i++;
                func_00194390(l, e, e);
                *out++ = func_00180260();
            }
            node = node->next;
        } while (node && i < n);
    }
    func_00194300(&h);
}
}
