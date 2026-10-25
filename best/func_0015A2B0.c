void func_0015A2B0(f32 *out, const f32 *q)
{
    f32 x = q[0];
    f32 y = q[1];
    f32 z = q[2];
    f32 w = q[3];
    f32 k = 2.0f / (x*x + y*y + z*z + w*w);
    f32 x2 = x * k;
    f32 y2 = y * k;
    f32 z2 = z * k;

    out[0] = 1.0f - (y * y2 + z * z2);
    out[1] = x * y2 + w * z2;
    out[2] = x * z2 - w * y2;
    out[3] = x * y2 - w * z2;
    out[4] = 1.0f - (x * x2 + z * z2);
    out[5] = y * z2 + w * x2;
    out[6] = x * z2 + w * y2;
    out[7] = y * z2 - w * x2;
    out[8] = 1.0f - (x * x2 + y * y2);
}
