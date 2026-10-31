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
M2C_UNK __Q212RealmService9PlayerImp(s32);
s32 __builtin_new(M2C_UNK);
void __Q212RealmService6Player(s32 *arg0)
{
  s32 temp_2;
  temp_2 = __builtin_new(0x10);
  if (temp_2 != 0)
  {
    __Q212RealmService9PlayerImp(temp_2);
    *arg0 = temp_2;
  }
}
