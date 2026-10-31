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

s32 Last__9VIHSpritei(void *arg0, s32 arg1) {
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_6;
    s32 var_4;

    temp_6 = M2C_FIELD(arg0, s32 *, 0x48);
    temp_3 = M2C_FIELD((temp_6 + (arg1 << 8)), s32 *, 4);
    var_4 = 0x7FFFFFFF;
    if (temp_3 != -1) {
        var_4 = temp_3;
loop_2:
        temp_3_2 = M2C_FIELD((temp_6 + (var_4 << 8)), s32 *, 8);
        if (temp_3_2 != -1) {
            var_4 = temp_3_2;
            goto loop_2;
        }
    }
    return var_4;
}
