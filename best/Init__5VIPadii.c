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

s32 scePadPortOpen(s32, s32, M2C_UNK *);            /* extern */
extern M2C_UNK D_011E9480;

s32 Init__5VIPadii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_2;
    s32 var_2;

    temp_2 = scePadPortOpen(arg1, arg2, &D_011E9480);
    var_2 = -1;
    if (temp_2 == 1) {
        M2C_FIELD(arg0, s32 *, 0x34) = temp_2;
        var_2 = 0;
        M2C_FIELD(arg0, s32 *, 0) = arg1;
        M2C_FIELD(arg0, s32 *, 4) = arg2;
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        M2C_FIELD(arg0, s64 *, 8) = 0;
        M2C_FIELD(arg0, s64 *, 0x10) = 0;
        M2C_FIELD(arg0, s64 *, 0x18) = 0;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s8 *, 0x28) = 0;
        M2C_FIELD(arg0, s8 *, 0x29) = 0;
        M2C_FIELD(arg0, s8 *, 0x2A) = 0;
        M2C_FIELD(arg0, s8 *, 0x2B) = 0;
        M2C_FIELD(arg0, s8 *, 0x2C) = 0;
        M2C_FIELD(arg0, s8 *, 0x2D) = 0;
    }
    return var_2;
}
