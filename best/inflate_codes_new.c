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

void inflate_codes_new(s8 arg0, s8 arg1, s32 arg2, s32 arg3, void *arg4) {
    void *temp_2;

    temp_2 = M2C_FIELD(arg4, void *(**)(s32, M2C_UNK, M2C_UNK), 0x20)(M2C_FIELD(arg4, s32 *, 0x28), 1, 0x1C);
    if (temp_2 != NULL) {
        M2C_FIELD(temp_2, s32 *, 0x18) = arg3;
        M2C_FIELD(temp_2, s8 *, 0x10) = arg0;
        M2C_FIELD(temp_2, s8 *, 0x11) = arg1;
        M2C_FIELD(temp_2, s32 *, 0x14) = arg2;
        M2C_FIELD(temp_2, s32 *, 0) = 0;
    }
}
