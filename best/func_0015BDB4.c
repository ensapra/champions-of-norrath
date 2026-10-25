void func_00152C8C(s32, void *);
void func_0015BDB4(u8 *o, u8 a, s32 *x, s32 *y, s32 *z)
{
  s16 buf[8];
  int new_var;
  f32 f;
  f32 t;
  if (new_var = ((s8) a) >= 0)
  {
    func_00152C8C(a, buf);
    *x = buf[6];
    *y = buf[4];
    *z = buf[5];
  }
  else
  {
    *x = 0;
    *y = 0;
    *z = 0;
  }
  t = *x;
  f = *((f32 *) (o + 0xCA4));
  *x = t * f;
  t = *y;
  *y = t * f;
  t = *z;
  *z = f * t;
}
