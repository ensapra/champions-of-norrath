typedef struct 
{
  u32 code;
  char pad[0x20];
} Ent158694;
typedef struct 
{
  char pad0[0x98];
  s32 unk98;
  char pad9C[0xB80 - 0x9C];
  Ent158694 *ents;
  char padB84[0xB8C - 0xB84];
  s32 cur;
  char padB90[0xBF0 - 0xB90];
  s32 count;
} Obj158694;
s32 func_001591D8(Obj158694 *);
void func_0015ACB0(void *, void *, s32, s32);
s32 func_0015AD38(Obj158694 *, s32);
void func_0015B210(Obj158694 *);
void ovl_ntgui2_func_0015A7B8(Obj158694 *);
s32 func_00158694(Obj158694 *o)
{
  s32 r = 0;
  s32 cur = o->cur;
  s32 pos;
  s32 cnt;
  int new_var;
  s32 n;
  u32 c;
  if (o == NULL)
  {
    return r;
  }
  r = func_001591D8(o);
  if (r != 0)
  {
    return 1;
  }
  if (cur >= o->count)
  {
    return r;
  }
  r = func_0015AD38(o, cur);
  pos = o->cur;
  cnt = o->count;
  if (r != 0)
  {
    func_0015ACB0(&o->ents[pos], &o->ents[pos + 1], 0x24, (cnt - pos) - 1);
    o->count = o->count - 1;
  }
  else
  {
    if (pos >= (cnt - 1))
    {
      return r;
    }
    c = o->ents[cur].code;
    if (c < 0xE0)
    {
      n = 2;
    }
    else
      if (c < 0xF0)
    {
      n = 3;
    }
    else
    {
      n = (c < 0xF8) * 4;
    }
    new_var = cnt - pos;
    func_0015ACB0(&o->ents[pos], &o->ents[pos + n], 0x24, new_var - n);
    o->count = o->count - n;
  }
  ovl_ntgui2_func_0015A7B8(o);
  func_0015B210(o);
  o->unk98 = 2;
  return 1;
}
