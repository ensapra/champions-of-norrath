typedef struct 
{
  s32 w0;
  s16 id;
  s16 p6;
  s32 w8;
  s32 wC;
} Hdr;
typedef struct 
{
  Hdr h;
  s32 f10;
  char p14[8];
  s32 f1C;
  s32 f20;
  s32 f24;
  char p28[0x14];
  s16 f3C;
  char p3E[0x2A];
} Ent;
typedef struct 
{
  char p0[0x44];
  s32 count;
  char p48[0x20];
  s32 f68;
  char p6C[0x45C];
  Ent ent[1];
} Tbl;
extern Tbl D_008EBDD8;
s32 func_002E7E38(Hdr *arg0)
{
  s32 i;
  Ent *e;
  for (i = 0; i < D_008EBDD8.count; i++)
  {
    if (D_008EBDD8.ent[i].h.id == arg0->id)
    {
      return 1;
    }
  }

  for (i = 0; i < D_008EBDD8.count; i++)
  {
    if (D_008EBDD8.ent[i].h.id == (-1))
    {
      break;
    }
  }

  if (i < D_008EBDD8.count)
  {
    e = &D_008EBDD8.ent[i];
    e->h = *arg0;
    e->f1C = 1;
    e->f10 = (e->f20 = 0);
    D_008EBDD8.f68 = 1;
    e->f3C = 0;
    e->f24 = 0;
    return 0;
  }
  return 1;
}
