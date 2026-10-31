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

M2C_UNK __Q210GenericAPI14GenericRequests(M2C_UNK); /* extern */
s32 clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(void *); /* extern */
extern M2C_UNK D_01215E70;

void __Q212RealmService16ReqCreateAccountUiRCt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0N32(void *arg0, s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5) {
    s32 var_16;
    s32 var_7;
    s32 var_8;
    s32 var_9;
    void *temp_4;
    void *temp_4_2;
    void *temp_4_3;
    void *temp_4_4;

    __Q210GenericAPI14GenericRequests(6);
    var_16 = *arg2;
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    temp_4 = var_16 - 0x10;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_01215E70;
    if (M2C_FIELD(temp_4, s32 *, 0xC) != 0) {
        var_16 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(temp_4);
    } else {
        M2C_FIELD(temp_4, s32 *, 8) = (s32) (M2C_FIELD(temp_4, s32 *, 8) + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_16;
    var_7 = *arg3;
    temp_4_2 = var_7 - 0x10;
    if (M2C_FIELD(temp_4_2, s32 *, 0xC) != 0) {
        var_7 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(temp_4_2);
    } else {
        M2C_FIELD(temp_4_2, s32 *, 8) = (s32) (M2C_FIELD(temp_4_2, s32 *, 8) + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x20) = var_7;
    var_8 = *arg4;
    temp_4_3 = var_8 - 0x10;
    if (M2C_FIELD(temp_4_3, s32 *, 0xC) != 0) {
        var_8 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(temp_4_3);
    } else {
        M2C_FIELD(temp_4_3, s32 *, 8) = (s32) (M2C_FIELD(temp_4_3, s32 *, 8) + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_8;
    var_9 = *arg5;
    temp_4_4 = var_9 - 0x10;
    if (M2C_FIELD(temp_4_4, s32 *, 0xC) != 0) {
        var_9 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(temp_4_4);
    } else {
        M2C_FIELD(temp_4_4, s32 *, 8) = (s32) (M2C_FIELD(temp_4_4, s32 *, 8) + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x28) = var_9;
}
