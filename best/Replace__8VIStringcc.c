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

s32 Replace__8VIStringcc(void *arg0, s8 arg1, s8 arg2) {
    s32 var_7;
    s8 *temp_3;

    var_7 = 0;
    if (M2C_FIELD(arg0, s32 *, 0) > 0) {
        do {
            temp_3 = M2C_FIELD(arg0, s32 *, 8) + var_7;
            var_7 += 1;
            if (*temp_3 == arg1) {
                *temp_3 = arg2;
            }
        } while (var_7 < M2C_FIELD(arg0, s32 *, 0));
    }
    return 0;
}
