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
M2C_UNK xmlHashRemoveEntry3(M2C_UNK, M2C_UNK, s32);
void xmlHashRemoveEntry(s32 arg2)
{
  s32 new_var2;
  s32 new_var3;
  int new_var;
  new_var3 = arg2;
  new_var = 0;
  new_var3 = new_var;
  new_var2 = new_var3;
  xmlHashRemoveEntry3(new_var3, new_var3, new_var2);
}
