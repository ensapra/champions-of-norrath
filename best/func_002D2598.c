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

s64 func_002D1DD8(s16, s16, s16, s32, s32, s32);    /* extern */

s32 func_002D2598(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5) {
    s32 temp_7;
    s32 temp_8;
    s32 temp_9;
    s64 var_2;
    s64 var_2_2;
    s64 var_2_3;

    temp_7 = arg3 << 0x10;
    temp_8 = arg4 << 0x10;
    temp_9 = arg5 << 0x10;
    M2C_FIELD(arg0, s64 *, 8) = 0x4C;
    M2C_FIELD(arg0, s64 *, 0) = (s64) (((((s32) (arg2 + 0x3F) >> 6) & 0x3F) << 0x10) | ((arg1 & 0xF) << 0x18));
    M2C_FIELD(arg0, s64 *, 0x18) = 0x4E;
    if (arg4 == 0) {
        var_2 = ((s64) (func_002D1DD8(arg1, arg2, arg3, temp_7, temp_8, temp_9) << 0x30) >> 0x30) | ((arg5 & 0xF) << 0x18) | (0x8000 << 0x11);
    } else {
        var_2 = ((s64) (func_002D1DD8(arg1, arg2, arg3, temp_7, temp_8, temp_9) << 0x30) >> 0x30) | ((arg5 & 0xF) << 0x18);
    }
    M2C_FIELD(arg0, s64 *, 0x10) = var_2;
    M2C_FIELD(arg0, s64 *, 0x28) = 0x18;
    M2C_FIELD(arg0, s64 *, 0x20) = (s64) (((0x800 - ((s64) ((s64) (arg2 >> 1) << 0x30) >> 0x30)) * 0x10) | ((0x800 - ((s64) ((s64) (arg3 >> 1) << 0x30) >> 0x30)) << 0x24));
    M2C_FIELD(arg0, s64 *, 0x38) = 0x40;
    M2C_FIELD(arg0, s64 *, 0x30) = (s64) (((arg2 - 1) << 0x10) | ((arg3 - 1) << 0x30));
    M2C_FIELD(arg0, s64 *, 0x48) = 0x1A;
    M2C_FIELD(arg0, s64 *, 0x40) = (s64) (M2C_FIELD(arg0, s64 *, 0x40) | 1);
    M2C_FIELD(arg0, s64 *, 0x58) = 0x46;
    M2C_FIELD(arg0, s64 *, 0x50) = (s64) (M2C_FIELD(arg0, s64 *, 0x50) | 1);
    M2C_FIELD(arg0, s64 *, 0x68) = 0x45;
    if (arg1 & 2) {
        var_2_2 = M2C_FIELD(arg0, s64 *, 0x60) | 1;
    } else {
        var_2_2 = M2C_FIELD(arg0, s64 *, 0x60) & ~1;
    }
    M2C_FIELD(arg0, s64 *, 0x60) = var_2_2;
    M2C_FIELD(arg0, s64 *, 0x78) = 0x47;
    if (arg4 != 0) {
        var_2_3 = ((arg4 & 3) << 0x11) | 0x10000;
    } else {
        var_2_3 = 0x30000;
    }
    M2C_FIELD(arg0, s64 *, 0x70) = var_2_3;
    M2C_SYNC();
    return 8;
}
