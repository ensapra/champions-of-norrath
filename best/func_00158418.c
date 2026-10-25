typedef struct 
{
  char p0[0x98];
  s32 f98;
  char p1[0xAF0];
  s32 fB8C;
  char p2[4];
  s32 fB94;
  char p3[0x58];
  s32 fBF0;
  char p4[0x118];
  s32 fD0C;
  s32 fD10;
} W;
void func_0015AFAC(W *);
void func_0015B210(W *);
void func_0015B710(void);
s32 func_0015B974(W *, s32, s32);
void func_0015BA94(W *);
void func_0015BB8C(W *);
void func_0015BBCC(void);
s32 func_00158418(W *w)
{
  int new_var3;
  s32 *new_var;
  int new_var2;
  if (w == 0)
  {
    return 0;
  }
  if (w->fD10 == 0)
  {
    if (w->fD0C > 0)
    {
      func_0015B710();
      func_0015AFAC(w);
      func_0015BB8C(w);
      goto fin;
    }
    new_var2 = w->fBF0;
    if (new_var3 = w->fB8C < new_var2)
    {
      goto tail;
    }
    return 0;
  }
  if (w->fB8C < w->fB94)
  {
    func_0015BBCC();
  }
  new_var = &w->fB8C;
  if (w->fBF0 <= (*new_var))
  {
    return 0;
  }
  w->fD0C += func_0015B974(w, 1, 1);
  func_0015BA94(w);
  fin:
  func_0015B210(w);

  w->f98 = 2;
  return 1;
  tail:
  func_0015B974(w, 0, 1);

  func_0015AFAC(w);
  func_0015BA94(w);
  func_0015B210(w);
  w->f98 = 2;
  new_var2 = 0;
  return new_var2;
}
