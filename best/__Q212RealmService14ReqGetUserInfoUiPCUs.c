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
void *clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(M2C_UNK *); /* extern */
M2C_UNK replace__t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0UiUiPCUsUi(s32, M2C_UNK, M2C_UNK, u16 *, s32); /* extern */
extern M2C_UNK D_011FD2E8;
extern M2C_UNK D_01215CD0;

void __Q212RealmService14ReqGetUserInfoUiPCUs(void *arg0, s32 arg1, u16 *arg2) {
    s32 var_8;
    u16 *temp_2;
    u16 *var_4;
    void *var_3;

    __Q210GenericAPI14GenericRequests(0x12);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_01215CD0;
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    if (M2C_FIELD(&D_011FD2E8, s32 *, 0xC) != 0) {
        var_3 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(&D_011FD2E8);
    } else {
        var_3 = &D_011FD2E8 + 0x10;
        M2C_FIELD(&D_011FD2E8, s32 *, 8) = (s32) (M2C_FIELD(&D_011FD2E8, s32 *, 8) + 1);
    }
    var_8 = 0;
    M2C_FIELD(arg0, void **, 0x1C) = var_3;
    var_4 = arg2 + 2;
    if (*arg2 != 0) {
        do {
            temp_2 = var_4;
            var_4 += 2;
            var_8 += 1;
        } while (*temp_2 != 0);
    }
    replace__t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0UiUiPCUsUi(arg0 + 0x1C, 0, -1, arg2, var_8);
}
