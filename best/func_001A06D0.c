extern u8 D_00444A34[16];
extern u8 D_008EAB18[16];
s32 func_001AD740(s32);
s32 func_001AD760(s32);
void func_00144AC0(s32);
void *func_002FF8C0(void);
void *func_002FD0F0(s32, s32, s32);
s64 *func_002FAB30(u16, s32 *, s32);
void *func_002FAC28(s32 a0, s32 *a1, s32 a2);
s64 func_001A06D0(s32 arg0, void *arg1)
{
  char *new_var2;
  void *new_var;
  *((s32 *) (((char *) arg1) + 0x8)) = arg0;
  *((s32 *) (((char *) arg1) + 0x4)) = 0;
  *((s32 *) (((char *) arg1) + 0x0)) = 0;
  new_var2 = (char *) arg1;
  *((s32 *) (new_var2 + 0xC)) = 0;
  *((s32 *) (((char *) arg1) + 0x10)) = 0;
  func_001AD760(*((s32 *) D_00444A34));
  new_var = ((char *) arg1) + 0x14;
  *((void **) new_var) = (new_var = *((void **) D_008EAB18));
  *((void **) D_008EAB18) = arg1;
  return func_001AD740(*((s32 *) D_00444A34));
}

s64 func_002FC4C0(s32 arg0, void *arg1);
void *func_002FC558(s32 arg0);
