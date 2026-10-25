void func_0015A460(f32 *m, f32 *q) {
    f32 x = q[0], y = q[1], z = q[2], w = q[3];
    f32 xx = x * x, yy = y * y, zz = z * z, ww = w * w;
    f32 s, xs, ys, zs, ws;
    ((s32 *)m)[11] = 0;
    ((s32 *)m)[3] = 0;
    ((s32 *)m)[7] = 0;
    s = 2.0f / (xx + yy + zz + ww);
    zs = z * s;
    ys = y * s;
    xs = x * s;
    m[6] = y * zs - w * xs;
    m[2] = x * zs + w * ys;
    m[1] = x * ys - w * zs;
    m[10] = 1.0f - (x * xs + y * ys);
    m[0] = 1.0f - (y * ys + z * zs);
    m[5] = 1.0f - (x * xs + z * zs);
    m[4] = x * ys + w * zs;
    m[8] = x * zs - w * ys;
    m[9] = y * zs + w * xs;
}
