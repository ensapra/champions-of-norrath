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

void strlwr16__8VIStringPUs(u16 *arg0) {
    s32 var_2;
    u16 *var_4;
    u16 var_3;

    var_4 = arg0;
    var_3 = *var_4;
    if (var_3 != 0) {
        var_2 = var_3 + 0xFFBF;
        do {
            if ((u32) (var_2 & 0xFFFF) < 0x1AU) {
                *var_4 = var_3 + 0x20;
            }
            var_4 += 2;
            var_3 = *var_4;
            var_2 = var_3 + 0xFFBF;
        } while (var_3 != 0);
    }
}
