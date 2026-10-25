typedef struct 
{
  s8 pad0[0x13];
  u8 fmt;
} Tex;
s32 func_001885D0(Tex *t, s32 lv);
u32 func_00188AE0(Tex *t, s32 lv, s32 x, s32 y);
u32 func_00188650(Tex *t, s32 a, u32 c);
inline int inline_fn(u32 arg0, int arg1, u32 arg2)
{
  return (((arg0 >> 8) & 0x80) << arg1) | ((arg2 << 1) & 0xF800);
}

inline int inline_fn2(u32 arg0)
{
  return (arg0 & 0xFFFFFF) | 0x80000000;
}

u32 func_00188E80(Tex *t, s32 lv, s32 a, s32 x, s32 y)
{
  u32 c;
  s32 new_var;
  int new_var3;
  u32 new_var2;
  int new_var4;
  if (func_001885D0(t, lv) == 0)
  {
    return 0;
  }
  new_var = x >> lv;
  c = func_00188AE0(t, lv, new_var, y >> lv);
  switch (t->fmt)
  {
    case 1:
      new_var4 = (c >> 2) & 0xF8;
      new_var3 = (c << 3) & 0xF8;
      return inline_fn(c, 24, c) | (new_var3 | (new_var4 << 16));

    case 2:
      return inline_fn2(c);

    case 3:
      return c;

    case 4:

    case 5:
      new_var2 = c;
      return func_00188650(t, a, new_var2);

  }

  return 0;
}
