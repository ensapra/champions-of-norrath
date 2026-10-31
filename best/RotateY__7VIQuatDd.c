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

s64 cos(s32);                                       /* extern */
s32 dpmul(s32, s64);                                /* extern */
s64 sin(s32);                                       /* extern */

void RotateY__7VIQuatDd(void *arg0, s32 arg1) {
    s32 temp_2;
    s64 temp_2_2;

    M2C_FIELD(arg0, s64 *, 0) = 0;
    temp_2 = dpmul(arg1, 0xFF80 << 0x2E);
    temp_2_2 = sin(temp_2);
    M2C_FIELD(arg0, s64 *, 0x10) = 0;
    M2C_FIELD(arg0, s64 *, 8) = temp_2_2;
    M2C_FIELD(arg0, s64 *, 0x18) = cos(temp_2);
}
