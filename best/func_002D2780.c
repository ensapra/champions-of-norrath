/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s32 func_002D2780(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s32 arg6, s32 arg7, u8 arg_sp0, u8 arg_sp8, u32 arg_sp10) {
    s64 temp_3;

    temp_3 = (s64) arg_sp10 << 0x20;
    M2C_FIELD(arg0, s64 *, 0x10) = 6;
    M2C_FIELD(arg0, s64 *, 0x28) = 1;
    M2C_FIELD(arg0, s64 *, 0x20) = (s64) ((arg6 & 0xFF) | (0xFE00 << 0x2E) | (((s64) arg_sp0 << 0x10) | ((arg7 & 0xFF) << 8)) | ((s64) arg_sp8 << 0x18));
    M2C_FIELD(arg0, s64 *, 0x30) = (s64) ((arg2 * 0x10) | ((arg3 * 0x10) << 0x10) | temp_3);
    M2C_FIELD(arg0, s64 *, 0x48) = 5;
    M2C_FIELD(arg0, s64 *, 0x40) = (s64) (((arg2 + arg4) * 0x10) | (((arg3 + arg5) * 0x10) << 0x10) | temp_3);
    M2C_FIELD(arg0, s64 *, 0x58) = 0x47;
    M2C_FIELD(arg0, s64 *, 8) = 0x47;
    M2C_FIELD(arg0, s64 *, 0) = 0x30000;
    M2C_FIELD(arg0, s64 *, 0x18) = 0;
    M2C_FIELD(arg0, s64 *, 0x38) = 5;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s64 *, 0x50) = (s64) (((arg1 & 3) << 0x11) | 0x10000);
    } else {
        M2C_FIELD(arg0, s64 *, 0x50) = 0x30000;
    }
    M2C_SYNC();
    return 6;
}
