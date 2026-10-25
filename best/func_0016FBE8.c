s64 func_001708F0(s32, s64);
void func_0016FBE8(void *arg0, u8 *arg1, u8 *arg2, u8 *arg3)
{
  s32 a0;
  s32 a1;
  s32 a2;
  s32 a3;
  a0 = arg2[0];
  a3 = a0 + ((u8) (func_001708F0(arg3[0] - a0, *((s64 *) (((char *) arg0) + 0x18))) >> 16));
  arg1[0] = a3;
  a1 = arg2[1];
  arg1[1] = a1 + ((u8) (func_001708F0(arg3[1] - a1, *((s64 *) (((char *) arg0) + 0x18))) >> 16));
  a2 = arg2[2];
  a3 = a2 + ((u8) ((func_001708F0(arg3[2] - a2, *((s64 *) (((char *) arg0) + 0x18))) >> 3) >> 13));
  arg1[2] = a3;
  a3 = arg2[3];
  arg1[3] = a3 + ((u8) (func_001708F0(arg3[3] - a3, *((s64 *) (((char *) arg0) + 0x18))) >> 16));
}
