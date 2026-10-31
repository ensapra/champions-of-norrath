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

M2C_UNK Identity__10VIMatrix33(void *);             /* extern */

s32 Init__10VIMateriali(void *arg0, s32 arg1) {
    s32 var_19;
    void *temp_2;
    void *temp_4;
    void *var_16;
    void *var_18;

    temp_2 = arg0 + 0x10;
    M2C_FIELD(arg0, s32 *, 0xC) = 0x13;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(temp_2, s8 *, 3) = 0;
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(temp_2, s8 *, 1) = 0;
    M2C_FIELD(temp_2, s8 *, 2) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    if (arg1 > 0) {
        var_19 = arg1;
        var_18 = arg0 + 0x40;
        var_16 = arg0 + 0x70;
        do {
            M2C_FIELD(var_16, s32 *, -0x40) = -1;
            temp_4 = var_18;
            M2C_FIELD(var_16, s32 *, -0x3C) = 1;
            var_19 -= 1;
            M2C_FIELD(var_16, s8 *, -0x38) = -1;
            var_18 += 0x90;
            M2C_FIELD(var_16, s8 *, -0x37) = -1;
            M2C_FIELD(var_16, s8 *, -0x36) = -1;
            M2C_FIELD(var_16, s8 *, -0x35) = -1;
            M2C_FIELD(var_16, s32 *, -0x34) = 0;
            Identity__10VIMatrix33(temp_4);
            M2C_FIELD(var_16, f32 *, 0) = 0.0f;
            M2C_FIELD(var_16, f32 *, 4) = 0.0f;
            M2C_FIELD(var_16, f32 *, -8) = 0.0f;
            M2C_FIELD(var_16, f32 *, -4) = 0.0f;
            M2C_FIELD(var_16, s32 *, 8) = -1;
            M2C_FIELD(var_16, f32 *, -0xC) = 0.79999995f;
            var_16 += 0x90;
        } while (var_19 != 0);
    }
    return 0;
}
