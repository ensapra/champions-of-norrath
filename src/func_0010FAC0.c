char D_001BB8F4[];
char D_001BB730[];
extern char jtbl_004C006C[];
unsigned int func_0010F3F8(s32, s32 *, s32, s32, s32, s32, s32, void *, void *, f32);
void func_0010FAC0(s32 arg0, s32 arg1)
{
  f32 f = *((f32 *) D_001BB8F4);
  s32 arr[4];
  arr[0] = 0xB4;
  arr[1] = 0xA;
  arr[2] = 0x118;
  arr[3] = 0x1A;
  func_0010F3F8(arg0, arr, 1, 0, 1, 0, arg1, (void *) (jtbl_004C006C + 0x7504), (void *) D_001BB730, f);
}
