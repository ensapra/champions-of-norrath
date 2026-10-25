typedef struct {
    f32 unk0;
    f32 scale[3];
    u8 pad10[0xC];
    f32 q[4];
    u8 pad2C[0xC];
    f32 unk38[3];
    f32 rot[9];
    f32 mtx[9];
    f32 unk8C[3];
} S15B440;

void func_00159F90(f32 *q);
void func_00159CD8(f32 *out, f32 *m);
void func_00159150(f32 *out, f32 *a, f32 *b);
void mat3x3_mul_vec3(f32 *out, f32 *m, f32 *v);

static inline void quat_to_mat(f32 *m, f32 *q) {
    f32 s;
    f32 xs, ys, zs;
    f32 xx, yy, zz, xy, xz, yz, wx, wy, wz;

    s = 2.0f / (q[0] * q[0] + q[1] * q[1] + q[2] * q[2] + q[3] * q[3]);
    xs = q[0] * s;
    ys = q[1] * s;
    zs = q[2] * s;
    wx = q[3] * xs;
    wy = q[3] * ys;
    wz = q[3] * zs;
    xx = q[0] * xs;
    xy = q[0] * ys;
    xz = q[0] * zs;
    yy = q[1] * ys;
    yz = q[1] * zs;
    zz = q[2] * zs;
    m[0] = 1.0f - (yy + zz);
    m[3] = xy + wz;
    m[6] = xz - wy;
    m[1] = xy - wz;
    m[4] = 1.0f - (xx + zz);
    m[7] = yz + wx;
    m[2] = xz + wy;
    m[5] = yz - wx;
    m[8] = 1.0f - (xx + yy);
}

void func_0015B440(S15B440 *o) {
    f32 t[9];
    f32 inv[9];

    func_00159F90(o->q);
    quat_to_mat(o->rot, o->q);
    t[0] = o->rot[0] * o->scale[0];
    t[1] = o->rot[1] * o->scale[1];
    t[2] = o->rot[2] * o->scale[2];
    t[3] = o->rot[3] * o->scale[0];
    t[4] = o->rot[4] * o->scale[1];
    t[5] = o->rot[5] * o->scale[2];
    t[6] = o->rot[6] * o->scale[0];
    t[7] = o->rot[7] * o->scale[1];
    t[8] = o->rot[8] * o->scale[2];
    func_00159CD8(inv, o->rot);
    func_00159150(o->mtx, t, inv);
    mat3x3_mul_vec3(o->unk8C, o->mtx, o->unk38);
}
