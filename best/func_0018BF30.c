extern s32 func_0015EB80(void *, s32, s32, s32, s32);
typedef struct 
{
  u64 a;
  u64 b;
} QW;
s32 D_004844C8;
s8 D_004866CC;
void func_0018BF30(void)
{
  struct 
  {
    QW *end;
    QW *tag;
    QW *gif;
    u32 *vif;
  } sp;
  QW *p;
  QW *q;
  QW *r;
  QW *s;
  QW *end;
  u32 *v;
  s64 t;
  if (D_004866CC == 0)
  {
    p = (QW *) D_004844C8;
    end = p + 4;
    q = p + 1;
    r = p + 2;
    s = p + 3;
    q->a = 0x1000000000008000ULL;
    q->b = 0xE;
    r->b = 0x40;
    r->a = 0x01BF000004FF0000ULL;
    s->a = 0x01BF000004FF0000ULL;
    s->b = 0x41;
    v = ((u32 *) p) + 3;
    q->a |= ((((u64 *) end) - ((u64 *) q)) - 2) >> 1;
    ((u32 *) p)[2] = 0x11000000;
    t = (((((u64 *) end) - ((u64 *) p)) - 2) >> 1) | 0x10000000;
    p->a = t;
    *v = (((((char *) end) - ((char *) v)) - 4) >> 4) | 0x50000000;
    sp.end = end;
    sp.tag = p;
    sp.gif = q;
    sp.vif = v;
    if (((t >> 28) & 7) == 1)
    {
      p->a = (t & ((s32) 0x8FFFFFFF)) | 0x60000000;
    }
    else
    {
      sp.tag = 0;
      end->b = 0;
      sp.end = p + 5;
      end->a = 0x60000000;
    }
    {
      void *old = (void *) D_004844C8;
      D_004844C8 = (s32) sp.end;
      func_0015EB80(old, 4, 0, 0, 0);
    }
  }
}
