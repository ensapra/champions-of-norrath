typedef struct { f32 x, y, z; } V3;
f32 D_0047FCD0;
s32 D_004844A0;
f32 func_001770F8(s32, V3 *, V3 *, s32, V3 *, f32);

s32 func_00141900(V3 *pos, V3 *vel, s32 a, V3 *nout, f32 r) {
    V3 d, p, n, t, m, push;
    V3 *dp = &d, *np = &n, *tp = &t, *mp = &m, *pu = &push, *pq = &p, *pp;
    f32 frac = 1.0f;
    f32 eps;
    f32 h, dot, f1;
    s32 hit = 0;
    s32 cnt = 10;
    *dp = *vel;
    eps = D_0047FCD0;
    *pq = *pos;
    pp = pq;
    do {
        tp->x = dp->x * frac;
        tp->y = dp->y * frac;
        tp->z = dp->z * frac;
        h = func_001770F8(D_004844A0, pp, tp, a, np, r);
        frac -= h;
        mp->x = tp->x * h;
        mp->y = tp->y * h;
        mp->z = tp->z * h;
        pp->x += mp->x;
        pp->z += mp->z;
        pp->y += mp->y;
        if (eps < frac) {
            dot = np->x * dp->x + np->y * dp->y + np->z * dp->z;
            f1 = eps - dot;
            hit = 1;
            if (f1 > 0.0f) {
                pu->x = np->x * f1;
                pu->y = np->y * f1;
                pu->z = np->z * f1;
                dp->x += pu->x;
                dp->y += pu->y;
                dp->z += pu->z;
            }
        }
    } while (--cnt != -1 && eps < frac);
    *pos = *pq;
    if (nout) *nout = n;
    return hit;
}
