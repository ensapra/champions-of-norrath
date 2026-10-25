extern void *func_001441B8(s32);
extern s32 func_00194498(void *, void *);
extern u32 D_0044D498[];
extern u32 D_00448B00[];
struct C12
{
  u64 a;
  u32 b;
} __attribute__((packed, aligned(4)));
struct Obj
{
  u32 f0;
  u32 f4;
  u32 f8;
  u32 fC;
  struct C12 c;
  f32 f1C;
  f32 f20;
  u32 f24;
  u8 b28;
  u8 b29;
  u32 f2C;
  f32 f30;
  u32 f34;
  u16 h38;
  f32 f3C;
  f32 f40;
  u32 f44;
  u32 vt;
  u32 f4C;
  u32 f50;
  u32 f54;
  u32 f58;
  f32 f5C;
  u32 f60;
  u8 b64;
};
struct Obj *func_00129B78(struct Obj *in)
{
  struct Obj *out = func_001441B8(0x68);
  struct Obj *result;
  if (out)
  {
    out->vt = (u32) D_0044D498;
    func_00194498(&out->f0, &in->f0);
    func_00194498(&out->f4, &in->f4);
    func_00194498(&out->f8, &in->f8);
    out->fC = in->fC;
    {
      u64 a = in->c.a;
      u32 b = in->c.b;
      out->c.a = a;
      out->c.b = b;
    }
    {
      f32 f = in->f1C;
      u32 w = in->f24;
      out->f1C = f;
      out->f24 = w;
    }
    out->f20 = in->f20;
    out->b28 = in->b28;
    out->b29 = in->b29;
    out->vt = (u32) D_00448B00;
    out->f30 = in->f30;
    result = out;
    result->f44 = in->f44;
    result->f3C = in->f3C;
    {
      u32 b = in->f34;
      u16 h = in->h38;
      u32 a = in->f2C;
      u32 c = in->f4C;
      u32 d = in->f50;
      u32 e = in->f54;
      f32 g = in->f40;
      out->f34 = b;
      result->h38 = h;
      out->f40 = g;
      out->f2C = a;
      result->f4C = c;
      result->f50 = d;
      out->f54 = e;
      do
      {
      }
      while (0);
    }
    out->f5C = in->f5C;
    result->f58 = in->f58;
    out->f60 = in->f60;
    result->b64 = in->b64;
    result = out;
  }
  else
  {
    result = 0;
  }
  return result;
}
