typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} V3;
typedef struct 
{
  f32 x;
  f32 y;
} V2;
typedef struct 
{
  u8 a;
  u8 b;
} Tx;
extern Tx D_003347C0[][216];
extern s32 D_00483EC0;
extern s32 D_00483EC4;
extern void func_0015E0F0(V2 *in, f32 *ox, f32 *oy);
void func_0015DD58(V3 *pv)
{
  V3 v = *pv;
  V2 o;
  V2 in;
  f32 a;
  s32 x0;
  s32 x1;
  s32 y0;
  s32 y1;
  s32 x;
  s32 y;
  s32 c;
  in.x = v.x;
  in.y = v.y;
  func_0015E0F0(&in, &o.x, &o.y);
  a = o.x - 8.0f;
  x0 = (a >= 0.0f) ? ((s32) (a + 0.5f)) : ((s32) (o.x + (-8.5f)));
  if (x0 < 0)
  {
    x0 = 0;
  }
  a = o.x + 8.0f;
  x1 = (a >= 0.0f) ? ((s32) (o.x + 8.5f)) : ((s32) (a - 0.5f));
  if (x1 > (D_00483EC0 - 1))
  {
    x1 = D_00483EC0 - 1;
  }
  a = o.y - 8.0f;
  y0 = (a >= 0.0f) ? ((s32) (a + 0.5f)) : ((s32) (o.y + (-8.5f)));
  if (y0 < 0)
  {
    y0 = 0;
  }
  a = o.y + 8.0f;
  y1 = (a >= 0.0f) ? ((s32) (o.y + 8.5f)) : ((s32) (a - 0.5f));
  if (y1 > (D_00483EC4 - 1))
  {
    y1 = D_00483EC4 - 1;
  }
  for (y = y0; y <= y1; y++)
  {
    for (x = x0; x <= x1; x++)
    {
      f32 dx = o.x - ((f32) x);
      f32 dy = o.y - ((f32) y);
      f32 d = (dx * dx) + (dy * dy);
      if (d <= 64.0f)
      {
        f32 w = (1.0f - (d * 0.125f)) * 254.0f;
        c = (w >= 0.0f) ? ((s32) (w + 0.5f)) : ((s32) (w - 0.5f));
        if (c >= 256)
        {
          c = 255;
        }
        c >>= 4;
        y0 = D_003347C0[y][x].b >> 4;
        if (y0 < c)
        {
          y0 = c;
        }
        D_003347C0[y][x].b = (D_003347C0[y][x].b & 15) | (y0 << 4);
      }
    }

  }

}
