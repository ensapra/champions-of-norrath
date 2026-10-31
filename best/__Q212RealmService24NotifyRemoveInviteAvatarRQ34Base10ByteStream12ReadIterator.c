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

M2C_UNK __Q210GenericAPI14GenericMessages(M2C_UNK); /* extern */
M2C_UNK *clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK get__4BaseRQ34Base10ByteStream12ReadIteratorRt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0(s32, void *); /* extern */
extern M2C_UNK D_011FD2E8;
extern M2C_UNK D_0120CA88;

void __Q212RealmService24NotifyRemoveInviteAvatarRQ34Base10ByteStream12ReadIterator(void *arg0, s32 arg1) {
    M2C_UNK *var_5;
    M2C_UNK *var_6;

    __Q210GenericAPI14GenericMessages(0x3A);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_0120CA88;
    var_6 = &D_011FD2E8 + 0x10;
    if (M2C_FIELD(&D_011FD2E8, s32 *, 0xC) != 0) {
        var_6 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(&D_011FD2E8, &D_011FD2E8, var_6);
    } else {
        M2C_FIELD(&D_011FD2E8, s32 *, 8) = (s32) (M2C_FIELD(&D_011FD2E8, s32 *, 8) + 1);
    }
    M2C_FIELD(arg0, M2C_UNK **, 8) = var_6;
    var_5 = &D_011FD2E8 + 0x10;
    if (M2C_FIELD(&D_011FD2E8, s32 *, 0xC) != 0) {
        var_5 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(&D_011FD2E8, var_5, var_6);
    } else {
        M2C_FIELD(&D_011FD2E8, s32 *, 8) = (s32) (M2C_FIELD(&D_011FD2E8, s32 *, 8) + 1);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = var_5;
    get__4BaseRQ34Base10ByteStream12ReadIteratorRt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0(arg1, arg0 + 8);
    get__4BaseRQ34Base10ByteStream12ReadIteratorRt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0(arg1, arg0 + 0xC);
}
