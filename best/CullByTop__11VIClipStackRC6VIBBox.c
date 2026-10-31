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

s32 CullByTop__11VIClipStackRC6VIBBox(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    s32 temp_3_2;
    s32 var_2;
    s32 var_7;
    void *temp_3;
    void *var_5;

    temp_3 = M2C_FIELD(arg0, s32 *, 8) + ((M2C_FIELD(arg0, s32 *, 0) - 1) * 0x10);
    var_7 = 0;
    temp_3_2 = M2C_FIELD(temp_3, s32 *, 0);
    sp0 = 0.0f;
    sp4 = 0.0f;
    var_5 = M2C_FIELD(arg0, s32 *, 0x20) + (M2C_FIELD(temp_3, s32 *, 4) * 0x10);
    sp8 = 0.0f;
    if (temp_3_2 > 0) {
loop_2:
        if (!(M2C_FIELD(var_5, f32 *, 0) >= 0.0f)) {
            var_f0 = M2C_FIELD(arg1, f32 *, 0xC);
        } else {
            var_f0 = M2C_FIELD(arg1, f32 *, 0);
        }
        sp0 = var_f0;
        if (!(M2C_FIELD(var_5, f32 *, 4) >= 0.0f)) {
            var_f0_2 = M2C_FIELD(arg1, f32 *, 0x10);
        } else {
            var_f0_2 = M2C_FIELD(arg1, f32 *, 4);
        }
        sp4 = var_f0_2;
        if (!(M2C_FIELD(var_5, f32 *, 8) >= 0.0f)) {
            var_f0_3 = M2C_FIELD(arg1, f32 *, 0x14);
        } else {
            var_f0_3 = M2C_FIELD(arg1, f32 *, 8);
        }
        sp8 = var_f0_3;
        var_2 = 1;
        if (!(((sp0 * M2C_FIELD(var_5, f32 *, 0)) + (sp4 * M2C_FIELD(var_5, f32 *, 4)) + (sp8 * M2C_FIELD(var_5, f32 *, 8)) + M2C_FIELD(var_5, f32 *, 0xC)) > 0.0f)) {
            var_7 += 1;
            var_5 += 0x10;
            if (var_7 >= temp_3_2) {
                goto block_16;
            }
            goto loop_2;
        }
    } else {
block_16:
        var_2 = 0;
    }
    return var_2;
}
