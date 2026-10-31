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

M2C_UNK *_S_oom_malloc__t23__malloc_alloc_template1i0Ui(u32); /* extern */
M2C_UNK *_S_refill__t24__default_alloc_template2b0i0Ui(s32, M2C_UNK **, u32, M2C_UNK *, s32, M2C_UNK *); /* extern */
M2C_UNK __wrap_free(M2C_UNK *);                     /* extern */
M2C_UNK *__wrap_malloc(u32, u32, u32, M2C_UNK *, s32, M2C_UNK *); /* extern */
M2C_UNK memcpy(M2C_UNK *, M2C_UNK *, s32);          /* extern */
M2C_UNK memmove(void *, void *, s32, M2C_UNK *, s32, M2C_UNK *); /* extern */
extern M2C_UNK D_011F290C;

M2C_UNK **replace__t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0UiUiPCcUi(M2C_UNK **arg0, s32 arg1, u32 arg2, M2C_UNK *arg3, s32 arg4) {
    M2C_UNK **temp_2_2;
    M2C_UNK **temp_5_3;
    M2C_UNK *temp_3;
    M2C_UNK *temp_4_2;
    M2C_UNK *var_16_2;
    M2C_UNK *var_2;
    M2C_UNK *var_4;
    M2C_UNK *var_9;
    s32 temp_22;
    s32 temp_2;
    s32 temp_30;
    s32 temp_3_2;
    s32 temp_6_3;
    s32 temp_6_4;
    s32 var_8;
    u32 temp_19;
    u32 temp_4;
    u32 temp_5;
    u32 temp_5_2;
    u32 temp_6_2;
    u32 var_16;
    u32 var_17;
    void *temp_6;

    var_8 = 0;
    var_9 = *arg0;
    temp_6 = var_9 - 0x10;
    temp_22 = M2C_FIELD(temp_6, s32 *, 0);
    temp_5 = temp_22 - arg1;
    M2C_FIELD(temp_6, s32 *, 0xC) = 0;
    temp_19 = (temp_5 < arg2) ? temp_5 : arg2;
    temp_30 = (temp_22 - temp_19) + arg4;
    temp_5_2 = temp_30 + 1;
    if (((u32) M2C_FIELD(temp_6, u32 *, 8) >= 2U) || (temp_4 = M2C_FIELD(temp_6, u32 *, 4), ((temp_4 < temp_5_2) != 0)) || ((u32) (((temp_5_2 >= 0x10U) ? temp_5_2 : 0x10U) * 2) < temp_4)) {
        var_8 = 1;
    }
    var_17 = 0x10;
    if (var_8 != 0) {
        var_16 = 0x20;
        if (temp_5_2 > 0x10U) {
            var_17 = 0x10 * 2;
loop_7:
            if (var_17 < temp_5_2) {
                var_17 *= 2;
                goto loop_7;
            }
            var_16 = var_17 + 0x10;
        }
        temp_6_2 = var_17 + 0x17;
        if (var_16 >= 0x81U) {
            var_2 = __wrap_malloc(var_16, temp_5_2, temp_6_2, var_9, var_8, var_9);
            if (var_2 == NULL) {
                var_2 = _S_oom_malloc__t23__malloc_alloc_template1i0Ui(var_16);
            }
            var_4 = var_2;
        } else {
            temp_5_3 = &D_011F290C + ((temp_6_2 >> 3) * 4);
            temp_3 = *temp_5_3;
            if (temp_3 != NULL) {
                var_4 = temp_3;
                *temp_5_3 = *temp_3;
            } else {
                var_4 = _S_refill__t24__default_alloc_template2b0i0Ui(temp_6_2 & ~7, temp_5_3, temp_6_2, var_9, var_8, var_9);
            }
        }
        M2C_FIELD(var_4, u32 *, 4) = var_17;
        M2C_FIELD(var_4, s32 *, 8) = 1;
        M2C_FIELD(var_4, s32 *, 0xC) = 0;
        if (arg1 != 0) {
            var_16_2 = var_4 + 0x10;
            memcpy(var_16_2, *arg0, arg1);
        } else {
            var_16_2 = var_4 + 0x10;
        }
        temp_6_3 = temp_22 - (arg1 + temp_19);
        if (temp_6_3 != 0) {
            memcpy(var_16_2 + (arg1 + arg4), *arg0 + arg1 + temp_19, temp_6_3);
        }
        if (arg4 != 0) {
            memcpy(var_16_2 + arg1, arg3, arg4);
        }
        temp_4_2 = *arg0 - 0x10;
        temp_2 = M2C_FIELD(temp_4_2, s32 *, 8) - 1;
        M2C_FIELD(temp_4_2, s32 *, 8) = temp_2;
        if (temp_2 == 0) {
            temp_3_2 = M2C_FIELD(temp_4_2, s32 *, 4);
            if ((u32) (temp_3_2 + 0x10) >= 0x81U) {
                __wrap_free(temp_4_2);
            } else {
                temp_2_2 = &D_011F290C + (((u32) (temp_3_2 + 0x17) >> 3) * 4);
                M2C_FIELD(temp_4_2, M2C_UNK **, 0) = *temp_2_2;
                *temp_2_2 = temp_4_2;
            }
        }
        *arg0 = var_16_2;
        var_9 = var_16_2;
    } else {
        temp_6_4 = temp_22 - (arg1 + temp_19);
        if (temp_6_4 != 0) {
            memmove(var_9 + (arg1 + arg4), var_9 + arg1 + temp_19, temp_6_4, var_9, var_8, var_9);
            var_9 = *arg0;
        }
        if (arg4 != 0) {
            memcpy(var_9 + arg1, arg3, arg4);
            var_9 = *arg0;
        }
    }
    M2C_FIELD(var_9, s32 *, -0x10) = temp_30;
    return arg0;
}
