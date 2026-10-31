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

s32 FindTrigger__9VIHSpriteiRi(void *arg0, s32 arg1, s32 *arg2) {
    s32 *var_3;
    s32 var_7;

    var_7 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x58) > 0) {
        var_3 = M2C_FIELD((arg0 + 0x58), s32 **, 4);
loop_2:
        var_3 += 0x10;
        if (*var_3 == arg1) {
            *arg2 = var_7;
            return 1;
        }
        var_7 += 1;
        if (var_7 >= M2C_FIELD(arg0, s32 *, 0x58)) {
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_2;
    }
    return 0;
}
