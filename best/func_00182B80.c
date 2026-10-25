void func_0017FF68(s32);
void func_0017FD84(f32);
void func_00181878(void);
void func_001818D8(void);
void func_00181988(void);
void func_0019BA4C(void *);
void func_0018A2A8(void *, s32, void *);
s32 func_0017FF20(void *);
void func_0017FCEC(s32, s32);
void func_00180130(void);
void func_00180140(void);
void func_001864F8(s32, s32);
void func_0017FF74(void *, s32, s32);
typedef struct 
{
  u8 pad[0xE0];
  s32 (*f_e0)(s32);
  s32 pad2;
  s32 (*f_e8)(s32);
} Obj;
extern Obj D_001E2440;
extern s32 D_001D2180[];
s32 func_00182B80(s32 arg0, s32 arg1, s32 arg2, s32 *arg3)
{
  u8 buf0[0x100];
  u8 buf1[0x800];
  s32 r;
  func_0017FF68(5);
  r = 0.7313125f;
  func_0017FD84(r);
  func_00181878();
  func_001818D8();
  func_00181988();
  func_0019BA4C(buf0);
  func_0018A2A8(buf1, 0x100, buf0);
  r = D_001E2440.f_e8(func_0017FF20(buf1));
  func_0017FCEC(arg3[0], D_001E2440.f_e0(arg3[1]) - D_001D2180[0]);
  func_00180130();
  func_001864F8(arg0, arg2);
  func_0017FF74(buf1, arg0, 0xC0000);
  func_001864F8(arg0, 0);
  func_00180140();
  return r;
}
