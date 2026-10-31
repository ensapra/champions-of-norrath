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
s32 clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(void *, void *); /* extern */
void *clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(void *, void *, void *); /* extern */
extern M2C_UNK D_01215E90;

void __Q212RealmService13ReqConsumeKeyUiRCt12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0RCt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0T3(void *arg0, s32 arg1, void **arg2, s32 *arg3, s32 *arg4) {
    s32 temp_2;
    s32 temp_2_2;
    s32 var_7;
    s32 var_8;
    void *temp_3;
    void *temp_5;
    void *temp_6;
    void *var_5;

    __Q210GenericAPI14GenericRequests(0x26);
    var_5 = *arg2;
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    temp_6 = var_5 - 0x10;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_01215E90;
    if (M2C_FIELD(temp_6, s32 *, 0xC) != 0) {
        var_5 = clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(temp_6, var_5, temp_6);
    } else {
        M2C_FIELD(temp_6, s32 *, 8) = (s32) (M2C_FIELD(temp_6, s32 *, 8) + 1);
    }
    temp_2 = *arg3;
    M2C_FIELD(arg0, void **, 0x1C) = var_5;
    temp_3 = temp_2 - 0x10;
    var_7 = temp_2;
    if (M2C_FIELD(temp_3, s32 *, 0xC) != 0) {
        var_7 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(temp_3, var_5);
    } else {
        M2C_FIELD(temp_3, s32 *, 8) = (s32) (M2C_FIELD(temp_3, s32 *, 8) + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x20) = var_7;
    temp_2_2 = *arg4;
    temp_5 = temp_2_2 - 0x10;
    var_8 = temp_2_2;
    if (M2C_FIELD(temp_5, s32 *, 0xC) != 0) {
        var_8 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(temp_5, temp_5);
    } else {
        M2C_FIELD(temp_5, s32 *, 8) = (s32) (M2C_FIELD(temp_5, s32 *, 8) + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_8;
}
