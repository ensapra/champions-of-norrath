typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} V3;
typedef struct 
{
  char p0[0x10];
  V3 pos;
  char p1c[0x30];
  s32 a4C;
  s32 a50;
  char p54[4];
  s32 a58;
  f32 a5C;
  s32 a60;
  s8 a64;
} O;
extern const f32 D_004815AC;
s8 func_00142158(void *, s8, s32);
void func_0024C5F8(s32);
s32 func_0024C6A8(s32, s32, f32, f32, f32);
void func_0024CF80(s32);
s32 func_0024D4F8(s32, V3 *, f32);
void func_0024D708(s32, f32);
void func_0024F7F8(s32, V3 *, f32);
inline int inline_fn(O *arg0)
{
  return arg0->a50 != 0;
}

void func_00216750(O *o)
{
  s8 old = o->a64;
  struct 
  {
    f32 pad[4];
    V3 v;
  } L;
  o->a64 = func_00142158(o, old, o->a58);
  if ((old == 0) && (o->a64 != 0))
  {
    if (o->a60 != (-1))
    {
      func_0024CF80(o->a60);
    }
    if (o->a4C != 0)
    {
      L.v = o->pos;
      o->a60 = func_0024D4F8(o->a4C, &L.v, o->a5C);
    }
    if (inline_fn(o))
    {
      o->a60 = func_0024C6A8(o->a50, 0, 1.0f, o->a5C, 0.0f);
    }
    func_0024C5F8(o->a60);
  }
  if ((old != 0) && (o->a64 == 0))
  {
    if (o->a60 != (-1))
    {
      func_0024CF80(o->a60);
    }
  }
  if (o->a60 != (-1))
  {
    if (o->a4C != 0)
    {
      func_0024D708(o->a60, o->a5C);
    }
    if (inline_fn(o))
    {
      func_0024F7F8(o->a60, &o->pos, D_004815AC);
    }
  }
}
