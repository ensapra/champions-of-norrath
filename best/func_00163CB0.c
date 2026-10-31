extern f32 D_0034BA08[];
extern f32 D_006CB078[];
s32 D_00483E58;
inline int inline_fn(s32 arg0)
{
  return arg0 + 1;
}

f32 func_00163CB0(s32 arg0, s32 arg1)
{
  s32 a2 = arg1 * 2;
  s32 idx = 0;
  u32 t;
  f32 f;
  if (arg1 > 0)
  {
    t = (((u32) D_00483E58) * 0x19660D) + 0x3C6EF35F;
    D_00483E58 = (s32) t;
    idx = (((s32) (t >> 16)) % inline_fn(a2)) - a2;
  }
  idx += 0x40;
  if (idx < 0)
  {
    idx = 0;
  }
  if (idx >= 0x80)
  {
    idx = 0x7F;
  }
  f = D_006CB078[idx];
  f *= D_0034BA08[arg0];
  if (f < 0.0f)
  {
    f = 0.0f;
  }
  if (f > 1.0f)
  {
    f = 1.0f;
  }
  return f;
}
