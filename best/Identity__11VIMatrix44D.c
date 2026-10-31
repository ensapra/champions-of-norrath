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

M2C_UNK Zero__11VIMatrix44D();                      /* extern */

void Identity__11VIMatrix44D(void *arg0) {
    s64 temp_2;

    Zero__11VIMatrix44D();
    temp_2 = 0xFFC0 << 0x2E;
    M2C_FIELD(arg0, s64 *, 0x78) = temp_2;
    M2C_FIELD(arg0, s64 *, 0) = temp_2;
    M2C_FIELD(arg0, s64 *, 0x28) = temp_2;
    M2C_FIELD(arg0, s64 *, 0x50) = temp_2;
}
