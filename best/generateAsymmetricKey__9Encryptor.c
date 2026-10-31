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

s32 clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(void *, void *, s32); /* extern */

s32 *generateAsymmetricKey__9Encryptor(s32 *arg0, s32 *arg1) {
    s32 temp_2;
    s32 var_6;
    void *temp_5;

    temp_2 = *arg1;
    temp_5 = temp_2 - 0x10;
    var_6 = temp_2;
    if (M2C_FIELD(temp_5, s32 *, 0xC) != 0) {
        var_6 = clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(temp_5, temp_5, var_6);
    } else {
        M2C_FIELD(temp_5, s32 *, 8) = (s32) (M2C_FIELD(temp_5, s32 *, 8) + 1);
    }
    *arg0 = var_6;
    return arg0;
}
