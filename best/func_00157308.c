typedef struct {
    f32 x, y, z;
} Vec3_00157308;

f32 D_0047FEC4;
f32 D_0047FEC8;

f32 func_00157308(Vec3_00157308 *p, Vec3_00157308 *d, Vec3_00157308 *q, Vec3_00157308 *n) {
    f32 dn;
    f32 dist;
    f32 t;
    f32 k;
    Vec3_00157308 v;
    Vec3_00157308 tmp;
    Vec3_00157308 *pt;

    dn = d->x * n->x + d->y * n->y + d->z * n->z;
    dist = n->x * (p->x - q->x) + n->y * (p->y - q->y) + n->z * (p->z - q->z);
    if (dn >= 0.0f || dist < 0.0f) {
        return -1.0f;
    }
    pt = &tmp;
    pt->x = n->x * dist;
    tmp.y = n->y * dist;
    tmp.z = n->z * dist;
    v = *pt;
    t = -(v.x * d->x + v.y * d->y + v.z * d->z);
    if (__builtin_fabsf(t) > D_0047FEC4) {
        k = dist / t;
    } else {
        k = dist * D_0047FEC8;
    }
    return dist * k;
}
