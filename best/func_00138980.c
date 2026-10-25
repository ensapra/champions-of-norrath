extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern void func_00140678(void *, void *, s32);
extern s32 func_00314EF0(void);
extern s32 func_002FD2E0(s32, s32);
typedef struct 
{
  s16 delta;
  s16 index;
  s32 (*fn)(void);
} Ent;
typedef struct 
{
  char pad[0x48];
  Ent *vt;
} Obj;
typedef struct 
{
  u8 buf[0xA0];
  void *s;
  s32 pad[3];
  Obj *arr[100];
} Locals;
s32 func_00138980(void *arg0, s32 *arg1)
{
  Locals l;
  Obj **p;
  Obj *new_var;
  s32 i = 0;
  Obj *o;
  Ent *e;
  s32 val;
  func_00138758(arg0, arg1[1], &l.s);
  func_00138900(l.buf, l.s);
  p = l.arr;
  func_00140678(l.buf, p, 0x64);
  if (*p)
  {
    do
    {
      o = *((Obj **) (((u8 *) p) + (i << 2)));
      e = o->vt;
      val = e->fn();
      if (func_002FD2E0(val, func_00314EF0()) != 0)
      {
        new_var = *((Obj **) (((u8 *) p) + (i << 2)));
        o = new_var;
        e = (Ent *) (((u8 *) o->vt) + 0x90);
        ((s32 (*)(void *, s32, void *)) e->fn)(e->delta + ((u8 *) o), arg1[2], o);
      }
      i++;
    }
    while ((*((void **) (((u8 *) p) + (i << 2)))) != 0);
  }
  return 0;
}
