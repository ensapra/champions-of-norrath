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

M2C_UNK __9Encryptor(void *);                       /* extern */
M2C_UNK __Q210GenericAPI14GenericAPICorePCcsUiUiUiUiUiUiUiUi(s16, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
void *clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(M2C_UNK *, void *); /* extern */
M2C_UNK replace__t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0UiUiPCcUi(void *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 strlen(s32, void *);                            /* extern */
extern M2C_UNK D_011F6CB8;
extern M2C_UNK D_01213F90;

void __Q212RealmService19RealmGatewayAPICorePCcsPQ212RealmService15RealmGatewayAPI(void *arg0, s32 arg1, s16 arg2, s32 arg3) {
    void *var_5;

    __Q210GenericAPI14GenericAPICorePCcsUiUiUiUiUiUiUiUi(arg2, 0x3C, 5, 0, 0x5A, 0x20, 0x20, 0x78, 0x40);
    M2C_FIELD(arg0, s32 *, 0x68) = arg3;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &D_01213F90;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    __9Encryptor(arg0 + 0x74);
    var_5 = &D_011F6CB8 + 0x10;
    if (M2C_FIELD(&D_011F6CB8, s32 *, 0xC) != 0) {
        var_5 = clone__Q2t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0_3Rep(&D_011F6CB8, var_5);
    } else {
        M2C_FIELD(&D_011F6CB8, s32 *, 8) = (s32) (M2C_FIELD(&D_011F6CB8, s32 *, 8) + 1);
    }
    M2C_FIELD(arg0, void **, 0x84) = var_5;
    replace__t12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0UiUiPCcUi(arg0 + 0x84, 0, -1, arg1, strlen(arg1, var_5));
    M2C_FIELD(arg0, s16 *, 0x88) = arg2;
}
