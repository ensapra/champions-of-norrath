typedef struct { f32 x, y, z; } V3;
typedef struct Obj { char p0[0xC]; u32 flags; V3 pos; } Obj;
typedef struct Node { struct Node *next; char p4[8]; Obj *obj; } Node;
typedef struct List { Node *head; } List;

class Q {
public:
    char pad[0x48];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19();
    virtual s32 Check(Obj *o);
};

extern "C" {
extern f32 D_0047FE70, D_0047FE74;
void func_0013EF30(V3 *, V3 *, Obj **, s32);
f32 func_0015A070(s32);
f32 func_0015A100(s32);
f32 func_0015A218(V3 *, V3 *, V3 *);
void func_001945F0(List *, Node *, Obj *);

void func_001535D0(V3 *c, s32 ang0, List *l, Q *q, f32 r, f32 w) {
    V3 cc = *c;
    V3 mn, mx, d, a, b;
    Obj *buf[0x200];
    Obj **p;
    s16 ang = ang0;
    s16 t;
    f32 x;
    f32 zero = 0.0f;
    mn.x = cc.x - r; mn.y = cc.y - r; mn.z = cc.z - r;
    mx.x = cc.x + r; mx.y = cc.y + r; mx.z = cc.z + r;
    a.x = zero; a.y = zero;
    b.x = zero; b.y = zero;
    func_0013EF30(&mn, &mx, buf, 0x200);
    d.x = func_0015A070(ang);
    d.y = func_0015A100(ang);
    if (w != -1.0f) {
        x = w * 0.5f * D_0047FE70;
        x = x >= zero ? x + 0.5f : x - 0.5f;
        t = ang + (s32)x - 0x4000;
        a.x = func_0015A070(t);
        a.y = func_0015A100(t);
        x = w * 0.5f * D_0047FE74;
        x = x >= zero ? x + 0.5f : x - 0.5f;
        t = ang - (s32)x + 0x4000;
        b.x = func_0015A070(t);
        b.y = func_0015A100(t);
    }
    for (p = buf; *p; p++) {
        Obj *o = *p;
        Node *n;
        s32 found;
        V3 *op;
        f32 dd;
        if (!(o->flags & 0x20)) continue;
        if (o->flags & 0xD) continue;
        if (q && !q->Check(o)) continue;
        op = &o->pos;
        if (w != -1.0f) {
            if (func_0015A218(&cc, &a, op) < zero) continue;
            if (func_0015A218(&cc, &b, op) < zero) continue;
        }
        if (func_0015A218(&cc, &d, op) > zero) {
            found = 0;
            dd = (cc.x - op->x) * (cc.x - op->x) + (cc.y - op->y) * (cc.y - op->y);
            for (n = l->head; n; n = n->next) {
                V3 *np = &n->obj->pos;
                if ((cc.x - np->x) * (cc.x - np->x) + (cc.y - np->y) * (cc.y - np->y) <= dd) {
                    func_001945F0(l, n, o);
                    found = 1;
                    break;
                }
            }
            if (!found) func_001945F0(l, 0, o);
        }
    }
}
}
