typedef struct 
{
  u8 pad[0x4c];
  void *vt;
} Obj;
typedef struct 
{
  u16 type;
  u8 pad[0x12];
  s32 a;
  s32 b;
} Ev;
s32 func_00152254(void *);
s32 func_00152424(void *);
s32 func_00152520(void *);
void func_00152618(void *);
void *func_0014D29C(void *);
void func_0014F3F0(void *, s32);
void func_0014C900(void *);
inline void *inline_fn(void **arg0)
{
  return *arg0;
}

s32 func_001513C8(char *p, Ev *e, void *ctx, s32 arg3, Obj *obj, s32 arg5, s32 *result, s32 *status)
{
  s32 r;
  s32 ok = 0;
  s32 flag = 0;
  void *pv;
  *status = 0;
  pv = obj->vt;
  pv = inline_fn((void **) (((char *) pv) + 0xD8));
  r = ((s32 (*)(Obj *, void *, s32, s32, s32)) pv)(obj, ctx, arg3, e->a, e->b);
  *result = r;
  if (arg5)
  {
    if (func_00152254(obj))
    {
      ok = 1;
      flag = 1;
    }
  }
  else
  {
    ok = 1;
  }
  if (!ok)
  {
    return 0;
  }
  if ((!flag) && (!r))
  {
    return 0;
  }
  switch (e->type)
  {
    case 1:
      if (!func_00152424(obj))
    {
      return 0;
    }
      func_0014C900(obj);
      break;

    case 2:
      if (!func_00152520(obj))
    {
      return 1;
    }
      func_00152618(p);
      if (!r)
    {
      *status = 1;
      if (flag)
      {
        func_0014F3F0(func_0014D29C(p), *((s32 *) (p + 0x864)));
        *((s32 *) (p + 0x864)) = 0;
      }
    }
      break;

    case 3:
      if (r)
    {
      func_0014C900(obj);
    }
    else
      if (flag)
    {
      func_0014C900(obj);
    }
      break;

    case 4:

    case 5:

    case 6:

    case 7:

    case 8:

    case 9:

    case 10:

    default:
      break;

  }

  pv = obj->vt;
  pv = inline_fn((void **) (((char *) pv) + 0xBC));
  ((void (*)(Obj *, Ev *, void *, s32)) pv)(obj, e, ctx, arg3);
}
