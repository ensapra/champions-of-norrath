void func_0015A900(f32 *m, f32 *q)
{
  f32 x = q[0];
  f32 y = q[1];
  f32 z = q[2];
  f32 w = q[3];
  float new_var;
  f32 s = 2.0f / ((((x * x) + (y * y)) + (z * z)) + (w * w));
  f32 xs = x * s;
  f32 ys = y * s;
  f32 zs = z * s;
  f32 wx = w * xs;
  f32 wy = w * ys;
  f32 wz = w * zs;
  f32 xx = x * xs;
  f32 xy = x * ys;
  f32 xz = x * zs;
  f32 yy = y * ys;
  f32 yz = y * zs;
  f32 zz = z * zs;
  m[12] = 0.0f;
  m[15] = 1.0f;
  m[13] = 0.0f;
  m[14] = 0.0f;
  m[3] = 0.0f;
  m[7] = 0.0f;
  m[11] = 0.0f;
  m[0] = 1.0f - (yy + zz);
  m[1] = xy + wz;
  new_var = xx + yy;
  m[2] = xz - wy;
  m[4] = xy - wz;
  m[5] = 1.0f - (xx + zz);
  m[6] = yz + wx;
  m[8] = xz + wy;
  m[9] = yz - wx;
  m[10] = 1.0f - new_var;
}
