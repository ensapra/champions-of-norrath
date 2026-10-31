/* machine draft (m2c) for ee-gcc-2.96 -Os -G8 -mno-check-zero-division, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 (***__get_eh_info())(M2C_UNK, s32, M2C_UNK);    /* extern */

s32 __eh_rtime_match(s32 arg0) {
    s32 (**temp_4)(M2C_UNK, s32, M2C_UNK);
    s32 (*temp_3)(M2C_UNK *, s32, M2C_UNK);
    s32 var_2;

    temp_4 = *__get_eh_info();
    var_2 = 0;
    temp_3 = *temp_4;
    if (temp_3 != NULL) {
        var_2 = temp_3(temp_4, arg0, 0) != 0;
    }
    return var_2;
}
