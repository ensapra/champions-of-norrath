typedef struct { f32 x, y, z; } V3;
void func_0015B600(u8 *a, V3 *b, V3 *c, V3 *d, V3 *e) {
    V3 t, r, cr;
    V3 *rp = &r;
    V3 *p = (V3 *)(a + 0x10);
    d->x += c->x;
    d->y += c->y;
    d->z += c->z;
    t.x = b->x - p->x;
    t.y = b->y - p->y;
    t.z = b->z - p->z;
    cr.y = t.z * c->x - t.x * c->z;
    cr.z = t.x * c->y - t.y * c->x;
    cr.x = t.y * c->z - t.z * c->y;
    *rp = cr;
    e->x += rp->x;
    e->y += rp->y;
    e->z += rp->z;
}
