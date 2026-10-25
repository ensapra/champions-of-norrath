void func_0014CE60(s32, s32, s32);
typedef struct 
{
  u8 p[0x5A0];
  s32 a;
  s32 b;
  s32 c;
  s32 d;
  s32 e;
  u8 q[0x20];
  s32 f;
  u8 r[0x3A8];
  s32 g;
  s32 h;
  u8 z[0x88];
  s32 i;
  s32 j;
  s32 k;
  s32 l;
} S;
void func_0016F754(S *p)
{
  s32 y = (p->b + p->f) + ((p->e - p->i) >> 1);
  s32 new_var;
  s32 x = (p->a + p->f) + p->l;
  func_0014CE60(p->h, x, y);
  new_var = x;
  func_0014CE60(p->g, new_var + (p->i + p->l), p->b + p->f);
}
