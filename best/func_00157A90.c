typedef struct { f32 m[16]; } Mat;
f32 D_0047FEF4;

#define IDENT(o, z, e) \
    o[0] = e; o[1] = z; o[2] = z; o[3] = z; \
    o[4] = z; o[5] = e; o[6] = z; o[7] = z; \
    o[8] = z; o[9] = z; o[10] = e; o[11] = z; \
    o[12] = z; o[13] = z; o[14] = z; o[15] = e;

void func_00157A90(f32 *o, Mat in) {
    s32 i, j, k, p;
    f32 pv, av, t, inv, f;
    f32 z = 0.0f, e = 1.0f;
    f32 e2 = 1.0f;
    f32 eps = D_0047FEF4;
    IDENT(o, z, e)
    for (i = 0; i < 4; i++) {
        p = i;
        pv = in.m[i * 4 + i];
        av = __builtin_fabsf(pv);
        for (j = i + 1; j != 4; j++) {
            f32 v = in.m[i * 4 + j];
            f32 a = __builtin_fabsf(v);
            if (av < a) { pv = v; av = a; p = j; }
        }
        if (p != i) {
            for (k = 0; k != 4; k++) {
                t = o[k * 4 + i]; o[k * 4 + i] = o[k * 4 + p]; o[k * 4 + p] = t;
                t = in.m[k * 4 + i]; in.m[k * 4 + i] = in.m[k * 4 + p]; in.m[k * 4 + p] = t;
            }
        }
        if (av <= eps) {
            f32 z2 = 0.0f;
            o[15] = e2; o[14] = z2;
            o[0] = e2; o[1] = z2; o[2] = z2; o[3] = z2;
            o[4] = z2; o[5] = e2; o[6] = z2; o[7] = z2;
            o[8] = z2; o[9] = z2; o[10] = e2; o[11] = z2;
            o[12] = z2; o[13] = z2;
            return;
        }
        inv = e2 / pv;
        for (k = 0; k != 4; k++) {
            in.m[k * 4 + i] *= inv;
            o[k * 4 + i] *= inv;
        }
        for (j = 0; j != 4; j++) {
            if (j != i) {
                f = in.m[i * 4 + j];
                for (k = 0; k != 4; k++) {
                    in.m[k * 4 + j] -= in.m[k * 4 + i] * f;
                    o[k * 4 + j] -= o[k * 4 + i] * f;
                }
            }
        }
    }
}
