extern char D_007D7210[80];
extern char D_007D7260[80];
extern f32 D_004814D4;
extern f32 D_004814D8;
extern f32 D_004814DC;
extern f32 D_004814E0;
void func_00180D78(void *, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, s32, s32, s32, s32, s32);
void func_0020F720(s32 a, s32 b)
{
  int new_var;
  s32 again = a;
  if (b == 0xFFFF)
  {
    if (a == 1)
    {
      new_var = 0;
      func_00180D78(D_007D7210, 0x32, 0x32, 0x14, 0x96, 0x28, 0x28, 0xA, D_004814D4, D_004814D8, D_004814DC, 0, 2, new_var, 4, new_var);
    }
    if (again == 1)
    {
      func_00180D78(D_007D7260, 10, 0x41, 10, 0x35, 10, 0x41, 10, 20.5f, 1.0f, D_004814E0, new_var, 0, 0, 6, 0);
    }
  }
}
