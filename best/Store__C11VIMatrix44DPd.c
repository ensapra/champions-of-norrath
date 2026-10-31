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

void Store__C11VIMatrix44DPd(void *arg0, void *arg1) {
    s32 var_6;
    s64 temp_2;
    s64 temp_2_2;
    void *temp_5;
    void *temp_5_2;
    void *var_3;
    void *var_4;
    void *var_5;

    var_5 = arg1;
    var_3 = arg0;
    var_4 = arg0 + 8;
    var_6 = 3;
    do {
        var_6 -= 1;
        M2C_FIELD(var_5, s64 *, 0) = (s64) M2C_FIELD(var_3, s64 *, 0);
        temp_5 = var_5 + 8;
        M2C_FIELD(var_5, s64 *, 8) = (s64) M2C_FIELD(var_4, s64 *, 0);
        temp_5_2 = temp_5 + 8;
        temp_2 = M2C_FIELD(var_3, s64 *, 0x10);
        var_3 += 0x20;
        M2C_FIELD(temp_5, s64 *, 8) = temp_2;
        temp_2_2 = M2C_FIELD(var_4, s64 *, 0x10);
        var_4 += 0x20;
        M2C_FIELD(temp_5_2, s64 *, 8) = temp_2_2;
        var_5 = temp_5_2 + 8 + 8;
    } while (var_6 >= 0);
}
