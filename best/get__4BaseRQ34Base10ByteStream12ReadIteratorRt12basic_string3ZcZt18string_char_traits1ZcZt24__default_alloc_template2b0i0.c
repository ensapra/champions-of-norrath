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

M2C_UNK replace__t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0UiUiPCcUi(void **, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 strlen(s32);                                    /* extern */

void get__4BaseRQ34Base10ByteStream12ReadIteratorRt12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0(void *arg0, void **arg1) {
    s32 var_16;
    void *temp_2;

    temp_2 = M2C_FIELD(arg0, void **, 4);
    if (temp_2 != NULL) {
        var_16 = *M2C_FIELD(temp_2, s32 **, 0xC) + M2C_FIELD(arg0, s32 *, 0);
    } else {
        var_16 = 0;
    }
    replace__t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0UiUiPCcUi(arg1, 0, -1, var_16, strlen(var_16));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(*arg1, s32 *, -0x10) + 1));
}
