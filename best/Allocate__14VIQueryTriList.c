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

void *__builtin_vec_new(s32);                       /* extern */

s32 Allocate__14VIQueryTriList(void *arg0) {
    s32 temp_16;
    s32 var_2;
    s32 var_6;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_4;
    void *var_5;

    temp_16 = M2C_FIELD(arg0, s32 *, 4);
    var_2 = 0;
    if (temp_16 != 0) {
        temp_2 = __builtin_vec_new(temp_16 * 0x28);
        if (temp_2 != NULL) {
            var_5 = temp_2;
            var_6 = temp_16 - 1;
            if (temp_16 != 0) {
                do {
                    temp_2_2 = var_5 + 4;
                    temp_3 = var_5 + 0x10;
                    temp_4 = var_5 + 0x1C;
                    var_5 += 0x28;
                    var_6 -= 1;
                    M2C_FIELD(temp_2_2, f32 *, 8) = 0.0f;
                    M2C_FIELD(temp_2_2, f32 *, 0) = 0.0f;
                    M2C_FIELD(temp_2_2, f32 *, 4) = 0.0f;
                    M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
                    M2C_FIELD(temp_3, f32 *, 0) = 0.0f;
                    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
                    M2C_FIELD(temp_4, f32 *, 8) = 0.0f;
                    M2C_FIELD(temp_4, f32 *, 0) = 0.0f;
                    M2C_FIELD(temp_4, f32 *, 4) = 0.0f;
                } while (var_6 != -1);
            }
        }
        M2C_FIELD(arg0, void **, 8) = temp_2;
        var_2 = -1;
        if (temp_2 != NULL) {
            var_2 = 0;
        }
    }
    return var_2;
}
