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

M2C_UNK __Q210GenericAPI14GenericRequests(M2C_UNK, s32); /* extern */
M2C_UNK __Q212RealmService14MatchGameAttrsRCQ212RealmService14MatchGameAttrs(void *, s32); /* extern */
s32 clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(void *, s32, void *); /* extern */
extern M2C_UNK D_01215C10;

void __Q212RealmService12ReqMatchGameUiRCt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0sUiUiUiRCQ212RealmService14MatchGameAttrsbUiUi(void *arg0, s32 arg1, s32 *arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, s32 arg_sp8, s32 arg_sp10) {
    s32 var_5;
    void *temp_6;

    __Q210GenericAPI14GenericRequests(0x18, arg3 << 0x10);
    var_5 = *arg2;
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    temp_6 = var_5 - 0x10;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_01215C10;
    if (M2C_FIELD(temp_6, s32 *, 0xC) != 0) {
        var_5 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(temp_6, var_5, temp_6);
    } else {
        M2C_FIELD(temp_6, s32 *, 8) = (s32) (M2C_FIELD(temp_6, s32 *, 8) + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_5;
    M2C_FIELD(arg0, s16 *, 0x20) = arg3;
    M2C_FIELD(arg0, s32 *, 0x24) = arg4;
    M2C_FIELD(arg0, s32 *, 0x28) = arg5;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg6;
    __Q212RealmService14MatchGameAttrsRCQ212RealmService14MatchGameAttrs(arg0 + 0x30, arg7);
    M2C_FIELD(arg0, s32 *, 0x40) = arg_sp10;
    M2C_FIELD(arg0, s32 *, 0x38) = arg_sp0;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg_sp8;
}
