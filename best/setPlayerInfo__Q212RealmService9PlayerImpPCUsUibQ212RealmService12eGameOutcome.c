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

M2C_UNK replace__t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0UiUiPCUsUi(void *, M2C_UNK, M2C_UNK, u16 *, s32); /* extern */

void setPlayerInfo__Q212RealmService9PlayerImpPCUsUibQ212RealmService12eGameOutcome(void *arg0, u16 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_8;
    u16 *temp_2;
    u16 *var_4;

    var_8 = 0;
    var_4 = arg1 + 2;
    if (*arg1 != 0) {
        do {
            temp_2 = var_4;
            var_4 += 2;
            var_8 += 1;
        } while (*temp_2 != 0);
    }
    replace__t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0UiUiPCUsUi(arg0, 0, -1, arg1, var_8);
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg4;
    M2C_FIELD(arg0, s32 *, 8) = arg3;
}
