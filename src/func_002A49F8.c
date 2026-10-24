s32 func_001671F8(char *);
void func_00190E20(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern char D_004786C0[];
f32 D_00482A94;
void func_002A49F8(void *arg0, s32 arg1, s32 arg2)
{
  char *p1 = ((char *) (*((s32 *) (((char *) arg0) + 0x60)))) + 0x58;
  s32 (*fn1)(void *, s32, s32) = *((s32 (**)(void *, s32, s32)) (p1 + 4));
  s32 r0 = fn1(((char *) arg0) + (*((s16 *) p1)), 0, arg2);
  char *p2 = ((char *) (*((s32 *) (((char *) arg0) + 0x60)))) + 0x58;
  s32 (*fn2)(void *, s32, s32) = *((s32 (**)(void *, s32, s32)) (p2 + 4));
  s32 r1 = fn2(((char *) arg0) + (*((s16 *) p2)), 1, arg2);
  s32 id;
  f32 base;
  f32 scaled;
  s32 rnd;
  void (*fp)(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
  id = func_001671F8(D_004786C0);
  base = (f32) r0;
  scaled = base + (base * D_00482A94);
  if (0.0f <= scaled)
  {
    rnd = scaled + 0.5f;
  }
  else
  {
    rnd = scaled - 0.5f;
  }
  fp = func_00190E20;
  fp(arg1, id, base, (f32) rnd, (f32) r1, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
}
