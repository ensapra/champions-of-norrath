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

s32 GetNumTriangles__C12VIPrimBuffer(void *arg0) {
    s32 *var_4;
    s32 temp_2;
    s32 temp_2_2;
    s32 var_2;
    s32 var_3;
    s32 var_5;

    var_5 = 0;
    var_2 = -1;
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        temp_2 = M2C_FIELD(arg0, s32 *, 0x48);
        if (temp_2 > 0) {
            var_4 = M2C_FIELD(arg0, s32 **, 0x5C);
            var_3 = temp_2;
            do {
                temp_2_2 = *var_4;
                var_4 += 0x1C;
                var_3 -= 1;
                var_5 = (var_5 + temp_2_2) - 2;
            } while (var_3 != 0);
        }
        var_2 = var_5;
    }
    return var_2;
}
