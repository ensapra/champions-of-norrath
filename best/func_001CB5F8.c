void func_0013E6F0(void);
void func_00140B68(void);
s32 func_001440D8(void);
void func_00144B60(void *, s32);
void func_0015FA40(void);
void func_001663F0(s32);
void func_00166CD8(void);
void func_00167660(void);
void func_00170F88(void);
void func_0017C398(void);
void func_0017C448(s32);
void func_0017DA20(f32);
void func_0017DA40(s32);
void func_00180588(void);
void func_0018CDA8(void);
void func_00191310(void *, s32);
void ovl_ntgui2_func_00191DE0(void);
void func_00194158(void *, s32);
void ovl_ntgui2_func_001AB878(void);
void func_001B1808(void);
void func_001C44F8(void);
void func_001C7688(void);
void func_001D3830(void);
void func_001D4000(void);
void func_001E63D8(void);
void func_002798D8(void);
void func_00284680(void);
void func_002D70D0(void *);
extern char D_0046C570[];
extern char D_00484CE0[];
s32 D_00483F14;
s8 D_00483F3B;
s8 D_00483F3D;
s32 D_00483F48;
s32 D_00483F4C;
s32 D_00483F50;
s8 D_00483F55;
s8 D_00484300;
s32 D_004844A0;
s32 D_00484910;
s16 D_00484CD0;
s8 D_00484F28;
s32 D_00484F48;
s32 D_00484F4C;
s32 D_00484F54;
s32 D_00484F64;
s16 D_00484F8E;
s32 D_0048667C;
s32 D_00486694;
s64 func_001CB5F8(s32 arg0)
{
  s8 *q;
  s16 *p;
  s32 i;
  s32 j;
  int new_var;
  func_002D70D0(D_0046C570);
  func_00194158(D_00484CE0, 0x1B4);
  func_00144B60(D_00484CE0, 0x1B5);
  func_00191310(D_00484CE0, 0x1B6);
  func_00144B60(D_00484CE0, 0x1B9);
  func_00191310(D_00484CE0, 0x1BA);
  func_001C44F8();
  func_001C7688();
  D_00484910 = -10000;
  func_0018CDA8();
  D_00486694 = 0;
  D_00483F48 = 0;
  D_00483F4C = 0;
  D_00483F50 = 0;
  D_00484F64 = 0;
  D_00484F54 = (int) 0;
  D_0048667C = 0x80000000;
  D_00484CD0 = 0xF0;
  new_var = 0;
  new_var = 0;
  for (i = 3, p = &D_00484F8E; i >= new_var; i--, p--)
  {
    *p = 0xF0;
  }

  D_00484F28 = new_var;
  func_0017DA20(1800.0f);
  D_00483F3D = new_var;
  D_00483F55 = new_var;
  D_00484F4C = 0;
  D_00484F48 = 0;
  for (j = 3, q = &D_00483F3B; j >= new_var; j--, q--)
  {
    *q = 0;
  }

  ovl_ntgui2_func_00191DE0();
  func_00166CD8();
  func_00180588();
  func_00194158(D_00484CE0, 0x1DE);
  func_00140B68();
  func_00194158(D_00484CE0, 0x1E0);
  func_0015FA40();
  func_00180588();
  if (D_004844A0 != 0)
  {
    func_0017C448(D_004844A0);
  }
  func_0017C398();
  func_0013E6F0();
  func_00170F88();
  func_001E63D8();
  func_002798D8();
  if (arg0 != 0)
  {
    func_0017DA40(new_var);
    func_001663F0(0);
  }
  func_001B1808();
  func_001D4000();
  func_001D3830();
  func_00284680();
  func_00167660();
  D_00484300 = (double) new_var;
  D_00483F14 = 0;
  ovl_ntgui2_func_001AB878();
  D_004844A0 = new_var;
  func_00194158(D_00484CE0, 0x247);
  func_00191310(D_00484CE0, 0x248);
  return func_001440D8();
}
