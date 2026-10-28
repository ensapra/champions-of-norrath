extern void func_0013B870(void);
extern void func_001050A8(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_00105190(void *);
extern void func_0014D270(s32);
extern void func_00105078(void);
extern void func_00117388(void);
extern void func_001173C8(void);
extern s32 D_001BD960[];
extern s32 D_001BD964[];
extern s32 D_001BD968[];
extern s32 D_001BD96C[];
extern s32 D_010C2B88[];
extern s32 D_010C2B94[];
extern s32 D_010C2B98[];
void func_00117418(void)
{
  s32 a[48];
  s32 b[48];
  s32 t2, t3;
  func_0013B870();
  D_010C2B98[0] = 1;
  func_001050A8(a, D_010C2B88[0], 9, 0, 1, 0, D_001BD960[0], D_001BD964[0], 0, 0);
  a[0x2A] = (s32) func_00105078;
  func_00105190(a);
  t2 = D_001BD968[0];
  t3 = D_001BD96C[0];
  func_001050A8(b, D_010C2B88[0], 9, 2, 0xF, 0, t2, t3, 0, 0);
  b[0x2B] = (s32) func_001173C8;
  b[0x2C] = (s32) func_00117388;
  b[0x2A] = 0;
  func_00105190(b);
  if (D_010C2B94[0] != 0)
  {
    func_0014D270(D_010C2B94[0]);
  }
}
