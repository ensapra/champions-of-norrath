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

M2C_UNK func_00179520(s32 *, s32, M2C_UNK, u32);    /* extern */
extern M2C_UNK xmlParseConditionalSections;

void func_00179158(s32 arg0, u32 arg3) {
    s32 *temp_17;
    s32 *var_16;
    s32 temp_2;
    s32 temp_3;
    s32 temp_3_2;
    s32 var_3;
    s32 var_4;
    s32 var_5;
    s32 var_5_2;
    u32 var_7;
    void *var_2;

    var_7 = arg3;
    var_16 = M2C_FIELD(&xmlParseConditionalSections, s32 **, 0x364);
    temp_17 = arg0 - 4;
    if (var_16 != temp_17) {
        var_4 = *var_16;
        var_5 = var_4 & 0x7FFFFFFF;
        temp_3 = var_5 * 4;
        if ((var_16 + temp_3 + 4) != temp_17) {
            var_7 = M2C_FIELD(&xmlParseConditionalSections, u32 *, 0x368);
            var_2 = var_16 + temp_3;
loop_3:
            var_16 = var_2 + 4;
            if (var_7 >= (u32) var_16) {
                var_4 = M2C_FIELD(var_2, s32 *, 4);
                var_5 = var_4 & 0x7FFFFFFF;
                temp_3_2 = var_5 * 4;
                var_2 = var_16 + temp_3_2;
                if ((var_16 + temp_3_2 + 4) == temp_17) {
                    goto block_5;
                }
                goto loop_3;
            }
        } else {
block_5:
            if (var_4 < 0) {
                var_16 = temp_17;
                var_3 = *var_16;
                goto block_12;
            }
            var_5_2 = var_5 + (*temp_17 & 0x7FFFFFFF) + 1;
            goto block_13;
        }
    } else {
        var_3 = *var_16;
block_12:
        var_5_2 = var_3 & 0x7FFFFFFF;
block_13:
        func_00179520(var_16, var_5_2, 0, var_7);
        temp_2 = M2C_FIELD(&temp_17[*temp_17], s32 *, 4);
        if (temp_2 >= 0) {
            func_00179520(var_16, (*var_16 & 0x7FFFFFFF) + (temp_2 & 0x7FFFFFFF) + 1, 0, 0x7FFFFFFFU);
        }
    }
}
