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

s32 clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(void *, s32, u16, s32, void *); /* extern */
extern M2C_UNK D_011FDDD8;

void __Q212RealmService13MatchGameNodeRCQ212RealmService13MatchGameNode(void *arg0, void *arg1) {
    s32 temp_3;
    s32 temp_7;
    s32 var_5;
    u16 temp_6;
    void *temp_8;

    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_011FDDD8;
    temp_3 = M2C_FIELD(arg1, s32 *, 8);
    temp_8 = temp_3 - 0x10;
    temp_6 = M2C_FIELD(arg1, u16 *, 0);
    temp_7 = M2C_FIELD(temp_8, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    var_5 = temp_3;
    M2C_FIELD(arg0, u16 *, 0) = temp_6;
    if (temp_7 != 0) {
        var_5 = clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(temp_8, var_5, temp_6, temp_7, temp_8);
    } else {
        M2C_FIELD(temp_8, s32 *, 8) = (s32) (M2C_FIELD(temp_8, s32 *, 8) + 1);
    }
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 8) = var_5;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
}
