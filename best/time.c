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

s32 GetTime__7VITimer();                            /* extern */
s64 __divdi3(s32, M2C_UNK);                         /* extern */

void time(s64 *arg0) {
    s64 temp_2;

    temp_2 = (s64) (__divdi3(GetTime__7VITimer(), 0x3E8) << 0x20) >> 0x20;
    if (arg0 != NULL) {
        *arg0 = temp_2;
    }
}
