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

M2C_UNK replace__t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0UiUiPCcUi(s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 strcmp(s32, M2C_UNK *, s32);                    /* extern */
s32 strlen(s32);                                    /* extern */
extern M2C_UNK D_011CD988;

void changeHostPort__Q210GenericAPI17GenericConnectionPCcs(void *arg0, s32 arg1, s16 arg2) {
    if ((arg1 != 0) && (strcmp(arg1, &D_011CD988, arg2 << 0x10) != 0)) {
        replace__t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0UiUiPCcUi(arg0 + 0x18, 0, -1, arg1, strlen(arg1));
        M2C_FIELD(arg0, s16 *, 0x1E) = arg2;
    }
}
