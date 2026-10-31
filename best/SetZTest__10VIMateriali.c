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

s32 SetZTest__10VIMateriali(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 var_2;

    temp_2 = M2C_FIELD(arg0, s32 *, 0xC);
    if (arg1 != 0) {
        var_2 = temp_2 | 1;
    } else {
        var_2 = temp_2 & ~1;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_2;
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    return 0;
}
