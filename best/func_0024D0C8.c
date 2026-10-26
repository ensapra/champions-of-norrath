typedef struct Q
{
  s32 w[4];
} Q;
typedef struct Hd
{
  char p[0x2C];
  s32 size;
  char data[1];
} Hd;
extern char D_007DD7E0[];
extern Q D_007DD880;
extern char D_007DD840[];
extern char D_00474718[];
extern char D_00474668[];
extern char D_00474748[];
extern char D_00474768[];
extern char D_00474788[];
extern char D_004859B0[];
extern char D_004859B8[];
s32 D_00486BD8;
void FlushCache_2(s32);
s32 func_00144368(s32, void *);
void func_00144558(s32);
void func_00172890(void *, s32, void *, s32);
void func_0024F9A0(void *);
void func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
s32 func_002E03D0(s32, s32, s32, s32);
s32 func_002E0478(s32, s32, s32, s32, ...);
void func_00301FFC(s32, void *, s32);
void func_0024D0C8(Hd *h, s32 dst)
{
  Q b;
  s32 buf;
  s32 p;
  s32 n;
  s32 len;
  D_007DD880 = b;
  func_002D8270(D_007DD7E0, 0xB0, 0, &D_007DD880, 0x10, D_007DD840, 0x40, 0, 0);
  buf = func_00144368(h->size, D_004859B0);
  if (buf == 0)
  {
    func_0024F9A0(D_00474718);
    func_00172890(D_00474668, 0x70F, D_004859B8, (s32) __builtin_return_address(0));
  }
  p = buf;
  func_00301FFC(buf, h->data, h->size);
  FlushCache_2(0);
  n = (h->size + 0x3F) & (~0x3F);
  while (n > 0)
  {
    len = (n > 0x1000) ? (0x1000) : (n);
    if (func_002E03D0(p, D_00486BD8, len, 1) == (-1))
    {
      func_0024F9A0(D_00474748);
    }
    p += len;
    n -= len;
    if (func_002E0478(1, 0x80D0, 0, 0, D_00486BD8, dst, len) == (-1))
    {
      func_0024F9A0(D_00474768);
    }
    dst += len;
    if (func_002E0478(1, 0x80F0, 0, 1) == (-1))
    {
      func_0024F9A0(D_00474788);
    }
  }

  func_00144558(buf);
  D_007DD880 = b;
  func_002D8270(D_007DD7E0, 0xC0, 0, &D_007DD880, 0x10, D_007DD840, 0x40, 0, 0);
}
