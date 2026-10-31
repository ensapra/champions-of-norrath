extern u8 D_004CF358[];
extern u8 D_004CF378[];
s32 func_001966E8(void *, s32);
s32 func_0019A594(void *, s32);
s32 func_0019A5E8(void *, s32);
void func_001A1568(void *, s32, void *);
typedef struct 
{
  u8 pad0[0x48];
  s32 f48;
  u8 pad1[0xA4];
  s32 fF0;
  s32 fF4;
  s32 fF8;
} T;
void func_0019A4D0(T *p, s32 x)
{
  s32 a;
  s32 b;
  s32 c;
  s32 d;
  if (!p)
  {
    func_001A1568(D_004CF358, 0x4e3, D_004CF378);
  }
  a = func_001966E8(p, x);
  if (a != (-1))
  {
    p->f48 = a;
  }
  else
  {
    b = func_0019A5E8(p, x);
 do { c = b / 16; } while (0);
    if (b != a)
    {
      p->fF4 = b - (c * 16);
      p->fF8 = c + p->fF0;
      d = func_0019A594(p, b);
      if (d != a)
      {
        p->f48 = d;
      }
    }
  }
}
