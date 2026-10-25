typedef struct { f32 x, y, z; } V3;
typedef struct {
    s32 pad0[4];
    V3 pos;
    f32 f1c;
    f32 f20;
} Obj;
extern s32 func_0015A198(f32, f32);
extern f32 func_0017B7E0(s32, V3 *, V3 *, s32, f32);
extern f32 D_0047FBA0;
s32 D_004844A0;

s32 func_0010A510(Obj *arg0, V3 *arg1, s16 arg2, s16 arg3, f32 lo, f32 hi) {
    V3 a;
    V3 b;
    V3 c;
    V3 d;
    V3 *pp = &arg0->pos;
    s32 diff;
    f32 t;
    f32 dx, dy, dist;
    a = *arg1;
    c.x = a.x - pp->x;
    c.y = a.y - pp->y;
    c.z = a.z - pp->z;
    b = c;
    diff = (s16)(0x4000 - func_0015A198(b.x, b.y));
    diff = (s16)(diff - arg2);
    if (diff < 0) diff = -diff;
    if (diff < arg3) {
        dx = pp->x - a.x;
        dy = pp->y - a.y;
        dist = dx * dx + dy * dy;
        if (dist < hi && lo <= dist) {
            d = *pp;
            d.z += arg0->f20;
            t = func_0017B7E0(D_004844A0, &d, &b, 3, D_0047FBA0);
            if (t < 0.0f) return 1;
            if (t > 1.0f) return 1;
            return 0;
        }
    }
    return 0;
}
