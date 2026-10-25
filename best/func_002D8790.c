typedef struct 
{
  s32 a;
  s32 b;
  s32 c;
  s32 d;
} Dma;
typedef struct 
{
  s32 p0;
  s32 (*fn)(s32, s32, s32);
  s32 buf;
  s32 len;
  s32 p10;
  s32 p14;
  s32 p18;
  s32 u1c;
  s32 u20;
  s32 u24;
  s32 u28;
  s32 u2c;
  s32 u30;
  u32 flags;
} Req;
typedef struct 
{
  char p[0x10];
  s32 f10;
  char p14[4];
  s32 f18;
  s32 f1c;
  s32 f20;
} Pk;
extern char D_008E0440[];
s32 func_002D7690(s32, void *, s32, s32, s32, s32);
void func_002D7858(s32, s32);
Pk *func_002D7B98(void *, u32);
Pk *func_002D7BC8(void *, u32);
void func_002DD640(void);
void func_002DD698(void);
s32 sceSifSetDma_2(void *, s32);
void func_002D8790(Req *r)
{
  Dma d[2];
  s32 n;
  s32 len = 0;
  Pk *pk;
  s32 i;
  s32 rv;
  u32 fl;
  fl = r->fn(r->u24, r->buf, r->len);
  if (fl != 0)
  {
    len = r->u2c;
  }
  if (r->len > 0)
  {
    func_002D7858(r->buf, r->len);
  }
  if (len > 0)
  {
    func_002D7858(fl, len);
  }
  func_002DD640();
  fl = r->flags;
  if (fl & 4)
  {
    pk = func_002D7BC8(D_008E0440, fl >> 16);
  }
  else
  {
    pk = func_002D7B98(D_008E0440, fl >> 16);
  }
  func_002DD698();
  pk->f20 = 0x8000000A;
  pk->f1c = r->u1c;
  if (r->u30 != 0)
  {
    while (func_002D7690(0x80000008, pk, 0x40, fl, r->u28, len) == 0)
    {
      ;
    }

    return;
  }
  pk->f18 = 0;
  n = 0;
  pk->f10 = 0;
  if (len > 0)
  {
    n = 1;
    d[0].a = fl;
    d[0].b = r->u28;
    d[0].c = len;
    d[0].d = 0;
  }
  d[n].a = (s32) pk;
  d[n].b = r->u20;
  d[n].c = 0x40;
  d[n].d = 0;
  n++;
  do
  {
    rv = sceSifSetDma_2(d, n);
    if (rv)
    {
      break;
    }
    i = 0x100000;
    do
    {
      i--;
    }
    while (i != (-1));
  }
  while (rv == 0);
}
