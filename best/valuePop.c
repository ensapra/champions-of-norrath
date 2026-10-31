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

s32 valuePop(void *arg0) {
    s32 *temp_3_2;
    s32 temp_3;
    s32 temp_5;
    s32 var_2;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x14);
    var_2 = 0;
    temp_5 = temp_3 - 1;
    if (temp_3 > 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = temp_5;
        if (temp_5 > 0) {
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x1C) + (temp_5 * 4)), s32 *, -4);
        } else {
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
        }
        temp_3_2 = (M2C_FIELD(arg0, s32 *, 0x14) * 4) + M2C_FIELD(arg0, s32 *, 0x1C);
        var_2 = *temp_3_2;
        *temp_3_2 = 0;
    }
    return var_2;
}
