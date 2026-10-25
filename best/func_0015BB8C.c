/* machine draft (m2c) for ee-gcc-2.96 -Os -G8, tried by autopilot */
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

void func_0015BB8C(void *arg0) {
    s32 var_5;
    s32 var_6;
    void *temp_3;

    var_6 = 0;
    if (M2C_FIELD(arg0, s32 *, 0xBF0) > 0) {
        var_5 = 0;
        do {
            temp_3 = var_5 + M2C_FIELD(arg0, s32 *, 0xB80);
            var_6 += 1;
            M2C_FIELD(temp_3, s32 *, 4) = (s32) (M2C_FIELD(temp_3, s32 *, 4) & 0xAF);
            var_5 += 0x24;
        } while (var_6 < M2C_FIELD(arg0, s32 *, 0xBF0));
    }
    M2C_FIELD(arg0, s32 *, 0xD0C) = 0;
}
