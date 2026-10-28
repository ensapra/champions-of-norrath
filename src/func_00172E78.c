extern s32 D_001D0220[];
extern s32 D_001D0224[];
extern u8 D_001D0228[];
extern u8 D_010E46F0[];
extern s32 ovl_ntgui2_func_0018E4A0(s32);
extern void func_00172C70(s32);
extern void func_0018E440(void *, s32);
extern void func_0018F4F8(void *, s16, s16, s16);
void func_00172E78(void)
{
  s32 *a = D_001D0220;
  s32 *b = D_001D0224;
  s32 count;
  s32 flag;
  count = a[0] + 1;
  a[0] = count;
  flag = ovl_ntgui2_func_0018E4A0(0) == 0;
  b[0] = flag;
  func_00172C70(flag);
  func_0018E440(D_010E46F0, a[0]);
  if ((*((s32 *) D_001D0228)) == 1)
  {
    *((s32 *) (D_001D0228 + 0x28)) = b[0];
    func_0018F4F8((a[0] & 1) ? (D_010E46F0 + 0x150) : (D_010E46F0 + 0x60), *((s16 *) (D_001D0228 + 0x20)), *((s16 *) (D_001D0228 + 0x24)), b[0]);
  }
  else
  {
    *((s32 *) (D_001D0228 + 0x28)) = 0;
  }
}
