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

M2C_UNK buffer_append_uns16__FP8buffer_tUs(s32, u32); /* extern */
M2C_UNK buffer_append_uns8__FP8buffer_tUc(s32);     /* extern */

void buffer_append_size__FP8buffer_tUs(s32 arg0, s32 arg1) {
    u32 temp_16;

    temp_16 = arg1 & 0xFFFF;
    if (temp_16 < 0xFFU) {
        buffer_append_uns8__FP8buffer_tUc(temp_16 & 0xFF);
        return;
    }
    buffer_append_uns8__FP8buffer_tUc(0xFF);
    buffer_append_uns16__FP8buffer_tUs(arg0, temp_16);
}
