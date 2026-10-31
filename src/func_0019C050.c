typedef struct 
{
  s32 cur;
  s32 max;
  s32 init;
  s32 wait;
  s32 attr;
  s32 opt;
} SP;
typedef struct 
{
  s32 f0;
  s32 f4;
  s32 f8;
  s32 fC;
  volatile s32 s0;
  volatile s32 s1;
  volatile s32 s2;
  s32 v1;
  s32 v2;
} O;
s32 CreateSema(SP *);
s32 WaitSema(s32);
s32 DeleteSema(s32);
s32 SignalSema(s32);
s32 func_0019C050(O *o, s32 x, s32 y)
{
  SP p;
  O *new_var;
  p.max = 1;
  p.init = 1;
  p.opt = 0;
  new_var = o;
  new_var->s0 = CreateSema(&p);
  if (new_var->s0 < 0)
  {
    return new_var->s0;
  }
  WaitSema(new_var->s0);
  new_var->v2 = x;
  new_var->v1 = y;
  new_var->fC = 0;
  new_var->f8 = 0;
  new_var->f0 = 0;
  new_var->f4 = 0;
  p.init = 0;
  new_var->s1 = CreateSema(&p);
  if (new_var->s1 < 0)
  {
    DeleteSema(new_var->s0);
    return new_var->s1;
  }
  new_var->s2 = CreateSema(&p);
  if (new_var->s2 < 0)
  {
    DeleteSema(new_var->s0);
    DeleteSema(new_var->s1);
    return new_var->s2;
  }
  SignalSema(new_var->s0);
  return 0;
}
