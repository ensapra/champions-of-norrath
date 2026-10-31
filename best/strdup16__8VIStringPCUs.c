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

s32 __wrap_malloc(s32, s32);                        /* extern */
M2C_UNK memcpy(s32, u16 *, s32);                    /* extern */

s32 strdup16__8VIStringPCUs(u16 *arg0) {
    s32 temp_18;
    s32 temp_2;
    s32 var_4;
    s32 var_5;

    var_5 = 0;
    if (*arg0 != 0) {
        var_5 = 1;
        do {
            var_4 = var_5 * 2;
            var_5 += 1;
        } while (*(var_4 + arg0) != 0);
    } else {
        var_4 = 0;
    }
    temp_18 = var_4 + 2;
    temp_2 = __wrap_malloc(temp_18, var_5);
    if (temp_2 != 0) {
        memcpy(temp_2, arg0, temp_18);
    }
    return temp_2;
}
