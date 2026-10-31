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

M2C_UNK *__wrap_calloc(s32, M2C_UNK, s32);          /* extern */

M2C_UNK *getBlock__Q24Base14BlockAllocatorUi(s32 arg0, u32 arg1) {
    M2C_UNK **temp_4;
    M2C_UNK *temp_2;
    M2C_UNK *temp_2_2;
    M2C_UNK *var_3;
    s32 temp_4_2;
    s32 var_16;
    u32 temp_16;
    u32 temp_16_2;
    u32 var_3_2;

    var_3_2 = 0x10;
    var_16 = 0x10;
loop_1:
    if (var_3_2 != 0) {
        if ((arg1 >> var_16) == 0) {
            var_3_2 = var_3_2 >> 1;
            var_16 -= var_3_2;
            goto loop_1;
        }
        if ((u32) (1 << var_16) < arg1) {
            var_3_2 = var_3_2 >> 1;
            var_16 += var_3_2;
            goto loop_1;
        }
    }
    temp_16 = var_16 + 1;
    temp_16_2 = (temp_16 < 2U) ? 2U : temp_16;
    temp_4 = arg0 + (temp_16_2 * 4);
    temp_2 = *temp_4;
    if (temp_2 != NULL) {
        var_3 = temp_2;
        temp_2_2 = *var_3;
        *var_3 = NULL;
        *temp_4 = temp_2_2;
    } else {
        temp_4_2 = 1 << temp_16_2;
        var_3 = __wrap_calloc(((s32) ((temp_4_2 < 0) ? (temp_4_2 + 3) : temp_4_2) >> 2) + 2, 4, arg0);
        M2C_FIELD(var_3, u32 *, 4) = temp_16_2;
        M2C_FIELD(var_3, M2C_UNK **, 0) = NULL;
    }
    return var_3 + 8;
}
