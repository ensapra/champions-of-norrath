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

M2C_UNK ClearSegmentsForward__9VITrailFxPQ29VITrailFx7SEGMENT(void *, M2C_UNK *, M2C_UNK *); /* extern */

s32 Update__9VITrailFxl(void *arg0, s64 arg1) {
    M2C_UNK *temp_4;
    M2C_UNK *temp_6;
    M2C_UNK *var_5;
    f32 temp_f0;
    f32 temp_f1;
    s64 temp_2;
    void *temp_3;

    temp_6 = M2C_FIELD(arg0, M2C_UNK **, 0x1C);
    temp_2 = arg1 - M2C_FIELD(arg0, s64 *, 0x10);
    M2C_FIELD(arg0, s64 *, 0x10) = arg1;
    var_5 = temp_6;
loop_1:
    temp_4 = M2C_FIELD(var_5, M2C_UNK **, 0);
    if (temp_4 != NULL) {
        temp_f0 = M2C_FIELD(var_5, f32 *, 0x48) + ((f32) ((s64) (temp_2 << 0x20) >> 0x20) * 0.0009999999f);
        M2C_FIELD(var_5, f32 *, 0x48) = temp_f0;
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x18);
        if (!(temp_f1 <= temp_f0)) {
            var_5 = temp_4;
            goto loop_1;
        }
        temp_3 = M2C_FIELD(var_5, void **, 4);
        if (M2C_FIELD(temp_3, s32 *, 4) != 0) {
            if (!(temp_f1 <= M2C_FIELD(temp_3, f32 *, 0x48))) {
                var_5 = temp_4;
                goto loop_1;
            }
            ClearSegmentsForward__9VITrailFxPQ29VITrailFx7SEGMENT(arg0, var_5, temp_6);
        } else {
            ClearSegmentsForward__9VITrailFxPQ29VITrailFx7SEGMENT(arg0, var_5, temp_6);
        }
    }
    return *M2C_FIELD(arg0, M2C_UNK **, 0x1C) != NULL;
}
