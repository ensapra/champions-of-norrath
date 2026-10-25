typedef struct 
{
  char p[0x4C];
  s16 a4C;
  s16 pad;
  s16 a50;
  s16 pad2;
  f32 a54;
  u8 a58;
} O;
extern char D_0034B6B1[];
extern char D_00485388[];
extern const f32 D_00481560;
extern const f32 D_00481564;
extern const f32 D_00481568;
s32 D_004844A0;
s32 func_00305328(char *, char *);
void func_001757D8(s32, s16, f32 *, s16);
void func_00143878(void *);
void func_00212DE0(O *o)
{
  f32 v[3];
  f32 x;
  f32 f;
  f32 z = 0.0f;
  v[0] = z;
  v[1] = z;
  v[2] = z;
  x = o->a54;
  o->a54 = x * D_00481560;
  o->a50 = (s16) (((f32) o->a50) + x);
  if (func_00305328(D_0034B6B1, D_00485388))
  {
    if ((o->a50 >= 0x43E9) && (o->a54 > z))
    {
      f = D_00481564;
      o->a54 = f;
      o->a54 = (-o->a54) * o->a54;
    }
  }
  else
    if ((o->a50 >= 0x637D) && (o->a54 > z))
  {
    f = D_00481568;
    o->a54 = (-o->a54) * f;
  }
  func_001757D8(D_004844A0, o->a4C, v, (s16) (o->a50 * ((s8) o->a58)));
  if (__builtin_fabsf(o->a54) < 1.0f)
  {
    func_00143878(o);
  }
}
