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

s32 Prev__9VIHSpritei(void *arg0, s32 arg1) {
    s32 temp_4;
    s32 var_2;
    s32 var_3;
    s32 var_6;

    var_6 = 0x7FFFFFFF;
    var_2 = 0x7FFFFFFF;
    if (arg1 != 0) {
        temp_4 = M2C_FIELD(arg0, s32 *, 0x48);
        var_3 = M2C_FIELD((temp_4 + (arg1 << 8)), s32 *, 4);
        if (var_3 != arg1) {
            var_6 = var_3;
loop_3:
            var_3 = M2C_FIELD((temp_4 + (var_6 << 8)), s32 *, 8);
            if (var_3 != arg1) {
                var_6 = var_3;
                goto loop_3;
            }
        }
        var_2 = (var_3 >= 0) ? var_6 : -1;
    }
    return var_2;
}
