typedef struct { f32 x, y, z; } V3;
typedef struct { char pad[0xC]; s32 flags; } Obj;
extern void func_0013EF30(V3 *, V3 *, Obj **, s32);
static inline void vadds(V3 *d, V3 *s, f32 r) {
    f32 x = s->x + r, y = s->y + r, z = s->z + r;
    d->x = x; d->y = y; d->z = z;
}
s32 func_00108528(V3 *arg0, f32 r) {
    V3 p;
    Obj *list[128];
    V3 mn, mx;
    V3 *a = &mn, *b = &mx;
    s32 n = 0;
    s32 i;
    p = *arg0;
    {
        f32 x = p.x - r, y = p.y - r, z = p.z - r;
        a->x = x; a->y = y; a->z = z;
    }
    {
        f32 x = p.x + r, y = p.y + r, z = p.z + r;
        b->x = x; b->y = y; b->z = z;
    }
    func_0013EF30(a, b, list, 0x80);
    for (i = 0; list[i] != 0; i++) {
        if ((list[i]->flags & 0x68) == 0x20) n++;
    }
    return n;
}
