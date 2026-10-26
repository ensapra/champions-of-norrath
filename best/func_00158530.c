extern f32 sqrtf(f32);

typedef struct { f32 x, y, z; } V3;

void func_00158530(f32 *arg0, s32 arg1, void *arg2, f32 *arg3) {
    V3 S0, S1, S2, S3, S4, S5;
    V3 S7, S8;
    V3 res;
    V3 *p0 = (V3*)arg0;

    S5 = *p0;
    S4 = S5;
    S3 = S4;
    S2 = S3;
    S1 = S2;
    S0 = S1;

    if (arg1 > 1) {
        V3 *vp = p0 + 1;
        s32 n = arg1 - 1;
        do {
            if (vp->x < S3.x) S3 = *vp;
            if (vp->y < S4.y) S4 = *vp;
            if (vp->z < S5.z) S5 = *vp;
            if (S0.x < vp->x) S1 = *vp;
            if (S1.y < vp->y) S2 = *vp;
            if (S2.z < vp->z) S2 = *vp;
            vp++;
            n--;
        } while (n != 0);
    }

    f32 d0 = (S0.x-S3.x)*(S0.x-S3.x) + (S0.y-S3.y)*(S0.y-S3.y) + (S0.z-S3.z)*(S0.z-S3.z);
    f32 d1 = (S1.x-S4.x)*(S1.x-S4.x) + (S1.y-S4.y)*(S1.y-S4.y) + (S1.z-S4.z)*(S1.z-S4.z);
    f32 d2 = (S2.x-S5.x)*(S2.x-S5.x) + (S2.y-S5.y)*(S2.y-S5.y) + (S2.z-S5.z)*(S2.z-S5.z);

    f32 maxd;
    if (d0 < d1) { S7 = S4; S8 = S1; maxd = d1; }
    else { S7 = S3; S8 = S0; maxd = d0; }
    if (maxd < d2) { S7 = S5; S8 = S2; maxd = d2; }

    res.x = (S7.x + S8.x) * 0.5f;
    res.y = (S7.y + S8.y) * 0.5f;
    res.z = (S7.z + S8.z) * 0.5f;

    f32 dx = res.x - S8.x;
    f32 dy = res.y - S8.y;
    f32 dz = res.z - S8.z;
    f32 f0 = dx*dx + dy*dy + dz*dz;
    f32 f7 = sqrtf(f0);
    f32 f10 = f7 * f7;

    V3 *cur = p0;
    s32 counter = arg1;
    while (counter != 0) {
        V3 pt = *cur;
        f32 f9 = pt.y;
        f32 f3v = res.y;
        f32 f0v = res.x;
        f32 f2v = f9 - f3v;
        f32 f6v = pt.z;
        f32 dxv = pt.x - f0v;
        f32 f5v = res.z;
        f32 dzv = f6v - f5v;
        f32 dist2v = dxv*dxv + f2v*f2v + dzv*dzv;
        if (f10 < dist2v) {
            f32 f4v = sqrtf(dist2v);
            f32 new_r = (f7 + f4v) * 0.5f;
            f32 f1v = f4v - new_r;
            res.z = (new_r * res.z + f1v * pt.z) / f4v;
            res.x = (new_r * res.x + f1v * pt.x) / f4v;
            res.y = (new_r * res.y + f1v * pt.y) / f4v;
            f7 = new_r;
            f10 = new_r * new_r;
            f0 = res.z;
        } else {
            f0 = dist2v;
        }
        counter--;
        if (counter != 0) cur++;
    }

    *(V3*)arg2 = res;
    *arg3 = f7;
}
