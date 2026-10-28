s32 func_00138758(void *, s32, void **);
void *func_001441B8(s32);
void func_001E5278(void *, f32 *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_0013B220(void *arg0, s32 *arg1)
{
  struct { s32 *p; s32 pad[3]; f32 buf[4]; } l;
  f32 *v;
  void *obj;
  f32 x, y, z;

  func_00138758(arg0, arg1[1], (void **)&l.p);
  v = l.buf;
  x = l.p[0];
  y = l.p[1];
  z = l.p[2];
  v[0] = x;
  v[1] = y;
  v[2] = z;
  obj = func_001441B8(0xBC);
  if (obj)
  {
    func_001E5278(obj, v, 0, 0, arg1[3], arg1[4], arg1[5], arg1[6], arg1[7], arg1[8], arg1[9], arg1[10], arg1[11], arg1[12], 1.0f, arg1[2] * 0.01f);
  }
  return 0;
}
