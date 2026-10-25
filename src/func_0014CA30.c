extern f32 D_010D4550[];
f32 func_0014C97C(s32 a);
typedef struct Obj4C
{
  char pad000[0x74];
  void (*fn74)(void *);
  char pad078[0x94];
  void (*fn10C)(void *);
  char pad110[8];
  void (*fn118)(void);
} Obj4C;
typedef struct ObjCA30
{
  char pad000[0x4C];
  Obj4C *q4C;
  char pad050[0x5C];
  s32 fAC;
  s32 fB0;
  s32 fB4;
  char pad0B8[0x480];
  s32 f538;
} ObjCA30;
void func_0014B8E0(ObjCA30 *, s32);
void func_0014CBB8(ObjCA30 *);
void func_0014CA30(ObjCA30 *p)
{
  ObjCA30 *new_var;
  if (p->fAC != 0)
  {
    if (p->fB4 == 1)
    {
      if (p->fB0 == 0)
      {
        p->fB0 = p->fB4;
        return;
      }
      func_0014B8E0(p, 0);
    }
    return;
  }
  if ((p->q4C->fn118 != (s32)NULL) && (p->f538 != 0))
  {
    p->q4C->fn118();
  }
  new_var = p;
  if (p->q4C->fn10C != NULL)
  {
    p->q4C->fn10C(p);
  }
  func_0014CBB8(p);
  if (p->q4C->fn74 != NULL)
  {
    p->q4C->fn74(new_var);
  }
}
