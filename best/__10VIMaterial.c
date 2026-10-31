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

M2C_UNK __10VIMatrix33(s32);                        /* extern */

void __10VIMaterial(void *arg0) {
    s32 var_19;
    void *temp_17;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *var_16;

    temp_17 = arg0 + 0x10;
    var_16 = arg0 + 0x30;
    var_19 = 2;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(temp_17, s8 *, 3) = -1;
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(temp_17, s8 *, 1) = 0;
    M2C_FIELD(temp_17, s8 *, 2) = 0;
    do {
        temp_2 = var_16 + 8;
        M2C_FIELD(temp_2, s8 *, 3) = -1;
        var_19 -= 1;
        M2C_FIELD(var_16, s8 *, 8) = 0;
        M2C_FIELD(temp_2, s8 *, 1) = 0;
        M2C_FIELD(temp_2, s8 *, 2) = 0;
        __10VIMatrix33(var_16 + 0x10);
        temp_3 = var_16 + 0x38;
        temp_2_2 = var_16 + 0x40;
        var_16 += 0x90;
        M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
        M2C_FIELD(temp_3, f32 *, 0) = 0.0f;
        M2C_FIELD(temp_2_2, f32 *, 4) = 0.0f;
        M2C_FIELD(temp_2_2, f32 *, 0) = 0.0f;
    } while (var_19 != -1);
    M2C_FIELD(arg0, s32 *, 0xC) = 0x13;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(temp_17, s8 *, 3) = 0;
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(temp_17, s8 *, 1) = 0;
    M2C_FIELD(temp_17, s8 *, 2) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    M2C_FIELD(arg0, s64 *, 0x18) = 0;
}
