typedef struct Obj4C
{
  char pad000[0x78];
  void (*fn78)(void *);
  void (*fn7C)(void *);
  char pad080[0x8C];
  void (*fn10C)(void *);
  char pad110[8];
  void (*fn118)(void);
} Obj4C;
typedef struct ObjCAE8
{
  char pad000[0x4C];
  Obj4C *q4C;
  char pad050[0x5C];
  s32 fAC;
  s32 fB0;
  s32 fB4;
  char pad0B8[0x480];
  s32 f538;
} ObjCAE8;
void func_0014B8E0(ObjCAE8 *, s32);
void func_0014CBB8(ObjCAE8 *);
void func_0014CAE8(ObjCAE8 *p)
{
  ObjCAE8 *new_var;
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
  if (p->q4C->fn78 != NULL)
  {
    p->q4C->fn78(new_var);
  }
  if (p->q4C->fn7C != NULL)
  {
    p->q4C->fn7C(new_var);
  }
}
