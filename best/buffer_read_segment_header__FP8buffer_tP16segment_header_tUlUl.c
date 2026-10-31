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

M2C_UNK buffer_read_packed_uns32__FP8buffer_tPUi(); /* extern */
M2C_UNK buffer_read_packed_uns64__FP8buffer_tPUl(s32, void *); /* extern */
M2C_UNK buffer_read_uns32__FP8buffer_tPUi(s32, void *); /* extern */
M2C_UNK buffer_read_uns64__FP8buffer_tPUl(s32, void *); /* extern */

void buffer_read_segment_header__FP8buffer_tP16segment_header_tUlUl(s32 arg0, void *arg1, s64 arg2, s64 arg3) {
    s32 temp_2;

    buffer_read_packed_uns32__FP8buffer_tPUi();
    temp_2 = M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg1, s32 *, 0) = (s32) (temp_2 & ~0x7FF);
    M2C_FIELD(arg1, s32 *, 4) = (s32) (temp_2 & 0x7FF);
    if (temp_2 & 0x2000) {
        buffer_read_uns32__FP8buffer_tPUi(arg0, arg1 + 8);
    }
    if (M2C_FIELD(arg1, s32 *, 0) & 0x40000) {
        buffer_read_uns32__FP8buffer_tPUi(arg0, arg1 + 0xC);
    }
    if (M2C_FIELD(arg1, s32 *, 0) & 0x8000) {
        buffer_read_uns64__FP8buffer_tPUl(arg0, arg1 + 0x10);
    } else {
        M2C_FIELD(arg1, s64 *, 0x10) = arg2;
    }
    if (M2C_FIELD(arg1, s32 *, 0) & 0x1000) {
        M2C_FIELD(arg1, s64 *, 0x18) = (s64) M2C_FIELD(arg1, s64 *, 0x10);
    } else {
        buffer_read_packed_uns64__FP8buffer_tPUl(arg0, arg1 + 0x18);
    }
    if (M2C_FIELD(arg1, s32 *, 0) & 0x800) {
        buffer_read_packed_uns64__FP8buffer_tPUl(arg0, arg1 + 0x20);
        return;
    }
    M2C_FIELD(arg1, s64 *, 0x20) = arg3;
}
