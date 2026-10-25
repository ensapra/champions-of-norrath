typedef struct Item
{
  unsigned char pad[0x10];
  f32 x;
  f32 y;
} Item;
typedef struct Entry
{
  f32 active;
  unsigned char pad[0x54C0];
  Item *item;
  unsigned char pad2[0x38EC];
} Entry;
typedef struct Obj
{
  unsigned char pad[0x48];
  struct 
  {
    unsigned char pad[4];
    s32 (*fn)(void *);
  } *v;
  f32 minx;
  f32 miny;
  f32 maxx;
  f32 maxy;
  s32 name;
} Obj;
s32 func_002FD2E0(s32, s32);
s32 func_002FF3C8(void);
s32 func_003044FC(s32, char *);
s32 func_0030E550(void);
extern s32 D_00484538;
s32 D_00486B18;
extern char D_0046CA88[];
extern char D_00408600[];
void func_001CDB38(Obj *arg0)
{
  char *new_var;
  s32 id;
  s32 result;
  s32 n;
  s32 found;
  Entry *e;
  Item *it;
  if (arg0)
  {
    id = arg0->v->fn(arg0);
  }
  else
  {
    func_002FF3C8();
  }
  result = func_0030E550();
  if ((func_002FD2E0(id, result) ^ 1) == 0)
  {
    if ((arg0->name && (func_003044FC(arg0->name, D_0046CA88) == 0)) && (D_00484538 > 0))
    {
      found = D_00486B18;
      new_var = D_00408600;
      e = (Entry *) (new_var + 0xAC);
      n = D_00484538;
      do
      {
        it = e->item;
        if (((((it && (e->active > 0.0f)) && (arg0->minx <= it->x)) && (arg0->miny <= it->y)) && (it->x <= arg0->maxx)) && (it->y <= arg0->maxy))
        {
          found = 0;
        }
        n--;
        e = (Entry *) (((char *) e) + 0x5DB0);
      }
      while (n != 0);
      D_00486B18 = found;
    }
  }
}
