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

M2C_UNK __Q210GenericAPI15GenericResponsesUiPv(M2C_UNK, M2C_UNK, s32); /* extern */
void *clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_011F6CB8;
extern M2C_UNK D_0121C398;

void __Q212RealmService20ResCreatePrivateGamePv(void *arg0, s32 arg1) {
    void *var_3;

    __Q210GenericAPI15GenericResponsesUiPv(8, 1, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_0121C398;
    if (M2C_FIELD(&D_011F6CB8, s32 *, 0xC) != 0) {
        var_3 = clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(&D_011F6CB8, &D_011F6CB8);
    } else {
        var_3 = &D_011F6CB8 + 0x10;
        M2C_FIELD(&D_011F6CB8, s32 *, 8) = (s32) (M2C_FIELD(&D_011F6CB8, s32 *, 8) + 1);
    }
    M2C_FIELD(arg0, void **, 0x20) = var_3;
}
