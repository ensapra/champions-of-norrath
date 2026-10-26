typedef struct 
{
  s32 a;
  s32 b;
  s32 c;
} V3;
typedef struct 
{
  char pad[0xC];
  s32 f0C;
} Inf;
typedef struct 
{
  char pad0[0xC];
  s32 f0C;
  char pad10[0xC];
  f32 f1C;
  f32 f20;
  Inf *inf;
  char pad28[0x10];
  s16 s38;
  char pad3a[0xE];
  char *f48;
  s16 s4C;
  char pad4e[6];
  s32 f54;
  s8 b58;
  s8 b59;
  char pad5a[2];
  char o5C[0x10];
} Obj;
s32 func_00140F60(void *, void *, s32);
f32 func_001410A0(void *, void *, s32);
void func_001411F0(void *, V3, void *);
s32 func_00143A80(void *, void *, s32);
u32 func_00153FA8(void *);
void func_001637A8(void *);
s64 func_0016C970(s32, s32);
f32 func_001D0FF8(void);
s32 func_003044FC(void *, void *);
extern char D_0034B6B1[];
extern void *D_0042C8A0[];
extern char D_0044CB98[];
s32 D_004844C0;
extern char D_00485398[];
extern char D_00485420[];
extern char D_00485438[];
extern char D_00485440[];
void func_00218790(Obj *p, V3 v, s16 s, s32 unused, s32 idx)
{
  f32 sp = 1.0f;
  char *q = p->o5C;
  u32 r;
  s32 k;
  func_001411F0(p, v, D_0042C8A0[idx]);
  p->f48 = D_0044CB98;
  q[5] = 1;
  p->s38 = s;
  p->b59 = idx;
  p->b58 = func_00153FA8(p) <= (2000 - 1);
  if (func_003044FC(D_0034B6B1, D_00485398))
  {
    if (!func_003044FC(D_0034B6B1, D_00485420))
    {
      p->b58 = (sp = 0);
    }
  }
  else
  {
    p->b58 = 0;
  }
  if (func_00143A80(p, D_00485438, 0))
  {
    sp = func_001410A0(p, D_00485438, 0);
  }
  if (func_00140F60(p, D_00485440, 0))
  {
    p->b58 = 1;
  }
  if (D_004844C0 & 0x10000)
  {
    sp = sp + sp;
  }
  if (D_004844C0 & 0x8000)
  {
    sp = sp * 3.0f;
  }
  r = func_00153FA8(p);
  p->s4C = (s16) ((((f32) ((s32) ((r % 12) + 12))) * sp) * func_001D0FF8());
  if (!func_003044FC(D_0034B6B1, D_00485420))
  {
    p->s4C = 0;
  }
  p->f0C |= 0x100018;
  p->f20 = 25.0f;
  p->f1C = 22.0f;
  k = 0;
  if (p->s4C != 0)
  {
    k = 1;
    if (p->s4C >= 0x28)
    {
      k = 2;
      if (p->s4C >= 0x50)
      {
        k = 4;
      }
    }
  }
  if (p->b58)
  {
    p->s4C = 0;
    k = 8;
  }
  p->f54 = (s32) func_0016C970(*((s32 *) (((char *) p->inf) + 0xC)), k);
  func_001637A8(q);
}
