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

s32 buffer_get_position__FP8buffer_t();             /* extern */
M2C_UNK buffer_read_uns16__FP8buffer_tPUs(s32, u8 *); /* extern */
M2C_UNK buffer_read_uns8__FP8buffer_tPUc(s32, u8 *); /* extern */
M2C_UNK buffer_readm_uns8__FP8buffer_tPUci(s32, u8 *, M2C_UNK); /* extern */
M2C_UNK buffer_set_position__FP8buffer_ti(s32, s32); /* extern */

void buffer_read_ip_header__FP8buffer_tP2ip(s32 arg0, u8 *arg1) {
    s32 temp_18;

    temp_18 = buffer_get_position__FP8buffer_t();
    buffer_read_uns8__FP8buffer_tPUc(arg0, arg1);
    buffer_read_uns8__FP8buffer_tPUc(arg0, arg1 + 1);
    buffer_read_uns16__FP8buffer_tPUs(arg0, arg1 + 2);
    buffer_read_uns16__FP8buffer_tPUs(arg0, arg1 + 4);
    buffer_read_uns16__FP8buffer_tPUs(arg0, arg1 + 6);
    buffer_read_uns8__FP8buffer_tPUc(arg0, arg1 + 8);
    buffer_read_uns8__FP8buffer_tPUc(arg0, arg1 + 9);
    buffer_read_uns16__FP8buffer_tPUs(arg0, arg1 + 0xA);
    buffer_readm_uns8__FP8buffer_tPUci(arg0, arg1 + 0xC, 4);
    buffer_readm_uns8__FP8buffer_tPUci(arg0, arg1 + 0x10, 4);
    buffer_set_position__FP8buffer_ti(arg0, temp_18 + ((*arg1 & 0xF) * 4));
}
