void func_00180D78(void *, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, s32, s32, s32, s32, s32);
f32 D_00481998;
f32 D_0048199C;
f32 D_004819A0;
f32 D_004819A4;
f32 D_004819A8;
f32 D_004819AC;
f32 D_004819B0;
f32 D_004819B4;
f32 D_004819B8;
f32 D_004819BC;
f32 D_004819C0;
extern u8 D_007D7BA0[];
extern u8 D_007D7BF0[];
extern u8 D_007D7C40[];
extern u8 D_007D7C90[];
extern u8 D_007D7CE0[];
extern u8 D_007D7D30[];
extern u8 D_007D7D80[];
void func_00230D48(s32 arg0, s32 arg1)
{
  f32 new_var2;
  s32 b = arg0;
  s32 c = arg0;
  s32 d = arg0;
  s32 e = arg0;
  s32 f = arg0;
  s32 g = arg0;
  int new_var;
  new_var2 = D_00481998;
  if (arg1 == 0xFFFF)
  {
    if (arg0 == 1)
    {
      func_00180D78(D_007D7BA0, 0x84, 0x53, 0x2D, 0x3B, 0x6C, 0x2E, 0xD, 50.0f, 5.0f, new_var2, 0x5E, 2, arg0, 9, 0);
    }
    if (b == 1)
    {
      func_00180D78(D_007D7BF0, 0x5A, 0x4A, 0x3C, 0x30, 0x3C, 0x32, 0x2D, 30.0f, 60.0f, 2.0f, 0, 2, 0, 6, 0);
    }
    if (c == 1)
    {
      func_00180D78(D_007D7C40, 5, 0x80, 0x80, 0x192, new_var = 0x80, 0x80, new_var, 38.0f, 34.0f, 0.0f, -0x44, arg0, 3, 0, 0);
    }
    if (d == 1)
    {
      func_00180D78(D_007D7C90, 0x192, 0x127, 0x187, 0x1E5, 0x7E, 0x3A, 0x1B, D_0048199C, D_004819A0, -14.5f, 0, arg0, 2, 0, 0);
    }
    if (e == 1)
    {
      func_00180D78(D_007D7CE0, new_var, 0x60, 0x1A, 0x98, 0x77, 0x37, 1, D_004819A4, D_004819A8, D_004819AC, 0x2F, arg0, arg0, 4, 0);
    }
    if (f == 1)
    {
      func_00180D78(D_007D7D30, 0x80, 0x60, 0x1A, 0x98, 0x77, 0x37, 1, D_004819B0, D_004819B4, D_004819B8, 0x2F, arg0, arg0, 4, 0);
    }
    if (g == 1)
    {
      func_00180D78(D_007D7D80, 0xA4, 0x78, 0xA, 0x316, 0x9A, 0x37, 0x2F, D_004819BC, D_004819C0, 0.0f, 0, 2, arg0, 9, 0);
    }
  }
}
