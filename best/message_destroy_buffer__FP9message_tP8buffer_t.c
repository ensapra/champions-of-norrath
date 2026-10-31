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

M2C_UNK __wrap_free(void *);                        /* extern */
M2C_UNK buffer_append_offset_uns32__FP8buffer_tUiUi(s32, s32, s32); /* extern */
M2C_UNK buffer_append_packed_uns64__FP8buffer_tUl(s32, s64); /* extern */
M2C_UNK buffer_append_uns16__FP8buffer_tUs(s32, u16); /* extern */
M2C_UNK buffer_append_uns32__FP8buffer_tUi(s32, s32); /* extern */
M2C_UNK buffer_append_uns8__FP8buffer_tUc(s32, u8); /* extern */
M2C_UNK buffer_appendm_uns8__FP8buffer_tPCUci(s32, void *, s32); /* extern */
s32 endpoint_get_time__FP10endpoint_t(s32);         /* extern */
extern M2C_UNK D_011D5720;

void message_destroy_buffer__FP9message_tP8buffer_t(void *arg0, s32 arg1) {
    s32 temp_16;

    if (arg1 != 0) {
        temp_16 = endpoint_get_time__FP10endpoint_t(M2C_FIELD(arg0, s32 *, 0x14));
        buffer_appendm_uns8__FP8buffer_tPCUci(arg1, arg0, 4);
        buffer_append_packed_uns64__FP8buffer_tUl(arg1, M2C_FIELD(arg0, s64 *, 0x20));
        buffer_append_packed_uns64__FP8buffer_tUl(arg1, M2C_FIELD(arg0, s64 *, 0x28));
        buffer_append_uns32__FP8buffer_tUi(arg1, M2C_FIELD(arg0, s32 *, 0x30));
        buffer_append_uns16__FP8buffer_tUs(arg1, M2C_FIELD(arg0, u16 *, 0x34));
        buffer_append_uns8__FP8buffer_tUc(arg1, M2C_FIELD(arg0, u8 *, 0x36));
        buffer_append_uns8__FP8buffer_tUc(arg1, M2C_FIELD(arg0, u8 *, 0x37));
        buffer_append_uns16__FP8buffer_tUs(arg1, M2C_FIELD(arg0, u16 *, 0x38));
        buffer_append_offset_uns32__FP8buffer_tUiUi(arg1, M2C_FIELD(arg0, s32 *, 0x3C), temp_16);
        buffer_append_offset_uns32__FP8buffer_tUiUi(arg1, M2C_FIELD(arg0, s32 *, 0x40), temp_16);
        buffer_appendm_uns8__FP8buffer_tPCUci(arg1, arg0 + 0x48, M2C_FIELD(arg0, s32 *, 0x30));
    }
    M2C_FIELD(arg0, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(&D_011D5720, M2C_UNK *, 0));
    __wrap_free(arg0);
}
