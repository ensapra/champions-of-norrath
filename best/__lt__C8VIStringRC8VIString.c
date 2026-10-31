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

s32 strcmp(s32, s32);                               /* extern */

s32 __lt__C8VIStringRC8VIString(void *arg0, void *arg1) {
    s32 temp_3;
    s32 temp_4;
    s32 var_2;

    temp_4 = M2C_FIELD(arg0, s32 *, 8);
    var_2 = 1;
    if (temp_4 != 0) {
        temp_3 = M2C_FIELD(arg1, s32 *, 8);
        var_2 = 0;
        if (temp_3 != 0) {
            var_2 = strcmp(temp_4, temp_3) < 0;
        }
    }
    return var_2;
}
