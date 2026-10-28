extern void *func_001441B8(s32);
extern s32 func_00194498(void *, void *, ...);
extern u32 D_0044D498[];
extern u32 D_004498B0[];
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
  u32 f44, vt;
  u16 h4C, h4E, h50, h52;
  u32 f54;
  u8 b58;
};
struct Obj *func_001278E8(struct Obj *in)
{
  struct Obj *out = func_001441B8(0x5C);
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
    out->vt = (u32) D_004498B0;
    { u16 h = in->h38; f32 f = in->f30; out->h38 = h; out->f30 = f; }
    { u16 h = in->h4C; f32 f = in->f3C; out->h4C = h; out->f3C = f; }
    out->h4E = in->h4E;
    {
      u32 b = in->f34;
      u32 a = in->f2C;
      f32 f = in->f40;
      u32 w = in->f44;
      u16 h = in->h50;
      out->f34 = b;
      out->f2C = a;
      out->f40 = f;
      out->f44 = w;
      out->h50 = h;
    }
    out->f54 = in->f54;
    out->h52 = in->h52;
    out->b58 = in->b58;
    result = out;
  } else {
    result = 0;
  }
  return result;
}
