typedef struct Q
{
  char p[0x12A0];
  void *f12A0;
} Q;
typedef struct Obj
{
  s32 f0;
  s32 f4;
  Q *f8;
} Obj;
typedef struct Sub
{
  Obj *o;
  char p0[0x1C];
  s32 f20;
  s32 f24;
  char p1[0xC];
  s16 f34;
  char p2[6];
} Sub;
typedef struct 
{
  s32 n;
  char p[0x20];
  Sub *e;
  char q[0x44];
  s32 f6C;
  char r[0xC];
  s32 f7C;
} A;
extern s8 D_0034C030[];
extern s32 D_00355C70[];
extern s32 D_00485C58;
extern s32 D_00485C5C;
void func_00144558(s32);
s32 func_00172940(void);
void func_001729C8(s32);
s64 func_001752F8(A *a)
{
  s32 i = 0;
  s32 off;
  if (a->n > 0)
  {
    off = 0;
    do
    {
      Sub *e = (Sub *) (a->e + off);
      s32 k;
      off += 0x3C;
      if (e->f34 != 0)
      {
        k = D_0034C030[e->f34];
        if (k != (-1))
        {
          func_001729C8(D_00355C70[k] + e->f20);
        }
      }
      if (e->f24 & 0x80)
      {
        Obj *o = e->o;
        if (o->f8)
        {
          o->f8->f12A0 = 0;
          o->f8 = 0;
        }
      }
      i++;
    }
    while (i < a->n);
  }
  if (a->f6C)
  {
    func_001729C8(a->f6C);
  }
  if (a->f7C)
  {
    func_00144558(a->f7C);
    a->f7C = 0;
  }
  if (D_00485C58)
  {
    func_00144558(D_00485C58);
    D_00485C58 = 0;
  }
  if (D_00485C5C)
  {
    func_00144558(D_00485C5C);
    D_00485C5C = 0;
  }
  return func_00172940();
}
