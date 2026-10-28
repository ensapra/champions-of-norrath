typedef struct { f32 x, y, z; } V3;
typedef struct {
    char p0[0x10]; V3 pos; f32 r1C;
} Ent;
s32 func_001102B8(Ent *a, V3 *b) {
    V3 d;
    V3 t = *b;
    d.x = t.x - a->pos.x;
    d.y = t.y - a->pos.y;
    d.z = t.z - a->pos.z;
    if (d.x * d.x + d.y * d.y + d.z * d.z < a->r1C) return 1;
    return 0;
}
