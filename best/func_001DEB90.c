typedef struct { f32 x, y, z; } V3;
typedef struct { char pad[0x13]; s8 f13; } O;
typedef struct { char pad[0x24]; V3 p; } P;
typedef struct { char pad[0x24]; V3 t; } M;
void func_0016CA18(s32, s32, s32, void *, f32);
void func_00157668(void *, void *, s16);
void func_001564B8(void *, void *, void *);
s16 func_0015A198(V3 *, V3 *, f32, f32);
s16 func_001DEB90(O *o, P *p, V3 *v, s16 ang, s32 a4, s32 a5, s32 a6) {
    V3 sv = *v;
    M m;
    char m2[0x30];
    volatile V3 a, b;
    V3 d;
    s32 iz;
    func_0016CA18(a4, a5, o->f13 + a6, &m, 1.0f);
    func_00157668(m2, &sv, ang + 0x4000);
    func_001564B8(&m, &m, m2);
    b.x = p->p.x; a.x = m.t.x; a.y = m.t.y; a.z = m.t.z;
    b.y = p->p.y; b.z = p->p.z;
    d.y = a.y - b.y;
    d.x = a.x - b.x;
    d.z = a.z - b.z;
    iz = (s32)d.z;
    if (iz < 0) iz = -iz;
    if (!(d.x * d.x + d.y * d.y < (f32)iz)) {
        ang = func_0015A198((V3 *)&a, (V3 *)&b, d.y, d.x);
    }
    return ang;
}
