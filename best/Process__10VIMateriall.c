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

s32 Process__10VIMateriall(void *arg0, s64 arg1) {
    f32 *var_7;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f0;
    s32 temp_3;
    s32 var_8;
    s64 temp_2;
    void *var_3;

    temp_2 = M2C_FIELD(arg0, s64 *, 0x18);
    if (temp_2 != arg1) {
        temp_3 = M2C_FIELD(arg0, s32 *, 8);
        temp_f3 = (f32) ((s64) ((arg1 - temp_2) << 0x20) >> 0x20) * 0.0009999999f;
        if (temp_3 > 0) {
            var_8 = temp_3;
            var_7 = arg0 + 0x74;
            var_3 = arg0;
            do {
                if (M2C_FIELD(var_3, s32 *, 0x30) >= 0) {
                    temp_f0 = M2C_FIELD(var_3, f32 *, 0x70);
                    temp_f2 = temp_f0 + (M2C_FIELD(var_3, f32 *, 0x68) * temp_f3);
                    M2C_FIELD(var_3, f32 *, 0x70) = temp_f2;
                    var_f0 = M2C_FIELD(var_3, f32 *, 0x6C) * temp_f3;
                    M2C_FIELD(var_3, f32 *, 0x74) = (f32) (M2C_FIELD(var_3, f32 *, 0x74) + var_f0);
                    if ((temp_f2 > 1.0f) || (temp_f2 < -1.0f)) {
                        var_f0 = temp_f2 - (f32) temp_f0;
                        M2C_FIELD(var_3, f32 *, 0x70) = var_f0;
                    }
                    temp_f1 = M2C_FIELD(var_3, f32 *, 0x74);
                    if ((temp_f1 > 1.0f) || (temp_f1 < -1.0f)) {
                        *var_7 = temp_f1 - (f32) var_f0;
                    }
                }
                var_8 -= 1;
                var_7 += 0x90;
                var_3 += 0x90;
            } while (var_8 != 0);
        }
        M2C_FIELD(arg0, s64 *, 0x18) = arg1;
    }
    return 0;
}
