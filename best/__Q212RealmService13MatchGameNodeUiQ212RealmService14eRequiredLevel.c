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

void *clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_011FD2E8;
extern M2C_UNK D_011FDDD8;

void __Q212RealmService13MatchGameNodeUiQ212RealmService14eRequiredLevel(void *arg0, s32 arg1, s32 arg2) {
    void *var_3;

    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_011FDDD8;
    var_3 = &D_011FD2E8 + 0x10;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    if (M2C_FIELD(&D_011FD2E8, s32 *, 0xC) != 0) {
        var_3 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(&D_011FD2E8, &D_011FD2E8);
    } else {
        M2C_FIELD(&D_011FD2E8, s32 *, 8) = (s32) (M2C_FIELD(&D_011FD2E8, s32 *, 8) + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, void **, 8) = var_3;
}
