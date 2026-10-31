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

void buffer_set_position__FP8buffer_ti(void *arg0, s32 arg1) {
    if (arg1 >= 0) {
        if (arg1 >= M2C_FIELD(arg0, s32 *, 4)) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            M2C_FIELD(arg0, s32 *, 0xC) = 1;
            return;
        }
        M2C_FIELD(arg0, s32 *, 8) = arg1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 1;
}
