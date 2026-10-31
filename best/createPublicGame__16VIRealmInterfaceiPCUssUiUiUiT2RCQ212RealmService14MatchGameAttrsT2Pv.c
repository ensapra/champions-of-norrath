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

M2C_UNK __wrap_free(u8 *);                          /* extern */
M2C_UNK alloc__t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0Uib(M2C_UNK **, s32, M2C_UNK); /* extern */
u8 *clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(M2C_UNK *, s16); /* extern */
M2C_UNK *clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(M2C_UNK *); /* extern */
M2C_UNK createPublicGame__Q212RealmService15RealmGatewayAPIPCUssUiUiUiT1RCQ212RealmService14MatchGameAttrsT1Pv(void *, s32, s32, s32, s32, s32, u16 *, s32, s32, s32); /* extern */
M2C_UNK replace__t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0UiUiPCUsUi(u8 **, M2C_UNK, M2C_UNK, u16 *, s32); /* extern */
M2C_UNK resize__t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0Uic(M2C_UNK **, s32, M2C_UNK); /* extern */
M2C_UNK snprintf(void *, M2C_UNK, M2C_UNK *);       /* extern */
extern M2C_UNK D_011D8DF8;
extern M2C_UNK D_011F290C;
extern M2C_UNK D_011F6CB8;
extern M2C_UNK D_011FD2E8;

void createPublicGame__16VIRealmInterfaceiPCUssUiUiUiT2RCQ212RealmService14MatchGameAttrsT2Pv(void *arg0, s32 arg1, s32 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, u16 *arg7, s32 arg_sp0, s32 arg_sp8, s32 arg_sp10) {
    u8 *sp10;
    M2C_UNK *sp20;
    M2C_UNK *sp30;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    M2C_UNK *temp_3_4;
    M2C_UNK *temp_4;
    M2C_UNK *var_3_2;
    M2C_UNK *var_3_3;
    M2C_UNK *var_6;
    s32 temp_17;
    s32 temp_2_2;
    s32 temp_2_4;
    s32 temp_2_5;
    s32 temp_2_7;
    s32 temp_3_3;
    s32 temp_3_5;
    s32 temp_3_6;
    s32 var_20;
    s32 var_8;
    u16 *temp_2;
    u16 *var_4;
    u8 **temp_2_3;
    u8 **temp_2_6;
    u8 **temp_2_8;
    u8 *temp_3;
    u8 *temp_4_2;
    u8 *temp_4_3;
    u8 *temp_4_4;
    u8 *var_16;
    u8 *var_3;
    u8 temp_3_2;
    void *temp_18;
    void *temp_5;

    sp40 = arg2;
    M2C_FIELD(arg0, s32 *, 0xD90) = arg1;
    sp48 = arg4;
    sp4C = arg5;
    sp50 = arg6;
    sp44 = (s32) arg3;
    if (M2C_FIELD(&D_011FD2E8, s32 *, 0xC) != 0) {
        var_3 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(&D_011FD2E8, arg3);
    } else {
        var_3 = &D_011FD2E8 + 0x10;
        M2C_FIELD(&D_011FD2E8, s32 *, 8) = (s32) (M2C_FIELD(&D_011FD2E8, s32 *, 8) + 1);
    }
    var_8 = 0;
    sp10 = var_3;
    var_4 = arg7 + 2;
    if (*arg7 != 0) {
        do {
            temp_2 = var_4;
            var_4 += 2;
            var_8 += 1;
        } while (*temp_2 != 0);
    }
    replace__t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0UiUiPCUsUi(&sp10, 0, -1, arg7, var_8);
    if (M2C_FIELD(&D_011F6CB8, s32 *, 0xC) != 0) {
        var_3_2 = clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(&D_011F6CB8);
    } else {
        var_3_2 = &D_011F6CB8 + 0x10;
        M2C_FIELD(&D_011F6CB8, s32 *, 8) = (s32) (M2C_FIELD(&D_011F6CB8, s32 *, 8) + 1);
    }
    sp30 = var_3_2;
    var_20 = 0;
    resize__t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0Uic(&sp30, M2C_FIELD(sp10, s32 *, -0x10), 0);
    temp_3 = sp10;
    var_16 = temp_3;
    temp_18 = temp_3 + (M2C_FIELD(temp_3, s32 *, -0x10) * 2);
    if (var_16 != temp_18) {
        do {
            temp_17 = var_20;
            temp_5 = sp30 - 0x10;
            var_20 = temp_17 + 1;
            if ((u32) M2C_FIELD(temp_5, u32 *, 8) >= 2U) {
                alloc__t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0Uib(&sp30, M2C_FIELD(temp_5, s32 *, 0), 1);
            }
            temp_3_2 = *var_16;
            var_16 += 2;
            M2C_FIELD(sp30, s32 *, -4) = 1;
            *(sp30 + temp_17) = temp_3_2;
        } while (var_16 != temp_18);
    }
    var_3_3 = sp30;
    temp_4 = var_3_3 - 0x10;
    if (M2C_FIELD(temp_4, s32 *, 0xC) != 0) {
        var_3_3 = clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(temp_4);
    } else {
        M2C_FIELD(temp_4, s32 *, 8) = (s32) (M2C_FIELD(temp_4, s32 *, 8) + 1);
    }
    sp20 = var_3_3;
    temp_4_2 = sp30 - 0x10;
    temp_2_2 = M2C_FIELD(temp_4_2, s32 *, 8) - 1;
    M2C_FIELD(temp_4_2, s32 *, 8) = temp_2_2;
    if (temp_2_2 == 0) {
        temp_3_3 = M2C_FIELD(temp_4_2, s32 *, 4);
        if ((u32) (temp_3_3 + 0x10) >= 0x81U) {
            __wrap_free(temp_4_2);
        } else {
            temp_2_3 = &D_011F290C + (((u32) (temp_3_3 + 0x17) >> 3) * 4);
            M2C_FIELD(temp_4_2, u8 **, 0) = (u8 *) *temp_2_3;
            *temp_2_3 = temp_4_2;
        }
    }
    temp_3_4 = sp20;
    temp_2_4 = M2C_FIELD(temp_3_4, s32 *, -0x10);
    if (temp_2_4 == 0) {
        var_6 = &D_011D8DF8;
    } else {
        *(temp_3_4 + temp_2_4) = 0;
        var_6 = sp20;
    }
    snprintf(arg0 + 0x114, 0x3FF, var_6);
    temp_4_3 = sp20 - 0x10;
    temp_2_5 = M2C_FIELD(temp_4_3, s32 *, 8) - 1;
    M2C_FIELD(temp_4_3, s32 *, 8) = temp_2_5;
    if (temp_2_5 == 0) {
        temp_3_5 = M2C_FIELD(temp_4_3, s32 *, 4);
        if ((u32) (temp_3_5 + 0x10) >= 0x81U) {
            __wrap_free(temp_4_3);
        } else {
            temp_2_6 = &D_011F290C + (((u32) (temp_3_5 + 0x17) >> 3) * 4);
            M2C_FIELD(temp_4_3, u8 **, 0) = (u8 *) *temp_2_6;
            *temp_2_6 = temp_4_3;
        }
    }
    createPublicGame__Q212RealmService15RealmGatewayAPIPCUssUiUiUiT1RCQ212RealmService14MatchGameAttrsT1Pv(arg0, sp40, sp44, sp48, sp4C, sp50, arg7, arg_sp0, arg_sp8, arg_sp10);
    temp_4_4 = sp10 - 0x10;
    temp_2_7 = M2C_FIELD(temp_4_4, s32 *, 8) - 1;
    M2C_FIELD(temp_4_4, s32 *, 8) = temp_2_7;
    if (temp_2_7 == 0) {
        temp_3_6 = M2C_FIELD(temp_4_4, s32 *, 4) * 2;
        if ((u32) (temp_3_6 + 0x10) < 0x81U) {
            temp_2_8 = &D_011F290C + (((u32) (temp_3_6 + 0x17) >> 3) * 4);
            M2C_FIELD(temp_4_4, u8 **, 0) = (u8 *) *temp_2_8;
            *temp_2_8 = temp_4_4;
        } else {
            __wrap_free(temp_4_4);
        }
    }
}
