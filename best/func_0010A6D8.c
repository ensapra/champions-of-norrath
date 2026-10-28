typedef struct { f32 x, y, z; } V3;
typedef struct { u8 pad[0x10]; V3 pos; f32 r; f32 h; u8 pad2[0x14]; u16 angle; } A;
extern s32 func_0015A198(void *, f32, f32);
extern f32 func_0017B7E0(s32, V3 *, V3 *, s32, f32);
extern f32 D_0047FBA4;
extern s32 D_004844A0;

s32 func_0010A6D8(A *a, A *b, s16 arg2, f32 range) {
    s32 result = 0;
    V3 d;
    V3 pos;
    s32 ang;
    V3 *pa, *pb;
    f32 dx, dy;
    if (b) {
        d.x = b->pos.x - a->pos.x;
        d.y = b->pos.y - a->pos.y;
        d.z = (b->pos.z + b->h * 0.5f) - (a->pos.z + a->h * 0.5f);
        ang = (s16)(0x4000 - func_0015A198(a, d.x, d.y)) - a->angle;
        ang = __builtin_abs((s16)ang);
        if (ang < arg2) {
            pa = &a->pos;
            pb = &b->pos;
            dx = pa->x - pb->x;
            dy = pa->y - pb->y;
            if (dx * dx + dy * dy - b->r < range * range) {
                f32 v;
                pos = *pa;
                pos.z += a->h;
                v = func_0017B7E0(D_004844A0, &pos, &d, 3, D_0047FBA4);
                if (v < 0.0f || v > 1.0f) result = 1;
            }
        }
    }
    return result;
}
