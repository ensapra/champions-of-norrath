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

M2C_UNK __Q210GenericAPI14GenericRequests(M2C_UNK, s32); /* extern */
M2C_UNK __Q212RealmService14MatchGameAttrsRCQ212RealmService14MatchGameAttrs(void *, s32); /* extern */
void *clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(M2C_UNK *); /* extern */
M2C_UNK replace__t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0UiUiPCUsUi(void *, M2C_UNK, M2C_UNK, u16 *, s32); /* extern */
extern M2C_UNK D_011FD2E8;
extern M2C_UNK D_01215DF0;

void __Q212RealmService19ReqCreatePublicGameUiRCt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0sUiUiUiPCUsRCQ212RealmService14MatchGameAttrsT7(void *arg0, s32 arg1, void **arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, u16 *arg7, s32 arg_sp0, u16 *arg_sp8) {
    M2C_UNK *temp_4;
    s32 var_8;
    s32 var_8_2;
    u16 *temp_2;
    u16 *temp_2_2;
    u16 *var_4;
    u16 *var_4_2;
    void *var_16;
    void *var_3;
    void *var_3_2;

    __Q210GenericAPI14GenericRequests(0xA, arg3 << 0x10);
    var_16 = *arg2;
    temp_4 = var_16 - 0x10;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_01215DF0;
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    if (M2C_FIELD(temp_4, s32 *, 0xC) != 0) {
        var_16 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(temp_4);
    } else {
        M2C_FIELD(temp_4, s32 *, 8) = (s32) (M2C_FIELD(temp_4, s32 *, 8) + 1);
    }
    M2C_FIELD(arg0, void **, 0x1C) = var_16;
    M2C_FIELD(arg0, s16 *, 0x20) = arg3;
    M2C_FIELD(arg0, s32 *, 0x24) = arg4;
    M2C_FIELD(arg0, s32 *, 0x28) = arg5;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg6;
    if (M2C_FIELD(&D_011FD2E8, s32 *, 0xC) != 0) {
        var_3 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(&D_011FD2E8);
    } else {
        var_3 = &D_011FD2E8 + 0x10;
        M2C_FIELD(&D_011FD2E8, s32 *, 8) = (s32) (M2C_FIELD(&D_011FD2E8, s32 *, 8) + 1);
    }
    var_8 = 0;
    M2C_FIELD(arg0, void **, 0x30) = var_3;
    var_4 = arg7 + 2;
    if (*arg7 != 0) {
        do {
            temp_2 = var_4;
            var_4 += 2;
            var_8 += 1;
        } while (*temp_2 != 0);
    }
    replace__t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0UiUiPCUsUi(arg0 + 0x30, 0, -1, arg7, var_8);
    __Q212RealmService14MatchGameAttrsRCQ212RealmService14MatchGameAttrs(arg0 + 0x34, arg_sp0);
    if (M2C_FIELD(&D_011FD2E8, s32 *, 0xC) == 0) {
        var_3_2 = &D_011FD2E8 + 0x10;
        M2C_FIELD(&D_011FD2E8, s32 *, 8) = (s32) (M2C_FIELD(&D_011FD2E8, s32 *, 8) + 1);
    } else {
        var_3_2 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(&D_011FD2E8);
    }
    M2C_FIELD(arg0, void **, 0x3C) = var_3_2;
    if (arg_sp8 != NULL) {
        var_8_2 = 0;
        var_4_2 = arg_sp8 + 2;
        if (*arg_sp8 != 0) {
            do {
                temp_2_2 = var_4_2;
                var_4_2 += 2;
                var_8_2 += 1;
            } while (*temp_2_2 != 0);
        }
        replace__t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0UiUiPCUsUi(arg0 + 0x3C, 0, -1, arg_sp8, var_8_2);
    }
}
