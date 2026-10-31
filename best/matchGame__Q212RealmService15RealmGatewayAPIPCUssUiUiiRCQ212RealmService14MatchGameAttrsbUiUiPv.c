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

M2C_UNK __Q212RealmService12ReqMatchGameUiRCt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0sUiUiUiRCQ212RealmService14MatchGameAttrsbUiUi(s32, s32, void **, s16, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK __Q212RealmService12ResMatchGamePv(s32, s32); /* extern */
s32 __builtin_new(M2C_UNK);                         /* extern */
M2C_UNK __wrap_free(void *);                        /* extern */
void *clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(M2C_UNK *, s32); /* extern */
M2C_UNK encryptString__Q212RealmService19RealmGatewayAPICoreRt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0(s32, void **); /* extern */
M2C_UNK replace__t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0UiUiPCUsUi(void **, M2C_UNK, M2C_UNK, u16 *, s32); /* extern */
s32 submitRequest__Q210GenericAPI14GenericAPICorePQ210GenericAPI14GenericRequestPQ210GenericAPI15GenericResponse(s32, s32, s32); /* extern */
extern M2C_UNK D_011F290C;
extern M2C_UNK D_011FD2E8;

s32 matchGame__Q212RealmService15RealmGatewayAPIPCUssUiUiiRCQ212RealmService14MatchGameAttrsbUiUiPv(void *arg0, u16 *arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, s32 arg_sp8, s32 arg_sp10) {
    void *sp20;
    s32 sp30;
    s32 temp_16;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_3;
    s32 var_8;
    u16 *temp_2;
    u16 *var_4;
    void **temp_2_5;
    void *temp_4;
    void *var_3;

    sp30 = arg7;
    if (M2C_FIELD(&D_011FD2E8, s32 *, 0xC) != 0) {
        var_3 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(&D_011FD2E8, arg2 << 0x10);
    } else {
        var_3 = &D_011FD2E8 + 0x10;
        M2C_FIELD(&D_011FD2E8, s32 *, 8) = (s32) (M2C_FIELD(&D_011FD2E8, s32 *, 8) + 1);
    }
    var_8 = 0;
    sp20 = var_3;
    var_4 = arg1 + 2;
    if (*arg1 != 0) {
        do {
            temp_2 = var_4;
            var_4 += 2;
            var_8 += 1;
        } while (*temp_2 != 0);
    }
    replace__t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0UiUiPCUsUi(&sp20, 0, -1, arg1, var_8);
    encryptString__Q212RealmService19RealmGatewayAPICoreRt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0(M2C_FIELD(arg0, s32 *, 0), &sp20);
    temp_2_2 = __builtin_new(0x48);
    if (temp_2_2 != 0) {
        __Q212RealmService12ReqMatchGameUiRCt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0sUiUiUiRCQ212RealmService14MatchGameAttrsbUiUi(temp_2_2, M2C_FIELD(arg0, s32 *, 4), &sp20, arg2, arg3, arg4, arg5, arg6, sp30, arg_sp0, arg_sp8);
    }
    temp_2_3 = __builtin_new(0x80);
    if (temp_2_3 != 0) {
        __Q212RealmService12ResMatchGamePv(temp_2_3, arg_sp10);
    }
    temp_16 = submitRequest__Q210GenericAPI14GenericAPICorePQ210GenericAPI14GenericRequestPQ210GenericAPI15GenericResponse(M2C_FIELD(arg0, s32 *, 0), temp_2_2, temp_2_3);
    temp_4 = sp20 - 0x10;
    temp_2_4 = M2C_FIELD(temp_4, s32 *, 8) - 1;
    M2C_FIELD(temp_4, s32 *, 8) = temp_2_4;
    if (temp_2_4 == 0) {
        temp_3 = M2C_FIELD(temp_4, s32 *, 4) * 2;
        if ((u32) (temp_3 + 0x10) < 0x81U) {
            temp_2_5 = &D_011F290C + (((u32) (temp_3 + 0x17) >> 3) * 4);
            M2C_FIELD(temp_4, void **, 0) = (void *) *temp_2_5;
            *temp_2_5 = temp_4;
        } else {
            __wrap_free(temp_4);
        }
    }
    return temp_16;
}
