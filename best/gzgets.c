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

s32 gzread(s32, u8 *, M2C_UNK);                     /* extern */

u8 *gzgets(s32 arg0, u8 *arg1, s32 arg2) {
    s32 var_17;
    u8 *temp_18;
    u8 *var_16;
    u8 *var_2;

    var_16 = arg1;
    temp_18 = var_16;
    var_17 = arg2;
    if ((temp_18 == NULL) || (var_17 <= 0)) {
        return NULL;
    }
loop_3:
    var_17 -= 1;
    if ((var_17 > 0) && (gzread(arg0, var_16, 1) == 1)) {
        var_16 += 1;
        if ((s8) *var_16 != 0xA) {
            goto loop_3;
        }
    }
    *var_16 = 0;
    if ((temp_18 != var_16) || (var_2 = NULL, (var_17 <= 0))) {
        var_2 = temp_18;
    }
    return var_2;
}
