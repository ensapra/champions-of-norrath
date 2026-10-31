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

M2C_UNK ___t7VIArray1Z17VIRadialFloraInst(s32, M2C_UNK); /* extern */
M2C_UNK __builtin_delete(s32);                      /* extern */

s32 Clear__19VIRadialFloraSystem(void *arg0) {
    s32 *var_17;
    s32 temp_16;
    s32 var_19;

    var_17 = arg0 + 0x20;
    var_19 = 8;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    do {
        temp_16 = *var_17;
        if (temp_16 != 0) {
            ___t7VIArray1Z17VIRadialFloraInst(temp_16 + 0x2C, 2);
            __builtin_delete(temp_16);
            *var_17 = 0;
        }
        var_19 -= 1;
        var_17 += 4;
    } while (var_19 >= 0);
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    return 0;
}
