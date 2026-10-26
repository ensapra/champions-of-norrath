typedef struct { f32 x, y, z; } V3;
typedef struct { V3 p; V3 n; char pad[0x18]; f32 r; char pad2[0xC]; } Elem;
typedef struct { char pad[4]; s32 cnt; s32 f8; s32 flag; char pad2[4]; Elem *arr; } Obj;
typedef struct { Obj *o; Elem *e; V3 pos; } Hit;
extern f32 func_0015A1D0(Elem *, void *, V3 *);
extern Obj *D_008D57A8[];
s32 D_00485EA8;
f32 D_00482294, D_00482298;

s32 func_00278878(V3 *a, V3 *b, Hit *out, s32 max) {
    V3 d, t, p;
    s32 n = 0, i, j, cnt, off;
    Hit *h;
    d.x = a->x - b->x;
    d.y = a->y - b->y;
    d.z = a->z - b->z;
    off = 0;
    for (i = 0; i < D_00485EA8; i++) {
        Obj *o = D_008D57A8[i];
        V3 *tp;
        if ((o->flag ^ 1) & 1)
            continue;
        if (o->f8 != 0)
            cnt = o->cnt;
        else
            cnt = o->cnt - 1;
        h = (Hit *)((char *)out + off);
        tp = &t;
        for (j = 0; j < cnt; j++) {
            Elem *e = o->arr + j;
            f32 dn, s, r;
            tp->x = e->p.x - b->x;
            t.y = e->p.y - b->y;
            t.z = e->p.z - b->z;
            dn = d.x * e->n.x + d.y * e->n.y + d.z * e->n.z;
            if (dn > 0.0f && dn < D_00482294)
                dn = D_00482294;
            if (dn < 0.0f && D_00482298 < dn)
                dn = D_00482298;
            s = (tp->x * e->n.x + t.y * e->n.y + t.z * e->n.z) / dn;
            if (s < 0.0f || s > 1.0f)
                continue;
            p.x = b->x + d.x * s;
            p.y = b->y + d.y * s;
            p.z = b->z + d.z * s;
            r = func_0015A1D0(e, (char *)e + 0xC, &p);
            if (r < -0.25f || e->r + 0.25f < r)
                continue;
            h->e = e;
            n++;
            h->o = o;
            off += 0x18;
            h->pos = p;
            h++;
            if (n == max)
                return n;
        }
    }
    return n;
}
