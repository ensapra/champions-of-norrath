typedef struct { f32 x, y, z; } V3;
typedef struct { V3 v; f32 w; } V4;
typedef struct { char p0[0x10]; V3 pos; f32 r; char p1[0x219]; s8 f; } A0;
typedef struct { char p0[0x10]; V3 pos; f32 r; } A1;
extern s32 D_004844A0;
extern s32 D_004844A4;
s32 func_00108528(V3 *, f32);
s32 func_0010A6D8(A0 *, A1 *, s32, f32);
f32 func_0015A070(s16);
f32 func_0015A100(s16);
s32 func_0015A198(f32, f32);
f32 func_0017BF90(f32, s32, V3 *, V3 *, A0 *, A1 **, s32, s32);

s32 func_0010AFB8(A0 *a, A1 *b, s32 flag, f32 f1, f32 f2) {
    volatile s32 pad[4];
    V4 t;
    V4 d;
    V4 s;
    A1 *hit;
    s32 n;
    s16 ang;
    f32 r;
    s32 ret;
    if (b != 0) {
        ret = flag;
        if (((D_004844A4 ^ a->f) & 7) == 0) {
            t.v = b->pos;
            n = func_00108528(&t.v, b->r * 1.75f);
            ret = 0;
            if (func_0010A6D8(a, b, 0x4000, f1) != 0) {
                ang = 0x4000 - func_0015A198(b->pos.x - a->pos.x, b->pos.y - a->pos.y);
                f1 = 1.0f;
                d.v.x = func_0015A070(ang) * f2;
                d.v.y = func_0015A100(ang) * f2;
                d.v.z = 0;
                s.v = a->pos;
                s.v.z += 13.0f;
                hit = 0;
                r = func_0017BF90(f1, D_004844A0, &s.v, &d.v, a, &hit, 3, 0);
                if (flag == 0) {
                    if (n >= 4) {
                        if (r > 0.0f && r < f1) {
                            if (hit != b) ret = 1;
                        }
                    }
                } else {
                    if (n >= 3) {
                        if (r > 0.0f && r < f1) {
                            if (hit == b) ret = 1;
                        }
                    }
                }
            }
        }
    } else {
        ret = flag;
    }
    return ret;
}
