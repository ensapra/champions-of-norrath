typedef struct { f32 x, y, z; } V3;
void mat3x3_mul_vec3(V3 *, void *, V3 *, V3 *);

void func_00272E20(u8 *w, V3 *a, V3 *b) {
    V3 tmp;
    register V3 out;
    V3 cross;
    V3 *o = &out;
    V3 *p = (V3 *)(w + 0x4A4);
    f32 s = *(f32 *)(w + 0x2A0);
    V3 *m;
    V3 *q;
    f32 az, ay, ax, bx, by, bz;
    p->x += a->x * s;
    p->y += a->y * s;
    p->z += a->z * s;
    az = a->z; ay = a->y; ax = a->x;
    bx = b->x; by = b->y; bz = b->z;
    cross.z = bx * ay - by * ax;
    cross.y = bz * ax - bx * az;
    cross.x = by * az - bz * ay;
    tmp = cross;
    mat3x3_mul_vec3(o, w + 0x45C, &tmp, b);
    m = (V3 *)(w + 0x4C8);
    o->x = o->x * m->x;
    q = (V3 *)(w + 0x4B0);
    *(s32 *)(w + 0x860) = 1;
    o->y = o->y * m->y;
    o->z = o->z * m->z;
    q->x += o->x;
    q->y += o->y;
    q->z += o->z;
}
