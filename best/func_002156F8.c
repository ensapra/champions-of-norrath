typedef struct 
{
  s32 a;
  s32 b;
  s32 c;
} V3;
typedef struct 
{
  s32 a;
  s32 b;
  s32 c;
  s32 d;
} V4;
void func_0013CB88(void);
void func_0013E730(s16 *);
void func_0013EB60(void *, V3);
void func_00157668(void *, V3, s16);
f32 func_0015A100(s32);
s32 func_00169848(s32, s32, void *, void *, s32);
void func_0016AE78(s32, s32, s32, V3, void *, void *, s64, s32, s32);
s32 func_0016CD50(s32);
void func_0016C238(s32, void *, V3, s16, s32, void *, void *, s32, f32);
void func_001815C8(void *, s32, s32, s32, s32, s32, s32, s32, f32, f32);
extern f32 D_00481590;
extern s32 D_00484F68;
extern s16 D_004853C0;
void func_002156F8(char *p)
{
  s16 sp10[4];
  char sp20[0x40];
  V3 t1;
  V3 t2;
  V4 sp80;
  V4 sp90[2];
  V3 t3;
  void *q = p + 0x4C;
  V3 *v = (V3 *) (p + 0x10);
  s32 a;
  s32 b;
  s32 c;
  if (*((s32 *) (p + 0x80)))
  {
    s32 t = ((*((s32 *) (p + 0x80))) * 4) - 0x20;
    sp10[3] = 0;
    if (t > 0x10)
    {
      t = 0x10;
    }
    if (v)
    {
      sp10[2] = t;
      sp10[0] = t;
      sp10[1] = t;
      func_0013E730(sp10);
    }
    else
    {
      sp10[2] = t;
      sp10[0] = t;
      sp10[1] = t;
      func_0013E730(sp10);
    }
  }
  else
  {
    func_0013E730(&D_004853C0);
  }
  t1 = *v;
  func_00157668(sp20, t1, *((s16 *) (p + 0x38)));
  a = *((s32 *) ((*((char **) (p + 0x24))) + 0xC));
  b = *((s32 *) ((*((char **) (p + 0x24))) + 0x14));
  c = func_00169848(a, 0, sp20, (*((s32 *) (p + 0x80))) ? (q) : (0), 0);
  t2 = *v;
  func_0016AE78(a, b, 0, t2, sp20, (*((s32 *) (p + 0x80))) ? (q) : (0), *((s64 *) (p + 0x78)), c, 0);
  if (*((s32 *) (p + 0x80)))
  {
    s32 n = func_0016CD50(a) - 1;
    t3 = *v;
    func_0016C238(a, q, t3, *((s16 *) (p + 0x38)), n, &sp80, sp90, 0, 1.0f);
    func_001815C8(&sp80, 0x64, 0x64, 0xBC, 0x40, D_00484F68, 0, 2, 18.0f, (func_0015A100((*((s32 *) (p + 0x80))) << 9) * 2000.0f) + D_00481590);
    *((V3 *) (p + 0xB8)) = *((V3 *) (&sp80));
    func_0013EB60(p + 0x88, *((V3 *) (p + 0xB8)));
  }
  func_0013CB88();
}
