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

M2C_UNK *_S_chunk_alloc__t24__default_alloc_template2b0i0UiRi(u32, s32 *); /* extern */
s32 __ls__7ostreamPCc(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK *__uninitialized_copy_aux__H2ZPCQ312Plat_Unicode6Blocks5RangeZPQ312Plat_Unicode6Blocks5Range_X01X01X11G12__false_type_X11(s32, s32, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK *__wrap_malloc(u32);                        /* extern */
M2C_UNK endl__FR7ostream(s32);                      /* extern */
M2C_UNK (*exit(M2C_UNK))();                         /* extern */
extern M2C_UNK D_011C5B98;
extern M2C_UNK D_011F2910;
extern M2C_UNK (*D_011F2B34)();
extern M2C_UNK D_013577D0;

void *__uninitialized_copy_aux__H2ZPCQ312Plat_Unicode6Blocks10RangeGroupZPQ312Plat_Unicode6Blocks10RangeGroup_X01X01X11G12__false_type_X11(void *arg0, s32 arg1, void *arg2) {
    s32 sp10;
    M2C_UNK *sp14;
    s32 sp18;
    M2C_UNK (*var_2)();
    M2C_UNK **temp_5;
    M2C_UNK *temp_2_2;
    M2C_UNK *temp_2_3;
    M2C_UNK *temp_3;
    M2C_UNK *temp_5_2;
    M2C_UNK *temp_7;
    M2C_UNK *var_4;
    M2C_UNK *var_5;
    M2C_UNK *var_5_2;
    M2C_UNK *var_6;
    s32 temp_2;
    s32 var_6_2;
    u32 temp_16;
    u32 temp_4;
    u32 var_18;
    void *temp_17;
    void *temp_22;
    void *var_20;
    void *var_21;

    var_21 = arg0;
    var_20 = arg2;
    sp18 = arg1;
    if (var_21 != arg1) {
        do {
            temp_17 = var_20 + 4;
            if (var_20 != NULL) {
                temp_22 = var_21 + 4;
                M2C_FIELD(var_20, s32 *, 0) = (s32) M2C_FIELD(var_21, s32 *, 0);
                M2C_FIELD(var_20, M2C_UNK **, 4) = NULL;
                temp_2 = (s32) (M2C_FIELD(temp_22, s32 *, 4) - M2C_FIELD(var_21, s32 *, 4)) >> 2;
                M2C_FIELD(temp_17, M2C_UNK **, 4) = NULL;
                M2C_FIELD(temp_17, void **, 8) = NULL;
                if (temp_2 != 0) {
                    var_18 = temp_2 * 4;
                    if (var_18 >= 0x81U) {
                        temp_2_2 = __wrap_malloc(var_18);
                        var_6 = temp_2_2;
                        if (temp_2_2 == NULL) {
                            do {
                                var_2 = D_011F2B34;
                                if (var_2 == NULL) {
                                    endl__FR7ostream(__ls__7ostreamPCc(&D_013577D0, &D_011C5B98, var_6));
                                    var_2 = exit(1);
                                }
                                var_2();
                                temp_2_3 = __wrap_malloc(var_18);
                                var_6 = temp_2_3;
                            } while (temp_2_3 == NULL);
                            var_5 = var_6;
                        } else {
                            goto block_20;
                        }
                    } else {
                        temp_4 = var_18 + 7;
                        temp_5 = (((temp_4 >> 3) - 1) * 4) + &D_011F2910;
                        temp_3 = *temp_5;
                        if (temp_3 != NULL) {
                            var_6 = temp_3;
                            *temp_5 = *temp_3;
                        } else {
                            temp_16 = temp_4 & ~7;
                            sp10 = 0x14;
                            temp_7 = _S_chunk_alloc__t24__default_alloc_template2b0i0UiRi(temp_16, &sp10);
                            if (sp10 != 1) {
                                temp_5_2 = temp_7 + temp_16;
                                var_4 = temp_5_2;
                                var_6_2 = 1;
                                M2C_FIELD(((temp_16 >> 1) + &D_011F2910), M2C_UNK **, -4) = temp_5_2;
                                var_5_2 = var_4 + temp_16;
                                if ((sp10 - 1) != 1) {
                                    do {
                                        var_6_2 += 1;
                                        *var_4 = var_5_2;
                                        var_4 = var_5_2;
                                        var_5_2 = var_4 + temp_16;
                                    } while ((sp10 - 1) != var_6_2);
                                }
                                *var_4 = NULL;
                            }
                            var_6 = temp_7;
                        }
block_20:
                        var_5 = var_6;
                    }
                } else {
                    var_5 = NULL;
                    var_18 = 0;
                }
                M2C_FIELD(var_20, M2C_UNK **, 4) = var_5;
                M2C_FIELD(temp_17, void **, 8) = (void *) (var_5 + var_18);
                M2C_FIELD(temp_17, M2C_UNK **, 4) = var_5;
                sp14 = var_5;
                M2C_FIELD(temp_17, M2C_UNK **, 4) = __uninitialized_copy_aux__H2ZPCQ312Plat_Unicode6Blocks5RangeZPQ312Plat_Unicode6Blocks5Range_X01X01X11G12__false_type_X11(M2C_FIELD(var_21, s32 *, 4), M2C_FIELD(temp_22, s32 *, 4), var_5, 0);
            }
            var_21 += 0x10;
            var_20 += 0x10;
        } while (var_21 != sp18);
    }
    return var_20;
}
