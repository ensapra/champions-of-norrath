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
s32 Index__C7VILListP7VILNode(M2C_UNK **arg0, s32 arg1)
{
  M2C_UNK *temp_2;
  M2C_UNK *var_3;
  M2C_UNK *var_4;
  s32 var_2;
  s32 var_6;
  var_4 = *arg0;
  var_3 = *var_4;
  var_6 = 0;
  if (var_3 != NULL)
  {
    loop_1:
    var_2 = var_6;

    var_6 += 1;
    if (var_4 != arg1)
    {
      var_4 = var_3;
      temp_2 = *var_4;
      var_3 = temp_2;
      if (temp_2 == NULL)
      {
        goto block_3;
      }
      goto loop_1;
    }
  }
  else
  {
    block_3:
    var_2 = -1;

  }
  var_6 = var_2;
  return var_6;
}
