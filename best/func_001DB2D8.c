typedef struct { f32 x, y, z; } V3f;
typedef struct { V3f pos; f32 p0; V3f d; f32 p1; f32 a[4]; f32 b[4]; char c40[16]; char c50[16]; } Loc;
typedef struct { char p[0xC]; u32 flags; char q[0x5C]; f32 f6C[4]; f32 f7C[4]; f32 f8C; } Ob;
extern s32 func_001D0E08(V3f *, s32);
extern s32 func_0016CD50(s32);
extern f32 func_0015A070(s32);
extern f32 func_0015A100(s32);
extern void func_0016C238(s32, s32, V3f *, s16, s32, void *, void *, s32, f32);
extern void func_001815C8(void *, s32, s32, s32, s32, s32, s16, s32, f32, f32);
s32 D_004844A4;
s32 D_00484F68;
f32 D_00480854;
f32 D_00480858;
f32 D_0048085C;

void func_001DB2D8(Ob *o, s32 id, s32 arg2, V3f *pp, s16 ang, s32 a5, s16 *s6, s16 *s7, f32 unused, f32 f0, f32 mul, f32 dur, s32 mode, s32 add) {
    Loc L;
    s32 n, i;
    f32 dx, dy;
    f32 *pa, *pb;
    V3f *dp;
    L.pos = *pp;
    if (!func_001D0E08(&L.pos, id)) return;
    if (!id) return;
    n = func_0016CD50(id);
    if (n == 0) return;
    dx = func_0015A070(ang) * mul;
    dp = &L.d;
    dy = func_0015A100(ang) * mul;
    dp->x = dx;
    dp->y = dy;
    dp->z = 0;
    L.pos.x += dp->x;
    L.pos.y += dp->y;
    if (o && (o->flags & 0x20)) {
        s32 j, k;
        pa = L.a;
        pb = L.b;
        for (j = 0; j < 4; j++) {
            pa[j] = s6[j];
            pb[j] = s7[j];
        }
        if (mode == 0) {
            f32 kk = dur * 60.0f;
            f32 *p = o->f6C;
            f32 *q = o->f7C;
            for (k = 0; k < 4; k++) {
                p[0] += pa[k] / kk;
                p[4] += pb[k] / kk;
                if (pa[k] < p[0]) p[0] = pa[k];
                if (pb[k] < *q) *q = pb[k];
                p++;
                q++;
            }
        } else if (mode == 2) {
            f32 kk = dur * 60.0f;
            f32 *p = o->f6C;
            for (k = 0; k < 4; k++) {
                p[0] -= pa[k] / kk;
                p[4] -= pb[k] / kk;
                if (p[0] < 0.0f) p[0] = 0.0f;
                if (p[4] < 0.0f) p[4] = 0.0f;
                p++;
            }
        }
        i = 0;
        if (n > 0) {
            f32 fadd = (f32)add;
            f32 c1 = D_00480854;
            f32 c2 = D_00480858;
            for (i = 0; i < n; i++) {
                func_0016C238(id, arg2, &L.pos, ang, i, L.c40, L.c50, 0, f0);
                func_001815C8(L.c40, (s32)o->f7C[0], (s32)o->f7C[1], (s32)o->f7C[2], (s32)o->f7C[3], D_00484F68, D_004844A4 << 6, 3, D_0048085C,
                    func_0015A100(D_004844A4 << 10) * 250.0f + c1 - c2 + fadd);
            }
        }
    }
}
