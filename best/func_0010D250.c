typedef struct V3 { f32 x, y, z; } V3;
typedef struct Obj {
    char pad0[0x10];
    V3 pos;
    f32 r1c;
    char pad20[0x80];
    u64 flags;
    char padA8[0x260];
    V3 tgt;
    f32 maxr;
} Obj;
extern f32 D_0047FBC0;
extern f32 D_0047FBC4;
extern s32 D_004844A0;
extern s32 func_00153FA8(Obj *);
extern f32 func_00175FE0(s32, V3 *, f32);

static inline f32 dist2(V3 *a, V3 *b) {
    f32 x = a->x - b->x;
    f32 y = a->y - b->y;
    f32 z = a->z - b->z;
    return x * x + y * y + z * z;
}

V3 func_0010D250(Obj *o, s32 rad) {
    V3 res;
    f32 f = (f32)rad;
    s32 r, i;
    f32 d2;
    if (o->maxr < f) f = (f32)(s32)o->maxr;
    r = (s32)(f * D_0047FBC0);
    d2 = dist2(&o->pos, &o->tgt);
    if ((f32)(r * r) <= d2 || ((o->flags & 0x400000) && D_0047FBC4 < d2)) {
        res = o->tgt;
    } else {
        i = 0;
        do {
            f32 h;
            res.x = o->tgt.x + (f32)((func_00153FA8(o) & (r * 2)) - r);
            res.y = o->tgt.y + (f32)((func_00153FA8(o) & (r * 2)) - r);
            res.z = o->tgt.z;
            h = func_00175FE0(D_004844A0, &res, o->r1c);
            if (o->pos.z - 12.0f < h && h < o->pos.z + 12.0f) break;
        } while (++i < 10);
    }
    return res;
}
