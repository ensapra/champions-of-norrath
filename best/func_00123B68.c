typedef struct 
{
  s32 x;
  f32 y;
  f32 z;
} V3;
typedef struct X X;
typedef struct 
{
  s32 a;
  s32 b;
  void *c;
  X *d;
  u16 e;
  f32 f;
  u8 rest[0x3C - 0x18];
} B3C;
typedef struct 
{
  s32 f0;
  s32 f4;
  s32 f8;
  s32 fC;
  V3 p10;
  f32 f1C;
  f32 f20;
  s32 f24;
  u8 f28;
  u8 f29;
  void *f2C;
  f32 f30;
  X *f34;
  u16 f38;
  f32 f3C;
  f32 f40;
  s32 f44;
  void *vt;
  B3C g;
  V3 p88;
  u8 f94;
  u8 f95;
} Obj;
extern void *func_001441B8(s32);
extern void *func_00194498(void *, void *);
extern void ovl_ntgui2_func_0013D230(void *);
extern u8 D_0044D498[];
extern u8 D_0044A8A0[];
Obj *func_00123B68(Obj *src)
{
  X *new_var2;
  Obj *o = func_001441B8(0x98);
  Obj *r;
  int new_var3;
  volatile unsigned short new_var;
  if (o)
  {
    B3C *g;
    o->vt = D_0044D498;
    func_00194498(o, src);
    func_00194498(&o->f4, &src->f4);
    func_00194498(&o->f8, &src->f8);
    o->fC = src->fC;
    o->p10 = src->p10;
    o->f1C = src->f1C;
    o->f20 = src->f20;
    o->f24 = src->f24;
    o->f28 = src->f28;
    o->f29 = src->f29;
    o->vt = D_0044A8A0;
    new_var2 = src->f34;
    o->f30 = src->f30;
    new_var3 = src->f44;
    o->f38 = src->f38;
    o->f2C = src->f2C;
    o->f3C = src->f3C;
    o->f34 = new_var2;
    o->f44 = new_var3;
    o->f40 = src->f40;
    g = &o->g;
    *g = src->g;
    new_var = 0;
    if (g->a || g->b)
    {
      g->a = new_var;
      g->b = 0;
      ovl_ntgui2_func_0013D230(g);
    }
    o->p88 = src->p88;
    o->f94 = src->f94;
    o->f95 = src->f95;
    r = o;
  }
  else
  {
    r = 0;
  }
  return r;
}
