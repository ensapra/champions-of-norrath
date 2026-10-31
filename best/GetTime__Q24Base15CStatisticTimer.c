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

s64 GetTime__7VITimer();                            /* extern */
M2C_UNK __floatdidf(s32);                           /* extern */
s32 __udivdi3(s64, M2C_UNK);                        /* extern */

void GetTime__Q24Base15CStatisticTimer(void *arg0) {
    s64 var_17;

    var_17 = M2C_FIELD(arg0, s64 *, 0);
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        var_17 += (GetTime__7VITimer() * 0x3E8) - M2C_FIELD(arg0, s64 *, 8);
    }
    __floatdidf(__udivdi3(var_17, 0xF4240));
}
