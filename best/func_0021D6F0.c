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
  f32 f1C;
  f32 f20;
  char p1[0x38 - 0x24];
  s16 f38;
  char p2[0x48 - 0x3A];
  void *f48;
  s32 f4C;
  s32 f50;
  s32 f54;
  s32 f58;
  s32 f5C;
  s32 f60;
  s32 f64;
  s32 f68;
  char p3[0x74 - 0x6C];
  s32 f74;
  s32 f78;
  s8 f7C;
} Obj;
void func_001411F0(Obj *, V3 *, s32, s32);
s32 func_00165DC0(s32, s32);
s8 func_0017DB78(s32, V3 *, s32, V3 *, f32);
extern char D_0044CCB8[];
s32 D_004844A0;
void func_0021D6F0(Obj *o, V3 *v, s16 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 s0, s32 s8, s32 s10, s32 s18)
{
  W t0;
  Obj *new_var;
  V3 t1;
  t0.v = *v;
  func_001411F0(o, &t0.v, 0, s18);
  o->f78 = -1;
  o->f68 = s10;
  o->f48 = D_0044CCB8;
  o->f38 = a2;
  o->f0C |= 0x10;
  o->f54 = a5;
  o->f58 = a6;
  o->f5C = a7;
  o->f4C = a3;
  o->f50 = a4;
  o->f74 = 0;
  o->f60 = func_00165DC0(a3, a4);
  o->f64 = func_00165DC0(o->f4C, o->f54);
  o->f1C = (f32) s0;
  o->f20 = (f32) s8;
  new_var = o;
  if (new_var->f68 & 4)
  {
    new_var->f0C |= 0x100000;
  }
  t1 = o->pos;
  o->f7C = func_0017DB78(D_004844A0, &t1, 0, &t1, 12.0f);
}
