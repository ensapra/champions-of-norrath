extern s32 SignalSema_2(s32);
extern s32 WaitSema_2(s32);
struct G2
{
  char x[0x2c];
  s32 sema;
  char y[0x14];
  s32 count;
  char z[0x14];
  s32 updates;
};
struct E2
{
  char x[0x14];
  s32 slot;
  s32 id;
  s32 state;
};
extern struct G2 D_008EBDD8;
s32 func_002E6A50(s32 id, s32 *out)
{
  s32 n;
  struct E2 *e;
  s32 i;
  *out = -1;
  if ((D_008EBDD8.count < id) || (id < 0))
  {
    return 0x80000004;
  }
  n = D_008EBDD8.count;
  if (n > 0)
  {
    i = 0;
    do
    {
      e = (struct E2 *) (((char *) (&D_008EBDD8)) + 0x4c8);
    }
    while (0);
    do
    {
      if (e->id == id)
      {
        n = e->state;
        if (n == 4)
        {
          return 0x80000005;
        }
        if (n == 6)
        {
          return 0x80000006;
        }
        if (n == 2)
        {
          struct G2 *g = (struct G2 *) (((char *) e) - 0x4c8);
          WaitSema_2(g->sema);
          e->slot = i + 1;
          e->state = 4;
          g->updates++;
          SignalSema_2(g->sema);
          *out = e->slot;
          return 0;
        }
      }
      i++;
      e = (struct E2 *) (((char *) e) + 0x68);
    }
    while (i < n);
  }
  return 0x80000002;
}
