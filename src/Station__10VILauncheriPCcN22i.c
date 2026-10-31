#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
s32 Password__C13VIGameOptions(s32);
s32 Username__C13VIGameOptions(s32);
s32 VIGetGameOptions__Fv();
M2C_UNK station_main__FiPCcPcT2T1T1i(s32, s32, s32, s32, s32, s32, s32);
M2C_UNK strcpy(s32, s32);
void Station__10VILauncheriPCcN22i(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
  s32 temp_16;
  s32 new_var;
  s32 temp_17;
  temp_17 = arg0 + 8;
  new_var = VIGetGameOptions__Fv();
  temp_16 = arg0 + 0x108;
  strcpy(temp_17, Username__C13VIGameOptions(new_var));
  strcpy(temp_16, Password__C13VIGameOptions(VIGetGameOptions__Fv()));
  station_main__FiPCcPcT2T1T1i(arg1, arg2, temp_17, temp_16, arg3, arg4, arg5);
}
