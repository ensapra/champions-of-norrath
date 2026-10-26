typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} V3;
typedef struct 
{
  char pad0[0x10];
  V3 pos;
  f32 f1c;
  char pad1[(0x38 - 0x1C) - 4];
  s16 yaw;
} O;
extern u32 D_00483E5C;
extern s32 D_004844A0;
void func_00143630(void *);
f32 func_0015A070(s16);
f32 func_0015A100(s16);
s16 func_0015A198(f32, f32);
f32 func_00176378(s32, V3 *, f32);
f32 func_0017B7E0(s32, V3 *, V3 *, s32, f32);
void func_00108B68(O *o, f32 *t, f32 r)
{
  s16 step;
  V3 start;
  V3 p;
  V3 d;
  s32 i = 0;
  s16 a;
  s16 best;
  f32 bf = 0.0f;
  f32 z = bf;
  f32 s;
  D_00483E5C = (D_00483E5C * 0x19660D) + 0x3C6EF35F;
  best = o->yaw;
  start = o->pos;
  a = best;
  start.z += 12.0f;
  step = (((D_00483E5C >> 16) & 1) == 0) ? (0x800) : (-0x800);
  do
  {
    p.x = start.x + (func_0015A070(a) * r);
    p.y = start.y + (func_0015A100(a) * r);
    s = p.y - start.y;
    p.z = start.z;
    d.x = p.x - start.x;
    d.y = s;
    d.z = z;
    s = func_0017B7E0(D_004844A0, &start, &d, 0, 1200.0f);
    if ((s < z) || (s > 1.0f))
    {
      s = 1.0f;
    }
    if (bf < s)
    {
      f32 h;
      p.x = start.x + ((func_0015A070(a) * r) * s);
      p.y = start.y + ((func_0015A100(a) * r) * s);
      p.z = start.z;
      h = func_00176378(D_004844A0, &p, o->f1c);
      if (((o->pos.z - 12.0f) < h) && (h < (o->pos.z + 12.0f)))
      {
        bf = s;
        best = a;
      }
    }
    if (bf == 1.0f)
    {
      break;
    }
    i++;
    a += step;
  }
  while (i < 0x20);
  p.x = o->pos.x + ((func_0015A070(best) * r) * bf);
  p.y = o->pos.y + ((func_0015A100(best) * r) * bf);
  p.z = o->pos.z;
  o->pos = p;
  func_00143630(o);
  if (t != 0)
  {
    o->yaw = func_0015A198(t[1] - o->pos.y, t[0] - o->pos.x);
  }
}
