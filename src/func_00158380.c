typedef struct { f32 x, y, z; } Vec3;
typedef struct { Vec3 min, max; } Box;

static inline void xform(Vec3 *p, Vec3 v, f32 *m) {
    p->x = m[0] * v.x + m[3] * v.y + m[6] * v.z + m[9];
    p->y = m[1] * v.x + m[4] * v.y + m[7] * v.z + m[10];
    p->z = m[2] * v.x + m[5] * v.y + m[8] * v.z + m[11];
}

void func_00158380(Box *b, f32 *m) {
    f32 t;

    xform(&b->min, b->min, m);
    xform(&b->max, b->max, m);
    if (b->max.x < b->min.x) {
        t = b->min.x;
        b->min.x = b->max.x;
        b->max.x = t;
    }
    if (b->max.y < b->min.y) {
        t = b->min.y;
        b->min.y = b->max.y;
        b->max.y = t;
    }
    if (b->max.z < b->min.z) {
        t = b->min.z;
        b->min.z = b->max.z;
        b->max.z = t;
    }
}
