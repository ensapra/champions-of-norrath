typedef struct { char pad[0x50]; u32 a, b; } Obj;
typedef struct { char pad[0x18]; Obj *obj; } Ctx;
extern s32 func_00177C98(Obj *);
extern s32 func_00177E00(Obj *);
extern s32 func_00178050(Obj *, s32 *);
extern s32 func_00178A30(Ctx *, s32 *, s32 *);
extern void func_00179158(u32);
extern Obj *func_00179280(s32, s32);
s32 func_00178158(Ctx *c, s32 mode) {
  s32 d[6];
  s32 e[9];
  s32 o[1];
  s32 r;
  Obj *p;
  d[0] = 1; d[1] = 1; d[2] = 6; d[4] = 1; d[5] = 1;
  switch (mode) {
  case 1:
    if ((r = func_00178A30(c, o, d))) return r;
    e[0] = o[0] + 0x10; d[4] = 2;
    if ((r = func_00178A30(c, o, d))) return r;
    e[1] = o[0] + 0x10; d[4] = 3;
    if ((r = func_00178A30(c, o, d))) return r;
    e[2] = o[0] + 0x10; d[4] = 4;
    if ((r = func_00178A30(c, o, d))) return r;
    e[3] = o[0] + 0x10; d[4] = 5;
    if ((r = func_00178A30(c, o, d))) return r;
    e[4] = o[0] + 0x10; d[4] = 6;
    if ((r = func_00178A30(c, o, d))) return r;
    e[5] = o[0] + 0x10; d[4] = 7;
    if ((r = func_00178A30(c, o, d))) return r;
    e[6] = o[0] + 0x10; d[4] = 2; d[2] = 3;
    if ((r = func_00178A30(c, o, d))) return r;
    e[7] = o[0] + 0x10; d[2] = 3; d[4] = mode;
    if ((r = func_00178A30(c, o, d))) return r;
    e[8] = o[0] + 0x10;
    p = func_00179280(0x10, 0x60);
    if (!p) return 1;
    if ((r = func_00178050(p, e))) return r;
    c->obj = p;
    break;
  case 2:
    p = c->obj;
    if (!p) return 2;
    if ((r = func_00177C98(p))) return r;
    if ((r = func_00177E00(p))) return r;
    break;
  case 4:
    p = c->obj;
    func_00179158(p->a & 0x0FFFFFFF);
    func_00179158(p->b & 0x0FFFFFFF);
    func_00179158((u32)p & 0x0FFFFFFF);
    c->obj = 0;
    break;
  case 3:
    break;
  default:
    return 0;
  }
  return 0;
}
