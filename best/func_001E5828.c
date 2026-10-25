typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} V3;
typedef struct 
{
  V3 v;
  f32 pad[5];
} W;
typedef struct 
{
  char p0[0xC];
  s32 f0C;
  V3 pos;
  char p1[0x28 - 0x1C];
  s8 f28;
  char p2[0x48 - 0x29];
  void *f48;
  s32 f4C;
  s16 f50;
  s16 f52;
  s16 f54;
  s32 f58;
  s32 f5C;
} Obj;
volatile unsigned int func_001411F0(Obj *, V3 *, s32, s32);
void func_00143830(Obj *);
s32 func_001828D8(s32, s32, s32, s32, s32, s32, s32, f32);
void func_00183DD0(s32, V3 *);
extern char D_0044A5D0[];
f32 D_00480B18;
void func_001E5828(Obj *o, V3 *v, s32 a2, s32 a3, s32 a4, s32 a5)
{
  f32 f = D_00480B18;
  int new_var;
  W t0;
  Obj *new_var2;
  W t1;
  V3 t2;
  t0.v = *v;
  func_001411F0(o, &t0.v, 0, 0);
  o->f0C |= 0x4009;
  o->f4C = a2;
  o->f48 = D_0044A5D0;
  o->f50 = a3;
  o->f52 = a4;
  o->f54 = a5;
  func_00143830(o);
  o->f28 = 0x30;
  o->f58 = func_001828D8(1, 0xF4, 4, 0x56, 0x7E, 0xFA, 0xC8, f);
  new_var = 0xF4;
  new_var2 = o;
  t1.v = new_var2->pos;
  func_00183DD0(new_var2->f58, &t1.v);
  new_var2->f5C = func_001828D8(1, new_var, 4, 0x56, 0x7E, 0xFA, 0xC8, f);
  t2 = new_var2->pos;
  func_00183DD0(new_var2->f5C, &t2);
}
