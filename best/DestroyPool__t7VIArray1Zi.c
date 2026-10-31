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

s32 DestroyPool__t7VIArray1Zi(s32 *arg0) {
    s32 temp_4;
    s32 var_3;

    temp_4 = *arg0;
    var_3 = (temp_4 != 0) ? 0 : 0x7FFFFFFF;
    if (var_3 != 0x7FFFFFFF) {
        do {
            var_3 = ((var_3 ^ (temp_4 - 1)) == 0) ? 0x7FFFFFFF : (var_3 + 1);
        } while (var_3 != 0x7FFFFFFF);
    }
    return 0;
}
