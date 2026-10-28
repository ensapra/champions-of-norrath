extern void *func_001441B8(s32);
extern s32 func_00194498(void *, void *, ...);
extern u32 D_0044D498[];
extern u32 D_0044A6F0[];
struct C12 { u64 a; u32 b; } __attribute__((packed, aligned(4)));
struct Obj {
  u32 f0, f4, f8, fC;
  struct C12 c;
  f32 f1C, f20;
  u32 f24;
  u8 b28, b29;
  u32 f2C;
  f32 f30;
  u32 f34;
  u16 h38;
  f32 f3C, f40;
  u32 f44, vt, f4C, f50;
  u8 b54, b55;
  f32 f58, f5C;
};
struct Obj *func_00124008(struct Obj *in)
{
  struct Obj *out = func_001441B8(0x60);
  struct Obj *result;
  if (out) {
    out->vt = (u32) D_0044D498;
    func_00194498(&out->f0, &in->f0);
    func_00194498(&out->f4, &in->f4);
    func_00194498(&out->f8, &in->f8);
    out->fC = in->fC;
    { u64 a = in->c.a; u32 b = in->c.b; out->c.a = a; out->c.b = b; }
    { f32 f = in->f1C; u32 w = in->f24; out->f1C = f; out->f24 = w; }
    out->f20 = in->f20;
    out->b28 = in->b28;
    out->b29 = in->b29;
    out->vt = (u32) D_0044A6F0;
    {
      f32 f = in->f30; f32 g = in->f3C;
      out->f30 = f; out->f44 = in->f44;
      out->f3C = g; out->f4C = in->f4C;
    }
    {
      u32 a = in->f2C;
      u32 b = in->f34;
      f32 f = in->f40;
      u16 h = in->h38;
      u32 w = in->f50;
      out->f2C = a;
      out->f40 = f;
      out->f34 = b;
      out->h38 = h;
      out->f50 = w;
    }
    out->b54 = in->b54;
    out->b55 = in->b55;
    out->f58 = in->f58;
    out->f5C = in->f5C;
    result = out;
  } else {
    result = 0;
  }
  return result;
}
