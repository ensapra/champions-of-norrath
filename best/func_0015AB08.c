typedef struct { f32 x, y, z; } V3;
typedef struct { f32 x, y, z, w; } V4;
typedef struct { f32 s; char p[0xC]; V3 pos; } Obj;
extern void mat3x3_mul_vec3(V3 *, void *, V3 *);
void func_0015AB08(Obj *o, V3 *b, V3 *c, V3 *d, V3 *e) {
    V4 L[4];
    V3 *r = (V3 *)&L[2];
    V3 *p;
    V3 *q;
    mat3x3_mul_vec3(r, (char *)o + 0x68, d);
    p = &o->pos;
    q = (V3 *)&L[1];
    L[0].z = b->z - p->z;
    L[0].y = b->y - p->y;
    L[0].x = b->x - p->x;
    L[3].x = r->y * L[0].z - r->z * L[0].y;
    L[3].y = r->z * L[0].x - r->x * L[0].z;
    L[3].z = r->x * L[0].y - r->y * L[0].x;
    *e = *(V3 *)&L[3];
    q->x = c->x * o->s;
    L[1].y = c->y * o->s;
    L[1].z = c->z * o->s;
    e->x += q->x;
    e->y += L[1].y;
    e->z += L[1].z;
}
