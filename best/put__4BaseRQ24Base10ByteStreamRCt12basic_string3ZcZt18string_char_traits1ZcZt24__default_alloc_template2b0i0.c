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

M2C_UNK put__Q24Base10ByteStreamPCvUi(M2C_UNK *, s32); /* extern */
extern M2C_UNK D_011C21D8;

void put__4BaseRQ24Base10ByteStreamRCt12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0(M2C_UNK **arg1) {
    M2C_UNK *temp_3;
    M2C_UNK *var_5;
    s32 temp_2;

    temp_3 = *arg1;
    temp_2 = M2C_FIELD(temp_3, s32 *, -0x10);
    if (temp_2 == 0) {
        var_5 = &D_011C21D8;
    } else {
        *(temp_3 + temp_2) = 0;
        var_5 = *arg1;
    }
    put__Q24Base10ByteStreamPCvUi(var_5, M2C_FIELD(*arg1, s32 *, -0x10) + 1);
}
