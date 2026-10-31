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

M2C_UNK put__4BaseRQ24Base10ByteStreamRCt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0(s32, s32); /* extern */
M2C_UNK put__Q24Base10ByteStreamPCvUi(M2C_UNK);     /* extern */

void put__4BaseRQ24Base10ByteStreamRCQ212RealmService13GameAttrsNode(s32 arg0, s32 arg1) {
    put__Q24Base10ByteStreamPCvUi(1);
    put__4BaseRQ24Base10ByteStreamRCt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0(arg0, arg1 + 4);
    put__4BaseRQ24Base10ByteStreamRCt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0(arg0, arg1 + 8);
}
