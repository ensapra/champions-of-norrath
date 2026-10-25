/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G8, tried by autopilot */
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

s32 func_001B01D8();                                /* extern */

s32 func_001B0208(void *arg0, s32 arg1) {
    if (arg1 >= 0) {
        if (arg1 < M2C_FIELD(arg0, s32 *, 0x20)) {
            return M2C_FIELD(arg0, s32 *, 0x1C) + (arg1 << 6);
        }
        goto block_4;
    }
block_4:
    return func_001B01D8();
}
