extern u8 D_008D68C0[];
extern unsigned long long D_008D6910[];
extern u8 D_008D6960[];
extern s32 func_00180D78(void *, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, s32, s32, s32, s32, s32);
void func_00295168(s32 a, s32 b)
{
  int new_var4;
  int new_var2;
  int new_var;
  s32 m = a;
  int new_var3;
  s32 n = a;
  if (b == 0xFFFF)
  {
    if (a == 1)
    {
      new_var = 2;
      new_var2 = 5;
      func_00180D78(D_008D68C0, 0x6E, 0x64, 0x17, 0x64, 0x4E, 0x42, 0x1E, 35.f, 45.f, 0.f, new_var2, new_var, a, 0, 0);
    }
    if (m == 1)
    {
      func_00180D78(D_008D6910, 0xC, 0xC, 0, 0x4E, 8, 0x28, 0x10, 20.f, 15.f, 0.f, 0, a, m, 8, 0);
    }
    if (n == 1)
    {
      new_var4 = 0;
      new_var3 = 0x19;
      func_00180D78(D_008D6960, new_var4, new_var4, new_var4, 0xFE, 0x19, 0x19, new_var3, 5.f, 5.f, 0.f, new_var4, 2, new_var4, 9, new_var4);
    }
  }
}
