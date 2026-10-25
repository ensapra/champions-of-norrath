typedef struct 
{
  s32 a;
  s32 b;
  s32 c;
} S12;
typedef struct 
{
  char p0[0xC];
  s32 f0C;
  char p1[0xC];
  f32 f1C;
  char p2[0x18];
  s16 f38;
  char p3[0xE];
  void *f48;
  s8 f4C;
  s8 f4D;
  s8 f4E;
  s8 f4F;
  s32 f50;
  s32 f54;
} Obj;
volatile int func_001411F0(Obj *, S12 *, char *);
void func_00143830(Obj *);
s32 func_00143A80(Obj *, char *, s32);
s8 func_00140F60(Obj *, char *, s32);
extern char D_00438E98[];
extern char D_00449430[];
extern char D_00477758[];
extern char D_004860B8[];
extern char D_004860C0[];
u32 D_00483E5C;
void func_002898B0(Obj *o, S12 *s, s16 n)
{
  S12 t = *s;
  func_001411F0(o, &t, D_00438E98);
  o->f48 = D_00449430;
  o->f1C = 60.0f;
  o->f38 = n;
  o->f0C = 0x4001;
  o->f4D = 0;
  func_00143830(o);
  if (func_00143A80(o, D_00477758, 0))
  {
    o->f50 = func_00140F60(o, D_00477758, 0) * 0x3C;
  }
  else
  {
    o->f50 = 0xF0;
  }
  if (func_00143A80(o, D_004860B8, 0))
  {
    o->f4E = func_00140F60(o, D_004860B8, 0);
  }
  else
  {
    o->f4E = 0;
  }
  if (func_00143A80(o, D_004860C0, 0))
  {
    o->f4F = func_00140F60(o, D_004860C0, 0);
  }
  else
  {
    o->f4F = 1;
  }
  D_00483E5C = (D_00483E5C * 0x19660D) + 0x3C6EF35F;
  o->f54 = ((s32) (D_00483E5C >> 16)) % o->f50;
}
