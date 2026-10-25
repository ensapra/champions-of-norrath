typedef struct 
{
  s32 a;
  s32 b;
  s32 c;
  u8 pad[0x68];
} Ent74;
extern s32 func_001671F8(s32);
extern s32 func_0016EC08(s32, s32, s32, s32, s32, s32);
extern void func_00172BC8(s32, s32, s32, s32);
extern void func_00172DC0(s32, s32, s32);
extern volatile short func_00172F88(void);
extern void func_00173C08(s32, s32, s32, s32, s32, s32, s32);
extern Ent74 D_004281A8[];
extern s32 D_00484CA4;
s64 func_001C1988(s32 arg0, s32 arg1)
{
  int new_var;
  Ent74 *p = &D_004281A8[arg1];
  new_var = 0xc;
  func_00172BC8(D_00484CA4, 6, 0x80323C3C, -1);
  func_00172DC0(0x80323C3C, -1, 0);
  func_00173C08(p->a + new_var, 0xa, func_001671F8(arg0), 0x10a, -0x1f4, 0x1f4, 0x15);
  func_00172F88();
  return func_0016EC08(p->a + 5, 6, (p->a + p->c) - 5, 0xbc, 3, 0x3c000000);
}
