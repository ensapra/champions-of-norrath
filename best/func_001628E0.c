typedef struct Tex_1628
{
  u8 pad0[8];
  s16 h;
  u8 pad1[0x610 - 0xA];
  s32 used;
  struct Tex_1628 *prev;
  struct Tex_1628 *next;
  s32 time;
} Tex_1628;
typedef struct 
{
  u64 *p;
  u64 *q;
} Pkt_1628;
s32 func_00161DF0(Tex_1628 **, s32);
extern s32 D_004844A8;
extern Tex_1628 *D_00486914;
extern Tex_1628 *D_00486918;
extern Tex_1628 D_006CA1C0;
extern Tex_1628 D_006CA800;
inline static Tex_1628 *Get_1628(Tex_1628 **pt)
{
  Tex_1628 *t = *pt;
  if (t == (&D_006CA800))
  {
    *pt = 0;
    t->used = 0;
    t = 0;
  }
  if (t == 0)
  {
    func_00161DF0(pt, 1);
    t = *pt;
  }
  return t;
}

inline static void Touch_1628(Tex_1628 *t)
{
  Tex_1628 *n = t->next;
  t->time = D_004844A8;
  if (n != 0)
  {
    if (t->prev != 0)
      t->prev->next = n;
    else
      D_00486918 = n;
    t->next->prev = t->prev;
    t->prev = D_00486914;
    D_00486914->next = t;
    D_00486914 = t;
    t->next = 0;
  }
}

inline static void Ref_1628(Pkt_1628 *pk, void *addr, s32 size)
{
  u64 *r = pk->p;
  pk->q = r + 2;
  pk->p = r + 4;
  r[1] = 0;
  r[0] = ((((u64) ((u32) addr)) << 32) | (((s64) (size + 31)) >> 4)) | 0x30000000;
}

inline static void Tag_1628(u64 *q, u64 a, u64 b)
{
  q[0] = a;
  q[1] = b;
}

inline s16 inline_fn(Tex_1628 *arg0)
{
  return arg0->h;
}

void func_001628E0(Pkt_1628 *pk, Tex_1628 **pt)
{
  Tex_1628 *q = Get_1628(pt);
  volatile unsigned int new_var;
  if (q != 0)
  {
    Touch_1628(q);
  }
  else
  {
    q = &D_006CA1C0;
  }
  new_var = inline_fn(q);
  Ref_1628(pk, q, new_var * 24);
  Tag_1628(pk->q, 0x10000000, 0x1400003A);
}
