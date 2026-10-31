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

M2C_UNK __wrap_free(void *);                        /* extern */
s32 clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(void *, s32); /* extern */
extern M2C_UNK D_011F290C;

void setPublicKey__9EncryptorRCt12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0(s32 *arg0, s32 *arg1) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 var_5;
    void **temp_3;
    void *temp_3_2;
    void *temp_4;

    if (arg1 != arg0) {
        temp_4 = *arg0 - 0x10;
        temp_2 = M2C_FIELD(temp_4, s32 *, 8) - 1;
        M2C_FIELD(temp_4, s32 *, 8) = temp_2;
        if (temp_2 == 0) {
            temp_2_2 = M2C_FIELD(temp_4, s32 *, 4);
            if ((u32) (temp_2_2 + 0x10) >= 0x81U) {
                __wrap_free(temp_4);
            } else {
                temp_3 = &D_011F290C + (((u32) (temp_2_2 + 0x17) >> 3) * 4);
                M2C_FIELD(temp_4, void **, 0) = (void *) *temp_3;
                *temp_3 = temp_4;
            }
        }
        temp_2_3 = *arg1;
        temp_3_2 = temp_2_3 - 0x10;
        var_5 = temp_2_3;
        if (M2C_FIELD(temp_3_2, s32 *, 0xC) != 0) {
            var_5 = clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(temp_3_2, var_5);
        } else {
            M2C_FIELD(temp_3_2, s32 *, 8) = (s32) (M2C_FIELD(temp_3_2, s32 *, 8) + 1);
        }
        *arg0 = var_5;
    }
}
