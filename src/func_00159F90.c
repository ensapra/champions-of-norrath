void func_00159F90(f32 *q)
{
    f32 w = q[3];
    f32 x = q[0];
    f32 y = q[1];
    f32 z = q[2];
    f32 n = w*w + x*x + y*y + z*z;
    f32 s = 1.0f / sqrtf(n);

    q[3] = w * s;
    q[0] = x * s;
    q[1] = y * s;
    q[2] = z * s;
}
