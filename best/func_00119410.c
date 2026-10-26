void func_00119410(s32 w, s32 h, s32 shift, s32 n, u8 *src, u8 *dst, s32 srcStep, s32 dstStep, s32 outStep, s32 planeStep)
{
  s32 y;
  s32 x;
  s32 i;
  s32 r;
  s32 g;
  s32 b;
  u8 *p0;
  u8 *p1;
  u8 *p2;
  volatile unsigned int new_var;
  u8 *p3;
  u8 *out;
  if (h > 0)
  {
    y = h;
    do
    {
      p0 = src;
      p1 = p0 + planeStep;
      p2 = p1 + planeStep;
      p3 = p2 + planeStep;
      out = dst;
      if (w > 0)
      {
        x = w;
        do
        {
          r = *(p0++);
          g = *(p0++);
          b = *(p0++);
          r += *(p1++);
          g += *(p1++);
          b += *(p1++);
          r += *(p2++);
          g += *(p2++);
          b += *(p2++);
          r += *(p3++);
          g += *(p3++);
          b += *(p3++);
          for (i = 1; i < n; i++)
          {
            r += *(p0++);
            g += *(p0++);
            b += *(p0++);
            r += *(p1++);
            g += *(p1++);
            b += *(p1++);
            r += *(p2++);
            g += *(p2++);
            b += *(p2++);
            r += *(p3++);
            g += *(p3++);
            b += *(p3++);
          }

          new_var = b >> shift;
          out[0] = r >> shift;
          out[1] = g >> shift;
          out[2] = new_var;
          out[3] = -1;
          out += outStep;
          x--;
        }
        while (x != 0);
      }
      src += srcStep;
      dst += dstStep;
    }
    while ((--y) != 0);
  }
}
