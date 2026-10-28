typedef struct { s64 d[40]; } Row;
extern void func_002EE3F0(s64, s64, void *, void *);
extern void func_002EF4B8(void *, s64, s64, void *, void *);
extern void func_002F0480(void *, s32, void *, s16 *);
void func_002EC0F8(char *a, s32 b, s64 *c, s64 *d, s64 *e, s64 *f, char *g, s16 *h)
{
  Row buf[5];
  Row *p = buf;
  Row *src = (Row *)(a + 0x3c0);
  s32 i, j;
  s64 x;
  s16 *q;
  for (i = 0; i < 4; i++)
  {
    func_002EE3F0(*f, *e, g, &buf[0]);
    func_002EF4B8(a, *c, *d, &buf[0], src);
    p[1] = *src;
    p++;
    c++; d++; e++; f++;
    g += 0x68;
  }
  func_002F0480(a, b, &buf[1], h);
  q = h;
  x = *(s64 *)(a + 0x9f8);
  for (j = 159; j != -1; j--)
  {
    s64 y;
    x = (s64)q[0] + ((x * 0x7000) >> 15);
    y = x * 2;
    if (y < 0x7fff)
    {
      if (y < -0x8000) y = -0x8000;
      q[0] = (u16)((u32)y & 0xfff8);
    }
    else
      q[0] = 0x7ff8;
    q++;
  }
  *(s64 *)(a + 0x9f8) = x;
}
