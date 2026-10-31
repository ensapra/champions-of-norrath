typedef struct 
{
  char p0[0x5A0];
  s32 x;
  s32 y;
  s32 p5a8;
  s32 w;
  char p1[0x5D4 - 0x5B0];
  s32 off;
  char p2[0x888 - 0x5D8];
  s32 b88;
  s32 p8c;
  s32 b90;
  s32 b94;
  s32 b98;
  s32 b9c;
  s32 ba0;
  s32 ba4;
  s32 ba8;
  char p3[0x910 - 0x8AC];
  s32 h10;
  s32 h14;
  char p4[0x92C - 0x918];
  s32 q;
} O;
void func_0014CE60(s32, s32, s32);
inline int inline_fn(O *arg0, O *arg1)
{
  return arg0->x + arg1->off;
}

void func_0015F76C(O *p)
{
  {
    func_0014CE60(p->b94, inline_fn(p, p) - p->h14, (p->y + p->off) - p->h14);
  }
  func_0014CE60(p->b98, ((((p->q * 3) / 4) + p->x) + p->off) - p->h14, ((((p->q * 3) / 4) + p->y) + p->off) - p->h14);
  func_0014CE60(p->b9c, inline_fn(p, p) - p->h14, (p->y + p->off) - p->h14);
  func_0014CE60(p->b90, inline_fn(p, p), ((p->y + p->off) + p->b88) - p->h10);
  do
  {
    func_0014CE60(p->ba0, ((p->x + p->off) + p->b88) + 0x10, p->y + p->off);
    func_0014CE60(p->ba4, (p->x + p->off) + 0x10, (p->y + p->off) + 0x10);
  }
  while (0);
  func_0014CE60(p->ba8, (((p->x + p->off) + p->w) - p->b88) - 0x10, (p->y + p->off) + 0x10);
}
