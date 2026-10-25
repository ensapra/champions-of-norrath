struct V3 {
    f32 x, y, z;
    V3() {}
    void Rot(const V3 &in, f32 c, f32 s, s32 flag) {
        if (flag) {
            x = in.x * c + in.y * s;
            y = in.x * s - in.y * c;
        } else {
            x = in.x * c - in.y * s;
            y = in.x * s + in.y * c;
        }
        z = in.z;
    }
    f32 Dist2(const V3 &b) const {
        f32 dx = x - b.x;
        f32 dy = y - b.y;
        f32 dz = z - b.z;
        return dx * dx + dy * dy + dz * dz;
    }
};
struct E { s32 idx; s16 p4; u16 flags; s32 x; s32 y; s32 z; s16 a; s16 b; s32 pad18; };
struct O { char pad0[0x24]; char *tbl; char pad28[0x50 - 0x28]; s32 n; E *e; };
f32 D_00480000;

extern "C" s32 func_00175440(O *o, V3 *p) {
    V3 pos = *p;
    f32 best = 6400.0f;
    s32 found = -1;
    s32 i;
    for (i = 0; i < o->n; i++) {
        E *e = &o->e[i];
        V3 t, r;
        f32 d;
        t.x = e->x * 0.25f;
        t.y = e->y * 0.25f;
        t.z = e->z * 0.25f;
        r.Rot(t, e->a * D_00480000, e->b * D_00480000, *(u32 *)(o->tbl + e->idx * 0x3C + 0x24) & 0x40);
        d = pos.Dist2(r);
        if (d <= best) {
            best = d;
            found = i;
        }
    }
    if (found >= 0) {
        E *e = &o->e[found];
        if (!(e->flags & 1)) {
            e->flags |= 1;
            return found;
        }
    }
    return -1;
}
