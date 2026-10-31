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

void Store__C10VIMatrix44Pf(void *arg0, void *arg1) {
    f32 temp_f0;
    s32 var_2;
    void *temp_5;
    void *temp_5_2;
    void *var_4;
    void *var_5;

    var_4 = arg0;
    var_5 = arg1;
    var_2 = 3;
    do {
        var_2 -= 1;
        M2C_FIELD(var_5, f32 *, 0) = (f32) M2C_FIELD(var_4, f32 *, 0);
        temp_5 = var_5 + 4;
        M2C_FIELD(var_5, f32 *, 4) = (f32) M2C_FIELD(var_4, f32 *, 4);
        temp_5_2 = temp_5 + 4;
        M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(var_4, f32 *, 8);
        temp_f0 = M2C_FIELD(var_4, f32 *, 0xC);
        var_4 += 0x10;
        M2C_FIELD(temp_5_2, f32 *, 4) = temp_f0;
        var_5 = temp_5_2 + 4 + 4;
    } while (var_2 >= 0);
}
