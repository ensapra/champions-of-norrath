typedef struct 
{
  s32 a;
  s32 b;
  s32 c;
} V12;
typedef struct 
{
  char p0[0xC];
  s32 f0C;
  char p1[0xC];
  f32 f1C;
  f32 f20;
  char p2[4];
  s8 b28;
  s8 b29;
  char p3[0xE];
  s16 h38;
  char p4[0xE];
  void *p48;
  s32 f4C;
  s32 f50;
  s32 f54;
  s32 f58;
  s32 f5C;
} O;
extern char D_0044CA78[];
void func_001411F0(O *, V12 *, s32, s32);
s32 func_00165DC0(s32, s32);
volatile char func_00155340(O *o, V12 *v, s16 h, s32 flags, s32 x, s32 y, s32 a6, s32 a7, s32 a8)
{
  V12 t = *v;
  func_001411F0(o, &t, 0, 0);
  o->f0C |= flags;
  o->f20 = x;
  o->f1C = y;
  o->f54 = a8;
  o->h38 = h;
  o->b28 = y;
  o->b29 = x;
  o->f4C = a6;
  o->f50 = a7;
  o->p48 = D_0044CA78;
  o->f58 = func_00165DC0(a6, a7);
  o->f5C = func_00165DC0(o->f4C, o->f54);
}
