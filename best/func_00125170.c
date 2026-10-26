typedef struct 
{
  s32 x;
  f32 y;
  f32 z;
} V3_125170;
typedef struct X125170 X125170;
typedef struct 
{
  s32 a;
  s32 b;
  void *c;
  X125170 *d;
  u16 e;
  f32 f;
  u8 rest[0x24];
} B125170;
typedef struct 
{
  s32 f0;
  s32 f4;
  s32 f8;
  s32 fC;
  V3_125170 p10;
  f32 f1C;
  f32 f20;
  s32 f24;
  u8 f28;
  u8 f29;
  void *f2C;
  f32 f30;
  X125170 *f34;
  u16 f38;
  f32 f3C;
  f32 f40;
  s32 f44;
  void *vt;
  s32 f4C;
  u8 f50;
  s32 f54;
  V3_125170 p58;
  s32 f64;
  V3_125170 p68;
  B125170 g;
  s32 fB0;
  s32 fB4;
  s32 fB8;
  s32 fBC;
} Obj125170;
extern void *func_001441B8(s32);
extern void *func_00194498(void *, void *);
extern void ovl_ntgui2_func_0013D230(void *);
extern u8 D_0044D498[];
extern u8 D_0044D378[];
extern u8 D_0044A1E0[];
Obj125170 *func_00125170(Obj125170 *src)
{
  Obj125170 *o = func_001441B8(0xC0);
  int new_var;
  Obj125170 *r;
  B125170 *g;
  s32 new_var2;
  if (o)
  {
    o->vt = D_0044D498;
    func_00194498(o, src);
    func_00194498(&o->f4, &src->f4);
    func_00194498(&o->f8, &src->f8);
    o->fC = src->fC;
    o->p10 = src->p10;
    o->f1C = src->f1C;
    o->f20 = src->f20;
    o->f24 = src->f24;
    new_var = src->f28;
    o->f28 = new_var;
    o->f29 = src->f29;
    o->vt = D_0044D378;
    o->f30 = src->f30;
    o->f2C = src->f2C;
    o->f34 = src->f34;
    o->f3C = src->f3C;
    o->f44 = src->f44;
    o->f40 = src->f40;
    o->f38 = src->f38;
    func_00194498(&o->f4C, &src->f4C);
    o->f50 = src->f50;
    o->vt = D_0044A1E0;
    o->f54 = src->f54;
    o->p58 = src->p58;
    o->f64 = src->f64;
    o->p68 = src->p68;
    o->g = src->g;
    g = &o->g;
    if (g->a || g->b)
    {
      g->a = 0;
      g->b = 0;
      ovl_ntgui2_func_0013D230(g);
    }
    new_var2 = src->fB8;
    o->fB0 = src->fB0;
    new_var = new_var2;
    o->fB8 = new_var;
    o->fB4 = src->fB4;
    o->fBC = src->fBC;
    r = o;
  }
  else
  {
    r = 0;
  }
  return r;
}
