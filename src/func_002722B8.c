typedef struct { f32 x, y, z; } V3;
typedef struct { char p0[0x10]; V3 pos; char p1[0x440]; char m45C[0x48]; V3 t4A4; char m4B0[1]; } O72;
extern f32 D_004821A4;
void mat3x3_transposed_mul_vec3(V3 *, void *, void *);

V3 *func_002722B8(V3 *out, O72 *o, V3 *p) {
    V3 d, r, s, c;
    V3 *rp = &r;
    V3 *t;
    f32 tx, ty, tz;
    f32 dx = p->x - o->pos.x;
    f32 dy = p->y - o->pos.y;
    f32 dz = p->z - o->pos.z;
    d.x = dx * D_004821A4;
    d.y = dy * D_004821A4;
    d.z = dz * D_004821A4;
    mat3x3_transposed_mul_vec3(rp, o->m45C, o->m4B0);
    t = &o->t4A4;
    tx = t->x;
    ty = t->y;
    tz = t->z;
    c.x = rp->y * d.z - rp->z * d.y;
    c.y = rp->z * d.x - rp->x * d.z;
    c.z = rp->x * d.y - rp->y * d.x;
    {
        V3 *sp = &s;
        s = c;
        out->x = sp->x + tx;
    }
    out->y = s.y + ty;
    out->z = s.z + tz;
    return out;
}
