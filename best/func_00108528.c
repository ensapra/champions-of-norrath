typedef struct { f32 x, y, z; } V3;
typedef struct { char pad[0xC]; s32 flags; } Obj;
extern void func_0013EF30(V3 *, V3 *, Obj **, s32);
s32 func_00108528(V3 *arg0, f32 r) {
    V3 p;
    Obj *list[128];
    V3 mn, mx;
    V3 *a = &mn, *b = &mx;
    s32 n = 0;
    s32 i;
    p = *arg0;
    a->x = p.x - r; a->y = p.y - r; a->z = p.z - r;
    b->x = p.x + r; b->y = p.y + r; b->z = p.z + r;
    func_0013EF30(a, b, list, 0x80);
    if (list[0] == 0) return 0;
    i = 0;
    do {
        Obj *o = list[i++];
        if ((o->flags & 0x68) == 0x20) n++;
    } while (list[i] != 0);
    return n;
}
