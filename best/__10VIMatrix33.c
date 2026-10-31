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

M2C_UNK Zero__10VIMatrix33(M2C_UNK);                /* extern */

void __10VIMatrix33(void *arg0) {
    s32 var_3;
    void *var_2;

    var_2 = arg0;
    var_3 = 2;
    do {
        var_3 -= 1;
        M2C_FIELD(var_2, f32 *, 0) = 0.0f;
        M2C_FIELD(var_2, f32 *, 4) = 0.0f;
        M2C_FIELD(var_2, f32 *, 8) = 0.0f;
        var_2 += 0xC;
    } while (var_3 != -1);
    Zero__10VIMatrix33(-1);
}
