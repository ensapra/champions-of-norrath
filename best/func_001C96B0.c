typedef struct 
{
  char c[6];
} S6;
extern s32 func_0025ACB8();
extern void func_0025AD38(s32, s32);
extern void func_001940E0(char *, s32);
extern void func_00168228();
extern void func_00191490(void *, s32, char *, s32);
extern s32 func_00165B30(char *);
extern void func_001C8098(void);
extern char D_0034B660[];
extern char D_004286E0[];
extern char D_004289C0[];
extern char D_0046BF10[];
extern char D_0046C2C0[];
extern s8 D_00483829;
extern s8 D_00483AC8;
extern s32 D_00483F14;
extern s32 D_00483F18;
extern s32 D_00483F30;
extern s32 D_00484424;
extern s8 D_004844E0;
extern s32 D_00484538;
extern s8 D_00484AF8;
extern s32 D_00484BA0;
extern char *D_00484BA4;
extern s8 D_00484BDD;
extern s8 D_00484BDE;
extern s32 D_00484BE4;
extern s32 D_00484BE8;
extern s32 D_00484BF4;
extern s32 D_00484BF8;
extern s32 D_00484C00;
extern char D_00484C20[];
extern char D_00484C38[];
extern s32 D_00484C6C;
extern s8 D_00485BDF;
extern s8 D_00486AF0;
extern s32 D_00486AF8;
s64 func_001C96B0(s32 arg0)
{
  int new_var;
  func_0025ACB8();
  new_var = 1;
  D_00484AF8 = new_var;
  D_00483829 = 0;
  D_00484538 = new_var;
  D_00484BF8 = 0;
  if (D_00484BDD == 0)
  {
    if ((D_00486AF0 != 0) && (D_00485BDF == 0))
    {
      if (D_00484BA0 != 0)
      {
        D_00484BA0 = 15;
      }
      D_00486AF0 = 0;
      func_0025AD38(0, new_var);
    }
    else
    {
      D_00484BA4 = D_004286E0;
      func_001940E0(D_004286E0, 0);
      D_00484BA0 = 0;
    }
  }
  func_00168228();
  D_00484BE8 = 0;
  *((S6 *) D_0034B660) = *((S6 *) D_00484C38);
  D_0034B660[0x50] = -new_var;
  D_00484BDE = arg0;
  D_00484C6C = 0;
  D_00483F30 = new_var;
  D_00484BF4 = 0;
  D_00486AF8 = 0;
  D_00483F14 = 0;
  D_00483F18 = 0;
  D_004844E0 = new_var;
  D_00483AC8 = new_var;
  D_00484BDD = 0;
  func_00191490(func_001C8098, 0x19, D_0046C2C0, 0);
  if (D_00484BDE != 0)
  {
    D_00484BE4 = 0x1C0;
    D_00484BA4 = D_004289C0;
    D_00484BA0 = 0x3C;
  }
  else
  {
    D_00484424 = new_var;
    D_00484C00 = 0;
  }
  func_00165B30(D_00484C20);
  return func_00165B30(D_0046BF10);
}
