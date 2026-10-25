typedef struct 
{
  char p0[0x12];
  s8 n;
  char p1[0x13];
  s8 k;
  char p2;
  s8 d[1];
} A;
int func_0016C820(A *a, s64 m, s32 *o0, s32 *o1, s32 *o2, s32 *o3, s32 *o4, s32 *o5)
{
  s32 y0 = -100000;
  s32 y1 = y0;
  s32 y2 = y1;
  s32 x0 = 100000;
  s32 x1 = x0;
  s32 x2 = x1;
  s32 i = a->n - 1;
  s8 *p = (((s8 *) a) + 0x28) + (a->k * ((a->n * 4) + 4));
  while ((i >= 0) && (m != 0))
  {
    if ((((s32) m) ^ 1) & 1)
    {
    }
    else
    {
      s32 a0 = p[0];
      s32 a1 = p[1];
      s32 a2 = p[2];
      s32 b0 = p[3];
      s32 b1 = p[4];
      s32 b2 = p[5];
      if (a0 < x0)
      {
        x0 = a0;
      }
      if (a1 < x1)
      {
        x1 = a1;
      }
      if (a2 < x2)
      {
        x2 = a2;
      }
      if (y0 < b0)
      {
        y0 = b0;
      }
      if (y1 < b1)
      {
        y1 = b1;
      }
      if (y2 < b2)
      {
        y2 = b2;
      }
    }
    m >>= 1;
    i--;
    p += 10;
  }

  *o0 = x0;
  *o1 = x1;
  *o2 = x2;
  *o3 = y0;
  *o4 = y1;
  *o5 = y2;
}
