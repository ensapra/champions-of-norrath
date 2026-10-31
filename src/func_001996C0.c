typedef struct 
{
  u8 c[4];
} S4;
s32 func_0019ACEC(s32);
s32 func_0018A2A8(void *, s32, u8 *);
S4 func_001996C0(u8 *base, s32 off, s32 idx)
{
  S4 out;
  u8 txt[4];
  u8 raw[2];
  s32 t = (*((u16 *) ((base + (idx * 4)) + 0x120))) + off;
  *((u16 *) raw) = t;
  if (func_0019ACEC(t & 0xffff))
  {
    if (1)
    {
      txt[0] = 0;
    }
  }
  else
  {
    u8 lo = raw[0];
    if ((*((u16 *) raw)) < 255)
    {
      txt[0] = lo;
      txt[1] = 0;
    }
    else
    {
      txt[1] = lo;
      txt[2] = 0;
      txt[0] = raw[1];
    }
  }
  func_0018A2A8(&out, 4, txt);
  return out;
}
