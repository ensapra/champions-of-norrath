typedef struct { f32 x, y, z; } V3;
typedef struct { char p0[0x10]; V3 pos; char p1[0x440]; char m45C[0x48]; V3 t4A4; char m4B0[1]; } O72;
extern f32 D_004821A4;
void mat3x3_transposed_mul_vec3(V3 *, void *, void *);

V3 *func_002722B8(V3 *out, O72 *o, V3 *p) {
    V3 d, r, s, c;
    V3 *rp = &r;
    d.x = (p->x - o->pos.x) * D_004821A4;
    d.y = (p->y - o->pos.y) * D_004821A4;
    d.z = (p->z - o->pos.z) * D_004821A4;
    mat3x3_transposed_mul_vec3(rp, o->m45C, o->m4B0);
    c.x = rp->y * d.z - rp->z * d.y;
    c.y = rp->z * d.x - rp->x * d.z;
    c.z = rp->x * d.y - rp->y * d.x;
    s = c;
    out->x = s.x + o->t4A4.x;
    out->y = s.y + o->t4A4.y;
    out->z = s.z + o->t4A4.z;
    return out;
}
