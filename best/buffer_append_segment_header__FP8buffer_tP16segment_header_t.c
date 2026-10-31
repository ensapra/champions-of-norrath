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

M2C_UNK buffer_append_packed_uns32__FP8buffer_tUi(s32, s32); /* extern */
M2C_UNK buffer_append_packed_uns64__FP8buffer_tUl(s32, s64); /* extern */
M2C_UNK buffer_append_uns32__FP8buffer_tUi(s32, s32); /* extern */
M2C_UNK buffer_append_uns64__FP8buffer_tUl(s32, s64); /* extern */
s32 drdp_is_local_hardware_endpoint__FUl(s64);      /* extern */
s32 drdp_is_software_endpoint__FUl(s64);            /* extern */

void buffer_append_segment_header__FP8buffer_tP16segment_header_t(s32 arg0, void *arg1) {
    if (drdp_is_local_hardware_endpoint__FUl(M2C_FIELD(arg1, s64 *, 0x18)) != 0) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) | 0x1000);
    }
    if (drdp_is_software_endpoint__FUl(M2C_FIELD(arg1, s64 *, 0x20)) != 0) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) | 0x800);
    }
    buffer_append_packed_uns32__FP8buffer_tUi(arg0, M2C_FIELD(arg1, s32 *, 0) | M2C_FIELD(arg1, s32 *, 4));
    if (M2C_FIELD(arg1, s32 *, 0) & 0x2000) {
        buffer_append_uns32__FP8buffer_tUi(arg0, M2C_FIELD(arg1, s32 *, 8));
    }
    if (M2C_FIELD(arg1, s32 *, 0) & 0x40000) {
        buffer_append_uns32__FP8buffer_tUi(arg0, M2C_FIELD(arg1, s32 *, 0xC));
    }
    if (M2C_FIELD(arg1, s32 *, 0) & 0x8000) {
        buffer_append_uns64__FP8buffer_tUl(arg0, M2C_FIELD(arg1, s64 *, 0x10));
    }
    if (~M2C_FIELD(arg1, s32 *, 0) & 0x1000) {
        buffer_append_packed_uns64__FP8buffer_tUl(arg0, M2C_FIELD(arg1, s64 *, 0x18));
    }
    if (M2C_FIELD(arg1, s32 *, 0) & 0x800) {
        buffer_append_packed_uns64__FP8buffer_tUl(arg0, M2C_FIELD(arg1, s64 *, 0x20));
    }
}
