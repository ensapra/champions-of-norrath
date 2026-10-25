typedef struct Hdr_1768A8
{
  s32 unk0;
  s32 count;
  s32 unk8;
  s32 unkC;
} Hdr_1768A8;
typedef struct 
{
  char pad[0x44];
  s32 unk44;
  char pad48[0x8];
  s32 unk50;
} Obj_1768A8;
extern char func_001CE218[];
s32 func_00176840(Obj_1768A8 *o, s32 a, s32 b);
void func_00176710(u32 **dma, Hdr_1768A8 **h, s32 a, s32 b);
void func_001768A8(Obj_1768A8 *o, u32 **pdma, Hdr_1768A8 **ph, s32 arg3, s32 arg4, s32 arg5)
{
  u32 *dma;
  Hdr_1768A8 *h;
  Hdr_1768A8 *hd = *ph;
  s32 n;
  s32 id;
  s32 flag;
  s32 addr;
  dma = *pdma;
  h = (Hdr_1768A8 *) (((char *) hd) + 0x30);
  n = hd->count;
  id = hd->unk8;
  flag = hd->unkC;
  if ((arg5 != 0) && (0 != flag))
  {
    addr = func_00176840(o, arg5, id);
    if (addr != 0)
    {
      u32 *a = dma + 4;
      u32 *b = dma + 8;
      dma[0] = 0x10000000;
      dma[3] = 0x11000000;
      dma[1] = 0;
      dma[2] = 0;
      dma += 12;
      a[1] = ((u32) (func_001CE218 + 0x20B8)) & 0x7FFFFFFF;
      a[3] = (b[3] = 0x50000001);
      a[0] = 0x30000001;
      a[2] = 0;
      b[0] = 0x30000001;
      b[1] = addr & 0x7FFFFFFF;
      b[2] = 0;
    }
  }
  o->unk50 += n;
  if (n > 0)
  {
    do
    {
      n--;
      o->unk44 += h->unkC;
      func_00176710(&dma, &h, arg3, 0);
    }
    while (n != 0);
  }
  *pdma = dma;
  *ph = h;
}
